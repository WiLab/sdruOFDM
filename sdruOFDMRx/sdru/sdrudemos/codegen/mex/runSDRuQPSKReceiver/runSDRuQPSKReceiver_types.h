/*
 * runSDRuQPSKReceiver_types.h
 *
 * Code generation for function 'runSDRuQPSKReceiver'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

#ifndef __RUNSDRUQPSKRECEIVER_TYPES_H__
#define __RUNSDRUQPSKRECEIVER_TYPES_H__

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
#ifndef typedef_comm_SDRuReceiver
#define typedef_comm_SDRuReceiver
typedef struct
{
    boolean_T tunablePropertyChanged[4];
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    real_T CenterFrequency;
    real_T LocalOscillatorOffset;
    real_T Gain;
    boolean_T pConnected;
    int32_T pDriverHandle;
    BoardIdCapiEnumT pSubDevice;
    char_T ObjectID[15];
    real_T DecimationFactor;
} comm_SDRuReceiver;
#endif /*typedef_comm_SDRuReceiver*/
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
#ifndef typedef_runSDRuQPSKReceiverStackData
#define typedef_runSDRuQPSKReceiverStackData
typedef struct
{
    struct
    {
        creal_T b[4000];
    } f0;
    struct
    {
        creal_T corruptSignal[4000];
    } f1;
} runSDRuQPSKReceiverStackData;
#endif /*typedef_runSDRuQPSKReceiverStackData*/
#ifndef struct_dsp_DigitalFilter_2
#define struct_dsp_DigitalFilter_2
struct dsp_DigitalFilter_2
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T W0_FILT_STATES[2];
    real_T P0_ICRTP;
    real_T P1_RTP1COEFF[2];
    real_T P2_RTP2COEFF[2];
};
#endif /*struct_dsp_DigitalFilter_2*/
#ifndef typedef_dsp_DigitalFilter_2
#define typedef_dsp_DigitalFilter_2
typedef struct dsp_DigitalFilter_2 dsp_DigitalFilter_2;
#endif /*typedef_dsp_DigitalFilter_2*/
#ifndef struct_dsp_DigitalFilter_3
#define struct_dsp_DigitalFilter_3
struct dsp_DigitalFilter_3
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T W0_FILT_STATES[2];
    real_T P0_ICRTP;
    real_T P1_RTP1COEFF[2];
    real_T P2_RTP2COEFF[2];
};
#endif /*struct_dsp_DigitalFilter_3*/
#ifndef typedef_dsp_DigitalFilter_3
#define typedef_dsp_DigitalFilter_3
typedef struct dsp_DigitalFilter_3 dsp_DigitalFilter_3;
#endif /*typedef_dsp_DigitalFilter_3*/
#ifndef typedef_QPSKFineFrequencyCompensator
#define typedef_QPSKFineFrequencyCompensator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    real_T pPhase;
    dsp_DigitalFilter_2 pLoopFilter;
    dsp_DigitalFilter_3 pIntegrator;
} QPSKFineFrequencyCompensator;
#endif /*typedef_QPSKFineFrequencyCompensator*/
#ifndef struct_dsp_DelayLine_5
#define struct_dsp_DelayLine_5
struct dsp_DelayLine_5
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    creal_T W0_Buff[99];
    int32_T W1_BUFF_OFFSET;
    creal_T P0_IC;
};
#endif /*struct_dsp_DelayLine_5*/
#ifndef typedef_dsp_DelayLine_5
#define typedef_dsp_DelayLine_5
typedef struct dsp_DelayLine_5 dsp_DelayLine_5;
#endif /*typedef_dsp_DelayLine_5*/
#ifndef struct_dsp_DigitalFilter_4
#define struct_dsp_DigitalFilter_4
struct dsp_DigitalFilter_4
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T W0_FILT_STATES[2];
    real_T P0_ICRTP;
    real_T P1_RTP1COEFF[2];
    real_T P2_RTP2COEFF[2];
};
#endif /*struct_dsp_DigitalFilter_4*/
#ifndef typedef_dsp_DigitalFilter_4
#define typedef_dsp_DigitalFilter_4
typedef struct dsp_DigitalFilter_4 dsp_DigitalFilter_4;
#endif /*typedef_dsp_DigitalFilter_4*/
#ifndef typedef_QPSKTimingRecovery
#define typedef_QPSKTimingRecovery
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    dsp_DigitalFilter_4 pLoopFilter;
    dsp_DelayLine_5 pDelayLine;
    real_T pCount;
    creal_T pOutput[100];
    real_T pMU;
    real_T pStrobe;
    boolean_T pEnable;
    creal_T pDelayBuffer1;
    creal_T pDelayBuffer2;
    creal_T pDelayBuffer3;
    real_T pAlpha;
    creal_T pTEDDelay1;
    creal_T pTEDDelay2;
    real_T pDelayStrobe;
    real_T pNCODelay;
    real_T pRegTemp;
} QPSKTimingRecovery;
#endif /*typedef_QPSKTimingRecovery*/
#ifndef typedef_comm_AGC
#define typedef_comm_AGC
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T pDetectorIsRectifier;
    real_T Gain;
} comm_AGC;
#endif /*typedef_comm_AGC*/
#ifndef struct_comm_PhaseFrequencyOffset_1
#define struct_comm_PhaseFrequencyOffset_1
struct comm_PhaseFrequencyOffset_1
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T W0_omegatTnow;
    real_T P0_Phase;
};
#endif /*struct_comm_PhaseFrequencyOffset_1*/
#ifndef typedef_comm_PhaseFrequencyOffset_1
#define typedef_comm_PhaseFrequencyOffset_1
typedef struct comm_PhaseFrequencyOffset_1 comm_PhaseFrequencyOffset_1;
#endif /*typedef_comm_PhaseFrequencyOffset_1*/
#ifndef typedef_c_commcodegen_PhaseFrequencyOff
#define typedef_c_commcodegen_PhaseFrequencyOff
typedef struct
{
    boolean_T tunablePropertyChanged;
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    uint32_T inputVarSize2[8];
    boolean_T inputDirectFeedthrough1;
    boolean_T inputDirectFeedthrough2;
    comm_PhaseFrequencyOffset_1 cSFunObject;
    boolean_T c_NoTuningBeforeLockingCodeGenE;
} c_commcodegen_PhaseFrequencyOff;
#endif /*typedef_c_commcodegen_PhaseFrequencyOff*/
#ifndef typedef_d_QPSKCoarseFrequencyCompensato
#define typedef_d_QPSKCoarseFrequencyCompensato
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    c_commcodegen_PhaseFrequencyOff pPhaseFreqOffset;
} d_QPSKCoarseFrequencyCompensato;
#endif /*typedef_d_QPSKCoarseFrequencyCompensato*/
#ifndef struct_dsp_FIRDecimator_0
#define struct_dsp_FIRDecimator_0
struct dsp_FIRDecimator_0
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    int32_T W0_PhaseIdx;
    int32_T W1_OutIdx;
    creal_T W2_OutBuff[8000];
    creal_T W3_Sums;
    int32_T W4_CoeffIdx;
    creal_T W5_StatesBuff[42];
    int32_T W6_TapDelayIndex;
    boolean_T W7_wrtBufIdx;
    boolean_T W8_readBufIdx;
    real_T P0_FILT[42];
    creal_T P1_IC;
    creal_T O0_Y0[2000];
};
#endif /*struct_dsp_FIRDecimator_0*/
#ifndef typedef_dsp_FIRDecimator_0
#define typedef_dsp_FIRDecimator_0
typedef struct dsp_FIRDecimator_0 dsp_FIRDecimator_0;
#endif /*typedef_dsp_FIRDecimator_0*/
#ifndef typedef_dspcodegen_FIRDecimator
#define typedef_dspcodegen_FIRDecimator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    dsp_FIRDecimator_0 cSFunObject;
} dspcodegen_FIRDecimator;
#endif /*typedef_dspcodegen_FIRDecimator*/
#ifndef struct_comm_QPSKDemodulator_9
#define struct_comm_QPSKDemodulator_9
struct comm_QPSKDemodulator_9
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
};
#endif /*struct_comm_QPSKDemodulator_9*/
#ifndef typedef_comm_QPSKDemodulator_9
#define typedef_comm_QPSKDemodulator_9
typedef struct comm_QPSKDemodulator_9 comm_QPSKDemodulator_9;
#endif /*typedef_comm_QPSKDemodulator_9*/
#ifndef struct_comm_Descrambler_10
#define struct_comm_Descrambler_10
struct comm_Descrambler_10
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    int32_T W0_shiftReg[4];
    uint8_T P0_Polynomial[5];
    int32_T P1_IniState[4];
};
#endif /*struct_comm_Descrambler_10*/
#ifndef typedef_comm_Descrambler_10
#define typedef_comm_Descrambler_10
typedef struct comm_Descrambler_10 comm_Descrambler_10;
#endif /*typedef_comm_Descrambler_10*/
#ifndef typedef_commcodegen_Descrambler
#define typedef_commcodegen_Descrambler
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_Descrambler_10 cSFunObject;
} commcodegen_Descrambler;
#endif /*typedef_commcodegen_Descrambler*/
#ifndef struct_comm_ErrorRate_11
#define struct_comm_ErrorRate_11
struct comm_ErrorRate_11
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T W0_errors;
    real_T W1_symbols;
    int32_T W2_STDelay;
    real_T W3_txBuff;
    int32_T W4_curTx;
    boolean_T W5_useFrame[105];
};
#endif /*struct_comm_ErrorRate_11*/
#ifndef typedef_comm_ErrorRate_11
#define typedef_comm_ErrorRate_11
typedef struct comm_ErrorRate_11 comm_ErrorRate_11;
#endif /*typedef_comm_ErrorRate_11*/
#ifndef typedef_commcodegen_ErrorRate
#define typedef_commcodegen_ErrorRate
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    uint32_T inputVarSize2[8];
    boolean_T inputDirectFeedthrough1;
    boolean_T inputDirectFeedthrough2;
    comm_ErrorRate_11 cSFunObject;
} commcodegen_ErrorRate;
#endif /*typedef_commcodegen_ErrorRate*/
#ifndef struct_comm_QPSKModulator_7
#define struct_comm_QPSKModulator_7
struct comm_QPSKModulator_7
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T P0_modmap[8];
};
#endif /*struct_comm_QPSKModulator_7*/
#ifndef typedef_comm_QPSKModulator_7
#define typedef_comm_QPSKModulator_7
typedef struct comm_QPSKModulator_7 comm_QPSKModulator_7;
#endif /*typedef_comm_QPSKModulator_7*/
#ifndef typedef_commcodegen_QPSKModulator
#define typedef_commcodegen_QPSKModulator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_QPSKModulator_7 cSFunObject;
} commcodegen_QPSKModulator;
#endif /*typedef_commcodegen_QPSKModulator*/
#ifndef struct_dsp_Buffer_6
#define struct_dsp_Buffer_6
struct dsp_Buffer_6
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    creal_T W0_CircBuff[100];
    real_T P0_ic;
    creal_T O0_Y0[200];
};
#endif /*struct_dsp_Buffer_6*/
#ifndef typedef_dsp_Buffer_6
#define typedef_dsp_Buffer_6
typedef struct dsp_Buffer_6 dsp_Buffer_6;
#endif /*typedef_dsp_Buffer_6*/
#ifndef typedef_dspcodegen_Buffer
#define typedef_dspcodegen_Buffer
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    dsp_Buffer_6 cSFunObject;
} dspcodegen_Buffer;
#endif /*typedef_dspcodegen_Buffer*/
#ifndef struct_dsp_Crosscorrelator_8
#define struct_dsp_Crosscorrelator_8
struct dsp_Crosscorrelator_8
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
};
#endif /*struct_dsp_Crosscorrelator_8*/
#ifndef typedef_dsp_Crosscorrelator_8
#define typedef_dsp_Crosscorrelator_8
typedef struct dsp_Crosscorrelator_8 dsp_Crosscorrelator_8;
#endif /*typedef_dsp_Crosscorrelator_8*/
#ifndef typedef_dspcodegen_Crosscorrelator
#define typedef_dspcodegen_Crosscorrelator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    uint32_T inputVarSize2[8];
    boolean_T inputDirectFeedthrough1;
    boolean_T inputDirectFeedthrough2;
    dsp_Crosscorrelator_8 cSFunObject;
} dspcodegen_Crosscorrelator;
#endif /*typedef_dspcodegen_Crosscorrelator*/
#ifndef typedef_sdruQPSKDataDecoder_264
#define typedef_sdruQPSKDataDecoder_264
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    real_T pCount;
    real_T pDelay;
    real_T pPhase;
    dspcodegen_Buffer pBuffer;
    commcodegen_QPSKModulator pModulator;
    creal_T pModulatedHeader[13];
    dspcodegen_Crosscorrelator pCorrelator;
    comm_QPSKDemodulator_9 pQPSKDemodulator;
    commcodegen_Descrambler pDescrambler;
    commcodegen_ErrorRate pBER;
    boolean_T pSyncFlag;
    real_T pSyncIndex;
    real_T pFrameIndex;
} sdruQPSKDataDecoder_264;
#endif /*typedef_sdruQPSKDataDecoder_264*/
#ifndef typedef_sdruQPSKRx_283
#define typedef_sdruQPSKRx_283
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    comm_AGC pAGC;
    dspcodegen_FIRDecimator pRxFilter;
    d_QPSKCoarseFrequencyCompensato pCoarseFreqCompensator;
    QPSKFineFrequencyCompensator pFineFreqCompensator;
    QPSKTimingRecovery pTimingRec;
    sdruQPSKDataDecoder_264 pDataDecod;
    creal_T pOldOutput;
} sdruQPSKRx_283;
#endif /*typedef_sdruQPSKRx_283*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    real_T M;
    real_T Upsampling;
    real_T Downsampling;
    real_T Fs;
    real_T Ts;
    real_T FrameSize;
    real_T BarkerLength;
    real_T DataLength;
    real_T MessageLength;
    real_T FrameCount;
    real_T ScramblerBase;
    real_T ScramblerPolynomial[5];
    real_T ScramblerInitialConditions[4];
    real_T RxBufferedFrames;
    real_T RaisedCosineGroupDelay;
    real_T c_SquareRootRaisedCosineFilterO;
    real_T RollOff;
    real_T ReceiverFilterCoefficients[41];
    real_T PhaseErrorDetectorGain;
    real_T PhaseRecoveryGain;
    real_T TimingErrorDetectorGain;
    real_T TimingRecoveryGain;
    real_T CoarseFrequencyCompFFTSize;
    real_T PhaseRecoveryLoopBandwidth;
    real_T PhaseRecoveryDampingFactor;
    real_T TimingRecoveryLoopBandwidth;
    real_T TimingRecoveryDampingFactor;
    real_T USRPCenterFrequency;
    real_T USRPGain;
    real_T USRPDecimationFactor;
    real_T USRPFrontEndSampleRate;
    real_T USRPFrameLength;
    real_T FrameTime;
    real_T StopTime;
} struct_T;
#endif /*typedef_struct_T*/

#endif
/* End of code generation (runSDRuQPSKReceiver_types.h) */
