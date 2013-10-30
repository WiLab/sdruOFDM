/*
 * runSDRuQPSKTransmitter_terminate.c
 *
 * Code generation for function 'runSDRuQPSKTransmitter_terminate'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "runSDRuQPSKTransmitter_terminate.h"
#include "runSDRuQPSKTransmitter_data.h"

/* Function Definitions */
void runSDRuQPSKTransmitter_atexit(void)
{
  dsp_FIRInterpolator_1 *obj;
  comm_Scrambler_2 *b_obj;
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  obj = &hTx.pTransmitterFilter.cSFunObject;

  /* System object Destructor function: dsp.FIRInterpolator */
  if (obj->S0_isInitialized) {
    obj->S0_isInitialized = FALSE;
    if (!obj->S1_isReleased) {
      obj->S1_isReleased = TRUE;
    }
  }

  b_obj = &hTx.pBitGenerator.pScrambler.cSFunObject;

  /* System object Destructor function: comm.Scrambler */
  if (b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = FALSE;
    if (!b_obj->S1_isReleased) {
      b_obj->S1_isReleased = TRUE;
    }
  }

  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void runSDRuQPSKTransmitter_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (runSDRuQPSKTransmitter_terminate.c) */
