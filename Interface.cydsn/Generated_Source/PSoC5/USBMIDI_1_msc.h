/***************************************************************************//**
* \file USBMIDI_1_msc.h
* \version 3.10
*
* \brief
*  This file provides function prototypes and constants for the USBFS component 
*  MSC class support.
*
* Related Document:
*  Device Class Definition for Mass Storage (MSC) Version TDB
*
********************************************************************************
* \copyright
* Copyright 2008-2016, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_USBFS_USBMIDI_1_msc_H)
#define CY_USBFS_USBMIDI_1_msc_H

#include "USBMIDI_1.h"

/***************************************
*    Initial Parameter Constants
***************************************/

#define USBMIDI_1_HANDLE_MSC_REQUESTS    (0u != (1u))
#define USBMIDI_1_MSC_LUN_NUMBER         (1u - 1u)


/***************************************
*        Function Prototypes
***************************************/
/**
* \addtogroup group_msc
* @{
*/
#if (USBMIDI_1_HANDLE_MSC_REQUESTS)
    void  USBMIDI_1_MSC_SetLunCount(uint8 lunCount) ;
    uint8 USBMIDI_1_MSC_GetLunCount(void)           ;
#endif /* (USBMIDI_1_HANDLE_MSC_REQUESTS) */
/** @} msc */

/***************************************
*              Constants
***************************************/

/* MSC Class-Specific requests */
#define USBMIDI_1_MSC_RESET          (0xFFu)
#define USBMIDI_1_MSC_GET_MAX_LUN    (0xFEu)

/* MSC Class-Specific requests constant fields. */
#define USBMIDI_1_MSC_RESET_WVALUE           (0u)
#define USBMIDI_1_MSC_RESET_WLENGTH          (0u)

#define USBMIDI_1_MSC_GET_MAX_LUN_WVALUE     (0u)
#define USBMIDI_1_MSC_GET_MAX_LUN_WLENGTH    (1u)

#endif /*  CY_USBFS_USBMIDI_1_msc_H */


/* [] END OF FILE */
