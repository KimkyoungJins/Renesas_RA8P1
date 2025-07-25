/***********************************************************************************************************************
 * File Name    : hal_entry.c
 * Description  : Contains data structures and functions used in hal_entry.c.
 **********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright (c) 2020 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
***********************************************************************************************************************/

#include "common_utils.h"

/*******************************************************************************************************************//**
 * @addtogroup gpt_input_capture_ep
 * @{
 **********************************************************************************************************************/

FSP_CPP_HEADER
void R_BSP_WarmStart(bsp_warm_start_event_t event);
FSP_CPP_FOOTER

/* Macro definition */
#define BUFF_SIZE       (30U)
#define EP_INFO         "\r\nThe EP demonstrates the functionality of GPT Input capture module."\
		                "\r\nGPT3 is used to generate periodic pulses of 500msec duration and"\
						"\r\nprovided as input to GPT Input capture (GPT5). GPT5 counts the event"\
						"\r\npulse received at its input. Based on the period and capture event,"\
                        "\r\nthe time period of pulse is calculated and displayed on J-Link RTT Viewer.\r\n"

/* Private function declaration */
static void gpt_deinit(timer_ctrl_t * p_ctrl);

/* Global variables */
volatile bool b_start_measurement   = false;
uint64_t g_capture_count            = RESET_VALUE;
uint32_t g_capture_overflow         = RESET_VALUE;

/*******************************************************************************************************************//**
 * main() is generated by the RA Configuration editor and is used to generate threads if an RTOS is used. This function
 * is called by main() when no RTOS is used.
 **********************************************************************************************************************/
void hal_entry(void)
{
    fsp_err_t err                   = FSP_SUCCESS;
    fsp_pack_version_t version      = {RESET_VALUE};
    char timer_buffer[BUFF_SIZE]    = {RESET_VALUE};
    timer_info_t info               = {.clock_frequency = RESET_VALUE, .count_direction = RESET_VALUE,\
    								   .period_counts =  RESET_VALUE};
    float pulse_time                = 0.0f;

    /* Version get API for FLEX pack information */
    R_FSP_VersionGet(&version);

    /* Banner information */
    APP_PRINT(BANNER_INFO, EP_VERSION, version.version_id_b.major, version.version_id_b.minor,\
              version.version_id_b.patch);
    APP_PRINT(EP_INFO);

    /* Open GPT instance as a periodic timer */
    err = R_GPT_Open(&g_timer_ctrl, &g_timer_cfg);
    /* Handle error */
    if (FSP_SUCCESS != err)
    {
        APP_ERR_PRINT("\r\n** R_GPT_Open API failed **\r\n");
        APP_ERR_TRAP(err);
    }

    /* Open GPT instance as input capture */
    err = R_GPT_Open(&g_input_capture_ctrl, &g_input_capture_cfg);
    /* Handle error */
    if (FSP_SUCCESS != err)
    {
        gpt_deinit(&g_timer_ctrl);
        APP_ERR_PRINT("\r\n** R_GPT_Open API failed **\r\n");
        APP_ERR_TRAP(err);
    }

    /* Enable GPT input capture */
    err = R_GPT_Enable(&g_input_capture_ctrl);
    /* Handle error */
    if (FSP_SUCCESS != err)
    {
        gpt_deinit(&g_timer_ctrl);
        gpt_deinit(&g_input_capture_ctrl);
        APP_ERR_PRINT("\r\n** R_GPT_Enable API failed **\r\n");
        APP_ERR_TRAP(err);
    }

    /* Start GPT timer in periodic mode */
    err = R_GPT_Start(&g_timer_ctrl);
    /* Handle error */
    if (FSP_SUCCESS != err)
    {
        gpt_deinit(&g_timer_ctrl);
        gpt_deinit(&g_input_capture_ctrl);
        APP_ERR_PRINT("\r\n** R_GPT_Start API failed **\r\n");
        APP_ERR_TRAP(err);
    }

    while(true)
    {
        /* Check for the flag from ISR callback */
        if (true == b_start_measurement)
        {
            /* Reset the flag */
            b_start_measurement = false;
            /* Get the period count and clock frequency */
            err =  R_GPT_InfoGet(&g_input_capture_ctrl, &info);
            /* Handle error */
            if (FSP_SUCCESS != err)
            {
                gpt_deinit(&g_timer_ctrl);
                gpt_deinit(&g_input_capture_ctrl);
                APP_ERR_PRINT("\r\n** R_GPT_InfoGet API failed **\r\n");
                APP_ERR_TRAP(err);
            }

            g_capture_count = (info.period_counts * g_capture_overflow) + g_capture_count;

            /* Calculate the pulse time */
            pulse_time =(float)(((float)g_capture_count)/((float)info.clock_frequency));

            /* Reset the variables */
            g_capture_count = RESET_VALUE;
            g_capture_overflow  = RESET_VALUE;

            sprintf (timer_buffer, "%.05f", pulse_time);
            APP_PRINT("\r\nPulse width measurement value(in second) - %s\r\n", timer_buffer);
        }
    }

#if BSP_TZ_SECURE_BUILD
    /* Enter non-secure code */
    R_BSP_NonSecureEnter();
#endif
}

/*******************************************************************************************************************//**
 * @brief       User defined callback
 * @param[in]   p_args
 * @retval      None
 **********************************************************************************************************************/
void input_capture_user_callback(timer_callback_args_t *p_args)
{
    /* Check for the event */
    switch(p_args->event)
    {
        case TIMER_EVENT_CAPTURE_A :
        {
            /* Capture the count in a variable */
            g_capture_count     = p_args->capture;
            /* Set start measurement */
            b_start_measurement = true;
            break;
        }
        case TIMER_EVENT_CYCLE_END:
        {
            /* An overflow occurred during capture */
            g_capture_overflow++;
            break;
        }
        default:
        {
            break;
        }
    }
}

/*******************************************************************************************************************//**
 * @brief       De-initializes GPT module
 * @param[in]   p_ctrl  control instances of GPT
 * @retval      None
 **********************************************************************************************************************/
static void gpt_deinit(timer_ctrl_t * p_ctrl)
{
    fsp_err_t err = FSP_SUCCESS;
    /* De-initialize GPT instances */
    err = R_GPT_Close(p_ctrl);
    if (FSP_SUCCESS != err)
    {
        APP_ERR_PRINT("\r\n** R_GPT_Close API failed **\r\n");
    }
}

/*******************************************************************************************************************//**
 * This function is called at various points during the startup process. This implementation uses the event that is
 * called right before main() to set up the pins.
 *
 * @param[in]  event    Where at in the start up process the code is currently at
 **********************************************************************************************************************/
void R_BSP_WarmStart(bsp_warm_start_event_t event)
{
    if (BSP_WARM_START_RESET == event)
    {
#if BSP_FEATURE_FLASH_LP_VERSION != 0

        /* Enable reading from data flash. */
        R_FACI_LP->DFLCTL = 1U;

        /* Would normally have to wait tDSTOP(6us) for data flash recovery. Placing the enable here, before clock and
         * C runtime initialization, should negate the need for a delay since the initialization will typically take
         * more than 6us. */
#endif
    }

    if (BSP_WARM_START_POST_C == event)
    {
        /* C runtime environment and system clocks are setup. */

        /* Configure pins. */
        R_IOPORT_Open (&IOPORT_CFG_CTRL, &IOPORT_CFG_NAME);

#if BSP_CFG_SDRAM_ENABLED

        /* Setup SDRAM and initialize it. Must configure pins first. */
        R_BSP_SdramInit(true);
#endif
    }
}

#if BSP_TZ_SECURE_BUILD

FSP_CPP_HEADER
BSP_CMSE_NONSECURE_ENTRY void template_nonsecure_callable ();

/* Trustzone Secure Projects require at least one nonsecure callable function in order to build
 * (Remove this if it is not required to build). */
BSP_CMSE_NONSECURE_ENTRY void template_nonsecure_callable ()
{

}

FSP_CPP_FOOTER

#endif

/*******************************************************************************************************************//**
 * @} (end addtogroup gpt_input_capture_ep)
 **********************************************************************************************************************/
