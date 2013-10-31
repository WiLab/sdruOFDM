/*
 * runSDRuQPSKTransmitter_types.h
 *
 * Code generation for function 'runSDRuQPSKTransmitter'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

#ifndef __RUNSDRUQPSKTRANSMITTER_TYPES_H__
#define __RUNSDRUQPSKTRANSMITTER_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_comm_Scrambler_2
#define struct_comm_Scrambler_2
struct comm_Scrambler_2
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    int32_T W0_shiftReg[4];
    uint8_T P0_Polynomial[5];
    int32_T P1_IniState[4];
};
#endif /*struct_comm_Scrambler_2*/
#ifndef typedef_comm_Scrambler_2
#define typedef_comm_Scrambler_2
typedef struct comm_Scrambler_2 comm_Scrambler_2;
#endif /*typedef_comm_Scrambler_2*/
#ifndef typedef_commcodegen_Scrambler
#define typedef_commcodegen_Scrambler
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_Scrambler_2 cSFunObject;
} commcodegen_Scrambler;
#endif /*typedef_commcodegen_Scrambler*/
#ifndef typedef_QPSKBitsGenerator_220
#define typedef_QPSKBitsGenerator_220
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    real_T pHeader[26];
    commcodegen_Scrambler pScrambler;
    char_T pMsgStrSet[1500];
    real_T pCount;
} QPSKBitsGenerator_220;
#endif /*typedef_QPSKBitsGenerator_220*/
#ifndef struct_comm_QPSKModulator_0
#define struct_comm_QPSKModulator_0
struct comm_QPSKModulator_0
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T P0_modmap[8];
};
#endif /*struct_comm_QPSKModulator_0*/
#ifndef typedef_comm_QPSKModulator_0
#define typedef_comm_QPSKModulator_0
typedef struct comm_QPSKModulator_0 comm_QPSKModulator_0;
#endif /*typedef_comm_QPSKModulator_0*/
#ifndef typedef_commcodegen_QPSKModulator
#define typedef_commcodegen_QPSKModulator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_QPSKModulator_0 cSFunObject;
} commcodegen_QPSKModulator;
#endif /*typedef_commcodegen_QPSKModulator*/
#ifndef struct_dsp_FIRInterpolator_1
#define struct_dsp_FIRInterpolator_1
struct dsp_FIRInterpolator_1
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    creal_T W0_TapDelayBuff[11];
    int32_T W1_TapDelayIndex;
    real_T P0_FILTER_COEFF[44];
    creal_T P1_IC;
};
#endif /*struct_dsp_FIRInterpolator_1*/
#ifndef typedef_dsp_FIRInterpolator_1
#define typedef_dsp_FIRInterpolator_1
typedef struct dsp_FIRInterpolator_1 dsp_FIRInterpolator_1;
#endif /*typedef_dsp_FIRInterpolator_1*/
#ifndef typedef_dspcodegen_FIRInterpolator
#define typedef_dspcodegen_FIRInterpolator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    dsp_FIRInterpolator_1 cSFunObject;
} dspcodegen_FIRInterpolator;
#endif /*typedef_dspcodegen_FIRInterpolator*/
#ifndef typedef_QPSKTransmitter_201
#define typedef_QPSKTransmitter_201
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    QPSKBitsGenerator_220 pBitGenerator;
    commcodegen_QPSKModulator pQPSKModulator;
    dspcodegen_FIRInterpolator pTransmitterFilter;
} QPSKTransmitter_201;
#endif /*typedef_QPSKTransmitter_201*/
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
#ifndef struct_emxArray_int8_T_15x7
#define struct_emxArray_int8_T_15x7
struct emxArray_int8_T_15x7
{
    int8_T data[105];
    int32_T size[2];
};
#endif /*struct_emxArray_int8_T_15x7*/
#ifndef typedef_emxArray_int8_T_15x7
#define typedef_emxArray_int8_T_15x7
typedef struct emxArray_int8_T_15x7 emxArray_int8_T_15x7;
#endif /*typedef_emxArray_int8_T_15x7*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    real_T Upsampling;
    real_T Fs;
    real_T Ts;
    real_T FrameSize;
    real_T BarkerLength;
    real_T DataLength;
    real_T MessageLength;
    real_T FrameCount;
    real_T RxBufferedFrames;
    real_T RaisedCosineGroupDelay;
    real_T ScramblerBase;
    real_T ScramblerPolynomial[5];
    real_T ScramblerInitialConditions[4];
    real_T c_SquareRootRaisedCosineFilterO;
    real_T RollOff;
    real_T TransmitterFilterCoefficients[41];
    real_T USRPCenterFrequency;
    real_T USRPGain;
    real_T USRPInterpolation;
    real_T USRPFrameLength;
    real_T FrameTime;
    real_T StopTime;
} struct_T;
#endif /*typedef_struct_T*/

#endif
/* End of code generation (runSDRuQPSKTransmitter_types.h) */
