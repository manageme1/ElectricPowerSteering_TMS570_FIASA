/* -----------------------------------------------------------------------------
  Filename:    PduR_Dcm.h
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: PduR
               
               Configuration   : C:\SynergyProjects\Fiasa_326_327_EPS_TMS570-nzx5jd\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2015-05-29  15:06:43
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(PDUR_DCM_H)
#define PDUR_DCM_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "PduR.h"


/* -----------------------------------------------------------------------------
    &&&~ COMPATIBILITY DEFINES
 ----------------------------------------------------------------------------- */




#define PDUR_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"
/*lint -restore */

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

/**
\brief    The function serves to request the transmission of an IF layer I-PDU.\n
          The PDU Router evaluates the Dcm I-PDU handle and performs appropriate handle and port conversion.\n
          The call is routed to a lower IF module using the appropriate I-PDU handle of the destination layer.
\param    DcmTxPduId        ID of the Dcm I-PDU to be transmitted
\param    PduInfoPtr        Payload information of the I-PDU (pointer to data and data length)
\return   Std_ReturnType\n
          E_OK              The request was accepted by the PDU Router and by the destination layer.\n
          E_NOT_OK          The PDU Router is in the PDUR_UNINIT state\n
                            or the DcmTxPduId is not valid\n
                            or the DcmTxPduId is not forwarded in this identity\n
                            or the PduInfoPtr is not valid\n
                            or the request was not accepted by the destination layer.\n
\pre      PduR_Init() is executed successfully and the PDU Router is in PDUR_ONLINE state.
\context  This function can be called on interrupt and task level and has not to be interrupted by other\n
          PduR_DcmTransmit calls for the same DcmTxPduId.
\note     The function is called by Dcm.
*/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType DcmTxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr);


#define PDUR_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"
/*lint -restore */


#endif /* PDUR_DCM_H */
