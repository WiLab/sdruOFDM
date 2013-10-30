/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "error.h"
#include "runSDRuQPSKTransmitter_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo sd_emlrtRSI = { 16, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo s_emlrtMCI = { 16, 1, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Definitions */
void error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv52[2] = { 1, 41 };

  const mxArray *m12;
  char_T cv75[41];
  int32_T i;
  static const char_T cv76[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i10;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m12 = mxCreateCharArray(2, iv52);
  for (i = 0; i < 41; i++) {
    cv75[i] = cv76[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 41, m12, cv75);
  emlrtAssign(&y, m12);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i10 = 0; i10 < i; i10++) {
    u_data[i10] = varargin_2_data[i10];
  }

  b_y = NULL;
  m12 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m12, (char_T *)&u_data);
  emlrtAssign(&b_y, m12);
  c_error(y, b_y, &s_emlrtMCI);
  emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
