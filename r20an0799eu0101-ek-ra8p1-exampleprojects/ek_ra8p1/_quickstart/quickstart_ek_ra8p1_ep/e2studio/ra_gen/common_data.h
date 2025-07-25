/* generated common header file - do not edit */
#ifndef COMMON_DATA_H_
#define COMMON_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "FreeRTOS.h"
#include "event_groups.h"
#include "FreeRTOS.h"
#include "semphr.h"
#include "r_mipi_csi.h"
#include "r_mipi_csi_api.h"
#include "r_vin.h"
#include "r_capture_api.h"
#include "dave_driver.h"
#include "r_glcdc.h"
#include "r_display_api.h"
#include "r_icu.h"
#include "r_external_irq_api.h"
#include "r_ioport.h"
#include "bsp_pin_cfg.h"
FSP_HEADER
/* MIPI PHY on MIPI PHY Instance. */

extern const mipi_phy_instance_t g_mipi_phy0;

/* Access the MIPI PHY instance using these structures when calling API functions directly (::p_api is not used). */
extern mipi_phy_ctrl_t g_mipi_phy0_ctrl;
extern const mipi_phy_cfg_t g_mipi_phy0_cfg;
/* MIPI CSI on MIPI CSI Instance. */

/* Access the MIPI CSI instance using these structures when calling API functions directly (::p_api is not used). */
extern mipi_csi_instance_ctrl_t g_mipi_csi0_ctrl;
extern const mipi_csi_cfg_t g_mipi_csi0_cfg;

#ifndef mipi_csi0_callback
void mipi_csi0_callback(mipi_csi_callback_args_t *p_args);
#endif
/* MIPI VIN on MIPI VIN Instance. */

/* Access the MIPI VIN instance using these structures when calling API functions directly (::p_api is not used). */
extern vin_instance_ctrl_t g_vin0_ctrl;
extern const capture_cfg_t g_vin0_cfg;

#ifndef vin0_callback
void vin0_callback(capture_callback_args_t *p_args);
#endif

#define VIN_CFG_BYTES_PER_PIXEL (2)
#define VIN_BYTES_PER_FRAME (768 * 450 * VIN_CFG_BYTES_PER_PIXEL)

extern uint8_t vin_image_buffer_1[VIN_BYTES_PER_FRAME];
extern uint8_t vin_image_buffer_2[VIN_BYTES_PER_FRAME];
extern uint8_t vin_image_buffer_3[VIN_BYTES_PER_FRAME];

#if DRW_CFG_CUSTOM_MALLOC
            void * d1_malloc(size_t size);
            void   d1_free(void * ptr);
            #endif
#define GLCDC_CFG_LAYER_1_ENABLE (true)
#define GLCDC_CFG_LAYER_2_ENABLE (true)

#define GLCDC_CFG_CLUT_ENABLE (false)

#define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R       (false)
#define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G       (false)
#define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B       (false)

/* Display on GLCDC Instance. */
extern const display_instance_t g_plcd_display;
extern display_runtime_cfg_t g_plcd_display_runtime_cfg_fg;
extern display_runtime_cfg_t g_plcd_display_runtime_cfg_bg;

/** Access the GLCDC instance using these structures when calling API functions directly (::p_api is not used). */
extern glcdc_instance_ctrl_t g_plcd_display_ctrl;
extern const display_cfg_t g_plcd_display_cfg;

#if ((GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B) && GLCDC_CFG_COLOR_CORRECTION_ENABLE && !(false))
            extern display_gamma_correction_t g_plcd_display_gamma_cfg;
            #endif

#if GLCDC_CFG_CLUT_ENABLE
            extern display_clut_cfg_t g_plcd_display_clut_cfg_glcdc;
            #endif

#ifndef glcdc_vsync_isr
void glcdc_vsync_isr(display_callback_args_t *p_args);
#endif

#define DISPLAY_IN_FORMAT_16BITS_RGB565_0
#if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_0) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (32)
            #elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_0)
#define DISPLAY_BITS_PER_PIXEL_INPUT0 (16)
#elif defined (DISPLAY_IN_FORMAT_CLUT8_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (8)
            #elif defined (DISPLAY_IN_FORMAT_CLUT4_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (4)
            #else
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (1)
            #endif
#define DISPLAY_HSIZE_INPUT0                 (768)
#define DISPLAY_VSIZE_INPUT0                 (450)
#define DISPLAY_BUFFER_STRIDE_BYTES_INPUT0   (((DISPLAY_HSIZE_INPUT0 * DISPLAY_BITS_PER_PIXEL_INPUT0 + 0x1FF) >> 9) << 6)
#define DISPLAY_BUFFER_STRIDE_PIXELS_INPUT0  ((DISPLAY_BUFFER_STRIDE_BYTES_INPUT0 * 8) / DISPLAY_BITS_PER_PIXEL_INPUT0)
#if GLCDC_CFG_LAYER_1_ENABLE
            extern uint8_t fb_background[1][DISPLAY_BUFFER_STRIDE_BYTES_INPUT0 * DISPLAY_VSIZE_INPUT0];
            #endif

#define DISPLAY_IN_FORMAT_16BITS_ARGB4444_1
#if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_1) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (32)
            #elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_1)
#define DISPLAY_BITS_PER_PIXEL_INPUT1 (16)
#elif defined (DISPLAY_IN_FORMAT_CLUT8_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (8)
            #elif defined (DISPLAY_IN_FORMAT_CLUT4_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (4)
            #else
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (1)
            #endif
#define DISPLAY_HSIZE_INPUT1                 (1024)
#define DISPLAY_VSIZE_INPUT1                 (600)
#define DISPLAY_BUFFER_STRIDE_BYTES_INPUT1   (((DISPLAY_HSIZE_INPUT1 * DISPLAY_BITS_PER_PIXEL_INPUT1 + 0x1FF) >> 9) << 6)
#define DISPLAY_BUFFER_STRIDE_PIXELS_INPUT1  ((DISPLAY_BUFFER_STRIDE_BYTES_INPUT1 * 8) / DISPLAY_BITS_PER_PIXEL_INPUT1)
#if GLCDC_CFG_LAYER_2_ENABLE
            extern uint8_t fb_foreground[2][DISPLAY_BUFFER_STRIDE_BYTES_INPUT1 * DISPLAY_VSIZE_INPUT1];
            #endif
/** External IRQ on ICU Instance. */
extern const external_irq_instance_t g_external_irq19;

/** Access the ICU instance using these structures when calling API functions directly (::p_api is not used). */
extern icu_instance_ctrl_t g_external_irq19_ctrl;
extern const external_irq_cfg_t g_external_irq19_cfg;

#ifndef irq19_tp_callback
void irq19_tp_callback(external_irq_callback_args_t *p_args);
#endif
/** External IRQ on ICU Instance. */
extern const external_irq_instance_t g_external_irq12ds;

/** Access the ICU instance using these structures when calling API functions directly (::p_api is not used). */
extern icu_instance_ctrl_t g_external_irq12ds_ctrl;
extern const external_irq_cfg_t g_external_irq12ds_cfg;

#ifndef button_irq12_ds_callback
void button_irq12_ds_callback(external_irq_callback_args_t *p_args);
#endif
/** External IRQ on ICU Instance. */
extern const external_irq_instance_t g_external_irq13ds;

/** Access the ICU instance using these structures when calling API functions directly (::p_api is not used). */
extern icu_instance_ctrl_t g_external_irq13ds_ctrl;
extern const external_irq_cfg_t g_external_irq13ds_cfg;

#ifndef button_irq13_ds_callback
void button_irq13_ds_callback(external_irq_callback_args_t *p_args);
#endif
#define IOPORT_CFG_NAME g_bsp_pin_cfg
#define IOPORT_CFG_OPEN R_IOPORT_Open
#define IOPORT_CFG_CTRL g_ioport_ctrl

/* IOPORT Instance */
extern const ioport_instance_t g_ioport;

/* IOPORT control structure. */
extern ioport_instance_ctrl_t g_ioport_ctrl;
extern EventGroupHandle_t g_update_console_event;
extern EventGroupHandle_t g_update_display_event;
extern SemaphoreHandle_t g_irq_binary_semaphore;
extern EventGroupHandle_t g_i2c_event_group;
void g_common_init(void);
FSP_FOOTER
#endif /* COMMON_DATA_H_ */
