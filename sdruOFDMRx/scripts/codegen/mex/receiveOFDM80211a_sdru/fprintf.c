/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "fprintf.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo xf_emlrtRSI = { 33, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo yf_emlrtRSI = { 66, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo hb_emlrtMCI = { 66, 14, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static real_T c_fprintf(real_T varargin_1);
static real_T e_fprintf(real_T varargin_1);
static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static real_T c_fprintf(real_T varargin_1)
{
  real_T nbytes;
  const mxArray *b_y;
  static const int32_T iv56[2] = { 1, 7 };

  const mxArray *m14;
  char_T cv68[7];
  int32_T i;
  static const char_T cv69[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *c_y;
  static const int32_T iv57[2] = { 1, 15 };

  char_T cv70[15];
  static const char_T cv71[15] = { 'T', 'o', 't', 'a', 'l', ' ', 'B', 'E', 'R',
    ':', ' ', '%', 'f', '\\', 'n' };

  emlrtPushRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m14 = mxCreateCharArray(2, iv56);
  for (i = 0; i < 7; i++) {
    cv68[i] = cv69[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m14, cv68);
  emlrtAssign(&b_y, m14);
  c_y = NULL;
  m14 = mxCreateCharArray(2, iv57);
  for (i = 0; i < 15; i++) {
    cv70[i] = cv71[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 15, m14, cv70);
  emlrtAssign(&c_y, m14);
  nbytes = c_emlrt_marshallIn(feval(b_y, emlrt_marshallOut(1.0), c_y,
    emlrt_marshallOut(varargin_1), &hb_emlrtMCI), "feval");
  emlrtPopRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
  return nbytes;
}

static real_T e_fprintf(real_T varargin_1)
{
  real_T nbytes;
  const mxArray *b_y;
  static const int32_T iv58[2] = { 1, 7 };

  const mxArray *m15;
  char_T cv72[7];
  int32_T i;
  static const char_T cv73[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *c_y;
  static const int32_T iv59[2] = { 1, 27 };

  char_T cv74[27];
  static const char_T cv75[27] = { 'T', 'o', 't', 'a', 'l', ' ', 'r', 'e', 'c',
    'e', 'i', 'v', 'e', 'd', ' ', 'f', 'r', 'a', 'm', 'e', 's', ':', ' ', '%',
    'f', '\\', 'n' };

  emlrtPushRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m15 = mxCreateCharArray(2, iv58);
  for (i = 0; i < 7; i++) {
    cv72[i] = cv73[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m15, cv72);
  emlrtAssign(&b_y, m15);
  c_y = NULL;
  m15 = mxCreateCharArray(2, iv59);
  for (i = 0; i < 27; i++) {
    cv74[i] = cv75[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 27, m15, cv74);
  emlrtAssign(&c_y, m15);
  nbytes = c_emlrt_marshallIn(feval(b_y, emlrt_marshallOut(1.0), c_y,
    emlrt_marshallOut(varargin_1), &hb_emlrtMCI), "feval");
  emlrtPopRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
  return nbytes;
}

static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m24;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m24, 4, pArrays, "feval",
    TRUE, location);
}

void b_fprintf(real_T formatSpec)
{
  emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
  c_fprintf(formatSpec);
  emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
}

void d_fprintf(real_T formatSpec)
{
  emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
  e_fprintf(formatSpec);
  emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (fprintf.c) */
