/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "resample.h"
#include "setup.h"
#include "SystemCore.h"
#include "FIRRateConverter.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo nf_emlrtRSI = { 84, "resample",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/resample.m" };

static emlrtRSInfo of_emlrtRSI = { 146, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo pf_emlrtRSI = { 149, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo qf_emlrtRSI = { 150, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

/* Function Definitions */
void resample(receiveOFDM80211a_sdruStackData *SD, const creal_T x[48], creal_T
              yout[576])
{
  dspcodegen_FIRRateConverter_112 s;
  creal_T b_x[288];
  int32_T i18;
  int32_T i19;
  emlrtPushRtStackR2012b(&nf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  c_FIRRateConverter_FIRRateConve(&s);
  emlrtPopRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pf_emlrtRSI, emlrtRootTLSGlobal);
  for (i18 = 0; i18 < 12; i18++) {
    memcpy(&b_x[24 * i18], &x[i18 << 2], sizeof(creal_T) << 2);
    for (i19 = 0; i19 < 20; i19++) {
      b_x[(i19 + 24 * i18) + 4].re = 0.0;
      b_x[(i19 + 24 * i18) + 4].im = 0.0;
    }
  }

  b_SystemCore_step(&s, b_x, SD->u1.f0.y);
  emlrtPopRtStackR2012b(&pf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_reset(&s);
  emlrtPopRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
  Destructor(&s.cSFunObject);
  emlrtPopRtStackR2012b(&nf_emlrtRSI, emlrtRootTLSGlobal);
  for (i18 = 0; i18 < 12; i18++) {
    memcpy(&yout[48 * i18], &SD->u1.f0.y[121 + 288 * i18], 48U * sizeof(creal_T));
  }
}

/* End of code generation (resample.c) */
