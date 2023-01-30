/* -----------------------------------------------------------------------------
  Filename:    Dem_Cfg.h
  Description: Toolversion: 18.00.01.01.30.06.49.02.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Dem
               
               Configuration   : C:\Users\mzjphh\Desktop\Fiasa_326_327_05.01.00\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2017-03-06  13:15:28
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

#if !defined(DEM_CFG_H)
#define DEM_CFG_H

/* PRQA S 0883 EOF */ /* incorrect: Include file code is not protected against repeated inclusion */
/* -----------------------------------------------------------------------------
    &&&~ Version Information
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Diag_AsrDemPrecompileCRC */
#define DIAG_ASRDEM_GENTOOL_GENY_MAJOR_VERSION 0x03u
#define DIAG_ASRDEM_GENTOOL_GENY_MINOR_VERSION 0x13u
#define DIAG_ASRDEM_GENTOOL_GENY_PATCH_VERSION 0x01u
/* END of Checksum exclude for
  - Diag_AsrDemPrecompileCRC */


/* -----------------------------------------------------------------------------
    &&&~ DEM precompiled parameters
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemPrecompileCRC */
#define DEM_VERSION_INFO_API                 STD_OFF
#define DEM_DEV_ERROR_DETECT                 STD_OFF
#define DEM_CRC_CHECK                        STD_OFF
#define DEM_MAX_NUMBER_OF_EVENTS             65535
#define DEM_TYPE_OF_ORIGIN_SUPPORTED         0
#define DEM_ENABLE_WARNINGINDICATOR_STATUS   STD_ON
#define DEM_ENABLE_PENDINGDTC_STATUS         STD_ON
#define DEM_OPERATION_CYCLE_STATUS_STORAGE   STD_OFF
#define DEM_ENABLE_TIME_BASED_DEBOUNCE       STD_ON
#define DEM_STATUS_BIT_STORAGE_TEST_FAILED   STD_ON
#define DEM_STATUS_BIT_STORAGE_CONFIRMED_DTC STD_ON
#if ! defined (V_USE_DUMMY_STATEMENT)
# error "The define V_USE_DUMMY_STATEMENT shall be defined either in Compiler_Cfg.h or as parameter for the Compiler"
#elif   (V_USE_DUMMY_STATEMENT == STD_OFF)
# define DEM_IGNORE_UNUSED_ARG(arg)           /* no dummy usage */
#else
# define DEM_IGNORE_UNUSED_ARG(arg)           ((void)(arg))                    /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif
/* DEM_CONFIG_VARIANT is 1 or 2:
1: AUTOSAR DEM Variant #1 PRE-COMPILE
2: AUTOSAR DEM Variant #2 LINK-TIME
3: AUTOSAR DEM Variant #3 POST-BUILD */
#define DEM_CONFIG_VARIANT                   1

#define DEM_USE_FIM_NOTIFICATION_API         STD_OFF /* NEXTEER MANUAL EDIT */
#define DEM_USE_NVM                          STD_ON
#define DEM_SUPPORT_OCCURRENCE_COUNTER       STD_OFF
#define DEM_REDUCED_DCM_ARGUMENT_CHECK       STD_OFF
#define DEM_REMOVE_NEEDLESS_AUTOSAR_API      STD_OFF
#define DEM_REMOVE_1908_SUBFUNC_SUPPORT      STD_OFF
#define DEM_SUPPORT_MULTIPLE_CONFIG          STD_OFF
#define DEM_SUPPORT_VARIANT_HANDLING         STD_OFF
#define DEM_PREINIT_HAS_CONFIG_PARAM         STD_OFF
#define DEM_SUPPORT_GET_EVENT_ID_API         STD_OFF
#define DEM_ENABLE_FAIL_STATE_NOTIFICATION   STD_ON
#define DEM_SUPPORT_CLEAREVENTALLOWED        STD_ON
#define DEM_SUPPORT_MIRROR_MEMORY            STD_OFF
/* END of Checksum include for
  - Diag_AsrDemPrecompileCRC */


/* -----------------------------------------------------------------------------
    &&&~ DEM precompiled parameters
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Diag_AsrDemPrecompileCRC */
#define DEM_USE_RTE                          STD_OFF
/* END of Checksum exclude for
  - Diag_AsrDemPrecompileCRC */


/* -----------------------------------------------------------------------------
    &&&~ Dem configuration type definitions
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemPrecompileCRC */
typedef VAR(uint16, TYPEDEF) Dem_TimeBasedDebounceTimerType; /* PRQA S 0850 */ /* MD_MSR_19.8 */
/* END of Checksum include for
  - Diag_AsrDemPrecompileCRC */



#endif /* DEM_CFG_H */
