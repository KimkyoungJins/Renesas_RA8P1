/* generated HAL source file - do not edit */
#include "hal_data.h"

/* Macros to tie dynamic ELC links to adc_b_trigger_sync_elc option in adc_b_trigger_t. */
#define ADC_B_TRIGGER_ADC_B0        ADC_B_TRIGGER_SYNC_ELC
#define ADC_B_TRIGGER_ADC_B0_B      ADC_B_TRIGGER_SYNC_ELC
#define ADC_B_TRIGGER_ADC_B1        ADC_B_TRIGGER_SYNC_ELC
#define ADC_B_TRIGGER_ADC_B1_B      ADC_B_TRIGGER_SYNC_ELC
gpt_instance_ctrl_t led_brightness_timer_ctrl;
#if 0
const gpt_extended_pwm_cfg_t led_brightness_timer_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT3_COUNTER_UNDERFLOW)
    .trough_irq          = VECTOR_NUMBER_GPT3_COUNTER_UNDERFLOW,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      = (gpt_output_disable_t) ( GPT_OUTPUT_DISABLE_NONE),
    .adc_trigger         = (gpt_adc_trigger_t) ( GPT_ADC_TRIGGER_NONE),
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
};
#endif
const gpt_extended_cfg_t led_brightness_timer_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT3_CAPTURE_COMPARE_A)
    .capture_a_irq       = VECTOR_NUMBER_GPT3_CAPTURE_COMPARE_A,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT3_CAPTURE_COMPARE_B)
    .capture_b_irq       = VECTOR_NUMBER_GPT3_CAPTURE_COMPARE_B,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .compare_match_value =
          { /* CMP_A */(uint32_t) 0x0, /* CMP_B */(uint32_t) 0x0 },
          .compare_match_status = (0U << 1U) | 0U, .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE, .capture_filter_gtiocb =
                  GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &led_brightness_timer_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
#if 0
    .gtior_setting.gtior_b.gtioa  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.oadflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.oahld  = 0U,
    .gtior_setting.gtior_b.oae    = (uint32_t) false,
    .gtior_setting.gtior_b.oadf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfaen  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsa  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
    .gtior_setting.gtior_b.gtiob  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.obdflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.obhld  = 0U,
    .gtior_setting.gtior_b.obe    = (uint32_t) false,
    .gtior_setting.gtior_b.obdf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfben  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsb  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
#else
          .gtior_setting.gtior = 0U,
#endif
        };

const timer_cfg_t led_brightness_timer_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 0.0002 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0xc350,
  .duty_cycle_counts = 0x61a8, .source_div = (timer_source_div_t) 0, .channel = 3, .p_callback =
          led_brightness_timer_callback,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = (void*) &NULL,
#endif
  .p_extend = &led_brightness_timer_extend,
  .cycle_end_ipl = (8),
#if defined(VECTOR_NUMBER_GPT3_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GPT3_COUNTER_OVERFLOW,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t led_brightness_timer =
{ .p_ctrl = &led_brightness_timer_ctrl, .p_cfg = &led_brightness_timer_cfg, .p_api = &g_timer_on_gpt };
gpt_instance_ctrl_t led_pulse_timer_ctrl;
#if 0
const gpt_extended_pwm_cfg_t led_pulse_timer_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT5_COUNTER_UNDERFLOW)
    .trough_irq          = VECTOR_NUMBER_GPT5_COUNTER_UNDERFLOW,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      = (gpt_output_disable_t) ( GPT_OUTPUT_DISABLE_NONE),
    .adc_trigger         = (gpt_adc_trigger_t) ( GPT_ADC_TRIGGER_NONE),
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
};
#endif
const gpt_extended_cfg_t led_pulse_timer_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT5_CAPTURE_COMPARE_A)
    .capture_a_irq       = VECTOR_NUMBER_GPT5_CAPTURE_COMPARE_A,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT5_CAPTURE_COMPARE_B)
    .capture_b_irq       = VECTOR_NUMBER_GPT5_CAPTURE_COMPARE_B,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .compare_match_value =
          { /* CMP_A */(uint32_t) 0x0, /* CMP_B */(uint32_t) 0x0 },
          .compare_match_status = (0U << 1U) | 0U, .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE, .capture_filter_gtiocb =
                  GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &led_pulse_timer_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
#if 0
    .gtior_setting.gtior_b.gtioa  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.oadflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.oahld  = 0U,
    .gtior_setting.gtior_b.oae    = (uint32_t) false,
    .gtior_setting.gtior_b.oadf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfaen  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsa  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
    .gtior_setting.gtior_b.gtiob  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.obdflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.obhld  = 0U,
    .gtior_setting.gtior_b.obe    = (uint32_t) false,
    .gtior_setting.gtior_b.obdf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfben  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsb  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
#else
          .gtior_setting.gtior = 0U,
#endif
        };

const timer_cfg_t led_pulse_timer_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 0.000862068 seconds. Actual duty: 49.99976799974016%. */.period_counts = (uint32_t) 0x349dd,
  .duty_cycle_counts = 0x1a4ee, .source_div = (timer_source_div_t) 0, .channel = 5, .p_callback =
          led_pulse_timer_callback,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = (void*) &NULL,
#endif
  .p_extend = &led_pulse_timer_extend,
  .cycle_end_ipl = (8),
#if defined(VECTOR_NUMBER_GPT5_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GPT5_COUNTER_OVERFLOW,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t led_pulse_timer =
{ .p_ctrl = &led_pulse_timer_ctrl, .p_cfg = &led_pulse_timer_cfg, .p_api = &g_timer_on_gpt };
gpt_instance_ctrl_t g_blinker_blue_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_blinker_blue_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT1_COUNTER_UNDERFLOW)
    .trough_irq          = VECTOR_NUMBER_GPT1_COUNTER_UNDERFLOW,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      = (gpt_output_disable_t) ( GPT_OUTPUT_DISABLE_NONE),
    .adc_trigger         = (gpt_adc_trigger_t) ( GPT_ADC_TRIGGER_NONE),
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
};
#endif
const gpt_extended_cfg_t g_blinker_blue_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT1_CAPTURE_COMPARE_A)
    .capture_a_irq       = VECTOR_NUMBER_GPT1_CAPTURE_COMPARE_A,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT1_CAPTURE_COMPARE_B)
    .capture_b_irq       = VECTOR_NUMBER_GPT1_CAPTURE_COMPARE_B,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .compare_match_value =
          { /* CMP_A */(uint32_t) 0x0, /* CMP_B */(uint32_t) 0x0 },
          .compare_match_status = (0U << 1U) | 0U, .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE, .capture_filter_gtiocb =
                  GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_blinker_blue_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
#if 0
    .gtior_setting.gtior_b.gtioa  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.oadflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.oahld  = 0U,
    .gtior_setting.gtior_b.oae    = (uint32_t) false,
    .gtior_setting.gtior_b.oadf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfaen  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsa  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
    .gtior_setting.gtior_b.gtiob  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.obdflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.obhld  = 0U,
    .gtior_setting.gtior_b.obe    = (uint32_t) true,
    .gtior_setting.gtior_b.obdf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfben  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsb  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
#else
          .gtior_setting.gtior = 0U,
#endif
        };

const timer_cfg_t g_blinker_blue_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 1 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0xee6b280,
  .duty_cycle_counts = 0x7735940, .source_div = (timer_source_div_t) 0, .channel = 1, .p_callback =
          gpt_blinker_blue_callback,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = (void*) &NULL,
#endif
  .p_extend = &g_blinker_blue_extend,
  .cycle_end_ipl = (10),
#if defined(VECTOR_NUMBER_GPT1_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GPT1_COUNTER_OVERFLOW,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_blinker_blue =
{ .p_ctrl = &g_blinker_blue_ctrl, .p_cfg = &g_blinker_blue_cfg, .p_api = &g_timer_on_gpt };
gpt_instance_ctrl_t g_gpt_blue_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_gpt_blue_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT6_COUNTER_UNDERFLOW)
    .trough_irq          = VECTOR_NUMBER_GPT6_COUNTER_UNDERFLOW,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      = (gpt_output_disable_t) ( GPT_OUTPUT_DISABLE_NONE),
    .adc_trigger         = (gpt_adc_trigger_t) ( GPT_ADC_TRIGGER_NONE),
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
};
#endif
const gpt_extended_cfg_t g_gpt_blue_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT6_CAPTURE_COMPARE_A)
    .capture_a_irq       = VECTOR_NUMBER_GPT6_CAPTURE_COMPARE_A,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT6_CAPTURE_COMPARE_B)
    .capture_b_irq       = VECTOR_NUMBER_GPT6_CAPTURE_COMPARE_B,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .compare_match_value =
          { /* CMP_A */(uint32_t) 0x0, /* CMP_B */(uint32_t) 0x0 },
          .compare_match_status = (0U << 1U) | 0U, .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE, .capture_filter_gtiocb =
                  GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_gpt_blue_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
#if 0
    .gtior_setting.gtior_b.gtioa  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.oadflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.oahld  = 0U,
    .gtior_setting.gtior_b.oae    = (uint32_t) false,
    .gtior_setting.gtior_b.oadf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfaen  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsa  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
    .gtior_setting.gtior_b.gtiob  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.obdflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.obhld  = 0U,
    .gtior_setting.gtior_b.obe    = (uint32_t) true,
    .gtior_setting.gtior_b.obdf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfben  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsb  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
#else
          .gtior_setting.gtior = 0U,
#endif
        };

const timer_cfg_t g_gpt_blue_cfg =
{ .mode = TIMER_MODE_PWM,
/* Actual period: 4e-7 seconds. Actual duty: 10%. */.period_counts = (uint32_t) 0x64,
  .duty_cycle_counts = 0xa, .source_div = (timer_source_div_t) 0, .channel = 6, .p_callback = NULL,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = (void*) &NULL,
#endif
  .p_extend = &g_gpt_blue_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT6_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GPT6_COUNTER_OVERFLOW,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_gpt_blue =
{ .p_ctrl = &g_gpt_blue_ctrl, .p_cfg = &g_gpt_blue_cfg, .p_api = &g_timer_on_gpt };
#define RA_NOT_DEFINED (0)

#if (1) // Define Virtual Channel 0 if it's assigned to a scan group.
const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_0_cfg =
{ .channel_id = ADC_B_VIRTUAL_CHANNEL_0,

  .channel_cfg_bits.group = (1),
  .channel_cfg_bits.channel = ADC_CHANNEL_TEMPERATURE,
  .channel_cfg_bits.differential = 0,
  .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

  .channel_control_a_bits.digital_filter_id = 0x0,
  .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
  .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

  .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
  .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_16,
  .channel_control_b_bits.compare_match_enable = false,

  .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
  .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
  .channel_control_c_bits.data_is_unsigned = true, };
#endif

#if (0) // Define Virtual Channel 1 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_1_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_1,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 2 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_2_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_2,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 3 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_3_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_3,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 4 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_4_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_4,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 5 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_5_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_5,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 6 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_6_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_6,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 7 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_7_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_7,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 8 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_8_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_8,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 9 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_9_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_9,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 10 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_10_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_10,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 11 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_11_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_11,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 12 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_12_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_12,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 13 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_13_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_13,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 14 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_14_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_14,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 15 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_15_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_15,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 16 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_16_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_16,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 17 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_17_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_17,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 18 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_18_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_18,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 19 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_19_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_19,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 20 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_20_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_20,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 21 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_21_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_21,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 22 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_22_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_22,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 23 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_23_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_23,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 24 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_24_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_24,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 25 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_25_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_25,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 26 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_26_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_26,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 27 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_27_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_27,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 28 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_28_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_28,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 29 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_29_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_29,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 30 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_30_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_30,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 31 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_31_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_31,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if (0) // Define Virtual Channel 32 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_32_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_32,

                                   .channel_cfg_bits.group           = (0),
                                   .channel_cfg_bits.channel         = ADC_CHANNEL_0,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = ADC_B_SAMPLING_STATE_TABLE_0,

                                   .channel_control_a_bits.digital_filter_id = 0x0,
                                   .channel_control_a_bits.offset_table_id = ADC_B_USER_OFFSET_TABLE_SELECTION_DISABLED,
                                   .channel_control_a_bits.gain_table_id = ADC_B_USER_GAIN_TABLE_SELECTION_DISABLED,

                                   .channel_control_b_bits.addition_average_mode = (ADC_B_ADD_AVERAGE_OFF),
                                   .channel_control_b_bits.addition_average_count = ADC_B_ADD_AVERAGE_1,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = ADC_B_LIMIT_CLIP_TABLE_SELECTION_NONE,
                                   .channel_control_c_bits.channel_data_format = (ADC_B_DATA_FORMAT_12_BIT),
                                   .channel_control_c_bits.data_is_unsigned = true,
                               };
                               #endif

#if RA_NOT_DEFINED // Define Virtual Channel 33 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_33_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_33,

                                   .channel_cfg_bits.group           = RA_NOT_DEFINED,
                                   .channel_cfg_bits.channel         = RA_NOT_DEFINED,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = RA_NOT_DEFINED,

                                   .channel_control_a_bits.digital_filter_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.offset_table_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.gain_table_id = RA_NOT_DEFINED,

                                   .channel_control_b_bits.addition_average_mode = RA_NOT_DEFINED,
                                   .channel_control_b_bits.addition_average_count = RA_NOT_DEFINED,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = RA_NOT_DEFINED,
                                   .channel_control_c_bits.channel_data_format = RA_NOT_DEFINED,
                                   .channel_control_c_bits.data_is_unsigned = false,
                               };
                               #endif

#if RA_NOT_DEFINED // Define Virtual Channel 34 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_34_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_34,

                                   .channel_cfg_bits.group           = RA_NOT_DEFINED,
                                   .channel_cfg_bits.channel         = RA_NOT_DEFINED,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = RA_NOT_DEFINED,

                                   .channel_control_a_bits.digital_filter_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.offset_table_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.gain_table_id = RA_NOT_DEFINED,

                                   .channel_control_b_bits.addition_average_mode = RA_NOT_DEFINED,
                                   .channel_control_b_bits.addition_average_count = RA_NOT_DEFINED,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = RA_NOT_DEFINED,
                                   .channel_control_c_bits.channel_data_format = RA_NOT_DEFINED,
                                   .channel_control_c_bits.data_is_unsigned = false,
                               };
                               #endif

#if RA_NOT_DEFINED // Define Virtual Channel 35 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_35_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_35,

                                   .channel_cfg_bits.group           = RA_NOT_DEFINED,
                                   .channel_cfg_bits.channel         = RA_NOT_DEFINED,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = RA_NOT_DEFINED,

                                   .channel_control_a_bits.digital_filter_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.offset_table_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.gain_table_id = RA_NOT_DEFINED,

                                   .channel_control_b_bits.addition_average_mode = RA_NOT_DEFINED,
                                   .channel_control_b_bits.addition_average_count = RA_NOT_DEFINED,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = RA_NOT_DEFINED,
                                   .channel_control_c_bits.channel_data_format = RA_NOT_DEFINED,
                                   .channel_control_c_bits.data_is_unsigned = false,
                               };
                               #endif

#if RA_NOT_DEFINED // Define Virtual Channel 36 if it's assigned to a scan group.
                               const adc_b_virtual_channel_cfg_t g_adc_virtual_channel_36_cfg =
                               {
                                   .channel_id             = ADC_B_VIRTUAL_CHANNEL_36,

                                   .channel_cfg_bits.group           = RA_NOT_DEFINED,
                                   .channel_cfg_bits.channel         = RA_NOT_DEFINED,
                                   .channel_cfg_bits.differential    = 0,
                                   .channel_cfg_bits.sample_table_id = RA_NOT_DEFINED,

                                   .channel_control_a_bits.digital_filter_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.offset_table_id = RA_NOT_DEFINED,
                                   .channel_control_a_bits.gain_table_id = RA_NOT_DEFINED,

                                   .channel_control_b_bits.addition_average_mode = RA_NOT_DEFINED,
                                   .channel_control_b_bits.addition_average_count = RA_NOT_DEFINED,
                                   .channel_control_b_bits.compare_match_enable = false,

                                   .channel_control_c_bits.limiter_clip_table_id = RA_NOT_DEFINED,
                                   .channel_control_c_bits.channel_data_format = RA_NOT_DEFINED,
                                   .channel_control_c_bits.data_is_unsigned = false,
                               };
                               #endif
#if (((1) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||(RA_NOT_DEFINED == 1)||(RA_NOT_DEFINED == 1)||(RA_NOT_DEFINED == 1)||(RA_NOT_DEFINED == 1))
const adc_b_virtual_channel_cfg_t *const g_adc_group_0_virtual_channels[] =
{
#if ((1) == 1)
  &g_adc_virtual_channel_0_cfg,
#endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

#if ((0) == 1)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

#if (RA_NOT_DEFINED == 1)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

#if (RA_NOT_DEFINED == 1)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

#if (RA_NOT_DEFINED == 1)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

#if (RA_NOT_DEFINED == 1)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
        };
#endif
#if (((1) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||(RA_NOT_DEFINED == 2)||(RA_NOT_DEFINED == 2)||(RA_NOT_DEFINED == 2)||(RA_NOT_DEFINED == 2))
const adc_b_virtual_channel_cfg_t *const g_adc_group_1_virtual_channels[] = {
                                  #if ((1) == 2)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 2)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 2)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 2)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 2)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 2)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif
#if (((1) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||(RA_NOT_DEFINED == 3)||(RA_NOT_DEFINED == 3)||(RA_NOT_DEFINED == 3)||(RA_NOT_DEFINED == 3))
const adc_b_virtual_channel_cfg_t *const g_adc_group_2_virtual_channels[] = {
                                  #if ((1) == 3)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 3)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 3)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 3)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 3)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 3)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif
#if (((1) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||(RA_NOT_DEFINED == 4)||(RA_NOT_DEFINED == 4)||(RA_NOT_DEFINED == 4)||(RA_NOT_DEFINED == 4))
const adc_b_virtual_channel_cfg_t *const g_adc_group_3_virtual_channels[] = {
                                  #if ((1) == 4)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 4)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 4)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 4)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 4)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 4)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif
#if (((1) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||(RA_NOT_DEFINED == 5)||(RA_NOT_DEFINED == 5)||(RA_NOT_DEFINED == 5)||(RA_NOT_DEFINED == 5))
const adc_b_virtual_channel_cfg_t *const g_adc_group_4_virtual_channels[] = {
                                  #if ((1) == 5)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 5)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 5)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 5)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 5)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 5)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif
#if (((1) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||(RA_NOT_DEFINED == 6)||(RA_NOT_DEFINED == 6)||(RA_NOT_DEFINED == 6)||(RA_NOT_DEFINED == 6))
const adc_b_virtual_channel_cfg_t *const g_adc_group_5_virtual_channels[] = {
                                  #if ((1) == 6)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 6)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 6)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 6)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 6)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 6)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif
#if (((1) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||(RA_NOT_DEFINED == 7)||(RA_NOT_DEFINED == 7)||(RA_NOT_DEFINED == 7)||(RA_NOT_DEFINED == 7))
const adc_b_virtual_channel_cfg_t *const g_adc_group_6_virtual_channels[] = {
                                  #if ((1) == 7)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 7)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 7)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 7)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 7)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 7)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif
#if (((1) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||(RA_NOT_DEFINED == 8)||(RA_NOT_DEFINED == 8)||(RA_NOT_DEFINED == 8)||(RA_NOT_DEFINED == 8))
const adc_b_virtual_channel_cfg_t *const g_adc_group_7_virtual_channels[] = {
                                  #if ((1) == 8)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 8)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 8)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 8)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 8)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 8)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif
#if (((1) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||(RA_NOT_DEFINED == 9)||(RA_NOT_DEFINED == 9)||(RA_NOT_DEFINED == 9)||(RA_NOT_DEFINED == 9))
const adc_b_virtual_channel_cfg_t *const g_adc_group_8_virtual_channels[] = {
                                  #if ((1) == 9)
                                      &g_adc_virtual_channel_0_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_1_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_2_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_3_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_4_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_5_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_6_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_7_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_8_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_9_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_10_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_11_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_12_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_13_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_14_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_15_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_16_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_17_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_18_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_19_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_20_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_21_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_22_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_23_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_24_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_25_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_26_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_27_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_28_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_29_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_30_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_31_cfg,
                                  #endif

                                  #if ((0) == 9)
                                      &g_adc_virtual_channel_32_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 9)
                                      &g_adc_virtual_channel_33_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 9)
                                      &g_adc_virtual_channel_34_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 9)
                                      &g_adc_virtual_channel_35_cfg,
                                  #endif

                                  #if (RA_NOT_DEFINED == 9)
                                      &g_adc_virtual_channel_36_cfg,
                                  #endif
                                  };
                                  #endif

#if (1) // Define Scan Group 0 if it's enabled
const adc_b_group_cfg_t g_adc_group_0_cfg =
{ .scan_group_id = ADC_GROUP_ID_0,
  .converter_selection = (adc_b_unit_id_t) (0),
  .scan_group_enable = (1),
  .scan_end_interrupt_enable = (1),
  .external_trigger_enable_mask = (ADC_B_EXTERNAL_TRIGGER_NONE),
  .elc_trigger_enable_mask = (elc_peripheral_t) (0x00),
  .gpt_trigger_enable_mask = (ADC_B_GPT_TRIGGER_NONE),

  .self_diagnosis_mask = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

  .limit_clip_interrupt_enable = (1),
  .virtual_channel_count = 0
          + (((1) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1)
                  + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1)
                  + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1)
                  + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1)
                  + ((0) == 1) + ((0) == 1) + ((0) == 1) + ((0) == 1) + (RA_NOT_DEFINED == 1) + (RA_NOT_DEFINED == 1)
                  + (RA_NOT_DEFINED == 1) + (RA_NOT_DEFINED == 1)),
#if (((1) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||((0) == 1)||(RA_NOT_DEFINED == 1)||(RA_NOT_DEFINED == 1)||(RA_NOT_DEFINED == 1)||(RA_NOT_DEFINED == 1))

  .p_virtual_channels = (adc_b_virtual_channel_cfg_t**) g_adc_group_0_virtual_channels,
#else
                         .p_virtual_channels = NULL,
                         #endif
        };
#endif

#if (0) // Define Scan Group 1 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_1_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_1,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+((0) == 2)+(RA_NOT_DEFINED == 2)+(RA_NOT_DEFINED == 2)+(RA_NOT_DEFINED == 2)+(RA_NOT_DEFINED == 2)),
#if (((1) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||((0) == 2)||(RA_NOT_DEFINED == 2)||(RA_NOT_DEFINED == 2)||(RA_NOT_DEFINED == 2)||(RA_NOT_DEFINED == 2))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_1_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif

#if (0) // Define Scan Group 2 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_2_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_2,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+((0) == 3)+(RA_NOT_DEFINED == 3)+(RA_NOT_DEFINED == 3)+(RA_NOT_DEFINED == 3)+(RA_NOT_DEFINED == 3)),
#if (((1) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||((0) == 3)||(RA_NOT_DEFINED == 3)||(RA_NOT_DEFINED == 3)||(RA_NOT_DEFINED == 3)||(RA_NOT_DEFINED == 3))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_2_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif

#if (0) // Define Scan Group 3 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_3_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_3,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+((0) == 4)+(RA_NOT_DEFINED == 4)+(RA_NOT_DEFINED == 4)+(RA_NOT_DEFINED == 4)+(RA_NOT_DEFINED == 4)),
#if (((1) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||((0) == 4)||(RA_NOT_DEFINED == 4)||(RA_NOT_DEFINED == 4)||(RA_NOT_DEFINED == 4)||(RA_NOT_DEFINED == 4))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_3_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif

#if (0) // Define Scan Group 4 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_4_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_4,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+((0) == 5)+(RA_NOT_DEFINED == 5)+(RA_NOT_DEFINED == 5)+(RA_NOT_DEFINED == 5)+(RA_NOT_DEFINED == 5)),
#if (((1) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||((0) == 5)||(RA_NOT_DEFINED == 5)||(RA_NOT_DEFINED == 5)||(RA_NOT_DEFINED == 5)||(RA_NOT_DEFINED == 5))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_4_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif

#if (0) // Define Scan Group 5 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_5_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_5,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+((0) == 6)+(RA_NOT_DEFINED == 6)+(RA_NOT_DEFINED == 6)+(RA_NOT_DEFINED == 6)+(RA_NOT_DEFINED == 6)),
#if (((1) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||((0) == 6)||(RA_NOT_DEFINED == 6)||(RA_NOT_DEFINED == 6)||(RA_NOT_DEFINED == 6)||(RA_NOT_DEFINED == 6))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_5_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif

#if (0) // Define Scan Group 6 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_6_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_6,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+((0) == 7)+(RA_NOT_DEFINED == 7)+(RA_NOT_DEFINED == 7)+(RA_NOT_DEFINED == 7)+(RA_NOT_DEFINED == 7)),
#if (((1) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||((0) == 7)||(RA_NOT_DEFINED == 7)||(RA_NOT_DEFINED == 7)||(RA_NOT_DEFINED == 7)||(RA_NOT_DEFINED == 7))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_6_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif

#if (0) // Define Scan Group 7 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_7_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_7,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+((0) == 8)+(RA_NOT_DEFINED == 8)+(RA_NOT_DEFINED == 8)+(RA_NOT_DEFINED == 8)+(RA_NOT_DEFINED == 8)),
#if (((1) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||((0) == 8)||(RA_NOT_DEFINED == 8)||(RA_NOT_DEFINED == 8)||(RA_NOT_DEFINED == 8)||(RA_NOT_DEFINED == 8))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_7_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif

#if (0) // Define Scan Group 8 if it's enabled
                     const adc_b_group_cfg_t g_adc_group_8_cfg =
                     {
                         .scan_group_id                   = ADC_GROUP_ID_8,
                         .converter_selection             = (adc_b_unit_id_t)(0),
                         .scan_group_enable               = (0),
                         .scan_end_interrupt_enable       = (1),
                         .external_trigger_enable_mask    = ( ADC_B_EXTERNAL_TRIGGER_NONE),
                         .elc_trigger_enable_mask         = (elc_peripheral_t)( 0x00),
                         .gpt_trigger_enable_mask         = ( ADC_B_GPT_TRIGGER_NONE),

                         .self_diagnosis_mask             = (ADC_B_SELF_DIAGNOSIS_DISABLED << R_ADC_B0_ADSGDCR0_DIAGVAL_Pos),

                         .limit_clip_interrupt_enable     = (1),
                         .virtual_channel_count           = 0 + (
                         ((1) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+((0) == 9)+(RA_NOT_DEFINED == 9)+(RA_NOT_DEFINED == 9)+(RA_NOT_DEFINED == 9)+(RA_NOT_DEFINED == 9)),
#if (((1) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||((0) == 9)||(RA_NOT_DEFINED == 9)||(RA_NOT_DEFINED == 9)||(RA_NOT_DEFINED == 9)||(RA_NOT_DEFINED == 9))

                         .p_virtual_channels = (adc_b_virtual_channel_cfg_t**)g_adc_group_8_virtual_channels,
                         #else
                         .p_virtual_channels = NULL,
                         #endif
                     };
                     #endif
#if ((1)||(0)||(0)||(0)||(0)||(0)||(0)||(0)||(0))
const adc_b_group_cfg_t *const g_adc_scan_cfg_groups[] =
{
#if (0 != (1))
  &g_adc_group_0_cfg,
#endif

#if (0 != (0))
                           &g_adc_group_1_cfg,
                           #endif

#if (0 != (0))
                           &g_adc_group_2_cfg,
                           #endif

#if (0 != (0))
                           &g_adc_group_3_cfg,
                           #endif

#if (0 != (0))
                           &g_adc_group_4_cfg,
                           #endif

#if (0 != (0))
                           &g_adc_group_5_cfg,
                           #endif

#if (0 != (0))
                           &g_adc_group_6_cfg,
                           #endif

#if (0 != (0))
                           &g_adc_group_7_cfg,
                           #endif

#if (0 != (0))
                           &g_adc_group_8_cfg,
                           #endif
        };
#endif

const adc_b_scan_cfg_t g_adc_scan_cfg =
{ .group_count = (0 + (0 != (1)) + (0 != (0)) + (0 != (0)) + (0 != (0)) + (0 != (0)) + (0 != (0)) + (0 != (0))
        + (0 != (0)) + (0 != (0))),
#if ((0 != (1))||(0 != (0))||(0 != (0))||(0 != (0))||(0 != (0))||(0 != (0))||(0 != (0))||(0 != (0))||(0 != (0)))
  .p_adc_groups = (adc_b_group_cfg_t**) g_adc_scan_cfg_groups,
#else
                       .p_adc_groups = NULL,
                       #endif
        };

const adc_b_isr_cfg_t g_adc_isr_cfg =
{ .calibration_end_ipl_adc_0 = (12),
  .calibration_end_ipl_adc_1 = (12),
  .limit_clip_ipl = (12),
  .conversion_error_ipl_adc_0 = (12),
  .conversion_error_ipl_adc_1 = (12),
  .overflow_error_ipl_adc_0 = (12),
  .overflow_error_ipl_adc_1 = (12),

  .scan_end_ipl_group_0 = (12),
  .scan_end_ipl_group_1 = (12),
  .scan_end_ipl_group_2 = (12),
  .scan_end_ipl_group_3 = (12),
  .scan_end_ipl_group_4 = (12),
  .scan_end_ipl_group_5 = (BSP_IRQ_DISABLED),
  .scan_end_ipl_group_6 = (BSP_IRQ_DISABLED),
  .scan_end_ipl_group_7 = (BSP_IRQ_DISABLED),
  .scan_end_ipl_group_8 = (BSP_IRQ_DISABLED),
  .scan_end_ipl_group_5678 = (BSP_IRQ_DISABLED),
  .fifo_overflow_ipl = (12),
  .fifo_read_ipl_group_0 = (12),
  .fifo_read_ipl_group_1 = (12),
  .fifo_read_ipl_group_2 = (12),
  .fifo_read_ipl_group_3 = (12),
  .fifo_read_ipl_group_4 = (12),
  .fifo_read_ipl_group_5 = (BSP_IRQ_DISABLED),
  .fifo_read_ipl_group_6 = (BSP_IRQ_DISABLED),
  .fifo_read_ipl_group_7 = (BSP_IRQ_DISABLED),
  .fifo_read_ipl_group_8 = (BSP_IRQ_DISABLED),
  .fifo_read_ipl_group_5678 = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC_CALEND0) && ( (12) != BSP_IRQ_DISABLED )
    .calibration_end_irq_adc_0 = VECTOR_NUMBER_ADC_CALEND0,
#else
  .calibration_end_irq_adc_0 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_CALEND1) && ( (12) != BSP_IRQ_DISABLED )
    .calibration_end_irq_adc_1 = VECTOR_NUMBER_ADC_CALEND1,
#else
  .calibration_end_irq_adc_1 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_LIMCLPI) && ( (12) != BSP_IRQ_DISABLED )
    .limit_clip_irq = VECTOR_NUMBER_ADC_LIMCLPI,
#else
  .limit_clip_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ERR0) && ( (12) != BSP_IRQ_DISABLED )
    .conversion_error_irq_adc_0 = VECTOR_NUMBER_ADC_ERR0,
#else
  .conversion_error_irq_adc_0 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ERR1) && ( (12) != BSP_IRQ_DISABLED )
    .conversion_error_irq_adc_1 = VECTOR_NUMBER_ADC_ERR1,
#else
  .conversion_error_irq_adc_1 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_RESOVF0) && ( (12) != BSP_IRQ_DISABLED )
    .overflow_error_irq_adc_0 = VECTOR_NUMBER_ADC_RESOVF0,
#else
  .overflow_error_irq_adc_0 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_RESOVF1) && ( (12) != BSP_IRQ_DISABLED )
    .overflow_error_irq_adc_1 = VECTOR_NUMBER_ADC_RESOVF1,
#else
  .overflow_error_irq_adc_1 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI0) && ( (12) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_0 = VECTOR_NUMBER_ADC_ADI0,
#else
  .scan_end_irq_group_0 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI1) && ( (12) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_1 = VECTOR_NUMBER_ADC_ADI1,
#else
  .scan_end_irq_group_1 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI2) && ( (12) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_2 = VECTOR_NUMBER_ADC_ADI2,
#else
  .scan_end_irq_group_2 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI3) && ( (12) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_3 = VECTOR_NUMBER_ADC_ADI3,
#else
  .scan_end_irq_group_3 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI4) && ( (12) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_4 = VECTOR_NUMBER_ADC_ADI4,
#else
  .scan_end_irq_group_4 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI5) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_5 = VECTOR_NUMBER_ADC_ADI5,
#else
  .scan_end_irq_group_5 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI6) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_6 = VECTOR_NUMBER_ADC_ADI6,
#else
  .scan_end_irq_group_6 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI7) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_7 = VECTOR_NUMBER_ADC_ADI7,
#else
  .scan_end_irq_group_7 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI8) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_8 = VECTOR_NUMBER_ADC_ADI8,
#else
  .scan_end_irq_group_8 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_ADI5678) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .scan_end_irq_group_5678 = VECTOR_NUMBER_ADC_ADI5678,
#else
  .scan_end_irq_group_5678 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOOVF) && ( (12) != BSP_IRQ_DISABLED )
    .fifo_overflow_irq = VECTOR_NUMBER_ADC_FIFOOVF,
#else
  .fifo_overflow_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ0) && ( (12) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_0 = VECTOR_NUMBER_ADC_FIFOREQ0,
#else
  .fifo_read_irq_group_0 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ1) && ( (12) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_1 = VECTOR_NUMBER_ADC_FIFOREQ1,
#else
  .fifo_read_irq_group_1 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ2) && ( (12) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_2 = VECTOR_NUMBER_ADC_FIFOREQ2,
#else
  .fifo_read_irq_group_2 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ3) && ( (12) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_3 = VECTOR_NUMBER_ADC_FIFOREQ3,
#else
  .fifo_read_irq_group_3 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ4) && ( (12) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_4 = VECTOR_NUMBER_ADC_FIFOREQ4,
#else
  .fifo_read_irq_group_4 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ5) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_5 = VECTOR_NUMBER_ADC_FIFOREQ5,
#else
  .fifo_read_irq_group_5 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ6) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_6 = VECTOR_NUMBER_ADC_FIFOREQ6,
#else
  .fifo_read_irq_group_6 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ7) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_7 = VECTOR_NUMBER_ADC_FIFOREQ7,
#else
  .fifo_read_irq_group_7 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ8) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_8 = VECTOR_NUMBER_ADC_FIFOREQ8,
#else
  .fifo_read_irq_group_8 = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_ADC_FIFOREQ5678) && ( (BSP_IRQ_DISABLED) != BSP_IRQ_DISABLED )
    .fifo_read_irq_group_5678 = VECTOR_NUMBER_ADC_FIFOREQ5678,
#else
  .fifo_read_irq_group_5678 = FSP_INVALID_VECTOR,
#endif
        };

const adc_b_extended_cfg_t g_adc_cfg_extend =
        { .clock_control_data = ((ADC_B_CLOCK_SOURCE_ADC << R_ADC_B0_ADCLKCR_CLKSEL_Pos)
                | (ADC_B_CLOCK_DIV_2 << R_ADC_B0_ADCLKCR_DIVR_Pos)),
          .sync_operation_control = (((1) << R_ADC_B0_ADSYCR_ADSYDIS0_Pos) | ((1) << R_ADC_B0_ADSYCR_ADSYDIS1_Pos)
                  | (100 << R_ADC_B0_ADSYCR_ADSYCYC_Pos)),
          .adc_b_converter_mode[0] =
          { .mode = (ADC_B_CONVERTER_MODE_CONTINUOUS_SCAN), .method = (ADC_B_CONVERSION_METHOD_SAR) },
          .adc_b_converter_mode[1] =
          { .mode = (ADC_B_CONVERTER_MODE_CONTINUOUS_SCAN), .method = (ADC_B_CONVERSION_METHOD_SAR) },
          .converter_selection_0 = (((0) << R_ADC_B0_ADSGCR0_SGADS0_Pos) | ((0) << R_ADC_B0_ADSGCR0_SGADS1_Pos)
                  | ((0) << R_ADC_B0_ADSGCR0_SGADS2_Pos) | ((0) << R_ADC_B0_ADSGCR0_SGADS3_Pos)),
          .converter_selection_1 = (((0) << R_ADC_B0_ADSGCR1_SGADS4_Pos) | ((0) << R_ADC_B0_ADSGCR1_SGADS5_Pos)
                  | ((0) << R_ADC_B0_ADSGCR1_SGADS6_Pos) | ((0) << R_ADC_B0_ADSGCR1_SGADS7_Pos)),
          .converter_selection_2 = ((0) << R_ADC_B0_ADSGCR2_SGADS8_Pos),

          .fifo_enable_mask = (((0) << R_ADC_B0_ADFIFOCR_FIFOEN0_Pos) | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN1_Pos)
                  | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN2_Pos) | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN3_Pos)
                  | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN4_Pos) | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN5_Pos)
                  | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN6_Pos) | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN7_Pos)
                  | ((0) << R_ADC_B0_ADFIFOCR_FIFOEN8_Pos)),
          .fifo_interrupt_enable_mask = (((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE0_Pos)
                  | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE1_Pos) | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE2_Pos)
                  | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE3_Pos) | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE4_Pos)
                  | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE5_Pos) | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE6_Pos)
                  | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE7_Pos) | ((0) << R_ADC_B0_ADFIFOINTCR_FIFOIE8_Pos)),
          .fifo_interrupt_level0 = ((0 << R_ADC_B0_ADFIFOINTLR0_FIFOILV0_Pos)
                  | (0 << R_ADC_B0_ADFIFOINTLR0_FIFOILV1_Pos)),
          .fifo_interrupt_level1 = ((0 << R_ADC_B0_ADFIFOINTLR1_FIFOILV2_Pos)
                  | (0 << R_ADC_B0_ADFIFOINTLR1_FIFOILV3_Pos)),
          .fifo_interrupt_level2 = ((0 << R_ADC_B0_ADFIFOINTLR2_FIFOILV4_Pos)
                  | (0 << R_ADC_B0_ADFIFOINTLR2_FIFOILV5_Pos)),
          .fifo_interrupt_level3 = ((0 << R_ADC_B0_ADFIFOINTLR3_FIFOILV6_Pos)
                  | (0 << R_ADC_B0_ADFIFOINTLR3_FIFOILV7_Pos)),
          .fifo_interrupt_level4 = (0 << R_ADC_B0_ADFIFOINTLR4_FIFOILV8_Pos),

          .start_trigger_delay_0 = ((0 << R_ADC_B0_ADTRGDLR0_TRGDLY0_Pos) | (0 << R_ADC_B0_ADTRGDLR0_TRGDLY1_Pos)),
          .start_trigger_delay_1 = ((0 << R_ADC_B0_ADTRGDLR1_TRGDLY2_Pos) | (0 << R_ADC_B0_ADTRGDLR1_TRGDLY3_Pos)), .start_trigger_delay_2 =
                  ((0 << R_ADC_B0_ADTRGDLR2_TRGDLY4_Pos) | (0 << R_ADC_B0_ADTRGDLR2_TRGDLY5_Pos)),
          .start_trigger_delay_3 = ((0 << R_ADC_B0_ADTRGDLR3_TRGDLY6_Pos) | (0 << R_ADC_B0_ADTRGDLR3_TRGDLY7_Pos)), .start_trigger_delay_4 =
                  ((0 << R_ADC_B0_ADTRGDLR4_TRGDLY8_Pos)),
          .calibration_adc_state = ((95 << R_ADC_B0_ADCALSTCR_CALADSST_Pos) | (5 << R_ADC_B0_ADCALSTCR_CALADCST_Pos)), .calibration_sample_and_hold =
                  ((95 << R_ADC_B0_ADCALSHCR_CALSHSST_Pos) | (5 << R_ADC_B0_ADCALSHCR_CALSHHST_Pos)),
          .p_isr_cfg = &g_adc_isr_cfg, .sampling_state_tables =
          { ((95 << R_ADC_B0_ADSSTR0_SST0_Pos) | (95 << R_ADC_B0_ADSSTR0_SST1_Pos)), ((95 << R_ADC_B0_ADSSTR1_SST2_Pos)
                    | (95 << R_ADC_B0_ADSSTR1_SST3_Pos)),
            ((95 << R_ADC_B0_ADSSTR2_SST4_Pos) | (95 << R_ADC_B0_ADSSTR2_SST5_Pos)), ((95 << R_ADC_B0_ADSSTR3_SST6_Pos)
                    | (95 << R_ADC_B0_ADSSTR3_SST7_Pos)),
            ((95 << R_ADC_B0_ADSSTR4_SST8_Pos) | (95 << R_ADC_B0_ADSSTR4_SST9_Pos)), ((95 << R_ADC_B0_ADSSTR5_SST10_Pos)
                    | (95 << R_ADC_B0_ADSSTR5_SST11_Pos)),
            ((95 << R_ADC_B0_ADSSTR6_SST12_Pos) | (95 << R_ADC_B0_ADSSTR6_SST13_Pos)), ((95
                    << R_ADC_B0_ADSSTR7_SST14_Pos) | (95 << R_ADC_B0_ADSSTR7_SST15_Pos)), },
          .sample_and_hold_enable_mask = (ADC_B_SAMPLE_AND_HOLD_MASK_NONE), .sample_and_hold_config_012 = ((95
                  << R_ADC_B0_ADSHSTR1_SHSST_Pos) | (5 << R_ADC_B0_ADSHSTR0_SHHST_Pos)),
          .sample_and_hold_config_456 = ((95 << R_ADC_B0_ADSHSTR1_SHSST_Pos) | (5 << R_ADC_B0_ADSHSTR1_SHHST_Pos)), .conversion_state =
                  ((5 << R_ADC_B0_ADCNVSTR_CST0_Pos) | (5 << R_ADC_B0_ADCNVSTR_CST1_Pos)),
          .user_offset_tables =
          { 0, 0, 0, 0, 0, 0, 0, 0, },
          .user_gain_tables =
          { ((1U << R_ADC_B0_ADUGTR0_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR0_UGAINF_Msk + 1))), ((1U
                  << R_ADC_B0_ADUGTR1_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR1_UGAINF_Msk + 1))),
            ((1U << R_ADC_B0_ADUGTR2_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR2_UGAINF_Msk + 1))), ((1U
                    << R_ADC_B0_ADUGTR3_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR3_UGAINF_Msk + 1))),
            ((1U << R_ADC_B0_ADUGTR4_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR4_UGAINF_Msk + 1))), ((1U
                    << R_ADC_B0_ADUGTR5_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR5_UGAINF_Msk + 1))),
            ((1U << R_ADC_B0_ADUGTR6_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR6_UGAINF_Msk + 1))), ((1U
                    << R_ADC_B0_ADUGTR7_UGAINI_Pos) + (uint32_t) (0 * (R_ADC_B0_ADUGTR7_UGAINF_Msk + 1))), },
          .limiter_clip_interrupt_enable_mask = (0x00), .limiter_clip_tables =
          { (0 | 0 << R_ADC_B0_ADLIMTR0_LIMU_Pos), (0 | 0 << R_ADC_B0_ADLIMTR1_LIMU_Pos), (0
                    | 0 << R_ADC_B0_ADLIMTR2_LIMU_Pos),
            (0 | 0 << R_ADC_B0_ADLIMTR3_LIMU_Pos), (0 | 0 << R_ADC_B0_ADLIMTR4_LIMU_Pos), (0
                    | 0 << R_ADC_B0_ADLIMTR5_LIMU_Pos),
            (0 | 0 << R_ADC_B0_ADLIMTR6_LIMU_Pos), (0 | 0 << R_ADC_B0_ADLIMTR7_LIMU_Pos), },

#if (1 == 0)
    .pga_gain[0] = ADC_B_PGA_GAIN_SINGLE_ENDED_2_500,
    #elif (2 == 0)
    .pga_gain[0] = ADC_B_PGA_GAIN_DIFFERENTIAL_1_500,
    #else
          .pga_gain[0] = ADC_B_PGA_GAIN_DISABLED,
#endif

#if (1 == 0)
    .pga_gain[1] = ADC_B_PGA_GAIN_SINGLE_ENDED_2_500,
    #elif (2 == 0)
    .pga_gain[1] = ADC_B_PGA_GAIN_DIFFERENTIAL_1_500,
    #else
          .pga_gain[1] = ADC_B_PGA_GAIN_DISABLED,
#endif

#if (1 == 0)
    .pga_gain[2] = ADC_B_PGA_GAIN_SINGLE_ENDED_2_500,
    #elif (2 == 0)
    .pga_gain[2] = ADC_B_PGA_GAIN_DIFFERENTIAL_1_500,
    #else
          .pga_gain[2] = ADC_B_PGA_GAIN_DISABLED,
#endif

#if (1 == 0)
    .pga_gain[3] = ADC_B_PGA_GAIN_SINGLE_ENDED_2_500,
    #elif (2 == 0)
    .pga_gain[3] = ADC_B_PGA_GAIN_DIFFERENTIAL_1_500,
    #else
          .pga_gain[3] = ADC_B_PGA_GAIN_DISABLED,
#endif

          /* For debug only! Prolonged use of PGA Monitor function may deteriorate PGA characteristics. See user manual for more information.*/
          .pga_debug_monitor_mask_b.unit_0 = 0,
          .pga_debug_monitor_mask_b.unit_1 = 0, .pga_debug_monitor_mask_b.unit_2 = 0, .pga_debug_monitor_mask_b.unit_3 =
                  0,
          .adc_filter_selection[0].bits = ((R_ADC_B0_ADDFSR0_DFSEL0_Msk
                  & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR0_DFSEL0_Pos))
                  | (R_ADC_B0_ADDFSR0_DFSEL1_Msk & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR0_DFSEL1_Pos))
                  | (R_ADC_B0_ADDFSR0_DFSEL2_Msk & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR0_DFSEL2_Pos))
                  | (R_ADC_B0_ADDFSR0_DFSEL3_Msk & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR0_DFSEL3_Pos))),
          .adc_filter_selection[1].bits = ((R_ADC_B0_ADDFSR1_DFSEL0_Msk
                  & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR1_DFSEL0_Pos))
                  | (R_ADC_B0_ADDFSR1_DFSEL1_Msk & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR1_DFSEL1_Pos))
                  | (R_ADC_B0_ADDFSR1_DFSEL2_Msk & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR1_DFSEL2_Pos))
                  | (R_ADC_B0_ADDFSR1_DFSEL3_Msk & (ADC_B_DIGITAL_FILTER_MODE_SINC3 << R_ADC_B0_ADDFSR1_DFSEL3_Pos))), };

const adc_cfg_t g_adc_cfg =
{ .unit = 0xFFFC, .mode = (adc_mode_t) 0, // Unused
  .resolution = (adc_resolution_t) 0, // Unused
  .alignment = ADC_ALIGNMENT_RIGHT,
  .trigger = (adc_trigger_t) 0, // Unused
  .p_callback = NULL,
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = (void*) &NULL,
#endif
  .p_extend = &g_adc_cfg_extend,

  .scan_end_irq = FSP_INVALID_VECTOR,
  .scan_end_ipl = BSP_IRQ_DISABLED,
  .scan_end_b_irq = FSP_INVALID_VECTOR,
  .scan_end_b_ipl = BSP_IRQ_DISABLED, };

adc_b_instance_ctrl_t g_adc_ctrl;

const adc_instance_t g_adc =
{ .p_ctrl = &g_adc_ctrl, .p_cfg = &g_adc_cfg, .p_channel_cfg = &g_adc_scan_cfg, .p_api = &g_adc_on_adc_b, };

#undef RA_NOT_DEFINED
gpt_instance_ctrl_t g_memory_performance_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_memory_performance_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_COUNTER_UNDERFLOW)
    .trough_irq          = VECTOR_NUMBER_GPT0_COUNTER_UNDERFLOW,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      = (gpt_output_disable_t) ( GPT_OUTPUT_DISABLE_NONE),
    .adc_trigger         = (gpt_adc_trigger_t) ( GPT_ADC_TRIGGER_NONE),
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
};
#endif
const gpt_extended_cfg_t g_memory_performance_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_A)
    .capture_a_irq       = VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_A,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_B)
    .capture_b_irq       = VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_B,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .compare_match_value =
          { /* CMP_A */(uint32_t) 0x0, /* CMP_B */(uint32_t) 0x0 },
          .compare_match_status = (0U << 1U) | 0U, .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE, .capture_filter_gtiocb =
                  GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_memory_performance_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
#if 0
    .gtior_setting.gtior_b.gtioa  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.oadflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.oahld  = 0U,
    .gtior_setting.gtior_b.oae    = (uint32_t) false,
    .gtior_setting.gtior_b.oadf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfaen  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsa  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
    .gtior_setting.gtior_b.gtiob  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.obdflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.obhld  = 0U,
    .gtior_setting.gtior_b.obe    = (uint32_t) false,
    .gtior_setting.gtior_b.obdf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfben  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsb  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
#else
          .gtior_setting.gtior = 0U,
#endif
        };

const timer_cfg_t g_memory_performance_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 17.179869184 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x100000000,
  .duty_cycle_counts = 0x80000000, .source_div = (timer_source_div_t) 0, .channel = 0, .p_callback = NULL,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = (void*) &NULL,
#endif
  .p_extend = &g_memory_performance_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GPT0_COUNTER_OVERFLOW,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_memory_performance =
{ .p_ctrl = &g_memory_performance_ctrl, .p_cfg = &g_memory_performance_cfg, .p_api = &g_timer_on_gpt };
ospi_b_instance_ctrl_t g_ospi0_ctrl;

static ospi_b_timing_setting_t g_ospi0_timing_settings =
{ .command_to_command_interval = OSPI_B_COMMAND_INTERVAL_CLOCKS_2,
  .cs_pullup_lag = OSPI_B_COMMAND_CS_PULLUP_CLOCKS_NO_EXTENSION,
  .cs_pulldown_lead = OSPI_B_COMMAND_CS_PULLDOWN_CLOCKS_NO_EXTENSION,
  .sdr_drive_timing = OSPI_B_SDR_DRIVE_TIMING_BEFORE_CK,
  .sdr_sampling_edge = OSPI_B_CK_EDGE_FALLING,
  .sdr_sampling_delay = OSPI_B_SDR_SAMPLING_DELAY_NONE,
  .ddr_sampling_extension = OSPI_B_DDR_SAMPLING_EXTENSION_NONE, };

static const spi_flash_erase_command_t g_ospi0_command_set_initial_erase_commands[] =
{
{ .command = 0x21, .size = 4096 },
  { .command = 0xDC, .size = 262144 },
  { .command = 0x60, .size = SPI_FLASH_ERASE_SIZE_CHIP_ERASE }, };
static const ospi_b_table_t g_ospi0_command_set_initial_erase_table =
{ .p_table = (void*) g_ospi0_command_set_initial_erase_commands, .length =
          sizeof(g_ospi0_command_set_initial_erase_commands) / sizeof(g_ospi0_command_set_initial_erase_commands[0]), };
static const spi_flash_erase_command_t g_ospi0_command_set_high_speed_erase_commands[] =
{
{ .command = 0x21DE, .size = 4096 },
  { .command = 0xDC23, .size = 262144 },
  { .command = 0xC738, .size = SPI_FLASH_ERASE_SIZE_CHIP_ERASE }, };
static const ospi_b_table_t g_ospi0_command_set_high_speed_erase_table =
{ .p_table = (void*) g_ospi0_command_set_high_speed_erase_commands, .length =
          sizeof(g_ospi0_command_set_high_speed_erase_commands)
                  / sizeof(g_ospi0_command_set_high_speed_erase_commands[0]), };

static const ospi_b_xspi_command_set_t g_ospi0_command_set_table[] =
{
{ .protocol = SPI_FLASH_PROTOCOL_1S_1S_1S,
  .frame_format = OSPI_B_FRAME_FORMAT_STANDARD,
  .latency_mode = OSPI_B_LATENCY_MODE_FIXED,
  .command_bytes = OSPI_B_COMMAND_BYTES_1,
  .address_bytes = SPI_FLASH_ADDRESS_BYTES_4,
  .address_msb_mask = 0xF0,
  .status_needs_address = false,
  .status_address = 0U,
  .status_address_bytes = (spi_flash_address_bytes_t) 0U,
  .p_erase_commands = &g_ospi0_command_set_initial_erase_table,
  .read_command = 0x13,
  .read_dummy_cycles = 0,
  .program_command = 0x12,
  .program_dummy_cycles = 0,
  .row_load_command = 0x00,
  .row_load_dummy_cycles = 0,
  .row_store_command = 0x00,
  .row_store_dummy_cycles = 0,
  .write_enable_command = 0x06,
  .status_command = 0x05,
  .status_dummy_cycles = 0, },
  { .protocol = SPI_FLASH_PROTOCOL_8D_8D_8D,
    .frame_format = OSPI_B_FRAME_FORMAT_XSPI_PROFILE_1,
    .latency_mode = OSPI_B_LATENCY_MODE_FIXED,
    .command_bytes = OSPI_B_COMMAND_BYTES_2,
    .address_bytes = SPI_FLASH_ADDRESS_BYTES_4,
    .address_msb_mask = 0xF0,
    .status_needs_address = true,
    .status_address = 0,
    .status_address_bytes = SPI_FLASH_ADDRESS_BYTES_4,
    .p_erase_commands = &g_ospi0_command_set_high_speed_erase_table,
    .read_command = 0xEE11,
    .read_dummy_cycles = 6,
    .program_command = 0x12ED,
    .program_dummy_cycles = 0,
    .row_load_command = 0x00,
    .row_load_dummy_cycles = 0,
    .row_store_command = 0x00,
    .row_store_dummy_cycles = 0,
    .write_enable_command = 0x06F9,
    .status_command = 0x05FA,
    .status_dummy_cycles = 4, } };

static const ospi_b_table_t g_ospi0_command_set =
{ .p_table = (void*) g_ospi0_command_set_table, .length = 2 };

#if OSPI_B_CFG_DOTF_SUPPORT_ENABLE
extern uint8_t g_ospi_dotf_iv[];
extern uint8_t g_ospi_dotf_key[];

static ospi_b_dotf_cfg_t g_ospi_dotf_cfg=
{
    .key_type       = OSPI_B_DOTF_AES_KEY_TYPE_128,
    .format         = OSPI_B_DOTF_KEY_FORMAT_PLAINTEXT,
    .p_start_addr   = (uint32_t *)0x90000000,
    .p_end_addr     = (uint32_t *)0x90001FFF,
    .p_key          = (uint32_t *)g_ospi_dotf_key,
    .p_iv           = (uint32_t *)g_ospi_dotf_iv,
};
#endif

static const ospi_b_extended_cfg_t g_ospi0_extended_cfg =
{ .ospi_b_unit = 0,
  .channel = (ospi_b_device_number_t) 1,
  .p_timing_settings = &g_ospi0_timing_settings,
  .p_xspi_command_set = &g_ospi0_command_set,
  .data_latch_delay_clocks = OSPI_B_DS_TIMING_DELAY_16,
  .p_autocalibration_preamble_pattern_addr = (uint8_t*) 0x00,
#if OSPI_B_CFG_DMAC_SUPPORT_ENABLE
    .p_lower_lvl_transfer                    = &RA_NOT_DEFINED,
#endif
#if OSPI_B_CFG_DOTF_SUPPORT_ENABLE
    .p_dotf_cfg                              = &g_ospi_dotf_cfg,
#endif
#if OSPI_B_CFG_ROW_ADDRESSING_SUPPORT_ENABLE
    .row_index_bytes                         = 0xFF
#endif
        };
const spi_flash_cfg_t g_ospi0_cfg =
{ .spi_protocol = SPI_FLASH_PROTOCOL_1S_1S_1S, .read_mode = SPI_FLASH_READ_MODE_STANDARD, /* Unused by OSPI_B */
  .address_bytes = SPI_FLASH_ADDRESS_BYTES_4, .dummy_clocks = SPI_FLASH_DUMMY_CLOCKS_DEFAULT, /* Unused by OSPI_B */
  .page_program_address_lines = (spi_flash_data_lines_t) 0U, /* Unused by OSPI_B */
  .page_size_bytes = 64, .write_status_bit = 0, .write_enable_bit = 1, .page_program_command = 0, /* OSPI_B uses command sets. See g_ospi0_command_set. */
  .write_enable_command = 0, /* OSPI_B uses command sets. See g_ospi0_command_set. */
  .status_command = 0, /* OSPI_B uses command sets. See g_ospi0_command_set. */
  .read_command = 0, /* OSPI_B uses command sets. See g_ospi0_command_set. */
#if OSPI_B_CFG_XIP_SUPPORT_ENABLE
    .xip_enter_command           = 0,
    .xip_exit_command            = 0,
#else
  .xip_enter_command = 0U,
  .xip_exit_command = 0U,
#endif
  .erase_command_list_length = 0U, /* OSPI_B uses command sets. See g_ospi0_command_set. */
  .p_erase_command_list = NULL, /* OSPI_B uses command sets. See g_ospi0_command_set. */
  .p_extend = &g_ospi0_extended_cfg, };

/** This structure encompasses everything that is needed to use an instance of this interface. */
const spi_flash_instance_t g_ospi0 =
{ .p_ctrl = &g_ospi0_ctrl, .p_cfg = &g_ospi0_cfg, .p_api = &g_ospi_b_on_spi_flash, };

#if defined OSPI_B_CFG_DOTF_PROTECTED_MODE_SUPPORT_ENABLE
rsip_instance_t const * const gp_rsip_instance = &RA_NOT_DEFINED;
#endif
sci_b_uart_instance_ctrl_t g_jlink_console_ctrl;

sci_b_baud_setting_t g_jlink_console_baud_setting =
        {
        /* Baud rate calculated with 0.160% error. */.baudrate_bits_b.abcse = 0,
          .baudrate_bits_b.abcs = 0, .baudrate_bits_b.bgdm = 1, .baudrate_bits_b.cks = 0, .baudrate_bits_b.brr = 51, .baudrate_bits_b.mddr =
                  (uint8_t) 256,
          .baudrate_bits_b.brme = false };

/** UART extended configuration for UARTonSCI HAL driver */
const sci_b_uart_extended_cfg_t g_jlink_console_cfg_extend =
{ .clock = SCI_B_UART_CLOCK_INT, .rx_edge_start = SCI_B_UART_START_BIT_FALLING_EDGE, .noise_cancel =
          SCI_B_UART_NOISE_CANCELLATION_DISABLE,
  .rx_fifo_trigger = SCI_B_UART_RX_FIFO_TRIGGER_MAX, .p_baud_setting = &g_jlink_console_baud_setting, .flow_control =
          SCI_B_UART_FLOW_CONTROL_RTS,
#if 0xFF != 0xFF
                .flow_control_pin       = BSP_IO_PORT_FF_PIN_0xFF,
                #else
  .flow_control_pin = (bsp_io_port_pin_t) UINT16_MAX,
#endif
  .rs485_setting =
  { .enable = SCI_B_UART_RS485_DISABLE,
    .polarity = SCI_B_UART_RS485_DE_POLARITY_HIGH,
    .assertion_time = 1,
    .negation_time = 1, } };

/** UART interface configuration */
const uart_cfg_t g_jlink_console_cfg =
{ .channel = 8, .data_bits = UART_DATA_BITS_8, .parity = UART_PARITY_OFF, .stop_bits = UART_STOP_BITS_1, .p_callback =
          jlink_console_callback,
  .p_context = NULL, .p_extend = &g_jlink_console_cfg_extend,
#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_tx = NULL,
#else
                .p_transfer_tx       = &RA_NOT_DEFINED,
#endif
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_rx = NULL,
#else
                .p_transfer_rx       = &RA_NOT_DEFINED,
#endif
#undef RA_NOT_DEFINED
  .rxi_ipl = (4),
  .txi_ipl = (12), .tei_ipl = (12), .eri_ipl = (12),
#if defined(VECTOR_NUMBER_SCI8_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI8_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI8_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI8_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI8_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI8_TEI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI8_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI8_ERI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
        };

/* Instance structure to use this module. */
const uart_instance_t g_jlink_console =
{ .p_ctrl = &g_jlink_console_ctrl, .p_cfg = &g_jlink_console_cfg, .p_api = &g_uart_on_sci_b };
gpt_instance_ctrl_t g_timer_camera_xclk_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_timer_camera_xclk_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT12_COUNTER_UNDERFLOW)
    .trough_irq          = VECTOR_NUMBER_GPT12_COUNTER_UNDERFLOW,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      = (gpt_output_disable_t) ( GPT_OUTPUT_DISABLE_NONE),
    .adc_trigger         = (gpt_adc_trigger_t) ( GPT_ADC_TRIGGER_NONE),
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
};
#endif
const gpt_extended_cfg_t g_timer_camera_xclk_extend =
        { .gtioca =
        { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT12_CAPTURE_COMPARE_A)
    .capture_a_irq       = VECTOR_NUMBER_GPT12_CAPTURE_COMPARE_A,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT12_CAPTURE_COMPARE_B)
    .capture_b_irq       = VECTOR_NUMBER_GPT12_CAPTURE_COMPARE_B,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .compare_match_value =
          { /* CMP_A */(uint32_t) 0x0, /* CMP_B */(uint32_t) 0x0 },
          .compare_match_status = (0U << 1U) | 0U, .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE, .capture_filter_gtiocb =
                  GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_timer_camera_xclk_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
#if 0
    .gtior_setting.gtior_b.gtioa  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.oadflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.oahld  = 0U,
    .gtior_setting.gtior_b.oae    = (uint32_t) true,
    .gtior_setting.gtior_b.oadf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfaen  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsa  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
    .gtior_setting.gtior_b.gtiob  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.obdflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.obhld  = 0U,
    .gtior_setting.gtior_b.obe    = (uint32_t) false,
    .gtior_setting.gtior_b.obdf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfben  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsb  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
#else
          .gtior_setting.gtior = 0U,
#endif
        };

const timer_cfg_t g_timer_camera_xclk_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 4e-8 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0xa,
  .duty_cycle_counts = 0x5, .source_div = (timer_source_div_t) 0, .channel = 12, .p_callback = NULL,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = (void*) &NULL,
#endif
  .p_extend = &g_timer_camera_xclk_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT12_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GPT12_COUNTER_OVERFLOW,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer_camera_xclk =
{ .p_ctrl = &g_timer_camera_xclk_ctrl, .p_cfg = &g_timer_camera_xclk_cfg, .p_api = &g_timer_on_gpt };
iic_master_instance_ctrl_t g_board_i2c_master_ctrl;
const iic_master_extended_cfg_t g_board_i2c_master_extend =
{ .timeout_mode = IIC_MASTER_TIMEOUT_MODE_SHORT,
  .timeout_scl_low = IIC_MASTER_TIMEOUT_SCL_LOW_ENABLED,
  .smbus_operation = 0,
  /* Actual calculated bitrate: 97809. Actual calculated duty cycle: 49%. */.clock_settings.brl_value = 17,
  .clock_settings.brh_value = 16,
  .clock_settings.cks_value = 4,
  .clock_settings.sddl_value = 0,
  .clock_settings.dlcs_value = 0, };
const i2c_master_cfg_t g_board_i2c_master_cfg =
{ .channel = 1, .rate = I2C_MASTER_RATE_STANDARD, .slave = 0x00, .addr_mode = I2C_MASTER_ADDR_MODE_7BIT,
#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_tx = NULL,
#else
                .p_transfer_tx       = &RA_NOT_DEFINED,
#endif
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_rx = NULL,
#else
                .p_transfer_rx       = &RA_NOT_DEFINED,
#endif
#undef RA_NOT_DEFINED
  .p_callback = board_i2c_master_callback,
  .p_context = NULL,
#if defined(VECTOR_NUMBER_IIC1_RXI)
    .rxi_irq             = VECTOR_NUMBER_IIC1_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_IIC1_TXI)
    .txi_irq             = VECTOR_NUMBER_IIC1_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_IIC1_TEI)
    .tei_irq             = VECTOR_NUMBER_IIC1_TEI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_IIC1_ERI)
    .eri_irq             = VECTOR_NUMBER_IIC1_ERI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
  .ipl = (4),
  .p_extend = &g_board_i2c_master_extend, };
/* Instance structure to use this module. */
const i2c_master_instance_t g_board_i2c_master =
{ .p_ctrl = &g_board_i2c_master_ctrl, .p_cfg = &g_board_i2c_master_cfg, .p_api = &g_i2c_master_on_iic };
void g_hal_init(void)
{
    g_common_init ();
}
