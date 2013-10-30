/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Tue Oct  8 14:08:19 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "fprintf.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo vf_emlrtRSI = { 33, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo wf_emlrtRSI = { 66, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo ib_emlrtMCI = { 66, 14, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static real_T c_fprintf(int32_T varargin_1);
static real_T e_fprintf(real_T varargin_1);
static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static real_T c_fprintf(int32_T varargin_1)
{
  real_T nbytes;
  const mxArray *b_y;
  static const int32_T iv49[2] = { 1, 7 };

  const mxArray *m17;
  char_T cv78[7];
  int32_T i;
  static const char_T cv79[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *c_y;
  static const int32_T iv50[2] = { 1, 18 };

  char_T cv80[18];
  static const char_T cv81[18] = { 'F', 'o', 'u', 'n', 'd', ' ', 'f', 'r', 'a',
    'm', 'e', 's', ':', ' ', '%', 'i', '\\', 'n' };

  const mxArray *d_y;
  emlrtPushRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m17 = mxCreateCharArray(2, iv49);
  for (i = 0; i < 7; i++) {
    cv78[i] = cv79[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m17, cv78);
  emlrtAssign(&b_y, m17);
  c_y = NULL;
  m17 = mxCreateCharArray(2, iv50);
  for (i = 0; i < 18; i++) {
    cv80[i] = cv81[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 18, m17, cv80);
  emlrtAssign(&c_y, m17);
  d_y = NULL;
  m17 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m17) = varargin_1;
  emlrtAssign(&d_y, m17);
  nbytes = c_emlrt_marshallIn(feval(b_y, emlrt_marshallOut(1.0), c_y, d_y,
    &ib_emlrtMCI), "feval");
  emlrtPopRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
  return nbytes;
}

static real_T e_fprintf(real_T varargin_1)
{
  real_T nbytes;
  const mxArray *b_y;
  static const int32_T iv51[2] = { 1, 7 };

  const mxArray *m18;
  char_T cv82[7];
  int32_T i;
  static const char_T cv83[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *c_y;
  static const int32_T iv52[2] = { 1, 22 };

  char_T cv84[22];
  static const char_T cv85[22] = { 'A', 'v', 'e', 'r', 'g', 'e', ' ', 'f', 'r',
    'a', 'm', 'e', ' ', 'B', 'E', 'R', ':', ' ', '%', 'f', '\\', 'n' };

  emlrtPushRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m18 = mxCreateCharArray(2, iv51);
  for (i = 0; i < 7; i++) {
    cv82[i] = cv83[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m18, cv82);
  emlrtAssign(&b_y, m18);
  c_y = NULL;
  m18 = mxCreateCharArray(2, iv52);
  for (i = 0; i < 22; i++) {
    cv84[i] = cv85[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 22, m18, cv84);
  emlrtAssign(&c_y, m18);
  nbytes = c_emlrt_marshallIn(feval(b_y, emlrt_marshallOut(1.0), c_y,
    emlrt_marshallOut(varargin_1), &ib_emlrtMCI), "feval");
  emlrtPopRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
  return nbytes;
}

static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m30;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m30, 4, pArrays, "feval",
    TRUE, location);
}

void b_fprintf(int32_T formatSpec)
{
  emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
  c_fprintf(formatSpec);
  emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
}

void d_fprintf(real_T formatSpec)
{
  emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
  e_fprintf(formatSpec);
  emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (fprintf.c) */
