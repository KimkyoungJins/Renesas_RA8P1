/***********************************************************************************************************************
 * File Name    : rm_usbx_paud_descriptor.c
 * Description  : Contains macros and functions used in rm_usbx_pcdc_descriptor.c
 **********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright (c) 2020 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
***********************************************************************************************************************/

/*******************************************************************************************************************//**
 Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
#include "r_usb_basic.h"
#include "usbx_paud_ep.h"

/*******************************************************************************************************************//**
 * @addtogroup usbx_paud_ep
 * @{
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 Macro definitions
 **********************************************************************************************************************/
/* bcdUSB */
#define USB_BCDNUM                      (0x0200U)
/* Release number */
#define USB_RELEASE                     (0x0200U)
/* DCP max packet size */
#define USB_DCPMAXP                     (64U)
/* Configuration number */
#define USB_CONFIGNUM                   (1U)
/* Vendor ID */
#define USB_VENDORID                    (0x045BU)
/* Product ID */
#define USB_PRODUCTID                   (0x0002U)

/* Interface association descriptor type */
#define USB_IAD_TYPE                    (0x0B)

/* Audio class subclass codes */
#define USB_AUD_CONTROL                 (0x01U)
#define USB_AUD_STREAMING               (0x02U)
#define USB_MIDI_STREAMING              (0x03U)

/* Audio class-specific AC interface descriptor sub-types */
#define USB_AUD_HEADER                  (0x01U)
#define USB_AUD_INPUT_TERMINAL          (0x02U)
#define USB_AUD_OUTPUT_TERMINAL         (0x03U)
#define USB_AUD_MIXER_UNIT              (0x04U)
#define USB_AUD_SELECTOR_UNIT           (0x05U)
#define USB_AUD_FEATURE_UNIT            (0x06U)
#define USB_AUD_EFFECT_UNIT             (0x07U)
#define USB_AUD_PROCESSING_UNIT         (0x08U)
#define USB_AUD_EXTENSION_UNIT          (0x09U)
#define USB_AUD_CLOCK_SOURCE            (0x0AU)
#define USB_AUD_CLOCK_SELECTOR          (0x0BU)
#define USB_AUD_CLOCK_MULTIPLIER        (0x0CU)
#define USB_AUD_SAMPLE_RATE_CONVERTER   (0x0DU)

/* Audio class-specific AS interface descriptor sub-types */
#define USB_AUD_AS_GENERAL              (0x01U)
#define USB_AUD_FORMAT_TYPE             (0x02U)
#define USB_AUD_FORMAT_SPECIFIC         (0x03U)

/* USB terminal type */
#define USB_STREAMING                   (0x0101)
#define USB_SPEAKER                     (0x0301)
#define USB_HEADPHONES                  (0x0302)
#define USB_VENDOR_SPECIFIC             (0x01FF)

#define USB_AUD_VERSION_20              (0x20U)
#define USB_AUD_VERSION_10              (0x10U)

#define USB_AUD_CS_INTERFACE            (0x24U)
#define USB_AUD_CS_ENDPOINT             (0x25U)
#define USB_AUD_EP_GENERAL              (0x01U)

/* bDescriptor sub-type descriptors */
#define USB_AUD_CATEGOLY                (0x08U)
#define USB_AUD_TOTAL_LENGTH            (0x40U)
#define USB_AUD_CONTROLS                (0x00U)

/* USB class definitions for communications devices specification release number in binary-coded decimal */
#define     USB_AUD_BCD_ADC             (0x0200U)

/* Descriptor length */
#define USB_AUD_QD_LEN                  (10U)
#define STRING_DESCRIPTOR0_LEN          (4U)
#define STRING_DESCRIPTOR1_LEN          (16U)
#define STRING_DESCRIPTOR2_LEN          (44U)
#define STRING_DESCRIPTOR3_LEN          (46U)
#define STRING_DESCRIPTOR4_LEN          (22U)
#define STRING_DESCRIPTOR5_LEN          (18U)
#define STRING_DESCRIPTOR6_LEN          (28U)

/* Descriptor data mask */
#define USB_UCHAR_MAX                   (0xffU)
#define USB_W_TOTAL_LENGTH_MASK         (256U)
#define USB_W_MAX_PACKET_SIZE_MASK      (64U)

#define VALUE_H_20                      (0x20U)
#define VALUE_H_6F                      (0x6FU)
#define VALUE_H_C0                      (0xC0U)
#define VALUE_H_81                      (0x81U)
#define VALUE_H_C8                      (0xC8U)
#define VALUE_H_D0                      (0xD0U)
#define VALUE_H_A0                      (0xA0U)
#define VALUE_H_32                      (0x32U)
#define VALUE_H_48                      (0x48U)
#define VALUE_H_24                      (0x24U)
#define VALUE_H_44                      (0x44U)
#define VALUE_H_AC                      (0xACU)
#define VALUE_H_80                      (0x80U)
#define VALUE_H_BB                      (0xBBU)
#define VALUE_H_25                      (0x25U)

/*******************************************************************************************************************//**
 Private global variables and functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 Exported global variables
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/

#define USB_AUD_CD_HIGH_LEN     (VALUE_247)
#define DEVICE_FRAME_HIGH_LEN   (VALUE_275)
/* Standard Device Descriptor */
uint8_t g_device_framework_hi_speed[DEVICE_FRAME_HIGH_LEN] =
{
    USB_DD_BLENGTH,                                             /* 0:bLength */
    USB_DT_DEVICE,                                              /* 1:bDescriptorType */
    (USB_BCDNUM & (uint8_t) USB_UCHAR_MAX),                     /* 2:bcdUSB_lo */
    ((uint8_t) (USB_BCDNUM >> 8) & (uint8_t) USB_UCHAR_MAX),    /* 3:bcdUSB_hi */
    0,                                                          /* 4:bDeviceClass */
    0,                                                          /* 5:bDeviceSubClass */
    0,                                                          /* 6:bDeviceProtocol */
    (uint8_t) USB_DCPMAXP,                                      /* 7:bMAXPacketSize(for DCP) */
    (USB_VENDORID & (uint8_t) USB_UCHAR_MAX),                   /* 8:idVendor_lo */
    ((uint8_t) (USB_VENDORID >> 8) & (uint8_t) USB_UCHAR_MAX),  /* 9:idVendor_hi */
    ((uint16_t) USB_PRODUCTID & (uint8_t) USB_UCHAR_MAX),       /* 10:idProduct_lo */
    ((uint8_t) (USB_PRODUCTID >> 8) & (uint8_t) USB_UCHAR_MAX), /* 11:idProduct_hi */
    (USB_RELEASE & (uint8_t) USB_UCHAR_MAX),                    /* 12:bcdDevice_lo */
    ((uint8_t) (USB_RELEASE >> 8) & (uint8_t) USB_UCHAR_MAX),   /* 13:bcdDevice_hi */
    1,                                                          /* 14:iManufacturer */
    2,                                                          /* 15:iProduct */
    0,                                                          /* 16:iSerialNumber */
    USB_CONFIGNUM,                                              /* 17:bNumConfigurations */

    /* Qualifier Descriptor */
    USB_AUD_QD_LEN,                                             /* 0:bLength */
    USB_DT_DEVICE_QUALIFIER,                                    /* 1:bDescriptorType */
    (USB_BCDNUM & (uint8_t) USB_UCHAR_MAX),                     /* 2:bcdUSB_lo */
    ((uint8_t) (USB_BCDNUM >> 8) & (uint8_t) USB_UCHAR_MAX),    /* 3:bcdUSB_hi */
    0,                                                          /* 4:bDeviceClass */
    0,                                                          /* 5:bDeviceSubClass */
    0,                                                          /* 6:bDeviceProtocol */
    (uint8_t) USB_DCPMAXP,                                      /* 7:bMAXPacketSize(for DCP) */
    USB_CONFIGNUM,                                              /* 8:bNumConfigurations */
    0,                                                          /* 9:bReserved */

    USB_CD_BLENGTH,                                             /* 0:bLength */
#ifdef APL_AUDIO_20
    USB_DT_CONFIGURATION,                                       /* 1:bDescriptorType */ /* For High-speed */
#else
    USB_DT_OTHER_SPEED_CONF,                                    /* 1:bDescriptorType */ /* For Full-speed */
#endif
    USB_AUD_CD_HIGH_LEN % USB_W_TOTAL_LENGTH_MASK,              /* 2:wTotalLength(L) */
    USB_AUD_CD_HIGH_LEN / USB_W_TOTAL_LENGTH_MASK,              /* 3:wTotalLength(H) */
    3,                                                          /* 4:bNumInterfaces */
    1,                                                          /* 5:bConfigurationValue */
    0,                                                          /* 6:iConfiguration */
    USB_CF_RESERVED | USB_CF_SELFP,                             /* 7:bmAttributes */
    (10 / 2),                                                   /* 8:MAXPower (2mA unit) */

    /* Interface Association Descriptor (IAD) */
    0x08,                           /* 0:bLength */
    USB_IAD_TYPE,                   /* 1:bDescriptorType */
    0x00,                           /* 2:bFirstInterface */
    0x03,                           /* 3:bInterfaceCount */
    USB_IFCLS_AUD,                  /* 4:bFunctionClass */
    0x00,                           /* 5:bFunctionSubClass */
    VALUE_H_20,                     /* 6:bFunctionProtocol */
    0x00,                           /* 7:iFunction */

    /* --- Interface Descriptor #0: Control */
    USB_ID_BLENGTH,                 /* 0:bLength */
    USB_DT_INTERFACE,               /* 1:bDescriptor */
    0,                              /* 2:bInterfaceNumber */
    0,                              /* 3:bAlternateSetting */
    0,                              /* 4:bNumEndpoints */
    USB_IFCLS_AUD,                  /* 5:bInterfaceClass */
    USB_AUD_CONTROL,                /* 6:bInterfaceSubClass */
    USB_AUD_VERSION_20,             /* 7:bInterfaceProtocol */
    0,                              /* 8:iInterface */

        /* Audio 2.0 AC(Audio Control) Interface Header Descriptor  */
        9,                                                  /* 0:bLength */
        USB_AUD_CS_INTERFACE,                               /* 1:bDescriptorType */
        USB_AUD_HEADER,                                     /* 2:bDescriptorSubtype */
        0x00,                                               /* 3:bcdADC_lo */
        0x02,                                               /* 4:bcdADC_hi */
        0x08,                                               /* 5:bCategoly */
        VALUE_H_6F,                                         /* 6:wTotalLength */
        0x00,                                               /* 7:wTotalLength */
        0x00,                                               /* 8:bmControls */

        /* ------ Audio 2.0 AC(Audio Control) Clock Source Descriptor */
        0x08,                   /* 0:bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_CLOCK_SOURCE,   /* 2:bDescriptorSubtype */
        0x10,                   /* 3:bClockID */
        0x05,                   /* 4:bmAttributes   : 0x05 (Sync|InternalFixedClk) */
        0x01,                   /* 5:bmControls     : 0x01 (FreqReadOnly) */
        0x00,                   /* 6:bAssocTerminal */
        0x00,                   /* 7:iClockSource */

        /* ------ Audio 2.0 AC(Audio Control) Input Terminal Descriptor */
        17,                     /* 0:bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_INPUT_TERMINAL, /* 2:bDescriptorSubtype */
        0x04,                   /* 3:bTerminalID */
        0x01,                   /* 4:wTerminalType : 0x0101 (USB Streaming) */
        0x01,                   /* 5:wTerminalType : 0x0101 (USB Streaming) */
        0x09,                   /* 6:bAssocTerminal */
        0x10,                   /* 7:bCSourceID */
        0x02,                   /* 8:bNrChannels */
        0x00,                   /* 9:bmChannelConfig    */
        0x00,                   /* 10:bmChannelConfig   */
        0x00,                   /* 11:bmChannelConfig   */
        0x00,                   /* 12:bmChannelConfig   */
        0x00,                   /* 13:iChannelNames */
        0x00,                   /* 14:bmControls */
        0x00,                   /* 15:bmControls */
        0x0,                    /* 16:iTerminal */

        /* -------- Audio 2.0 AC Feature Unit Descriptor */
        18,                     /* : bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_FEATURE_UNIT,   /* 2:bDescriptorSubtype */
        0x05,                   /* 3:bUnitID */
        0x04,                   /* 4:bSourceID */
        0x0F,                   /* 5:bmaControls(0)     : 0x0F (VolumeRW|MuteRW) */
        0x00,                   /* 6:bmaControls(0)     : 0x00 (VolumeRW|MuteRW) */
        0x00,                   /* 7:bmaControls(0)     : 0x00 (VolumeRW|MuteRW) */
        0x00,                   /* 8:bmaControls(0)     : 0x00 (VolumeRW|MuteRW) */
        0x00,                   /* 9:bmaControls(1)     : 0x00 */
        0x00,                   /* 10:bmaControls(1)    : 0x00 */
        0x00,                   /* 11:bmaControls(1)    : 0x00 */
        0x00,                   /* 12:bmaControls(1)    : 0x00 */
        0x00,                   /* 13:bmaControls(1)    : 0x00 */
        0x00,                   /* 14:bmaControls(1)    : 0x00 */
        0x00,                   /* 15:bmaControls(1)    : 0x00 */
        0x00,                   /* 16:bmaControls(1)    : 0x00 */
        0x00,                   /* 17:iFeature */

        /* ----- Audio 2.0 AC Output Terminal Descriptor */
        12,                     /* 0:bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_OUTPUT_TERMINAL,/* 2:bDescriptorSubtype */
        0x06,                   /* 3:bTerminalID */
        0x02,                   /* 4:wTerminalType : (HeadSet) */
        0x03,                   /* 5:wTerminalType : (HeadSet) */
        0x00,                   /* 6:bAssocTerminal */
        0x05,                   /* 7:bSourceID */
        0x10,                   /* 8:bCSourceID */
        0x00,                   /* 9:bmControls */
        0x00,                   /* 10:bmControls */
        0,                      /* 11:iTerminal */

        /* ------ Audio 2.0 AC(Audio Control) Input Terminal Descriptor */
        17,                     /* 0:bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_INPUT_TERMINAL, /* 2:bDescriptorSubtype */
        0x07,                   /* 3:bTerminalID */
        0x01,                   /* 4:wTerminalType : (HeadSet) */
        0x02,                   /* 5:wTerminalType : (HeadSet) */
        0x00,                   /* 6:bAssocTerminal */
        0x10,                   /* 7:bCSourceID */
        0x02,                   /* 8:bNrChannels */
        0x03,                   /* 9:bmChannelConfig */
        0x00,                   /* 10:bmChannelConfig */
        0x00,                   /* 11:bmChannelConfig */
        0x00,                   /* 12:bmChannelConfig */
        0x00,                   /* 13:iChannelNames */
        0x00,                   /* 14:bmControls */
        0x00,                   /* 15:bmControls */
        0x0,                    /* 16:iTerminal */

        /* -------- Audio 2.0 AC Feature Unit Descriptor */
        18,                     /* : bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_FEATURE_UNIT,   /* 2:bDescriptorSubtype */
        0x08,                   /* 3:bUnitID */
        0x07,                   /* 4:bSourceID */
        0x0F,                   /* 5:bmaControls(0)     : 0x0F (VolumeRW|MuteRW) */
        0x00,                   /* 6:bmaControls(0)     : 0x00 (VolumeRW|MuteRW) */
        0x00,                   /* 7:bmaControls(0)     : 0x00 (VolumeRW|MuteRW) */
        0x00,                   /* 8:bmaControls(0)     : 0x00 (VolumeRW|MuteRW) */
        0x00,                   /* 9:bmaControls(1)     : 0x00 */
        0x00,                   /* 10:bmaControls(1)    : 0x00 */
        0x00,                   /* 11:bmaControls(1)    : 0x00 */
        0x00,                   /* 12:bmaControls(1)    : 0x00 */
        0x00,                   /* 13:bmaControls(1)    : 0x00 */
        0x00,                   /* 14:bmaControls(1)    : 0x00 */
        0x00,                   /* 15:bmaControls(1)    : 0x00 */
        0x00,                   /* 16:bmaControls(1)    : 0x00 */
        0x00,                   /* 17:iFeature */

        /* ----- Audio 2.0 AC Output Terminal Descriptor */
        12,                     /* 0:bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_OUTPUT_TERMINAL,/* 2:bDescriptorSubtype */
        0x09,                   /* 3:bTerminalID */
        0x01,                   /* 4:wTerminalType : 0x0101 (USB Streaming) */
        0x01,                   /* 5:wTerminalType : 0x0101 (USB Streaming) */
        0x04,                   /* 6:bAssocTerminal */
        0x08,                   /* 7:bSourceID */
        0x10,                   /* 8:bCSourceID */
        0x00,                   /* 9:bmControls */
        0x00,                   /* 10:bmControls */
        0,                      /* 11:iTerminal */

    /* --- Interface Descriptor #1: Stream OUT */
    9,                          /* 0:bLength */
    USB_DT_INTERFACE,           /* 1:bDescriptorType */
    1,                          /* 2:bInterfaceNumber */
    0,                          /* 3:bAlternateSetting */
    0,                          /* 4:bNumEndpoints */
    USB_IFCLS_AUD,              /* 5:bInterfaceClass : 0x01 (Audio) */
    USB_AUD_STREAMING,          /* 6:bInterfaceSubClass : 0x02 (AudioStream) */
    USB_AUD_VERSION_20,         /* 7:bInterfaceProtocol : 0x20 (VERSION_02_00) */
    0,                          /* 8:iInterface */

    /* --- Interface Descriptor */
    9,                          /* 0:bLength */
    USB_DT_INTERFACE,           /* 1:bDescriptorType */
    1,                          /* 2:bInterfaceNumber */
    1,                          /* 3:bAlternateSetting */
    1,                          /* 4:bNumEndpoints */
    USB_IFCLS_AUD,              /* 5:bInterfaceClass : 0x01 (Audio) */
    USB_AUD_STREAMING,          /* 6:bInterfaceSubClass : 0x02 (AudioStream) */
    USB_AUD_VERSION_20,         /* 7:bInterfaceProtocol : 0x20 (VERSION_02_00) */
    0,                          /* 8:iInterface */

    /* ----------- Class-Specific Audio 2.0 AS(Audio Standard) Interface Descriptor */
    16,                         /* 0:bLength */
    USB_AUD_CS_INTERFACE,       /* 1:bDescriptorType */
    USB_AUD_AS_GENERAL,         /* 2:bDescriptorSubtype */
    0x04,                       /* 3:bTerminalLink */
    0x00,                       /* 4:bmControls */
    0x01,                       /* 5:bFormatType : 0x01 (FORMAT_TYPE_I) */
    0x01,                       /* 6:bmFormats : 0x000000001 (PCM) */
    0x00,                       /* 7:bmFormats : 0x000000001 (PCM) */
    0x00,                       /* 8:bmFormats : 0x000000001 (PCM) */
    0x00,                       /* 9:bmFormats : 0x000000001 (PCM) */
    2,                          /* 10:bNrChannels */
    0x00,                       /* 11:bmChannelConfig */
    0x00,                       /* 12:bmChannelConfig */
    0x00,                       /* 13:bmChannelConfig */
    0x00,                       /* 14:bmChannelConfig */
    0,                          /* 15:iChannelNames */

        /* --------- Audio 2.0 AS Format Type Descriptor */
        6,                      /* 0:bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_FORMAT_TYPE,    /* 2:bDescriptorSubtype */
        0x01,                   /* 3:bFormatType : 0x01 (FORMAT_TYPE_I) */
        2,                      /* 4:bSubslotSize */
        16,                     /* 5:bBitResolution */

        /* ------------------------- Endpoint Descriptor */
        7,                      /* 0:bLength */
        USB_DT_ENDPOINT,        /* 1:bDescriptorType */
        0x02,                   /* 2:bEndpointAddress */
        0x0D,                   /* 3:bmAttributes : 0x0D (Sync|ISO) */
        VALUE_H_C0,             /* 4:wMaxPacketSize : 0x00C0 (192) */
        0x00,                   /* 5:wMaxPacketSize : 0x00C0 (192) */
        4,                      /* 6:bInterval : 0x04 (1ms) */

        /* - Audio 2.0 AS ISO Audio Data Endpoint Descriptor */
        8,                      /* 0:bLength */
        USB_AUD_CS_ENDPOINT,    /* 1:bDescriptorType */
        USB_AUD_EP_GENERAL,     /* 2:bDescriptorSubtype */
        0x00,                   /* 3:bmAttributes */
        0x00,                   /* 4:bmControls */
        0x00,                   /* 5:bLockDelayUnits */
        0x00,                   /* 6:wLockDelay */
        0x00,                   /* 7:wLockDelay */

    /* --- Interface Descriptor #2: Stream OUT */
    9,                          /* 0:bLength */
    USB_DT_INTERFACE,           /* 1:bDescriptorType */
    2,                          /* 2:bInterfaceNumber */
    0,                          /* 3:bAlternateSetting */
    0,                          /* 4:bNumEndpoints */
    USB_IFCLS_AUD,              /* 5:bInterfaceClass : 0x01 (Audio) */
    USB_AUD_STREAMING,          /* 6:bInterfaceSubClass : 0x02 (AudioStream) */
    USB_AUD_VERSION_20,         /* 7:bInterfaceProtocol : 0x20 (VERSION_02_00) */
    0,                          /* 8:iInterface */

    /* --- Interface Descriptor */
    9,                          /* 0:bLength */
    USB_DT_INTERFACE,           /* 1:bDescriptorType */
    2,                          /* 2:bInterfaceNumber */
    1,                          /* 3:bAlternateSetting */
    1,                          /* 4:bNumEndpoints */
    USB_IFCLS_AUD,              /* 5:bInterfaceClass : 0x01 (Audio) */
    USB_AUD_STREAMING,          /* 6:bInterfaceSubClass : 0x02 (AudioStream) */
    USB_AUD_VERSION_20,         /* 7:bInterfaceProtocol : 0x20 (VERSION_02_00) */
    0,                          /* 8:iInterface */

    /* ----------- Class-Specific Audio 2.0 AS(Audio Standard) Interface Descriptor */
    16,                         /* 0:bLength */
    USB_AUD_CS_INTERFACE,       /* 1:bDescriptorType */
    USB_AUD_AS_GENERAL,         /* 2:bDescriptorSubtype */
    0x09,                       /* 3:bTerminalLink */
    0x00,                       /* 4:bmControls */
    0x01,                       /* 5:bFormatType : 0x01 (FORMAT_TYPE_I) */
    0x01,                       /* 6:bmFormats : 0x000000001 (PCM) */
    0x00,                       /* 7:bmFormats : 0x000000001 (PCM) */
    0x00,                       /* 8:bmFormats : 0x000000001 (PCM) */
    0x00,                       /* 9:bmFormats : 0x000000001 (PCM) */
    2,                          /* 10:bNrChannels */
    0x00,                       /* 11:bmChannelConfig */
    0x00,                       /* 12:bmChannelConfig */
    0x00,                       /* 13:bmChannelConfig */
    0x00,                       /* 14:bmChannelConfig */
    0,                          /* 15:iChannelNames */

        /* --------- Audio 2.0 AS Format Type Descriptor */
        6,                      /* 0:bLength */
        USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
        USB_AUD_FORMAT_TYPE,    /* 2:bDescriptorSubtype */
        0x01,                   /* 3:bFormatType : 0x01 (FORMAT_TYPE_I) */
        2,                      /* 4:bSubslotSize */
        16,                     /* 5:bBitResolution */

        /* ------------------------- Endpoint Descriptor */
        7,                      /* 0:bLength */
        USB_DT_ENDPOINT,        /* 1:bDescriptorType */
        VALUE_H_81,             /* 2:bEndpointAddress (IN transfer, Endpoint Number 1) */
        0x05,                   /* 3:bmAttributes : bmAttributes (Isochronous, Async, DataEndpoint) */
        VALUE_H_C8,             /* 4:wMaxPacketSize : 0x00C8 (200) */
        0x00,                   /* 5:wMaxPacketSize : 0x00C8 (200) */
        4,                      /* 6:bInterval : 0x04 (1ms) */

        /* - Audio 2.0 AS ISO Audio Data Endpoint Descriptor */
        8,                      /* 0:bLength */
        USB_AUD_CS_ENDPOINT,    /* 1:bDescriptorType */
        USB_AUD_EP_GENERAL,     /* 2:bDescriptorSubtype */
        0x01,                   /* 3:bmAttributes */
        0x00,                   /* 4:bmControls */
        0x00,                   /* 5:bLockDelayUnits */
        0x00,                   /* 6:wLockDelay */
        0x00,                   /* 7:wLockDelay */
};

#define USB_AUD_CD_FULL_LEN     (VALUE_208)
#define DEVICE_FRAME_FULL_LEN   (VALUE_226)
uint8_t g_device_framework_full_speed[DEVICE_FRAME_FULL_LEN] =
{
    USB_DD_BLENGTH,                                             /* 0:bLength */
    USB_DT_DEVICE,                                              /* 1:bDescriptorType */
    (USB_BCDNUM & (uint8_t) USB_UCHAR_MAX),                     /* 2:bcdUSB_lo */
    ((uint8_t) (USB_BCDNUM >> 8) & (uint8_t) USB_UCHAR_MAX),    /* 3:bcdUSB_hi */
    0,                                                          /* 4:bDeviceClass */
    0,                                                          /* 5:bDeviceSubClass */
    0,                                                          /* 6:bDeviceProtocol */
    (uint8_t) USB_DCPMAXP,                                      /* 7:bMAXPacketSize(for DCP) */
    (USB_VENDORID & (uint8_t) USB_UCHAR_MAX),                   /* 8:idVendor_lo */
    ((uint8_t) (USB_VENDORID >> 8) & (uint8_t) USB_UCHAR_MAX),  /* 9:idVendor_hi */
    ((uint16_t) USB_PRODUCTID & (uint8_t) USB_UCHAR_MAX),       /* 10:idProduct_lo */
    ((uint8_t) (USB_PRODUCTID >> 8) & (uint8_t) USB_UCHAR_MAX), /* 11:idProduct_hi */
    (USB_RELEASE & (uint8_t) USB_UCHAR_MAX),                    /* 12:bcdDevice_lo */
    ((uint8_t) (USB_RELEASE >> 8) & (uint8_t) USB_UCHAR_MAX),   /* 13:bcdDevice_hi */
    1,                                                          /* 14:iManufacturer */
    2,                                                          /* 15:iProduct */
    3,                                                          /* 16:iSerialNumber */
    USB_CONFIGNUM,                                              /* 17:bNumConfigurations */

    /* CONFIGURATION Descriptor */
    USB_CD_BLENGTH,                     /* 0:bLength */
#ifdef APL_AUDIO_20
    USB_DT_OTHER_SPEED_CONF,            /* 1:bDescriptorType */    /* For High-speed */
#else
    USB_DT_CONFIGURATION,               /* 1:bDescriptorType */    /* For Full-speed */
#endif
    VALUE_H_D0,                         /* 2:wTotalLength(L) 208 */
    0x00,                               /* 3:wTotalLength(H) */
    0x03,                               /* 4:bNumInterfaces */
    0x01,                               /* 5:bConfigurationValue */
    0x00,                               /* 6:iConfiguration */
    VALUE_H_A0,                         /* 7:bmAttributes */
    VALUE_H_32,                         /* 8:MAXPower (100mA unit) */

    /* Interface Association Descriptor (IAD) */
    0x08,                               /* 0:bLength */
    USB_IAD_TYPE,                       /* 1:bDescriptorType */
    0x00,                               /* 2:bFirstInterface */
    0x03,                               /* 3:bInterfaceCount */
    USB_IFCLS_AUD,                      /* 4:bFunctionClass  */
    0x00,                               /* 5:bFunctionSubClass */
    0x10,                               /* 6:bFunctionProtocol */
    0x00,                               /* 7:iFunction */

    /*:::: AudioControl Interface Descriptor ::::*/
    /* Standard AC Interface Descriptor */
    0x09,                   /* 0:bLength */
    USB_DT_INTERFACE,       /* 1:bDescriptorType */
    0x00,                   /* 2:bInterfaceNumber */
    0x00,                   /* 3:bAlternateSetting */
    0x00,                   /* 4:bNumEndpoints */
    USB_IFCLS_AUD,          /* 5:bInterfaceClass (Audio) */
    USB_AUD_CONTROL,        /* 6:bInterfaceSubClass (Audio Control) */
    0x00,                   /* 7:bInterfaceProtocol */
    0x00,                   /* 8:iInterface */

    /* Class-Specific AC(Audio Control) Interface Header Descriptor */
    0x0A,                   /* 0:bLength */
    USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
    USB_AUD_HEADER,         /* 2:bDescriptorSubType */
    0x00,                   /* 3:bcdADC(L) */
    0x01,                   /* 4:bcdADC(H) (Audio Class 1.00) */
    VALUE_H_48,             /* 5:wTotalLength(L) */ /* This Descriptor + Unit and Terminal Descriptor */
    0x00,                   /* 6:wTotalLength(H) */
    0x02,                   /* 7:bInCollection */ /* The number of AudioControl Interface Descriptor */
    0x01,                   /* 8:baInterfaceNr[0] */
    0x02,                   /* 9:baInterfaceNr[1] */

    /* AudioControl Input Terminal Descriptor (TerminalID 4) */
    0x0C,                   /* 0:bLength */
    USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
    USB_AUD_INPUT_TERMINAL, /* 2:bDescriptorSubType */
    0x04,                   /* 3:bTerminalID */
    0x01,                   /* 4:wTerminalType[L] (USB Streaming) */
    0x01,                   /* 5:wTerminalType[H] (USB Streaming) ) */
    0x09,                   /* 6:bAssocTerminal */
    0x02,                   /* 7:bNrChannels */
    0x03,                   /* 8:bmChannelConfig[L] */
    0x00,                   /* 9:bmChannelConfig[H] */
    0x00,                   /* 10:iChannelNames */
    0x00,                   /* 11:iTerminal */

    /* AudioControl FeatureUnit Descriptor (TerminalID 5) */
    0x0A,                   /* 0:bLength */
    USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
    USB_AUD_FEATURE_UNIT,   /* 2:bDescriptorSubType */
    0x05,                   /* 3:bUnitID */
    0x04,                   /* 4:bSourceID */
    USB_IFCLS_AUD,          /* 5:bControlSize*/
    0x03,                   /* 6:bmaControls(0) */
    0x00,                   /* 7:bmaControls(1) */
    0x00,                   /* 8:bmaControls(2) */
    0x00,                   /* 9:iFeature */

    /* AudioControl Output Terminal Descriptor (TerminalID 6) */
    0x09,                   /* 0:bLength */
    USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
    USB_AUD_OUTPUT_TERMINAL,/* 2:bDescriptorSubType */
    0x06,                   /* 3:bTerminalID */
    0x02,                   /* 4:wTerminalType[L] */
    0x04,                   /* 5:wTerminalType[H] */
    0x00,                   /* 6:bAssocTerminal */
    0x05,                   /* 7:bSourceID */
    0x00,                   /* 8:iTerminal */

    /* AudioControl Input Terminal Descriptor (TerminalID 7) */
    0x0C,                   /* 0:bLength */
    USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
    USB_AUD_INPUT_TERMINAL, /* 2:bDescriptorSubType (Input Terminal) */
    0x07,                   /* 3:TerminalID */
    0x01,                   /* 4:wTermialType(L) (HeadSet) */
    0x02,                   /* 5:wTermialType(H) (HeadSet) */
    0x00,                   /* 6:bAssocTerminal */
    0x02,                   /* 7:bNrChannels */
    0x03,                   /* 8:bmChannelconfig(L) */
    0x00,                   /* 9:bmChannelconfig(H) */
    0x00,                   /* 10:iChannleNames */
    0x00,                   /* 11:iTerminal */

    /* AudioControl FeatureUnit Descriptor (TerminalID 8) */
    0x0A,                   /* 0:bLength */
    USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
    USB_AUD_FEATURE_UNIT,   /* 2:bDescriptorSubType */
    0x08,                   /* 3:bUnitID */
    0x07,                   /* 4:bSourceID */
    0x01,                   /* 5:bControlSize*/
    0x03,                   /* 6:bmaControls(0):  master channel 0:        */
                            /*                    Bit 0: Mute              */
                            /*                    Bit 1: Volume            */
                            /*                    Bit 2: Bass              */
                            /*                    Bit 3: Mid               */
                            /*                    Bit 4: Treble            */
                            /*                    Bit 5: Graphic Equalizer */
                            /*                    Bit 6: Automatic Gain    */
                            /*                    Bit 7: Delay             */
                            /*                    Bit 8: Bass Boost        */
                            /*                    Bit 9: Loudness          */
    0x00,                   /* 7:bmaControls(1) */
    0x00,                   /* 8:bmaControls(2) */
    0x00,                   /* 9:iFeature */

    /* AudioControl Output Terminal Descriptor (TerminalID 9) */
    0x09,                   /* 0:bLength */
    USB_AUD_CS_INTERFACE,   /* 1:bDescriptorType */
    USB_AUD_OUTPUT_TERMINAL,/* 2:bDescriptorSubType */
    0x09,                   /* 3:bTerminalID */
    0x01,                   /* 4:wTerminalType[L] (USB Streaming) */
    0x01,                   /* 5:wTerminalType[H] (USB Streaming) */
    0x04,                   /* 6:bAssocTerminal */
    0x08,                   /* 7:bSourceID */
    0x00,                   /* 8:iTerminal */

    /* INTERFACE Descriptor */
    0x09,                   /* 0:bLength */
    0x04,                   /* 1:bDescriptorType */
    0x01,                   /* 2:bInterfaceNumber */
    0x00,                   /* 3:bAlternateSetting */
    0x00,                   /* 4:bNumEndpoints */
    0x01,                   /* 5:bInterfaceClass (Audio) */
    0x02,                   /* 6:bInterfaceSubClass (AudioStreaming) */
    0x00,                   /* 7:bInterfaceProtocol (Not Used.Must be set to 0.) */
    0x00,                   /* 8:iInterface */

    /* INTERFACE Descriptor */
    0x09,                   /* 0:bLength */
    0x04,                   /* 1:bDescriptorType */
    0x01,                   /* 2:bInterfaceNumber */
    0x01,                   /* 3:bAlternateSetting */
    0x01,                   /* 4:bNumEndpoints */
    0x01,                   /* 6:bInterfaceClass (Audio) */
    0x02,                   /* 7:bInterfaceSubClass (AudioStreaming) */
    0x00,                   /* 8:bInterfaceProtocol (Not Used.Must be set to 0.) */
    0x00,                   /* 9:iInterface */

    /* Audio Class Specific INTERFACE Descriptor */
    0x07,                   /* 0:bLength */
    VALUE_H_24,             /* 1:bDescriptorType */
    0x01,                   /* 2:bDescriptorSubtype */
    0x04,                   /* 3:bTerminalLink */
    0x03,                   /* 4:bDelay */
    0x01,                   /* 5:wFormatTag(L) */
    0x00,                   /* 6:wFormatTag(H) */

    /* Audio Class Specific INTERFACE Descriptor */
    0x0E,                   /* 0:bLength */
    VALUE_H_24,             /* 1:bDescriptorType */
    0x02,                   /* 2:bDescriptorSubtype */
    0x01,                   /* 3:bFormatType */
    0x02,                   /* 4:bNrchannels */
    0x02,                   /* 5:bSubframeSize */
    0x10,                   /* 6:BitResolution */
    0x02,                   /* 7:bSamfreqType */
    VALUE_H_44,             /* 8:tSamFreq[0] (L) */
    VALUE_H_AC,             /* 9:tSamFreq[0] (M) */
    0x00,                   /* 10:tSamFreq[0] (H) */
    VALUE_H_80,             /* 11:tSamFreq[1] (L) */
    VALUE_H_BB,             /* 12:tSamFreq[1] (M) */
    0x00,                   /* 13:tSamFreq[1] (H) */

    /* ENDPOINT Descriptor */
    0x09,                   /* 0:bLength */
    0x05,                   /* 1:bDescriptorType */
    0x02,                   /* 2:bEndpointAddress */
    0x09,                   /* 3:bmAttributes */
    VALUE_H_C0,             /* 4:wMaxPacketSize (L) */
    0x00,                   /* 5:wMaxPacketSize (H) */
    0x01,                   /* 6:bInterval */
    0x00,                   /* 7:bRefresh */
    0x00,                   /* 8:bSynchAddress */

    /* Audio Class Specific ENDPOINT Descriptor */
    0x07,                   /* 0:bLength */
    VALUE_H_25,             /* 1:bDescriptorType */
    0x01,                   /* 2:bDescriptorSubtype */
    0x01,                   /* 3:bmAttributes */
    0x01,                   /* 4:bLockDelayUnits */
    0x04,                   /* 5:wLockDelay */
    0x00,                   /* 6: */


    /* INTERFACE Descriptor */
    0x09,                   /* 0:bLength */
    0x04,                   /* 1:bDescriptorType */
    0x02,                   /* 2:bInterfaceNumber */
    0x00,                   /* 3:bAlternateSetting */
    0x00,                   /* 4:bNumEndpoints */
    0x01,                   /* 5:bInterfaceClass (Audio) */
    0x02,                   /* 6:bInterfaceSubClass (AudioStreaming) */
    0x00,                   /* 7:bInterfaceProtocol (Not Used.Must be set to 0.) */
    0x00,                   /* 8:iInterface */

    /* INTERFACE Descriptor */
    0x09,                   /* 0:bLength */
    0x04,                   /* 1:bDescriptorType */
    0x02,                   /* 2:bInterfaceNumber */
    0x01,                   /* 3:bAlternateSetting */
    0x01,                   /* 4:bNumEndpoints */
    0x01,                   /* 5:bInterfaceClass (Audio) */
    0x02,                   /* 6:bInterfaceSubClass (AudioStreaming) */
    0x00,                   /* 7:bInterfaceProtocol (Not Used.Must be set to 0.) */
    0x00,                   /* 8:iInterface */

    /* Audio Class Specific INTERFACE Descriptor */
    0x07,                   /* 0:bLength */
    VALUE_H_24,             /* 1:bDescriptorType */
    0x01,                   /* 2:bDescriptorSubType (General) */
    0x09,                   /* 3:bTerminalLink */
    0x01,                   /* 4:bDelay */
    0x01,                   /* 5:wFormatTag(L) */
    0x00,                   /* 6:wFormatTag(H) (PCM) */

    /* Audio Class Specific INTERFACE Descriptor */
    0x0E,                   /* 0:bLength */
    VALUE_H_24,             /* 1:bDescriptorType */
    0x02,                   /* 2:bDescriptorSubtype */
    0x01,                   /* 3:bFormatType */
    0x02,                   /* 4:bNrchannels */
    0x02,                   /* 5:bSubframeSize */
    0x10,                   /* 6:BitResolution */
    0x02,                   /* 7:bSamfreqType */
    VALUE_H_44,             /* 8:tSamFreq[0] (L) */
    VALUE_H_AC,             /* 9:tSamFreq[0] (M) */
    0x00,                   /* 10:tSamFreq[0] (H) */
    VALUE_H_80,             /* 11:tSamFreq[1] (L) */
    VALUE_H_BB,             /* 12:tSamFreq[1] (M) */
    0x00,                   /* 13:tSamFreq[1] (H) */

    /* ENDPOINT Descriptor */
    0x09,                   /* 0:bLength */
    0x05,                   /* 1:bDescriptorType */
    VALUE_H_81,             /* 2:bEndpointAddress */
    0x05,                   /* 3:bmAttributes */
    VALUE_H_C8,             /* 4:wMaxPacketSize */
    0x00,                   /* 5:wMaxPacketSize */
    0x01,                   /* 6:bInterval */
    0x00,                   /* 7:bRefresh */
    0x00,                   /* 8:bSynchAddress */

    /* Audio Class Specific ENDPOINT Descriptor */
    0x07,                   /* 0:bLength */
    VALUE_H_25,             /* 1:bDescriptorType */
    0x01,                   /* 2:bDescriptorSubType */
    0x01,                   /* 3:bmAttributes */
    0x00,                   /* 4:bLockDelayUnits */
    0x00,                   /* 5:wLockDelay */
    0x00,                   /* 6: */
};

uint8_t g_string_framework[] =
{
    /* iManufacturer */
    0x09, 0x04, 0x1, 7,
    'R',
    'E',
    'N',
    'E',
    'S',
    'A',
    'S',

    /* iProduct */
    0x09, 0x04, 0x2, 23,
    'U',
    'S',
    'B',
    ' ',
    'A',
    'u',
    'd',
    'i',
    'o',
    ' ',
    'D',
    'e',
    'm',
    'o',
    'n',
    's',
    't',
    'r',
    'a',
    't',
    'i',
    'o',
    'n',

    /* iInterface */
    0x09, 0x04, 0x3, 8,
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',

    /* iConfiguration */
    0x09, 0x04, 0x4, 10,
    'F',
    'u',
    'l',
    'l',
    '-',
    'S',
    'p',
    'e',
    'e',
    'd',

    /* iConfiguration */
    0x09, 0x04, 0x5, 8,
    'H',
    'i',
    '-',
    'S',
    'p',
    'e',
    'e',
    'd',

    /* iConfiguration */
    0x09, 0x04, 0x6, 13,
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '0',
    '1',
};

uint8_t g_language_id_framework[] =
{
    0x09,
    0x04,
};

/*******************************************************************************************************************//**
 * @} (end addtogroup usbx_paud_ep)
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 End  Of File
 **********************************************************************************************************************/
