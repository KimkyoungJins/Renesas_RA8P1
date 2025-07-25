/***********************************************************************************************************************
 * File Name    : rm_usbx_phid_descriptor.c
 * Description  : Contains macros, data structures and functions used in the EP
 **********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright (c) 2020 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
***********************************************************************************************************************/

/******************************************************************************
 * Includes   <System Includes> , "Project Includes"
 ******************************************************************************/

#include "r_usb_basic_api.h"
#include "r_usb_phid_api.h"

/******************************************************************************
 * Macro definitions
 ******************************************************************************/
#define USB_BCDNUM                   (0x0200U) /* bcdUSB */
#define USB_RELEASE                  (0x0200U) /* Release Number */
#define USB_CONFIGNUM                (1U)      /* Configuration number */
#define USB_DCPMAXP                  (64U)     /* DCP max packet size */

#define USB_IFPROTOCOL               (USB_IFPRO_KBD)
#define ITEM_LEN                     (76U)
#define MXPS                         (8U)
#define NUM_EP                       (1U)

/* Vendor ID & Product ID setting */
#define USB_VENDORID                 (0x0000U)
#define USB_PRODUCTID                (0x0013U)

/* Descriptor length */
#define NUM_STRING_DESCRIPTOR        (7U)

/* Configuration descriptor length */
#define CD_LEN                       (34U)

/* Descriptor data mask */
#define USB_VALUE_32                 (32)
#define USB_VALUE_100                (100)
#define USB_UCHAR_MAX                (0xffU)
#define USB_W_TOTAL_LENGTH_MASK      (256U)
#define USB_VALUE_22H                (0x22U)
#define USB_VALUE_76                 (76)
#define USB_VALUE_A1H                (0xA1)
#define USB_VALUE_E0H                (0xE0)
#define USB_VALUE_29H                (0x29)
#define USB_VALUE_E7H                (0xE7)
#define USB_VALUE_25H                (0x25)
#define USB_VALUE_75H                (0x75)
#define USB_VALUE_95H                (0x95)
#define USB_VALUE_81H                (0x81)
#define USB_VALUE_29H                (0x29)
#define USB_VALUE_91H                (0x91)
#define USB_VALUE_65H                (0x65)
#define USB_VALUE_26H                (0x26)
#define USB_VALUE_C0H                (0xC0)

/*******************************************************************************************************************//**
 *  Device Descriptor
 **********************************************************************************************************************/
#define DEVICE_FRAME_LENGTH_SPEED    (52U)
uint8_t g_device_framework_full_speed[DEVICE_FRAME_LENGTH_SPEED] =
{
    /* Device Descriptor */
    USB_DD_BLENGTH,                                                       /*  0:bLength */
    USB_DT_DEVICE,                                                        /*  1:bDescriptorType */
    (uint8_t) (USB_BCDNUM & (uint8_t) USB_UCHAR_MAX),                     /*  2:bcdUSB_lo */
    (uint8_t) ((uint8_t) (USB_BCDNUM >> 8) & (uint8_t) USB_UCHAR_MAX),    /*  3:bcdUSB_hi */
    0x00,                                                                 /*  4:bDeviceClass */
    0x00,                                                                 /*  5:bDeviceSubClass */
    0x00,                                                                 /*  6:bDeviceProtocol */
    (uint8_t) USB_DCPMAXP,                                                /*  7:bMAXPacketSize(for DCP) */
    (uint8_t) (USB_VENDORID & (uint8_t) USB_UCHAR_MAX),                   /*  8:idVendor_lo */
    (uint8_t) ((uint8_t) (USB_VENDORID >> 8) & (uint8_t) USB_UCHAR_MAX),  /*  9:idVendor_hi */
    (uint8_t) (USB_PRODUCTID & (uint8_t) USB_UCHAR_MAX),                  /* 10:idProduct_lo */
    (uint8_t) ((uint8_t) (USB_PRODUCTID >> 8) & (uint8_t) USB_UCHAR_MAX), /* 11:idProduct_hi */
    (uint8_t) (USB_RELEASE & (uint8_t) USB_UCHAR_MAX),                    /* 12:bcdDevice_lo */
    (uint8_t) ((uint8_t) (USB_RELEASE >> 8) & (uint8_t) USB_UCHAR_MAX),   /* 13:bcdDevice_hi */
    1,                                                                    /* 14:iManufacturer */
    2,                                                                    /* 15:iProduct */
    3,                                                                    /* 16:iSerialNumber */
    USB_CONFIGNUM,                                                        /* 17:bNumConfigurations */

    /* Configuration Descriptor */
    USB_CD_BLENGTH,                                                       /*  0:bLength */
    USB_DT_CONFIGURATION,                                                 /*  1:bDescriptorType */
    (uint8_t) (CD_LEN % USB_W_TOTAL_LENGTH_MASK),                         /*  2:wTotalLength(L) */
    (uint8_t) (CD_LEN / USB_W_TOTAL_LENGTH_MASK),                         /*  3:wTotalLength(H) */
    1,                                                                    /*  4:bNumInterfaces */
    1,                                                                    /*  5:bConfigurationValue */
    4,                                                                    /*  6:iConfiguration */
    (uint8_t) (USB_CF_RESERVED | USB_CF_SELFP | USB_CF_RWUPON),           /*  7:bmAttributes */
    (uint8_t) (USB_VALUE_100 / 2),                                        /*  8:bMaxPower (2mA unit) */

    /* Interface Descriptor */
    USB_ID_BLENGTH,                                                       /*  0:bLength */
    USB_DT_INTERFACE,                                                     /*  1:bDescriptor */
    0,                                                                    /*  2:bInterfaceNumber */
    0,                                                                    /*  3:bAlternateSetting */
    NUM_EP,                                                               /*  4:bNumEndpoints */
    USB_IFCLS_HID,                                                        /*  5:bInterfaceClass(HID) */
    USB_IFSUB_NOBOOT,                                                     /*  6:bInterfaceSubClass(NonBOOT) */
    USB_IFPROTOCOL,                                                       /*  7:bInterfaceProtocol */
    0,                                                                    /*  8:iInterface */

    /* HID Descriptor */
    9,                                                                    /*  0:bLength */
    USB_DT_TYPE_HIDDESCRIPTOR,                                            /*  1:bDescriptor */
    0x00,                                                                 /*  2:HID Ver */
    0x01,                                                                 /*  3:HID Ver */
    0x00,                                                                 /*  4:bCountryCode */
    0x01,                                                                 /*  5:bNumDescriptors */
    USB_VALUE_22H,                                                        /*  6:bDescriptorType */
    ITEM_LEN,                                                             /*  7:wItemLength(L) */
    0x00,                                                                 /*  8:wItemLength(H) */

    /* Endpoint Descriptor 0 */
    USB_ED_BLENGTH,                                                       /*  0:bLength */
    USB_DT_ENDPOINT,                                                      /*  1:bDescriptorType */
    (uint8_t) (USB_EP_IN | USB_EP1),                                      /*  2:bEndpointAddress */
    USB_EP_INT,                                                           /*  3:bmAttribute */
    MXPS,                                                                 /*  4:wMaxPacketSize_lo */
    0,                                                                    /*  5:wMaxPacketSize_hi */
    0x0A,                                                                 /*  6:bInterval */
};

/*******************************************************************************************************************//**
 *  String Descriptor
 **********************************************************************************************************************/
#define STRING_FRAMEWORK_LENGTH    (53U)
uint8_t g_string_framework[] =
{
    /* iManufacturer */
    0x09, 0x04, 0x1, 7,
    'R',
    'e',
    'n',
    'e',
    's',
    'a',
    's',

    /* iProduct */
    0x09, 0x04, 0x2, 15,
    'U',
    'S',
    'B',
    ' ',
    'P',
    'e',
    'r',
    'i',
    ' ',
    'H',
    'I',
    'D',
    ' ',
    'F',
    'W',

    /* iSerialNumber */
    0x09, 0x04, 0x3, 4,
    'P',
    '0',
    '0',
    '1',

    /* iConfiguration */
    0x09, 0x04, 0x3, 11,
    'F',
    'S',
    ' ',
    'K',
    'e',
    'y',
    'B',
    'o',
    'a',
    'r',
    'd',
};

#define LANGUAGE_ID_FRAME_WORK_LENGTH    (2U)
uint8_t g_language_id_framework[] =
{
    0x09,
    0x04,
};

/*******************************************************************************************************************//**
 *  HID Report Descriptor for Keyboard
 **********************************************************************************************************************/
uint8_t g_apl_report[USB_VALUE_76] =
{
    0x05, 0x01,                         /* Usage Page (Generic Desktop) */
    0x09, 0x06,                         /* Usage (Keyboard) */
    USB_VALUE_A1H, 0x01,                /* Collection (Application) */
    0x05, 0x07,                         /* Usage Page (Key Codes); */
    0x19, USB_VALUE_E0H,                /* Usage Minimum (224) */
    USB_VALUE_29H, USB_VALUE_E7H,       /* Usage Maximum (231) */
    0x15, 0x00,                         /* Logical Minimum (0) */
    USB_VALUE_25H, 0x01,                /* Logical Maximum (1) */
    USB_VALUE_75H, 0x01,                /* Report Size (1) */
    USB_VALUE_95H, 0x08,                /* Report Count (8) */
    USB_VALUE_81H, 0x02,                /* Input (Data , Variable , Absolute)  ;Modifier byte */
    USB_VALUE_95H, 0x01,                /* Report Count (1) */
    USB_VALUE_75H, 0x08,                /* Report Size (8) */
    USB_VALUE_81H, 0x01,                /* Input (Constant) ;Reserved byte */
    USB_VALUE_95H, 0x05,                /* Report Count (5) */
    USB_VALUE_75H, 0x01,                /* Report Size (1) */
    0x05, 0x08,                         /* Usage Page (Page# for LEDs) */
    0x19, 0x01,                         /* Usage Minimum (1) */
    USB_VALUE_29H, 0x05,                /* Usage Maximum (5) */
    USB_VALUE_91H, 0x02,                /* Output (Data , Variable , Absolute)  ;LED report */
    USB_VALUE_95H, 0x01,                /* Report Count (1) */
    USB_VALUE_75H, 0x03,                /* Report Size (3) */
    USB_VALUE_91H, 0x01,                /* Output (Constant) ;LED report padding */
    USB_VALUE_95H, 0x06,                /* Report Count (6) */
    USB_VALUE_75H, 0x08,                /* Report Size (8) */
    0x15, 0x00,                         /* Logical Minimum (0) */
    USB_VALUE_25H, USB_VALUE_65H,       /* Logical Maximum(101) */
    0x05, 0x07,                         /* Usage Page (Key Codes) */
    0x19, 0x00,                         /* Usage Minimum (0) */
    USB_VALUE_29H, USB_VALUE_65H,       /* Usage Maximum (101) */
    USB_VALUE_81H, 0x00,                /* Input (Data , Array)  ;Key arrays (6 bytes) */

    /* *** The OUTPUR REPORT *** */
    0x09, 0x00,                         /* Usage ID within this page (Vendor defined)*/
    0x15, 0x00,                         /* Logical Min 0 */
    USB_VALUE_26H, USB_UCHAR_MAX, 0x00, /* Logical Max 255 */
    USB_VALUE_75H, 0x08,                /* Size 8 Bits (Each Field will be 8bits) */
    USB_VALUE_95H, 0x01,                /* Count (Number of fields(bytes) in OUTPUT report) */
    USB_VALUE_91H, 0x02,                /* Output Report - type variable data */
    USB_VALUE_C0H,                      /* End Collection */
};

/*******************************************************************************************************************//**
 * End Of File
 **********************************************************************************************************************/
