/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 16, "error",
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
  const mxArray *y;
  static const int32_T iv31[2] = { 1, 41 };

  const mxArray *m6;
  char_T cv38[41];
  int32_T i;
  static const char_T cv39[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i10;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m6 = mxCreateCharArray(2, iv31);
  for (i = 0; i < 41; i++) {
    cv38[i] = cv39[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 41, m6, cv38);
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
  c_error(y, b_y, &q_emlrtMCI);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
