/*
 * QPSKTransmitter.c
 *
 * Code generation for function 'QPSKTransmitter'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "QPSKTransmitter.h"
#include "sendComplexDoubleData.h"
#include "SystemCore.h"
#include "runSDRuQPSKTransmitter_mexutil.h"
#include "runSDRuQPSKTransmitter_data.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 1, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo l_emlrtRSI = { 23, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo rb_emlrtRSI = { 43, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo sb_emlrtRSI = { 46, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo tb_emlrtRSI = { 49, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

/* Function Declarations */
static void UpFIR_DF_Z_D(const creal_T inArray[], const real_T coefArra[],
  creal_T tap0Array[], creal_T outArray[], int32_T tapIdx[], int32_T outIdx,
  int32_T numChans, int32_T inFrameSize, int32_T iFactor, int32_T
  polyphaseFiltLen);

/* Function Definitions */
static void UpFIR_DF_Z_D(const creal_T inArray[], const real_T coefArra[],
  creal_T tap0Array[], creal_T outArray[], int32_T tapIdx[], int32_T outIdx,
  int32_T numChans, int32_T inFrameSize, int32_T iFactor, int32_T
  polyphaseFiltLen)
{
  int32_T curTapIdx;
  int32_T inputIdx;
  int32_T tap0Idx;
  real_T sumsArray_re;
  real_T sumsArray_im;
  int32_T k;
  int32_T i;
  int32_T cffIdx;
  int32_T memIdx;
  int32_T m;
  int32_T j;
  curTapIdx = 0;
  inputIdx = 0;
  tap0Idx = 0;
  sumsArray_re = 0.0;
  sumsArray_im = 0.0;
  for (k = 0; k < numChans; k++) {
    curTapIdx = tapIdx[0U];
    for (i = 0; i < inFrameSize; i++) {
      cffIdx = 0;
      memIdx = tap0Idx + curTapIdx;
      tap0Array[memIdx] = inArray[inputIdx];
      for (m = 0; m < iFactor; m++) {
        for (j = 0; j <= curTapIdx; j++) {
          sumsArray_re += tap0Array[memIdx].re * coefArra[cffIdx];
          sumsArray_im += tap0Array[memIdx].im * coefArra[cffIdx];
          memIdx--;
          cffIdx++;
        }

        memIdx += polyphaseFiltLen;
        while (j < polyphaseFiltLen) {
          sumsArray_re += tap0Array[memIdx].re * coefArra[cffIdx];
          sumsArray_im += tap0Array[memIdx].im * coefArra[cffIdx];
          memIdx--;
          cffIdx++;
          j++;
        }

        outArray[outIdx].re = sumsArray_re;
        outArray[outIdx].im = sumsArray_im;
        outIdx++;
        sumsArray_re = 0.0;
        sumsArray_im = 0.0;
      }

      inputIdx++;
      curTapIdx++;
      if (curTapIdx >= polyphaseFiltLen) {
        curTapIdx = 0;
      }
    }

    tap0Idx += polyphaseFiltLen;
  }

  tapIdx[0U] = curTapIdx;
}

QPSKTransmitter_201 *QPSKTransmitter_QPSKTransmitter(QPSKTransmitter_201 *obj)
{
  QPSKTransmitter_201 *b_obj;
  QPSKTransmitter_201 *c_obj;
  b_obj = obj;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

void QPSKTransmitter_stepImpl(QPSKTransmitter_201 *obj, creal_T
  transmittedSignal[400])
{
  real_T unusedU0[105];
  real_T transmittedData[200];
  creal_T modulatedData[100];
  dspcodegen_FIRInterpolator *b_obj;
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *m4;
  char_T cv17[45];
  int32_T i;
  static const char_T cv18[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 4 };

  char_T cv19[4];
  static const char_T cv20[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv19[2] = { 1, 51 };

  char_T cv21[51];
  static const char_T cv22[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 5 };

  char_T cv23[5];
  static const char_T cv24[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  dsp_FIRInterpolator_1 *c_obj;
  boolean_T exitg1;
  static const int8_T iv21[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&obj->pBitGenerator, transmittedData, unusedU0);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_step(&obj->pQPSKModulator, transmittedData, modulatedData);
  emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->pTransmitterFilter;
  if (!b_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m4 = mxCreateCharArray(2, iv17);
    for (i = 0; i < 45; i++) {
      cv17[i] = cv18[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, cv17);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = mxCreateCharArray(2, iv18);
    for (i = 0; i < 4; i++) {
      cv19[i] = cv20[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m4, cv19);
    emlrtAssign(&b_y, m4);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!b_obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m4 = mxCreateCharArray(2, iv19);
      for (i = 0; i < 51; i++) {
        cv21[i] = cv22[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m4, cv21);
      emlrtAssign(&c_y, m4);
      d_y = NULL;
      m4 = mxCreateCharArray(2, iv20);
      for (i = 0; i < 5; i++) {
        cv23[i] = cv24[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m4, cv23);
      emlrtAssign(&d_y, m4);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRInterpolator */
      c_obj->W1_TapDelayIndex = 0;
      for (i = 0; i < 11; i++) {
        c_obj->W0_TapDelayBuff[i].re = 0.0;
        c_obj->W0_TapDelayBuff[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &j_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRInterpolator */
    c_obj->W1_TapDelayIndex = 0;
    for (i = 0; i < 11; i++) {
      c_obj->W0_TapDelayBuff[i].re = 0.0;
      c_obj->W0_TapDelayBuff[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv21[i]) {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &l_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRInterpolator */
    c_obj->W1_TapDelayIndex = 0;
    for (i = 0; i < 11; i++) {
      c_obj->W0_TapDelayBuff[i].re = 0.0;
      c_obj->W0_TapDelayBuff[i].im = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.FIRInterpolator */
  UpFIR_DF_Z_D(modulatedData, c_obj->P0_FILTER_COEFF, c_obj->W0_TapDelayBuff,
               transmittedSignal, &c_obj->W1_TapDelayIndex, 0, 1, 100, 4, 11);
  emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &k_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (QPSKTransmitter.c) */
