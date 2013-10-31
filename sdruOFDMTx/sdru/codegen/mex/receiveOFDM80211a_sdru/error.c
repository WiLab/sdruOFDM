/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo dd_emlrtRSI = { 16, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo q_emlrtMCI = { 16, 1, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void c_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "error", TRUE,
                        location);
}

void error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *b_y;
  static const int32_T iv24[2] = { 1, 37 };

  const mxArray *m7;
  char_T cv40[37];
  int32_T i;
  static const char_T cv41[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i11;
  char_T u_data[1024];
  const mxArray *c_y;
  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m7 = mxCreateCharArray(2, iv24);
  for (i = 0; i < 37; i++) {
    cv40[i] = cv41[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 37, m7, cv40);
  emlrtAssign(&b_y, m7);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i11 = 0; i11 < i; i11++) {
    u_data[i11] = varargin_2_data[i11];
  }

  c_y = NULL;
  m7 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m7, (char_T *)&u_data);
  emlrtAssign(&c_y, m7);
  c_error(b_y, c_y, &q_emlrtMCI);
  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
