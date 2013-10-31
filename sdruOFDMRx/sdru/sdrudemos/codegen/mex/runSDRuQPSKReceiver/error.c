/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "error.h"
#include "sdruQPSKDataDecoder.h"
#include "runSDRuQPSKReceiver_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo ic_emlrtRSI = { 16, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo p_emlrtMCI = { 16, 1, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Definitions */
void error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv25[2] = { 1, 37 };

  const mxArray *m6;
  char_T cv28[37];
  int32_T i;
  static const char_T cv29[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i10;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m6 = mxCreateCharArray(2, iv25);
  for (i = 0; i < 37; i++) {
    cv28[i] = cv29[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 37, m6, cv28);
  emlrtAssign(&y, m6);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i10 = 0; i10 < i; i10++) {
    u_data[i10] = varargin_2_data[i10];
  }

  b_y = NULL;
  m6 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m6, (char_T *)&u_data);
  emlrtAssign(&b_y, m6);
  c_error(y, b_y, &p_emlrtMCI);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
