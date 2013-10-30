/*
 * Buffer.c
 *
 * Code generation for function 'Buffer'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "Buffer.h"
#include "runSDRuQPSKReceiver_data.h"

/* Function Definitions */
dspcodegen_Buffer *Buffer_Buffer(dspcodegen_Buffer *obj)
{
  dspcodegen_Buffer *b_obj;
  dspcodegen_Buffer *c_obj;
  dsp_Buffer_6 *d_obj;
  b_obj = obj;
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: dsp.Buffer */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  d_obj->P0_ic = 0.0;
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

/* End of code generation (Buffer.c) */
