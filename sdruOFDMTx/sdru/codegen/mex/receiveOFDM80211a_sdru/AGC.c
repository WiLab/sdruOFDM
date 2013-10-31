/*
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "AGC.h"
#include "SystemProp.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo nd_emlrtRSI = { 271, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

/* Function Declarations */
static real_T rectifier(const creal_T x[5120]);
static real_T squarelaw(const creal_T x[5120]);

/* Function Definitions */
static real_T rectifier(const creal_T x[5120])
{
  real_T b_y;
  real_T c_y[5120];
  int32_T k;
  for (k = 0; k < 5120; k++) {
    c_y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }

  b_y = c_y[0];
  for (k = 0; k < 5119; k++) {
    b_y += c_y[k + 1];
  }

  b_y /= 5120.0;
  return b_y;
}

static real_T squarelaw(const creal_T x[5120])
{
  real_T b_y;
  real_T c_y[5120];
  int32_T k;
  for (k = 0; k < 5120; k++) {
    b_y = muDoubleScalarHypot(x[k].re, x[k].im);
    c_y[k] = b_y * b_y;
  }

  b_y = c_y[0];
  for (k = 0; k < 5119; k++) {
    b_y += c_y[k + 1];
  }

  b_y /= 5120.0;
  return b_y;
}

void AGC_stepImpl(comm_AGC *obj, const creal_T x[5120], creal_T b_y[5120])
{
  real_T g;
  int32_T i;
  g = obj->Gain;
  if (obj->pDetectorIsRectifier) {
    for (i = 0; i < 5120; i++) {
      b_y[i].re = g * x[i].re;
      b_y[i].im = g * x[i].im;
    }

    g += 0.1 * (1.0 - rectifier(b_y));
    if (g < 1.4901161193847656E-8) {
      g = 1.4901161193847656E-8;
    } else {
      if (g > 1000.0) {
        g = 1000.0;
      }
    }
  } else {
    for (i = 0; i < 5120; i++) {
      b_y[i].re = g * x[i].re;
      b_y[i].im = g * x[i].im;
    }

    g += 0.1 * (1.0 - squarelaw(b_y));
    if (g < 1.4901161193847656E-8) {
      g = 1.4901161193847656E-8;
    } else {
      if (g > 1000.0) {
        g = 1000.0;
      }
    }
  }

  emlrtPushRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemProp_matlabCodegenSetAn(obj, g);
  emlrtPopRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (AGC.c) */
