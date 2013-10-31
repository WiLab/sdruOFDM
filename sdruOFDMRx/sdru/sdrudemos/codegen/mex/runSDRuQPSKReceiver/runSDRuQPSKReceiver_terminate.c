/*
 * runSDRuQPSKReceiver_terminate.c
 *
 * Code generation for function 'runSDRuQPSKReceiver_terminate'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "runSDRuQPSKReceiver_terminate.h"
#include "runSDRuQPSKReceiver_data.h"

/* Function Definitions */
void runSDRuQPSKReceiver_atexit(void)
{
  comm_ErrorRate_11 *obj;
  comm_Descrambler_10 *b_obj;
  dsp_Buffer_6 *c_obj;
  dsp_DelayLine_5 *d_obj;
  dsp_DigitalFilter_4 *e_obj;
  dsp_DigitalFilter_3 *f_obj;
  dsp_DigitalFilter_2 *g_obj;
  comm_PhaseFrequencyOffset_1 *h_obj;
  dsp_FIRDecimator_0 *i_obj;
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  obj = &hRx.pDataDecod.pBER.cSFunObject;

  /* System object Destructor function: comm.ErrorRate */
  if (obj->S0_isInitialized) {
    obj->S0_isInitialized = FALSE;
    if (!obj->S1_isReleased) {
      obj->S1_isReleased = TRUE;
    }
  }

  b_obj = &hRx.pDataDecod.pDescrambler.cSFunObject;

  /* System object Destructor function: comm.Descrambler */
  if (b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = FALSE;
    if (!b_obj->S1_isReleased) {
      b_obj->S1_isReleased = TRUE;
    }
  }

  c_obj = &hRx.pDataDecod.pBuffer.cSFunObject;

  /* System object Destructor function: dsp.Buffer */
  if (c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = FALSE;
    if (!c_obj->S1_isReleased) {
      c_obj->S1_isReleased = TRUE;
    }
  }

  d_obj = &hRx.pTimingRec.pDelayLine;

  /* System object Destructor function: dsp.DelayLine */
  if (d_obj->S0_isInitialized) {
    d_obj->S0_isInitialized = FALSE;
    if (!d_obj->S1_isReleased) {
      d_obj->S1_isReleased = TRUE;
    }
  }

  e_obj = &hRx.pTimingRec.pLoopFilter;

  /* System object Destructor function: dsp.DigitalFilter */
  if (e_obj->S0_isInitialized) {
    e_obj->S0_isInitialized = FALSE;
    if (!e_obj->S1_isReleased) {
      e_obj->S1_isReleased = TRUE;
    }
  }

  f_obj = &hRx.pFineFreqCompensator.pIntegrator;

  /* System object Destructor function: dsp.DigitalFilter */
  if (f_obj->S0_isInitialized) {
    f_obj->S0_isInitialized = FALSE;
    if (!f_obj->S1_isReleased) {
      f_obj->S1_isReleased = TRUE;
    }
  }

  g_obj = &hRx.pFineFreqCompensator.pLoopFilter;

  /* System object Destructor function: dsp.DigitalFilter */
  if (g_obj->S0_isInitialized) {
    g_obj->S0_isInitialized = FALSE;
    if (!g_obj->S1_isReleased) {
      g_obj->S1_isReleased = TRUE;
    }
  }

  h_obj = &hRx.pCoarseFreqCompensator.pPhaseFreqOffset.cSFunObject;

  /* System object Destructor function: comm.PhaseFrequencyOffset */
  if (h_obj->S0_isInitialized) {
    h_obj->S0_isInitialized = FALSE;
    if (!h_obj->S1_isReleased) {
      h_obj->S1_isReleased = TRUE;
    }
  }

  i_obj = &hRx.pRxFilter.cSFunObject;

  /* System object Destructor function: dsp.FIRDecimator */
  if (i_obj->S0_isInitialized) {
    i_obj->S0_isInitialized = FALSE;
    if (!i_obj->S1_isReleased) {
      i_obj->S1_isReleased = TRUE;
    }
  }

  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void runSDRuQPSKReceiver_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (runSDRuQPSKReceiver_terminate.c) */
