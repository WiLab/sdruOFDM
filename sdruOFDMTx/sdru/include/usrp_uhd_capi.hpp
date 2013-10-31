/* Copyright 2010-2012 The MathWorks, Inc. */
/* 
 * These declarations are included both for the C++ library build as well as the
 * EML generated C-code build.
 *
 * It should not rely on any C++ and so should not include UHD includes.
 */
#ifndef __usrp_uhd_capi_hpp__
#define __usrp_uhd_capi_hpp__

#include "libmwusrp_uhd_capi.hpp"
#include <tmwtypes.h> /* for cint16_T */

typedef enum {
    DPortDTypeInt16=0,
    DPortDTypeSingle,
    DPortDTypeDouble,
    DPortDTypeCInt16,
    DPortDTypeCSingle,
    DPortDTypeCDouble
} DataPortDataTypeCapiEnumT;

typedef enum {
    BuffModeContinuous=0,
    BuffModeContigBuff,
    BuffModeContigFrame
} BufferModeCapiEnumT;

typedef enum { RxId=0, TxId=1, MboardId=2 } BoardIdCapiEnumT;

typedef enum { UsrpDriverError=0, UsrpDriverSuccess=1, 
  UsrpDriverNotResponding=2, UsrpDriverBusy=3,
  UsrpDriverNotCompatible=4 } UsrpErrorCapiEnumT;

/* These are workarounds for MATLAB and Simulink Coder issues... */
/* 1. allow Simulink sfunctions/rapid accelerator to name-bind M enums and C
 *    enums.
 */
typedef DataPortDataTypeCapiEnumT DataPortDataTypeSLCapiEnumT;
typedef BufferModeCapiEnumT BufferModeSLCapiEnumT;
typedef BoardIdCapiEnumT BoardIdSLCapiEnumT;
typedef UsrpErrorCapiEnumT UsrpErrorSLCapiEnumT;
/* 2. allow MATLAB coder's code to compile when using specific enum values when
 *    also using 'getHeaderFile()' (g730585)
 */
/*
#define DataPortDataTypeCapiEnumT_DPortDTypeInt16 DPortDTypeInt16
#define DataPortDataTypeCapiEnumT_DPortDTypeDouble DPortDTypeDouble
#define DataPortDataTypeCapiEnumT_DPortDTypeSingle DPortDTypeSingle
#define DataPortDataTypeCapiEnumT_DPortDTypeCInt16 DPortDTypeCInt16
#define DataPortDataTypeCapiEnumT_DPortDTypeCDouble DPortDTypeCDouble
#define DataPortDataTypeCapiEnumT_DPortDTypeCSingle DPortDTypeCSingle
#define BoardIdCapiEnumT_RxId RxId
#define BoardIdCapiEnumT_TxId TxId
#define BoardIdCapiEnumT_MboardId MboardId
#define UsrpErrorCapiEnumT_UsrpDriverSuccess UsrpDriverSuccess
#define UsrpErrorCapiEnumT_UsrpDriverError UsrpDriverError
*/

#define ERR_ARGS UsrpErrorCapiEnumT * errStat, char * errStr

#define MAX_ERROR_MESSAGE_LENGTH 1024

/* Because the MATLAB Coder requires a pure C context for compilation, we need
 * to duplicate UHD enums and structures that are part of the public C-API
 * interface.  These enums and structures must also match their M counterparts
 * for the M-API.  Ideally we would single source these definitions, but for now
 * we are manually creating them.
 * Note that the enum values and struct field names only need to match between
 * the C-API and M-API--their translation to UHD values and names is done in the
 * C++ XxApiT classes.  (The translation is done by name and not value meaning I
 * don't actually have to know any of those values in the UHD code.)
 */
typedef struct _TuneResultCapiT {
    double targetIntermediateFrequency;
    double actualIntermediateFrequency;
    double targetDSPFrequency;
    double actualDSPFrequency;
} TuneResultCapiT;

typedef struct _FreqRangeCapiT {
    double min;
    double max;
} FreqRangeCapiT;

typedef struct _GainRangeCapiT {
    double min;
    double max;
    double step;
} GainRangeCapiT;

/* Clock Configuration */
typedef enum { RefSourceInternal=0,   RefSourceExternal=1, RefSourceAutomatic=2 } RefSourceCapiEnumT;
typedef enum { PpsSourceInternal=0,   PpsSourceExternal=1   } PPSSourceCapiEnumT;
typedef enum { PpsPolarityPositive=0, PpsPolarityNegative=1 } PPSPolarityCapiEnumT;
typedef enum { ClockConfigInternal=0, ClockConfigExternal=1 } CannedClockConfigCapiEnumT;
typedef struct _ClockConfigCapiT {
    RefSourceCapiEnumT      refSource;
    PPSSourceCapiEnumT      ppsSource;
    PPSPolarityCapiEnumT    ppsPolarity;
} ClockConfigCapiT ;

/* --------------------- driver --------------------- */
LIBMWUSRP_UHD_CAPI_API void getSDRuList_c           (const char * in_addrStr, char * validAddrList, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void reportDrivers_c         (char * retStr, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void createDriver_c          (const char *     in_addrStr, 
                                                     const BoardIdCapiEnumT   in_dboardSide, 
                                                     const char *     in_requesterStr, 
                                                     int  *     out_driverApiH,
                                                     ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void getDeviceDescription_c  (int driverApiH, char * descStr, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void deleteDriver_c          (int driverApiH, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void getSDRuDriverVersion_c  (char * versionCStr, ERR_ARGS);


/* ---------------------- Mboard control ------------------------- */
LIBMWUSRP_UHD_CAPI_API void setClockConfig_c        (int driverApiH, CannedClockConfigCapiEnumT clkConfig, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void setClockConfigFull_c    (int driverApiH, ClockConfigCapiT clkConfig, ERR_ARGS);

/* ---------------------- Rx/Tx control ------------------------- */
LIBMWUSRP_UHD_CAPI_API void setRate_c               (int driverApiH, double desiredDecimInterp, double * actualDecimInterp, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void setFrequency_c          (int driverApiH, double targetFreq, double loOffset, TuneResultCapiT * actualTuning, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void setGain_c               (int driverApiH, double desiredGain, double * actualGain, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void getFrequencyRange_c     (int driverApiH, FreqRangeCapiT * out_range, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void getGainRange_c          (int driverApiH, GainRangeCapiT * out_range, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void getRate_c               (int driverApiH, double * actualDecimInterp, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void getFrequency_c          (int driverApiH, double * actualFreq, ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void getGain_c               (int driverApiH, double * actualGain, ERR_ARGS);

/* ---------------------- Rx/Tx runtime ------------------------- */
LIBMWUSRP_UHD_CAPI_API void openDataConnection_c    (const char * in_addrStr, 
                                                     const BoardIdCapiEnumT in_dboardSide, 
                                                     const char * in_requesterStr, 
                                                     uint32_T in_frameLength, 
                                                     DataPortDataTypeCapiEnumT in_dportType, 
                                                     BufferModeCapiEnumT in_buffMode,
                                                     uint32_T in_buffSize,
                                                     int * out_driverApiH,
                                                     ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void closeDataConnection_c   (int driverApiH, 
                                                     ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void receiveData_c           (int driverApiH, 
                                                     real_T targetFreq, 
                                                     real_T loOffset, 
                                                     real_T gain, 
                                                     real_T decim, 
                                                     cint16_T * result_data, 
                                                     uint32_T * result_data_length, 
                                                     uint32_T * result_overflow, 
                                                     ERR_ARGS);
LIBMWUSRP_UHD_CAPI_API void sendData_c              (int driverApiH, 
                                                     const void * data, 
                                                     real_T targetFreq, 
                                                     real_T loOffset, 
                                                     real_T gain, 
                                                     real_T interp, 
                                                     uint32_T * result_underflow, 
                                                     ERR_ARGS);

/* ---------------------- Host Name ------------------------- */
LIBMWUSRP_UHD_CAPI_API void checkSDRHostName_c      (char * deploymentHost, ERR_ARGS);

#endif
