/***********************************************************************************************************************
 * File Name    : rm_usbx_pmsc_descriptor.c
 * Description  : Contains macros and functions used in rm_usbx_pmsc_descriptor.c
 **********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright (c) 2020 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
***********************************************************************************************************************/

/*******************************************************************************************************************//**
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
#include "r_usb_basic.h"

/*******************************************************************************************************************//**
 * Macro definitions
 **********************************************************************************************************************/
/* bcdUSB */
#define USB_BCDNUM                (0x0200U)
/* Release Number */
#define USB_RELEASE               (0x0200U)
/* DCP max packet size */
#define USB_DCPMAXP               (0x40U)
/* Configuration number */
#define USB_CONFIGNUM             (0x01U)
/* Vendor ID */
#define USB_VENDORID              (0x0000U)
/* Product ID */
#define USB_PRODUCTID             (0x0008U)

#define USB_PMSC_QD_BLENGTH       (0x0aU)
#define USB_PMSC_CD_BLENGTH       (0x20U)

/* Sub_class code */
#define USB_ATAPI                 ((uint8_t) 0x05U)
#define USB_SCSI                  ((uint8_t) 0x06U)

/* Protocol code */
#define USB_BOTP                  ((uint8_t) 0x50U)
#define USB_TOTALEP               ((uint8_t) 0x02U)

/* Select SubClass */

// #define USB_INTERFACE_SUBCLASS  (USB_SCSI)
#define USB_INTERFACE_SUBCLASS    (USB_ATAPI)

#define USB_VALUE_FFH             (0xFFU)
#define USB_VALUE_2               (2U)
#define USB_VALUE_50              (50U)
#define USB_VALUE_60              (60U)
#define USB_VALUE_64              (64U)
#define USB_VALUE_93              (93U)
#define USB_VALUE_256             (256U)

/*******************************************************************************************************************//**
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/
#define DEVICE_FRAME_LENGTH_FULL_SPEED  (USB_VALUE_50)
/* Standard Device Descriptor */
uint8_t g_device_framework_full_speed[DEVICE_FRAME_LENGTH_FULL_SPEED] =
{
    USB_DD_BLENGTH,                                             /*  0:bLength */
    USB_DT_DEVICE,                                              /*  1:bDescriptorType */
    (USB_BCDNUM & (uint8_t) USB_VALUE_FFH),                     /*  2:bcdUSB_lo */
    ((uint8_t) (USB_BCDNUM >> 8) & (uint8_t) USB_VALUE_FFH),    /*  3:bcdUSB_hi */
    0,                                                          /*  4:bDeviceClass */
    0,                                                          /*  5:bDeviceSubClass */
    0,                                                          /*  6:bDeviceProtocol */
    (uint8_t) USB_DCPMAXP,                                      /*  7:bMAXPacketSize(for DCP) */
    (USB_VENDORID & (uint8_t) USB_VALUE_FFH),                   /*  8:idVendor_lo */
    ((uint8_t) (USB_VENDORID >> 8) & (uint8_t) USB_VALUE_FFH),  /*  9:idVendor_hi */
    ((uint16_t) USB_PRODUCTID & (uint8_t) USB_VALUE_FFH),       /* 10:idProduct_lo */
    ((uint8_t) (USB_PRODUCTID >> 8) & (uint8_t) USB_VALUE_FFH), /* 11:idProduct_hi */
    (USB_RELEASE & (uint8_t) USB_VALUE_FFH),                    /* 12:bcdDevice_lo */
    ((uint8_t) (USB_RELEASE >> 8) & (uint8_t) USB_VALUE_FFH),   /* 13:bcdDevice_hi */
    1,                                                          /* 14:iManufacturer */
    2,                                                          /* 15:iProduct */
    6,                                                          /* 16:iSerialNumber */
    USB_CONFIGNUM,                                              /* 17:bNumConfigurations */

    USB_CD_BLENGTH,                       /*  0:bLength */
    USB_DT_CONFIGURATION,                 /*  1:bDescriptorType */  /* For Full-speed */
    //USB_DT_OTHER_SPEED_CONF,            /*  1:bDescriptorType */  /* For High-speed */
    USB_PMSC_CD_BLENGTH % USB_VALUE_256,  /*  2:wTotalLength(L) */
    USB_PMSC_CD_BLENGTH / USB_VALUE_256,  /*  3:wTotalLength(H) */
    1,                                    /*  4:bNumInterfaces */
    1,                                    /*  5:bConfigurationValue */
    4,                                    /*  6:iConfiguration */
    USB_CF_RESERVED | USB_CF_SELFP,       /*  7:bmAttributes */
    (10 / 2),                             /*  8:MAXPower (2mA unit) */

    /* Interface Descriptor */
    USB_ID_BLENGTH,                       /*  0:bLength */
    USB_DT_INTERFACE,                     /*  1:bDescriptor */
    0,                                    /*  2:bInterfaceNumber */
    0,                                    /*  3:bAlternateSetting */
    2,                                    /*  4:bNumEndpoints */
    USB_IFCLS_MAS,                        /*  5:bInterfaceClass */
    USB_INTERFACE_SUBCLASS,               /*  6:bInterfaceSubClass */
    USB_BOTP,                             /*  7:bInterfaceProtocol */
    3,                                    /*  8:iInterface */

    /* Endpoint Descriptor 0 */
    USB_ED_BLENGTH,                       /*  0:bLength */
    USB_DT_ENDPOINT,                      /*  1:bDescriptorType */
    USB_EP_IN | USB_EP1,                  /*  2:bEndpointAddress */
    USB_EP_BULK,                          /*  3:bmAttribute */
    USB_VALUE_64,                         /*  4:wMAXPacketSize_lo */
    0,                                    /*  5:wMAXPacketSize_hi */
    0,                                    /*  6:bInterval */

    /* Endpoint Descriptor 1 */
    USB_ED_BLENGTH,                       /*  0:bLength */
    USB_DT_ENDPOINT,                      /*  1:bDescriptorType */
    USB_EP_OUT | USB_EP2,                 /*  2:bEndpointAddress */
    USB_EP_BULK,                          /*  3:bmAttribute */
    USB_VALUE_64,                         /*  4:wMAXPacketSize_lo */
    0,                                    /*  5:wMAXPacketSize_hi */
    1,                                    /*  6:bInterval */
};

#define DEVICE_FRAME_LENGTH_HI_SPEED    (USB_VALUE_60)
uint8_t g_device_framework_hi_speed[DEVICE_FRAME_LENGTH_HI_SPEED] =
{
    USB_DD_BLENGTH,                                              /*  0:bLength */
    USB_DT_DEVICE,                                               /*  1:bDescriptorType */
    (USB_BCDNUM & (uint8_t) USB_VALUE_FFH),                      /*  2:bcdUSB_lo */
    ((uint8_t) (USB_BCDNUM >> 8) & (uint8_t) USB_VALUE_FFH),     /*  3:bcdUSB_hi */
    0,                                                           /*  4:bDeviceClass */
    0,                                                           /*  5:bDeviceSubClass */
    0,                                                           /*  6:bDeviceProtocol */
    (uint8_t) USB_DCPMAXP,                                       /*  7:bMAXPacketSize(for DCP) */
    (USB_VENDORID & (uint8_t) USB_VALUE_FFH),                    /*  8:idVendor_lo */
    ((uint8_t) (USB_VENDORID >> 8) & (uint8_t) USB_VALUE_FFH),   /*  9:idVendor_hi */
    ((uint16_t) USB_PRODUCTID & (uint8_t) USB_VALUE_FFH),        /* 10:idProduct_lo */
    ((uint8_t) (USB_PRODUCTID >> 8) & (uint8_t) USB_VALUE_FFH),  /* 11:idProduct_hi */
    (USB_RELEASE & (uint8_t) USB_VALUE_FFH),                     /* 12:bcdDevice_lo */
    ((uint8_t) (USB_RELEASE >> 8) & (uint8_t) USB_VALUE_FFH),    /* 13:bcdDevice_hi */
    1,                                                           /* 14:iManufacturer */
    2,                                                           /* 15:iProduct */
    6,                                                           /* 16:iSerialNumber */
    USB_CONFIGNUM,                                               /* 17:bNumConfigurations */

    USB_PMSC_QD_BLENGTH,                                      /*  0:bLength */
    USB_DT_DEVICE_QUALIFIER,                                  /*  1:bDescriptorType */
    (USB_BCDNUM & (uint8_t) USB_VALUE_FFH),                   /*  2:bcdUSB_lo */
    ((uint8_t) (USB_BCDNUM >> 8) & (uint8_t) USB_VALUE_FFH),  /*  3:bcdUSB_hi */
    0,                                                        /*  4:bDeviceClass */
    0,                                                        /*  5:bDeviceSubClass */
    0,                                                        /*  6:bDeviceProtocol */
    (uint8_t) USB_DCPMAXP,                                    /*  7:bMAXPacketSize(for DCP) */
    USB_CONFIGNUM,                                            /*  8:bNumConfigurations */
    0,                                                        /*  9:bReserved */

    USB_CD_BLENGTH,                       /*  0:bLength */
    USB_DT_CONFIGURATION,                 /*  1:bDescriptorType */  /* For High-speed */
   // USB_DT_OTHER_SPEED_CONF,            /*  1:bDescriptorType */  /* For Full-speed */
    USB_PMSC_CD_BLENGTH % USB_VALUE_FFH,  /*  2:wTotalLength(L) */
    USB_PMSC_CD_BLENGTH / USB_VALUE_FFH,  /*  3:wTotalLength(H) */
    1,                                    /*  4:bNumInterfaces */
    1,                                    /*  5:bConfigurationValue */
    5,                                    /*  6:iConfiguration */
    USB_CF_RESERVED | USB_CF_SELFP,       /*  7:bmAttributes */
    (10 / 2),                             /*  8:MAXPower (2mA unit) */

    /* Interface Descriptor */
    9,                                    /*  0:bLength */
    USB_DT_INTERFACE,                     /*  1:bDescriptor */
    0,                                    /*  2:bInterfaceNumber */
    0,                                    /*  3:bAlternateSetting */
    2,                                    /*  4:bNumEndpoints */
    USB_IFCLS_MAS,                        /*  5:bInterfaceClass */
    USB_INTERFACE_SUBCLASS,               /*  6:bInterfaceSubClass */
    USB_BOTP,                             /*  7:bInterfaceProtocol */
    3,                                    /*  8:iInterface */

    /* Endpoint Descriptor 0 */
    7,                                    /*  0:bLength */
    USB_DT_ENDPOINT,                      /*  1:bDescriptorType */
    USB_EP_IN | USB_EP1,                  /*  2:bEndpointAddress */
    USB_EP_BULK,                          /*  3:bmAttribute */
    0,                                    /*  4:wMAXPacketSize_lo */
    2,                                    /*  5:wMAXPacketSize_hi */
    0,                                    /*  6:bInterval */

    /* Endpoint Descriptor 1 */
    7,                                    /*  0:bLength */
    USB_DT_ENDPOINT,                      /*  1:bDescriptorType */
    USB_EP_OUT | USB_EP2,                 /*  2:bEndpointAddress */
    USB_EP_BULK,                          /*  3:bmAttribute */
    0,                                    /*  4:wMAXPacketSize_lo */
    2,                                    /*  5:wMAXPacketSize_hi */
    1,                                    /*  6:bInterval */
};

/*******************************************************************************************************************//**
 *    String Descriptor
 **********************************************************************************************************************/
#define LANGUAGE_ID_FRAME_WORK_LENGTH  (USB_VALUE_2)
uint8_t g_language_id_framework[] =
{
    0x09,
    0x04,
};

#define STRING_FRAMEWORK_LENGTH (USB_VALUE_93)
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
    0x09, 0x04, 0x2, 16,
    'U',
    'S',
    'B',
    ' ',
    'M',
    'a',
    's',
    's',
    ' ',
    'S',
    't',
    'o',
    'r',
    'a',
    'g',
    'e',

    /* iInterface */
    0x09, 0x04, 0x3, 15,
    'R',
    'e',
    'm',
    'o',
    'v',
    'a',
    'b',
    'l',
    'e',
    ' ',
    'D',
    'r',
    'i',
    'v',
    'e',

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

    /* iSerialNumber */
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

/*******************************************************************************************************************//**
 * End  Of File
 **********************************************************************************************************************/
