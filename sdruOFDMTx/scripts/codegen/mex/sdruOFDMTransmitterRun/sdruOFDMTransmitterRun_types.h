/*
 * sdruOFDMTransmitterRun_types.h
 *
 * Code generation for function 'sdruOFDMTransmitterRun'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

#ifndef __SDRUOFDMTRANSMITTERRUN_TYPES_H__
#define __SDRUOFDMTRANSMITTERRUN_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_ResolvedFunctionInfo
#define typedef_ResolvedFunctionInfo
typedef struct
{
    const char * context;
    const char * name;
    const char * dominantType;
    const char * resolved;
    uint32_T fileTimeLo;
    uint32_T fileTimeHi;
    uint32_T mFileTimeLo;
    uint32_T mFileTimeHi;
} ResolvedFunctionInfo;
#endif /*typedef_ResolvedFunctionInfo*/
#include "usrp_uhd_capi.hpp"
#ifndef enum_UsrpReportMethodEnumT
#define enum_UsrpReportMethodEnumT
enum UsrpReportMethodEnumT
{
    Warning,
    Error,
    None
};
#endif /*enum_UsrpReportMethodEnumT*/
#ifndef typedef_UsrpReportMethodEnumT
#define typedef_UsrpReportMethodEnumT
typedef enum UsrpReportMethodEnumT UsrpReportMethodEnumT;
#endif /*typedef_UsrpReportMethodEnumT*/
#ifndef typedef_comm_SDRuTransmitter
#define typedef_comm_SDRuTransmitter
typedef struct
{
    boolean_T tunablePropertyChanged[4];
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    real_T CenterFrequency;
    real_T LocalOscillatorOffset;
    real_T Gain;
    boolean_T pConnected;
    int32_T pDriverHandle;
    BoardIdCapiEnumT pSubDevice;
    char_T ObjectID[15];
    real_T InterpolationFactor;
} comm_SDRuTransmitter;
#endif /*typedef_comm_SDRuTransmitter*/
#ifndef struct_emxArray_char_T_1x1024
#define struct_emxArray_char_T_1x1024
struct emxArray_char_T_1x1024
{
    char_T data[1024];
    int32_T size[2];
};
#endif /*struct_emxArray_char_T_1x1024*/
#ifndef typedef_emxArray_char_T_1x1024
#define typedef_emxArray_char_T_1x1024
typedef struct emxArray_char_T_1x1024 emxArray_char_T_1x1024;
#endif /*typedef_emxArray_char_T_1x1024*/
#ifndef struct_emxArray_int32_T_1024
#define struct_emxArray_int32_T_1024
struct emxArray_int32_T_1024
{
    int32_T data[1024];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_1024*/
#ifndef typedef_emxArray_int32_T_1024
#define typedef_emxArray_int32_T_1024
typedef struct emxArray_int32_T_1024 emxArray_int32_T_1024;
#endif /*typedef_emxArray_int32_T_1024*/
#ifndef struct_emxArray_int32_T_11
#define struct_emxArray_int32_T_11
struct emxArray_int32_T_11
{
    int32_T data[11];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_11*/
#ifndef typedef_emxArray_int32_T_11
#define typedef_emxArray_int32_T_11
typedef struct emxArray_int32_T_11 emxArray_int32_T_11;
#endif /*typedef_emxArray_int32_T_11*/
#ifndef struct_emxArray_int32_T_12
#define struct_emxArray_int32_T_12
struct emxArray_int32_T_12
{
    int32_T data[12];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_12*/
#ifndef typedef_emxArray_int32_T_12
#define typedef_emxArray_int32_T_12
typedef struct emxArray_int32_T_12 emxArray_int32_T_12;
#endif /*typedef_emxArray_int32_T_12*/
#ifndef struct_emxArray_int32_T_1x12
#define struct_emxArray_int32_T_1x12
struct emxArray_int32_T_1x12
{
    int32_T data[12];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x12*/
#ifndef typedef_emxArray_int32_T_1x12
#define typedef_emxArray_int32_T_1x12
typedef struct emxArray_int32_T_1x12 emxArray_int32_T_1x12;
#endif /*typedef_emxArray_int32_T_1x12*/
#ifndef typedef_sdruOFDMTransmitterRunStackData
#define typedef_sdruOFDMTransmitterRunStackData
typedef struct
{
    struct
    {
        creal_T data[25600];
    } f0;
    struct
    {
        creal_T txOrg[25600];
    } f1;
} sdruOFDMTransmitterRunStackData;
#endif /*typedef_sdruOFDMTransmitterRunStackData*/

#endif
/* End of code generation (sdruOFDMTransmitterRun_types.h) */
