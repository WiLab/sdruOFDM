/*
 * xcorr.c
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "xcorr.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo nd_emlrtRSI = { 31, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo od_emlrtRSI = { 94, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtBCInfo p_emlrtBCI = { 1, 16, 181, 35, "", "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m", 0 };

static emlrtBCInfo q_emlrtBCI = { 1, 1231, 181, 48, "", "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m", 0 };

/* Function Definitions */
void b_xcorr(const real_T arg1[1231], real_T C[2461])
{
  int32_T i;
  real_T s;
  int32_T jstart;
  int32_T i13;
  int32_T j;
  int32_T b_j;
  int32_T i14;
  emlrtPushRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 2461; i++) {
    s = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    i13 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = 0; j <= i13; j++) {
      b_j = jstart + j;
      i14 = (b_j - i) + 1230;
      emlrtDynamicBoundsCheckFastR2012b(i14, 1, 16, &p_emlrtBCI,
        emlrtRootTLSGlobal);
      emlrtDynamicBoundsCheckFastR2012b(b_j, 1, 1231, &q_emlrtBCI,
        emlrtRootTLSGlobal);
      s += arg1[b_j - 1];
    }

    C[i] = s;
  }

  emlrtPopRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
}

void xcorr(const creal_T arg1[1231], const creal_T arg2[16], creal_T C[2461])
{
  int32_T i;
  real_T s_re;
  real_T s_im;
  int32_T jstart;
  int32_T i11;
  int32_T j;
  int32_T b_j;
  int32_T i12;
  emlrtPushRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 2461; i++) {
    s_re = 0.0;
    s_im = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    i11 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = 0; j <= i11; j++) {
      b_j = (jstart + j) - 1;
      i12 = (b_j - i) + 1231;
      emlrtDynamicBoundsCheckFastR2012b(i12, 1, 16, &p_emlrtBCI,
        emlrtRootTLSGlobal);
      i12 = b_j + 1;
      emlrtDynamicBoundsCheckFastR2012b(i12, 1, 1231, &q_emlrtBCI,
        emlrtRootTLSGlobal);
      s_re += arg2[(b_j - i) + 1230].re * arg1[b_j].re + arg2[(b_j - i) + 1230].
        im * arg1[b_j].im;
      s_im += arg2[(b_j - i) + 1230].re * arg1[b_j].im - arg2[(b_j - i) + 1230].
        im * arg1[b_j].re;
    }

    C[i].re = s_re;
    C[i].im = s_im;
  }

  emlrtPopRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (xcorr.c) */
