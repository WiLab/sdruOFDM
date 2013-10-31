/*
 * equalizeOFDM.c
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "equalizeOFDM.h"
#include "resample.h"
#include "rdivide.h"
#include "OFDMDemodulator.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "mean.h"
#include "power.h"
#include "abs.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ue_emlrtRSI = { 16, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRSInfo ve_emlrtRSI = { 17, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRSInfo we_emlrtRSI = { 21, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRSInfo xe_emlrtRSI = { 27, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRSInfo ye_emlrtRSI = { 41, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRSInfo nf_emlrtRSI = { 79, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRTEInfo y_emlrtRTEI = { 1, 32, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 16, 5, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 17, 5, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtECInfo c_emlrtECI = { 1, 21, 35, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtECInfo d_emlrtECI = { 3, 37, 9, "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m" };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 57, 7, "", "equalizeOFDM",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/equalizeOFDM.m", 0 };

/* Function Declarations */
static void b_equalizeOFDM(receiveOFDM80211a_sdruStackData *SD, const creal_T
  recv[1280], b_struct_T *estimate, OFDMDemodulator_1 *b_hPreambleDemod,
  OFDMDemodulator *b_hDataDemod, creal_T R[576], emxArray_creal_T *Rraw);

/* Function Definitions */
static void b_equalizeOFDM(receiveOFDM80211a_sdruStackData *SD, const creal_T
  recv[1280], b_struct_T *estimate, OFDMDemodulator_1 *b_hPreambleDemod,
  OFDMDemodulator *b_hDataDemod, creal_T R[576], emxArray_creal_T *Rraw)
{
  creal_T b_recv[64];
  emxArray_creal_T *RLongFirst;
  creal_T c_recv[64];
  emxArray_creal_T *RLongSecond;
  emxArray_creal_T *b_R;
  int32_T k;
  int32_T jtilecol;
  int32_T i;
  creal_T c_R[106];
  creal_T RNormal[106];
  static const real_T Known[106] = { 1.0, 1.0, -1.0, -1.0, 1.0, 1.0, -1.0, 1.0,
    -1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0, -1.0, 1.0, 1.0, -1.0, 1.0, -1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 1.0, -1.0, -1.0, 1.0, 1.0, -1.0, 1.0, -1.0, 1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, -1.0, -1.0, 1.0, -1.0, 1.0, -1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0, -1.0, 1.0, 1.0, -1.0, 1.0, -1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -1.0, -1.0, 1.0, 1.0, -1.0, 1.0, -1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 1.0, -1.0, -1.0, 1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, 1.0, 1.0, -1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, 1.0, 1.0,
    1.0 };

  creal_T b_preambleEqGains[53];
  real_T dv13[106];
  real_T dv14[106];
  creal_T c_preambleEqGains[53];
  real_T dv15[106];
  real_T dv16[53];
  OFDMDemodulator *obj;
  const mxArray *b_y;
  static const int32_T iv64[2] = { 1, 45 };

  const mxArray *m31;
  char_T cv96[45];
  static const char_T cv97[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv65[2] = { 1, 4 };

  char_T cv98[4];
  static const char_T cv99[4] = { 's', 't', 'e', 'p' };

  const mxArray *d_y;
  static const int32_T iv66[2] = { 1, 51 };

  char_T cv100[51];
  static const char_T cv101[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv67[2] = { 1, 5 };

  char_T cv102[5];
  static const char_T cv103[5] = { 's', 'e', 't', 'u', 'p' };

  creal_T PilotNormal[48];
  creal_T preambleGainsFull[636];
  int32_T ia;
  int32_T iv68[3];
  static const int8_T iv69[3] = { 48, 12, 1 };

  int32_T b_Rraw[3];
  creal_T b_preambleGainsFull[48];
  static const real_T dv17[48] = { -1.0, -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, 1.0,
    -1.0, -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, 1.0, -1.0,
    -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0, 1.0, -1.0, 1.0, 1.0, 1.0,
    -1.0, 1.0, 1.0, 1.0, -1.0, 1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0 };

  real_T PilotEnergy[48];
  real_T preambleGainsFull_re;
  creal_T dcv1[48];
  creal_T b_pilotEqGains[576];
  static const int8_T iv70[48] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 20, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31, 32, 34, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 48, 49, 50, 51, 52 };

  real_T preambleGainsFull_im;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&b_recv[0], &recv[192], sizeof(creal_T) << 6);
  emxInit_creal_T(&RLongFirst, 3, &ab_emlrtRTEI, TRUE);
  b_SystemCore_step(b_hPreambleDemod, b_recv, RLongFirst);
  emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&c_recv[0], &recv[256], sizeof(creal_T) << 6);
  emxInit_creal_T(&RLongSecond, 3, &bb_emlrtRTEI, TRUE);
  emxInit_creal_T(&b_R, 3, &y_emlrtRTEI, TRUE);
  b_SystemCore_step(b_hPreambleDemod, c_recv, RLongSecond);
  emlrtPopRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
  k = RLongFirst->size[0];
  jtilecol = RLongSecond->size[0];
  emlrtDimSizeEqCheckFastR2012b(k, jtilecol, &c_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  k = b_R->size[0] * b_R->size[1] * b_R->size[2];
  b_R->size[0] = RLongFirst->size[0];
  b_R->size[1] = 2;
  b_R->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)b_R, k, (int32_T)sizeof(creal_T),
                    &y_emlrtRTEI);
  i = RLongFirst->size[0];
  for (k = 0; k < i; k++) {
    b_R->data[k] = RLongFirst->data[k];
  }

  emxFree_creal_T(&RLongFirst);
  i = RLongSecond->size[0];
  for (k = 0; k < i; k++) {
    b_R->data[k + b_R->size[0]] = RLongSecond->data[k];
  }

  emxFree_creal_T(&RLongSecond);
  for (k = 0; k < 53; k++) {
    jtilecol = b_R->size[0];
    i = 1 + k;
    emlrtDynamicBoundsCheckFastR2012b(i, 1, jtilecol, &ab_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  i = b_R->size[0];
  for (k = 0; k < 2; k++) {
    for (jtilecol = 0; jtilecol < 53; jtilecol++) {
      c_R[jtilecol + 53 * k] = b_R->data[jtilecol + i * k];
    }
  }

  emxFree_creal_T(&b_R);
  b_rdivide(c_R, Known, RNormal);
  b_mean(RNormal, b_preambleEqGains);
  d_abs(RNormal, dv13);
  memcpy(&dv14[0], &dv13[0], 106U * sizeof(real_T));
  for (i = 0; i < 53; i++) {
    c_preambleEqGains[i].re = b_preambleEqGains[i].re;
    c_preambleEqGains[i].im = -b_preambleEqGains[i].im;
  }

  c_power(dv14, dv15);
  mean(dv15, dv16);
  c_rdivide(c_preambleEqGains, dv16, b_preambleEqGains);
  emlrtPopRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
  obj = b_hDataDemod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m31 = mxCreateCharArray(2, iv64);
    for (i = 0; i < 45; i++) {
      cv96[i] = cv97[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m31, cv96);
    emlrtAssign(&b_y, m31);
    c_y = NULL;
    m31 = mxCreateCharArray(2, iv65);
    for (i = 0; i < 4; i++) {
      cv98[i] = cv99[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m31, cv98);
    emlrtAssign(&c_y, m31);
    b_error(message(b_y, c_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    if (!obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m31 = mxCreateCharArray(2, iv66);
      for (i = 0; i < 51; i++) {
        cv100[i] = cv101[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m31, cv100);
      emlrtAssign(&d_y, m31);
      e_y = NULL;
      m31 = mxCreateCharArray(2, iv67);
      for (i = 0; i < 5; i++) {
        cv102[i] = cv103[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m31, cv102);
      emlrtAssign(&e_y, m31);
      b_error(message(d_y, e_y, &l_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    OFDMDemodulator_setupImpl(obj);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_OFDMDemodulator_stepImpl(obj, *(creal_T (*)[960])&recv[320], Rraw,
    PilotNormal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
  i = 0;
  for (jtilecol = 0; jtilecol < 12; jtilecol++) {
    ia = 0;
    for (k = 0; k < 53; k++) {
      preambleGainsFull[i] = b_preambleEqGains[ia];
      ia++;
      i++;
    }
  }

  for (i = 0; i < 3; i++) {
    iv68[i] = iv69[i];
  }

  for (k = 0; k < 3; k++) {
    b_Rraw[k] = Rraw->size[k];
  }

  emlrtSizeEqCheckNDR2012b(iv68, b_Rraw, &d_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 12; k++) {
    for (jtilecol = 0; jtilecol < 4; jtilecol++) {
      b_preambleGainsFull[jtilecol + (k << 2)].re = preambleGainsFull[(14 *
        jtilecol + 53 * k) + 5].re * PilotNormal[jtilecol + (k << 2)].re -
        preambleGainsFull[(14 * jtilecol + 53 * k) + 5].im *
        PilotNormal[jtilecol + (k << 2)].im;
      b_preambleGainsFull[jtilecol + (k << 2)].im = preambleGainsFull[(14 *
        jtilecol + 53 * k) + 5].re * PilotNormal[jtilecol + (k << 2)].im +
        preambleGainsFull[(14 * jtilecol + 53 * k) + 5].im *
        PilotNormal[jtilecol + (k << 2)].re;
    }
  }

  d_rdivide(b_preambleGainsFull, dv17, PilotNormal);
  for (k = 0; k < 48; k++) {
    preambleGainsFull_re = muDoubleScalarHypot(PilotNormal[k].re, PilotNormal[k]
      .im);
    PilotEnergy[k] = preambleGainsFull_re * preambleGainsFull_re;
  }

  emlrtPushRtStackR2012b(&nf_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 48; k++) {
    b_preambleGainsFull[k].re = PilotNormal[k].re;
    b_preambleGainsFull[k].im = -PilotNormal[k].im;
  }

  d_rdivide(b_preambleGainsFull, PilotEnergy, dcv1);
  resample(SD, dcv1, b_pilotEqGains);
  emlrtPopRtStackR2012b(&nf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 12; k++) {
    for (jtilecol = 0; jtilecol < 48; jtilecol++) {
      preambleGainsFull_re = preambleGainsFull[iv70[jtilecol] + 53 * k].re *
        Rraw->data[jtilecol + 48 * k].re - preambleGainsFull[iv70[jtilecol] + 53
        * k].im * Rraw->data[jtilecol + 48 * k].im;
      preambleGainsFull_im = preambleGainsFull[iv70[jtilecol] + 53 * k].re *
        Rraw->data[jtilecol + 48 * k].im + preambleGainsFull[iv70[jtilecol] + 53
        * k].im * Rraw->data[jtilecol + 48 * k].re;
      R[jtilecol + 48 * k].re = b_pilotEqGains[jtilecol + 48 * k].re *
        preambleGainsFull_re - b_pilotEqGains[jtilecol + 48 * k].im *
        preambleGainsFull_im;
      R[jtilecol + 48 * k].im = b_pilotEqGains[jtilecol + 48 * k].re *
        preambleGainsFull_im + b_pilotEqGains[jtilecol + 48 * k].im *
        preambleGainsFull_re;
    }
  }

  for (k = 0; k < 576; k++) {
    estimate->pilotEqGains[k] = b_pilotEqGains[k];
  }

  for (i = 0; i < 53; i++) {
    estimate->preambleEqGains[i] = b_preambleEqGains[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void equalizeOFDM(receiveOFDM80211a_sdruStackData *SD, const creal_T recv[1280],
                  const b_struct_T *estimate, OFDMDemodulator_1
                  *b_hPreambleDemod, OFDMDemodulator *b_hDataDemod, creal_T R
                  [576], emxArray_creal_T *Rraw, b_struct_T *b_estimate)
{
  *b_estimate = *estimate;
  b_equalizeOFDM(SD, recv, b_estimate, b_hPreambleDemod, b_hDataDemod, R, Rraw);
}

/* End of code generation (equalizeOFDM.c) */
