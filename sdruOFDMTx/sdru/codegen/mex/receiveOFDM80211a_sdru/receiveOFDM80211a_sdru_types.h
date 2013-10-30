/*
 * receiveOFDM80211a_sdru_types.h
 *
 * Code generation for function 'receiveOFDM80211a_sdru'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

#ifndef __RECEIVEOFDM80211A_SDRU_TYPES_H__
#define __RECEIVEOFDM80211A_SDRU_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef typedef_OFDMDemodulator
#define typedef_OFDMDemodulator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    emxArray_real_T *pDataLinearIndices;
} OFDMDemodulator;
#endif /*typedef_OFDMDemodulator*/
#ifndef typedef_OFDMDemodulator_1
#define typedef_OFDMDemodulator_1
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    emxArray_real_T *pDataLinearIndices;
} OFDMDemodulator_1;
#endif /*typedef_OFDMDemodulator_1*/
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
#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct
{
    real_T phi;
    real_T delay;
    real_T numPeaks;
    real_T frequency[15];
    real_T phase;
    real_T frequencyMA;
    real_T numProcessed;
    real_T inputBufferLength;
    real_T numFreqToAverage;
    creal_T pilotEqGains[576];
    creal_T preambleEqGains[53];
    real_T message[80];
    boolean_T printReceivedData;
} b_struct_T;
#endif /*typedef_b_struct_T*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    real_T NumReceiveAntennas;
    boolean_T RemoveDCCarrier;
    boolean_T PilotOutputPort;
    real_T FFTLength;
    real_T CyclicPrefixLength;
    real_T NumGuardBandCarriers[2];
    real_T NumSymbols;
    real_T PilotCarrierIndices[4];
} struct_T;
#endif /*typedef_struct_T*/
#ifndef typedef_c_struct_T
#define typedef_c_struct_T
typedef struct
{
    real_T samplingFreq;
    real_T FFTLength;
    boolean_T enableMA;
    creal_T shortPreamble[53];
    creal_T shortPreambleOFDM[64];
    creal_T completeShortPreambleOFDM[160];
    real_T longPreamble[53];
    creal_T longPreambleOFDM[64];
    creal_T completeLongPreambleOFDM[160];
    real_T numCarriers;
    real_T originalData[560];
    real_T padBits;
    real_T numSamples;
    real_T messageCharacters;
    real_T numFrames;
    real_T pilots[48];
    creal_T preambles[320];
    real_T frameLength;
    struct_T hDataDemod;
    struct_T hPreambleDemod;
    real_T freqBin;
    real_T pilotLocationsWithoutGuardbands[4];
    real_T dataSubcarrierIndexies[48];
    real_T FreqBin;
} c_struct_T;
#endif /*typedef_c_struct_T*/
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
#ifndef struct_dsp_FIRRateConverter_1
#define struct_dsp_FIRRateConverter_1
struct dsp_FIRRateConverter_1
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    creal_T W0_InBuf[252];
    int32_T W1_InBufIdx;
    real_T P0_FILTER[252];
    int32_T P1_PolyphaseSelector[12];
    int32_T P2_StartIdx;
    int32_T P3_StopIdx;
};
#endif /*struct_dsp_FIRRateConverter_1*/
#ifndef typedef_dsp_FIRRateConverter_1
#define typedef_dsp_FIRRateConverter_1
typedef struct dsp_FIRRateConverter_1 dsp_FIRRateConverter_1;
#endif /*typedef_dsp_FIRRateConverter_1*/
#ifndef typedef_dspcodegen_FIRRateConverter_112
#define typedef_dspcodegen_FIRRateConverter_112
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    dsp_FIRRateConverter_1 cSFunObject;
} dspcodegen_FIRRateConverter_112;
#endif /*typedef_dspcodegen_FIRRateConverter_112*/
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_boolean_T_1224
#define struct_emxArray_boolean_T_1224
struct emxArray_boolean_T_1224
{
    boolean_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_boolean_T_1224*/
#ifndef typedef_emxArray_boolean_T_1224
#define typedef_emxArray_boolean_T_1224
typedef struct emxArray_boolean_T_1224 emxArray_boolean_T_1224;
#endif /*typedef_emxArray_boolean_T_1224*/
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
#ifndef struct_emxArray_creal_T
#define struct_emxArray_creal_T
struct emxArray_creal_T
{
    creal_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_creal_T*/
#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct emxArray_creal_T emxArray_creal_T;
#endif /*typedef_emxArray_creal_T*/
#ifndef struct_emxArray_int16_T_1x11
#define struct_emxArray_int16_T_1x11
struct emxArray_int16_T_1x11
{
    int16_T data[11];
    int32_T size[2];
};
#endif /*struct_emxArray_int16_T_1x11*/
#ifndef typedef_emxArray_int16_T_1x11
#define typedef_emxArray_int16_T_1x11
typedef struct emxArray_int16_T_1x11 emxArray_int16_T_1x11;
#endif /*typedef_emxArray_int16_T_1x11*/
#ifndef struct_emxArray_int16_T_1x12
#define struct_emxArray_int16_T_1x12
struct emxArray_int16_T_1x12
{
    int16_T data[12];
    int32_T size[2];
};
#endif /*struct_emxArray_int16_T_1x12*/
#ifndef typedef_emxArray_int16_T_1x12
#define typedef_emxArray_int16_T_1x12
typedef struct emxArray_int16_T_1x12 emxArray_int16_T_1x12;
#endif /*typedef_emxArray_int16_T_1x12*/
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
#ifndef struct_emxArray_int32_T_1224
#define struct_emxArray_int32_T_1224
struct emxArray_int32_T_1224
{
    int32_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_1224*/
#ifndef typedef_emxArray_int32_T_1224
#define typedef_emxArray_int32_T_1224
typedef struct emxArray_int32_T_1224 emxArray_int32_T_1224;
#endif /*typedef_emxArray_int32_T_1224*/
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
#ifndef struct_emxArray_int32_T_64
#define struct_emxArray_int32_T_64
struct emxArray_int32_T_64
{
    int32_T data[64];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_64*/
#ifndef typedef_emxArray_int32_T_64
#define typedef_emxArray_int32_T_64
typedef struct emxArray_int32_T_64 emxArray_int32_T_64;
#endif /*typedef_emxArray_int32_T_64*/
#ifndef struct_emxArray_int32_T_768
#define struct_emxArray_int32_T_768
struct emxArray_int32_T_768
{
    int32_T data[768];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_768*/
#ifndef typedef_emxArray_int32_T_768
#define typedef_emxArray_int32_T_768
typedef struct emxArray_int32_T_768 emxArray_int32_T_768;
#endif /*typedef_emxArray_int32_T_768*/
#ifndef struct_emxArray_int32_T_8
#define struct_emxArray_int32_T_8
struct emxArray_int32_T_8
{
    int32_T data[8];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_8*/
#ifndef typedef_emxArray_int32_T_8
#define typedef_emxArray_int32_T_8
typedef struct emxArray_int32_T_8 emxArray_int32_T_8;
#endif /*typedef_emxArray_int32_T_8*/
#ifndef struct_emxArray_real_T_1224
#define struct_emxArray_real_T_1224
struct emxArray_real_T_1224
{
    real_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_1224*/
#ifndef typedef_emxArray_real_T_1224
#define typedef_emxArray_real_T_1224
typedef struct emxArray_real_T_1224 emxArray_real_T_1224;
#endif /*typedef_emxArray_real_T_1224*/
#ifndef struct_emxArray_real_T_4
#define struct_emxArray_real_T_4
struct emxArray_real_T_4
{
    real_T data[4];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_4*/
#ifndef typedef_emxArray_real_T_4
#define typedef_emxArray_real_T_4
typedef struct emxArray_real_T_4 emxArray_real_T_4;
#endif /*typedef_emxArray_real_T_4*/
#ifndef struct_emxArray_real_T_768
#define struct_emxArray_real_T_768
struct emxArray_real_T_768
{
    real_T data[768];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_768*/
#ifndef typedef_emxArray_real_T_768
#define typedef_emxArray_real_T_768
typedef struct emxArray_real_T_768 emxArray_real_T_768;
#endif /*typedef_emxArray_real_T_768*/
#ifndef struct_emxArray_real_T_8
#define struct_emxArray_real_T_8
struct emxArray_real_T_8
{
    real_T data[8];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_8*/
#ifndef typedef_emxArray_real_T_8
#define typedef_emxArray_real_T_8
typedef struct emxArray_real_T_8 emxArray_real_T_8;
#endif /*typedef_emxArray_real_T_8*/
#ifndef typedef_receiveOFDM80211a_sdruStackData
#define typedef_receiveOFDM80211a_sdruStackData
typedef struct
{
    union
    {
        struct
        {
            creal_T y[3456];
        } f0;
        struct
        {
            cint16_T yTemp[46336];
        } f1;
    } u1;
    struct
    {
        creal_T buffer[5120];
        creal_T b_buffer[5120];
        creal_T Phat[2461];
        creal_T c_buffer[1280];
        creal_T rFreqShifted[1280];
        real_T Rhat[2461];
    } f2;
} receiveOFDM80211a_sdruStackData;
#endif /*typedef_receiveOFDM80211a_sdruStackData*/

#endif
/* End of code generation (receiveOFDM80211a_sdru_types.h) */
