/***********************************************************************************************************************
 * File Name    : serial_data.c
 * Description  : Contains declarations of data structures and functions used in serial_terminal.c
 ***********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright (c) 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
***********************************************************************************************************************/

#if (USE_VIRTUAL_COM == 1)

#include "serial_data.h"

/* DTC instance control */
dtc_instance_ctrl_t g_transfer_rx_ctrl;
dtc_instance_ctrl_t g_transfer_tx_ctrl;

/* DTC information */
transfer_info_t g_transfer_rx_info =
{ .transfer_settings_word_b.dest_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED,
  .transfer_settings_word_b.repeat_area = TRANSFER_REPEAT_AREA_DESTINATION,
  .transfer_settings_word_b.irq = TRANSFER_IRQ_END,
  .transfer_settings_word_b.chain_mode = TRANSFER_CHAIN_MODE_DISABLED,
  .transfer_settings_word_b.src_addr_mode = TRANSFER_ADDR_MODE_FIXED,
  .transfer_settings_word_b.size = TRANSFER_SIZE_1_BYTE,
  .transfer_settings_word_b.mode = TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL,
  .p_src = (void const*) NULL,
  .num_blocks = 0,
  .length = 0, };

transfer_info_t g_transfer_tx_info =
{ .transfer_settings_word_b.dest_addr_mode = TRANSFER_ADDR_MODE_FIXED,
  .transfer_settings_word_b.repeat_area = TRANSFER_REPEAT_AREA_SOURCE,
  .transfer_settings_word_b.irq = TRANSFER_IRQ_END,
  .transfer_settings_word_b.chain_mode = TRANSFER_CHAIN_MODE_DISABLED,
  .transfer_settings_word_b.src_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED,
  .transfer_settings_word_b.size = TRANSFER_SIZE_1_BYTE,
  .transfer_settings_word_b.mode = TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL,
  .p_src = (void const*) NULL,
  .num_blocks = 0,
  .length = 0, };

/* DTC instance configure */
const dtc_extended_cfg_t g_transfer_rx_cfg_extend =
#if defined (BOARD_RA8P1_EK)
{ .activation_source = VECTOR_NUMBER_SCI8_RXI, };
#elif defined (BOARD_RA8T1_MCK)
{ .activation_source = VECTOR_NUMBER_SCI3_RXI, };
#else
{ .activation_source = VECTOR_NUMBER_SCI9_RXI, };
#endif /* defined (BOARD_RA8P1_EK) */

const transfer_cfg_t g_transfer_rx_cfg =
{
#if (1 == 1)
  .p_info = &g_transfer_rx_info,
#elif (1 > 1)
    .p_info              = g_transfer_rx_info,
#else
    .p_info = NULL,
#endif
  .p_extend = &g_transfer_rx_cfg_extend, };

const dtc_extended_cfg_t g_transfer_tx_cfg_extend =
#if defined (BOARD_RA8P1_EK)
{ .activation_source = VECTOR_NUMBER_SCI8_TXI, };
#elif defined (BOARD_RA8T1_MCK)
{ .activation_source = VECTOR_NUMBER_SCI3_TXI, };
#else
{ .activation_source = VECTOR_NUMBER_SCI9_TXI, };
#endif /* defined (BOARD_RA8P1_EK) */

const transfer_cfg_t g_transfer_tx_cfg =
{
#if (1 == 1)
  .p_info = &g_transfer_tx_info,
#elif (1 > 1)
    .p_info              = g_transfer_tx_info,
#else
    .p_info = NULL,
#endif
  .p_extend = &g_transfer_tx_cfg_extend, };

/* DTC instance */
const transfer_instance_t g_transfer_rx =
{ .p_ctrl = &g_transfer_rx_ctrl, .p_cfg = &g_transfer_rx_cfg, .p_api = &g_transfer_on_dtc };

const transfer_instance_t g_transfer_tx =
{ .p_ctrl = &g_transfer_tx_ctrl, .p_cfg = &g_transfer_tx_cfg, .p_api = &g_transfer_on_dtc };

/* UART instance control */
sci_b_uart_instance_ctrl_t g_serial_ctrl;

/* Configure UART clock */
sci_b_baud_setting_t g_serial_baud_setting =
        {
        /* Baud rate calculated with 0.160% error. */.baudrate_bits_b.abcse = 0,
          .baudrate_bits_b.abcs = 0, .baudrate_bits_b.bgdm = 1, .baudrate_bits_b.cks = 0, .baudrate_bits_b.brr = 64, .baudrate_bits_b.mddr =
                  (uint8_t) 256,
          .baudrate_bits_b.brme = false };

/* UART extended configuration for UARTonSCI HAL driver */
const sci_b_uart_extended_cfg_t g_serial_cfg_extend =
{ .clock = SCI_B_UART_CLOCK_INT, .rx_edge_start = SCI_B_UART_START_BIT_FALLING_EDGE, .noise_cancel =
          SCI_B_UART_NOISE_CANCELLATION_DISABLE,
  .rx_fifo_trigger = SCI_B_UART_RX_FIFO_TRIGGER_MAX, .p_baud_setting = &g_serial_baud_setting, .flow_control =
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

/* UART interface configuration */
const uart_cfg_t g_serial_cfg =
#if defined (BOARD_RA8P1_EK)
{ .channel = 8, .data_bits = UART_DATA_BITS_8, .parity = UART_PARITY_OFF, .stop_bits = UART_STOP_BITS_1, .p_callback =
          serial_callback,
#elif defined (BOARD_RA8T1_MCK)
{ .channel = 3, .data_bits = UART_DATA_BITS_8, .parity = UART_PARITY_OFF, .stop_bits = UART_STOP_BITS_1, .p_callback =
          serial_callback,
#else
{ .channel = 9, .data_bits = UART_DATA_BITS_8, .parity = UART_PARITY_OFF, .stop_bits = UART_STOP_BITS_1, .p_callback =
          serial_callback,
#endif /* defined (BOARD_RA8P1_EK) */
  .p_context = NULL, .p_extend = &g_serial_cfg_extend,
#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == g_transfer_tx)
                .p_transfer_tx       = NULL,
#else
  .p_transfer_tx = &g_transfer_tx,
#endif
#if (RA_NOT_DEFINED == g_transfer_rx)
                .p_transfer_rx       = NULL,
#else
  .p_transfer_rx = &g_transfer_rx,
#endif
#undef RA_NOT_DEFINED
  .rxi_ipl = (12),
  .txi_ipl = (12), .tei_ipl = (12), .eri_ipl = (12),
#if defined (BOARD_RA8P1_EK)
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
#elif defined (BOARD_RA8T1_MCK)
#if defined(VECTOR_NUMBER_SCI3_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI3_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI3_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI3_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI3_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI3_TEI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI3_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI3_ERI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
#else
#if defined(VECTOR_NUMBER_SCI9_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI9_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI9_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI9_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI9_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI9_TEI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI9_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI9_ERI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
#endif /* defined (BOARD_RA8P1_EK) */
        };

/* UART instance */
const uart_instance_t g_serial =
{ .p_ctrl = &g_serial_ctrl, .p_cfg = &g_serial_cfg, .p_api = &g_uart_on_sci_b };

#endif /* USE_VIRTUAL_COM */
