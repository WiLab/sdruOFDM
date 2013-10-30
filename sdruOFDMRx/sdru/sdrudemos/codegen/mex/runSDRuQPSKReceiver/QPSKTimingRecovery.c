/*
 * QPSKTimingRecovery.c
 *
 * Code generation for function 'QPSKTimingRecovery'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "QPSKTimingRecovery.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo ue_emlrtRSI = { 63, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo ve_emlrtRSI = { 66, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo we_emlrtRSI = { 69, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo xe_emlrtRSI = { 72, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo ye_emlrtRSI = { 76, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo af_emlrtRSI = { 77, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo bf_emlrtRSI = { 79, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo cf_emlrtRSI = { 81, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo df_emlrtRSI = { 85, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo ef_emlrtRSI = { 108, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo ff_emlrtRSI = { 109, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo gf_emlrtRSI = { 110, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo hf_emlrtRSI = { 129, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo if_emlrtRSI = { 130, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo jf_emlrtRSI = { 133, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo kf_emlrtRSI = { 134, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo lf_emlrtRSI = { 138, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo mf_emlrtRSI = { 156, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo nf_emlrtRSI = { 165, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

/* Function Definitions */
void QPSKTimingRecovery_stepImpl(QPSKTimingRecovery *obj, const creal_T y,
  creal_T dataOut[100], boolean_T *isDataValid, real_T *normTimingErr)
{
  QPSKTimingRecovery *b_obj;
  real_T K;
  real_T interpFiltOut_re;
  real_T interpFiltOut_im;
  real_T b_re;
  real_T b_im;
  real_T e;
  real_T b_b_re;
  real_T loopFiltOut;
  real_T a;
  dsp_DigitalFilter_4 *c_obj;
  int32_T underflow;
  boolean_T value;
  creal_T varargout_1[100];
  dsp_DelayLine_5 *d_obj;
  int32_T idxIn;
  int32_T i;
  int32_T k;
  boolean_T b0;
  *normTimingErr = obj->pMU;
  emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  K = -b_obj->pAlpha;
  interpFiltOut_re = (y.re + b_obj->pDelayBuffer2.re) + b_obj->pDelayBuffer3.re;
  interpFiltOut_im = (y.im + b_obj->pDelayBuffer2.im) + b_obj->pDelayBuffer3.im;
  b_re = b_obj->pDelayBuffer1.re;
  b_im = b_obj->pDelayBuffer1.im;
  e = b_obj->pMU;
  b_b_re = ((b_obj->pDelayBuffer1.re + b_obj->pDelayBuffer2.re) - y.re) -
    b_obj->pDelayBuffer3.re;
  loopFiltOut = ((b_obj->pDelayBuffer1.im + b_obj->pDelayBuffer2.im) - y.im) -
    b_obj->pDelayBuffer3.im;
  a = b_obj->pMU;
  interpFiltOut_re = (b_obj->pDelayBuffer2.re + e * (K * interpFiltOut_re + (1.0
    - K) * b_re)) + K * b_b_re * (a * a);
  interpFiltOut_im = (b_obj->pDelayBuffer2.im + e * (K * interpFiltOut_im + (1.0
    - K) * b_im)) + K * loopFiltOut * (a * a);
  emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  b_re = b_obj->pDelayBuffer2.re;
  b_im = b_obj->pDelayBuffer2.im;
  b_obj->pDelayBuffer3.re = b_re;
  b_obj->pDelayBuffer3.im = b_im;
  emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  b_re = b_obj->pDelayBuffer1.re;
  b_im = b_obj->pDelayBuffer1.im;
  b_obj->pDelayBuffer2.re = b_re;
  b_obj->pDelayBuffer2.im = b_im;
  emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->pDelayBuffer1 = y;
  emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if ((b_obj->pStrobe != 0.0) && (b_obj->pDelayStrobe != b_obj->pStrobe)) {
    loopFiltOut = b_obj->pTEDDelay2.re;
    e = b_obj->pTEDDelay1.re;
    K = b_obj->pTEDDelay2.im;
    a = b_obj->pTEDDelay1.im;
    e = e * (muDoubleScalarSign(loopFiltOut) - muDoubleScalarSign
             (interpFiltOut_re)) + a * (muDoubleScalarSign(K) -
      muDoubleScalarSign(interpFiltOut_im));
  } else {
    e = 0.0;
  }

  if (b_obj->pDelayStrobe != b_obj->pStrobe) {
    emlrtPushRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
    b_re = b_obj->pTEDDelay1.re;
    b_im = b_obj->pTEDDelay1.im;
    b_obj->pTEDDelay2.re = b_re;
    b_obj->pTEDDelay2.im = b_im;
    emlrtPopRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pTEDDelay1.re = interpFiltOut_re;
    b_obj->pTEDDelay1.im = interpFiltOut_im;
    emlrtPopRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
  } else {
    if (b_obj->pStrobe != 0.0) {
      emlrtPushRtStackR2012b(&jf_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pTEDDelay2.re = 0.0;
      b_obj->pTEDDelay2.im = 0.0;
      emlrtPopRtStackR2012b(&jf_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pTEDDelay1.re = interpFiltOut_re;
      b_obj->pTEDDelay1.im = interpFiltOut_im;
      emlrtPopRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  b_b_re = b_obj->pStrobe;
  b_obj->pDelayStrobe = b_b_re;
  emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  K = e * -1.1757602906949745E-5;
  c_obj = &obj->pLoopFilter;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &o_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.DigitalFilter */
    c_obj->W0_FILT_STATES[0] = c_obj->P0_ICRTP;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    c_obj->W0_FILT_STATES[1] = 0.0;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.DigitalFilter */
  b_b_re = c_obj->P1_RTP1COEFF[0U] * K;
  b_b_re += c_obj->W0_FILT_STATES[0];
  loopFiltOut = b_b_re;
  b_b_re = c_obj->W0_FILT_STATES[1];
  b_b_re += c_obj->P1_RTP1COEFF[1] * K;
  K = b_b_re - c_obj->P2_RTP2COEFF[1] * loopFiltOut;
  c_obj->W0_FILT_STATES[0] = K;
  emlrtPopRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  K = e * -0.0029394007267374359 + loopFiltOut;
  loopFiltOut = b_obj->pNCODelay;
  if (((loopFiltOut - muDoubleScalarFloor(loopFiltOut)) - K) - 0.5 < 0.0) {
    underflow = 1;
    emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    loopFiltOut = b_obj->pNCODelay;
    b_obj->pRegTemp = (loopFiltOut - muDoubleScalarFloor(loopFiltOut)) / (K +
      0.5);
    emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  } else {
    underflow = 0;
  }

  b_b_re = b_obj->pRegTemp;
  emlrtPushRtStackR2012b(&nf_emlrtRSI, emlrtRootTLSGlobal);
  loopFiltOut = b_obj->pNCODelay;
  b_obj->pNCODelay = ((loopFiltOut - muDoubleScalarFloor(loopFiltOut)) - K) -
    0.5;
  emlrtPopRtStackR2012b(&nf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pMU = b_b_re;
  emlrtPopRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->pStrobe > 0.0) {
    emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    loopFiltOut = obj->pCount;
    b_obj = obj;
    b_obj->pCount = loopFiltOut - muDoubleScalarFloor(loopFiltOut / 100.0) *
      100.0;
    emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    value = (99.0 == obj->pCount);
    b_obj->pEnable = value;
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    if ((interpFiltOut_re != 0.0) || (interpFiltOut_im != 0.0)) {
      emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
      d_obj = &obj->pDelayLine;
      value = obj->pEnable;
      if (!d_obj->S0_isInitialized) {
        d_obj->S0_isInitialized = TRUE;
        if (d_obj->S1_isReleased) {
          emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &o_emlrtRTEI,
            "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
        }

        /* System object Initialization function: dsp.DelayLine */
        idxIn = 0;
        for (i = 0; i < 99; i++) {
          d_obj->W0_Buff[idxIn] = d_obj->P0_IC;
          idxIn++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
            emlrtRootTLSGlobal);
        }

        d_obj->W1_BUFF_OFFSET = 0;
      }

      /* System object Outputs function: dsp.DelayLine */
      if (value == 1) {
        idxIn = 99 - d_obj->W1_BUFF_OFFSET;
        i = d_obj->W1_BUFF_OFFSET;
        for (k = 0; k < idxIn; k++) {
          varargout_1[k] = d_obj->W0_Buff[i + k];
        }

        for (k = 0; k < 99 - idxIn; k++) {
          varargout_1[idxIn + k] = d_obj->W0_Buff[k];
        }

        varargout_1[99].re = interpFiltOut_re;
        varargout_1[99].im = interpFiltOut_im;
      }

      /* System object Update function: dsp.DelayLine */
      idxIn = d_obj->W1_BUFF_OFFSET;
      d_obj->W0_Buff[idxIn].re = interpFiltOut_re;
      d_obj->W0_Buff[idxIn].im = interpFiltOut_im;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
      d_obj->W1_BUFF_OFFSET++;
      while (d_obj->W1_BUFF_OFFSET >= 99) {
        d_obj->W1_BUFF_OFFSET -= 99;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }

      b_obj = obj;
      for (i = 0; i < 100; i++) {
        b_obj->pOutput[i] = varargout_1[i];
      }

      emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_b_re = obj->pCount + 1.0;
    b_obj->pCount = b_b_re;
    emlrtPopRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
  }

  for (i = 0; i < 100; i++) {
    dataOut[i] = obj->pOutput[i];
  }

  value = (obj->pStrobe != 0.0);
  b0 = obj->pEnable;
  *isDataValid = (value && b0);
  emlrtPushRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pStrobe = underflow;
  emlrtPopRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (QPSKTimingRecovery.c) */
