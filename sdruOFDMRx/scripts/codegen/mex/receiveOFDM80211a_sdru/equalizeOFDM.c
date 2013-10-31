/*
 * equalizeOFDM.c
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "equalizeOFDM.h"
#include "resample.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "OFDMDemodulator.h"
#include "rdivide.h"
#include "mean.h"
#include "power.h"
#include "abs.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo te_emlrtRSI = { 16, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtRSInfo ue_emlrtRSI = { 17, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtRSInfo ve_emlrtRSI = { 21, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtRSInfo we_emlrtRSI = { 27, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtRSInfo xe_emlrtRSI = { 41, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtRSInfo hf_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo mf_emlrtRSI = { 79, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtMCInfo g_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo h_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo db_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo eb_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRTEInfo x_emlrtRTEI = { 1, 32, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtRTEInfo y_emlrtRTEI = { 16, 5, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 17, 5, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtECInfo c_emlrtECI = { 3, 37, 9, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtECInfo d_emlrtECI = { 1, 21, 35, "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m" };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 57, 7, "R", "equalizeOFDM",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { 1, 768, 171, 28, "postShift",
  "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m", 0
};

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
  int32_T ihi;
  int32_T ib;
  int32_T i2;
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
  real_T dv11[106];
  real_T dv12[106];
  creal_T c_preambleEqGains[53];
  int32_T i;
  real_T dv13[106];
  real_T dv14[53];
  OFDMDemodulator *obj;
  const mxArray *b_y;
  static const int32_T iv66[2] = { 1, 45 };

  const mxArray *m25;
  char_T cv76[45];
  static const char_T cv77[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv67[2] = { 1, 4 };

  char_T cv78[4];
  static const char_T cv79[4] = { 's', 't', 'e', 'p' };

  const mxArray *d_y;
  static const int32_T iv68[2] = { 1, 51 };

  char_T cv80[51];
  static const char_T cv81[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv69[2] = { 1, 5 };

  char_T cv82[5];
  static const char_T cv83[5] = { 's', 'e', 't', 'u', 'p' };

  creal_T postFFT[768];
  int32_T ix;
  int32_T chanStart;
  int32_T ia;
  int32_T b_ix;
  boolean_T overflow;
  int32_T c_ix;
  real_T tmp_re;
  real_T tmp_im;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  static const real_T dv15[33] = { 0.0, -0.0980171403295606,
    -0.19509032201612825, -0.29028467725446233, -0.38268343236508978,
    -0.47139673682599764, -0.55557023301960218, -0.63439328416364549,
    -0.70710678118654757, -0.773010453362737, -0.83146961230254524,
    -0.881921264348355, -0.92387953251128674, -0.95694033573220882,
    -0.98078528040323043, -0.99518472667219693, -1.0, -0.99518472667219693,
    -0.98078528040323043, -0.95694033573220882, -0.92387953251128674,
    -0.881921264348355, -0.83146961230254524, -0.773010453362737,
    -0.70710678118654757, -0.63439328416364549, -0.55557023301960218,
    -0.47139673682599764, -0.38268343236508978, -0.29028467725446233,
    -0.19509032201612825, -0.0980171403295606, -0.0 };

  static const real_T dv16[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emxArray_real_T *x;
  emxArray_creal_T *b_x;
  real_T varargin_1[3];
  int32_T exitg1;
  const mxArray *f_y;
  static const int32_T iv70[2] = { 1, 57 };

  char_T cv84[57];
  static const char_T cv85[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *g_y;
  static const int32_T iv71[2] = { 1, 21 };

  char_T cv86[21];
  static const char_T cv87[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *h_y;
  const mxArray *i_y;
  static const int32_T iv72[2] = { 1, 40 };

  char_T cv88[40];
  static const char_T cv89[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  creal_T PilotNormal[48];
  static const int16_T iv73[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  creal_T preambleGainsFull[636];
  static const int8_T iv74[3] = { 48, 12, 1 };

  int32_T j_y[3];
  static const int8_T iv75[48] = { -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, -1, 1,
    -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, -1, 1, 1, 1, 1, -1, 1,
    1, 1, -1, 1, 1, 1, -1, 1, 1, 1, -1, -1, -1, -1, 1 };

  real_T PilotEnergy[48];
  creal_T b_PilotNormal[48];
  emxArray_creal_T *k_y;
  creal_T b_pilotEqGains[576];
  static const int8_T iv76[48] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 20, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31, 32, 34, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 48, 49, 50, 51, 52 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*  equalizeOFDM: Equalize the entire OFDM frame through the use of both */
  /*  the long preamble from the 802.11a standard and four pilot tones in */
  /*  the data frames themselves.  The gains from the pilots are */
  /*  interpolated across frequency to fill the data frame and apply gains */
  /*  to all data subcarriers. */
  /*     %% Use Long Preamble frame to estimate channel in frequency domain */
  /*  Separate out received preambles */
  /*  Demod */
  emlrtPushRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&b_recv[0], &recv[192], sizeof(creal_T) << 6);
  emxInit_creal_T(&RLongFirst, 3, &y_emlrtRTEI, TRUE);
  SystemCore_step(b_hPreambleDemod, b_recv, RLongFirst);
  emlrtPopRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);

  /* First half of long preamble */
  emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&c_recv[0], &recv[256], sizeof(creal_T) << 6);
  emxInit_creal_T(&RLongSecond, 3, &ab_emlrtRTEI, TRUE);
  emxInit_creal_T(&b_R, 3, &x_emlrtRTEI, TRUE);
  SystemCore_step(b_hPreambleDemod, c_recv, RLongSecond);
  emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);

  /* Second half of long preamble */
  /*     %% Preamble Equalization */
  /*  Get Equalizer tap gains */
  ihi = RLongFirst->size[0];
  ib = RLongSecond->size[0];
  emlrtDimSizeEqCheckFastR2012b(ihi, ib, &d_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
  ihi = b_R->size[0] * b_R->size[1] * b_R->size[2];
  b_R->size[0] = RLongFirst->size[0];
  b_R->size[1] = 2;
  b_R->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)b_R, ihi, (int32_T)sizeof(creal_T),
                    &x_emlrtRTEI);
  i2 = RLongFirst->size[0];
  for (ihi = 0; ihi < i2; ihi++) {
    b_R->data[ihi] = RLongFirst->data[ihi];
  }

  emxFree_creal_T(&RLongFirst);
  i2 = RLongSecond->size[0];
  for (ihi = 0; ihi < i2; ihi++) {
    b_R->data[ihi + b_R->size[0]] = RLongSecond->data[ihi];
  }

  emxFree_creal_T(&RLongSecond);

  /*  Calculate Equalizer Taps with preamble symbols */
  /*  Calculate non-normalized channel gains */
  for (ihi = 0; ihi < 53; ihi++) {
    ib = b_R->size[0];
    i2 = 1 + ihi;
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, ib, &y_emlrtBCI, emlrtRootTLSGlobal);
  }

  i2 = b_R->size[0];
  for (ihi = 0; ihi < 2; ihi++) {
    for (ib = 0; ib < 53; ib++) {
      c_R[ib + 53 * ihi] = b_R->data[ib + i2 * ihi];
    }
  }

  emxFree_creal_T(&b_R);
  b_rdivide(c_R, Known, RNormal);

  /*  Known is the original Long Preamble symbols  */
  /*  Scale channel gains */
  b_mean(RNormal, b_preambleEqGains);
  d_abs(RNormal, dv11);
  memcpy(&dv12[0], &dv11[0], 106U * sizeof(real_T));
  for (i = 0; i < 53; i++) {
    c_preambleEqGains[i].re = b_preambleEqGains[i].re;
    c_preambleEqGains[i].im = -b_preambleEqGains[i].im;
  }

  c_power(dv12, dv13);
  mean(dv13, dv14);
  c_rdivide(c_preambleEqGains, dv14, b_preambleEqGains);
  emlrtPopRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);

  /*  Separate data from preambles */
  /*  OFDM Demod */
  emlrtPushRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  obj = b_hDataDemod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m25 = mxCreateCharArray(2, iv66);
    for (i = 0; i < 45; i++) {
      cv76[i] = cv77[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m25, cv76);
    emlrtAssign(&b_y, m25);
    c_y = NULL;
    m25 = mxCreateCharArray(2, iv67);
    for (i = 0; i < 4; i++) {
      cv78[i] = cv79[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m25, cv78);
    emlrtAssign(&c_y, m25);
    b_error(message(b_y, c_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    if (!obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m25 = mxCreateCharArray(2, iv68);
      for (i = 0; i < 51; i++) {
        cv80[i] = cv81[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m25, cv80);
      emlrtAssign(&d_y, m25);
      e_y = NULL;
      m25 = mxCreateCharArray(2, iv69);
      for (i = 0; i < 5; i++) {
        cv82[i] = cv83[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m25, cv82);
      emlrtAssign(&e_y, m25);
      b_error(message(d_y, e_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    OFDMDemodulator_setupImpl(obj);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&SD->f2.inputIn3D[0], &recv[320], 960U * sizeof(creal_T));
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    i2 = 0;
    ia = chanStart;
    for (i = 0; i < 63; i++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 6);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 6);
      }

      postFFT[ia] = SD->f2.inputIn3D[(ix % 64 + 80 * b_ix) + 16];
      ia = 64;
      overflow = TRUE;
      while (overflow) {
        if (ia >= 0) {
          ia = (int32_T)((uint32_T)ia >> 1);
        } else {
          ia = ~(int32_T)((uint32_T)~ia >> 1);
        }

        i2 ^= ia;
        overflow = ((i2 & ia) == 0);
      }

      ia = chanStart + i2;
      ix++;
    }

    if (ix >= 0) {
      c_ix = (int32_T)((uint32_T)ix >> 6);
    } else {
      c_ix = ~(int32_T)((uint32_T)~ix >> 6);
    }

    postFFT[ia] = SD->f2.inputIn3D[(ix % 64 + 80 * c_ix) + 16];
    ix++;
    for (i = chanStart; i <= chanStart + 62; i += 2) {
      tmp_re = postFFT[i + 1].re;
      tmp_im = postFFT[i + 1].im;
      postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
      postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 2;
    iDelta2 = 4;
    k = 16;
    iheight = 61;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        ia = i + ib;
        tmp_re = postFFT[ia].re;
        tmp_im = postFFT[ia].im;
        postFFT[i + ib].re = postFFT[i].re - postFFT[ia].re;
        postFFT[i + ib].im = postFFT[i].im - postFFT[ia].im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      ia = chanStart + 1;
      for (i2 = k; i2 < 32; i2 += k) {
        i = ia;
        ihi = ia + iheight;
        while (i < ihi) {
          tmp_re = dv16[i2] * postFFT[i + ib].re - dv15[i2] * postFFT[i + ib].im;
          tmp_im = dv16[i2] * postFFT[i + ib].im + dv15[i2] * postFFT[i + ib].re;
          postFFT[i + ib].re = postFFT[i].re - tmp_re;
          postFFT[i + ib].im = postFFT[i].im - tmp_im;
          postFFT[i].re += tmp_re;
          postFFT[i].im += tmp_im;
          i += iDelta2;
        }

        ia++;
      }

      ihi = k;
      k = (int32_T)((uint32_T)ihi >> 1);
      ib = iDelta2;
      iDelta2 <<= 1;
      iheight -= ib;
    }
  }

  i2 = 0;
  for (i = 0; i < 12; i++) {
    ia = i2;
    i2 += 64;
    ib = ia + 32;
    for (k = 0; k < 32; k++) {
      tmp_re = postFFT[ia].re;
      tmp_im = postFFT[ia].im;
      postFFT[ia] = postFFT[ib];
      postFFT[ib].re = tmp_re;
      postFFT[ib].im = tmp_im;
      ia++;
      ib++;
    }
  }

  emxInit_real_T(&x, 1, &x_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
  ihi = x->size[0];
  x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)x, ihi, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ihi = 0; ihi < i2; ihi++) {
    x->data[ihi] = obj->pDataLinearIndices->data[ihi];
  }

  b_emxInit_creal_T(&b_x, 1, &x_emlrtRTEI, TRUE);
  ihi = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ihi, (int32_T)sizeof(creal_T),
                    &x_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ihi = 0; ihi < i2; ihi++) {
    tmp_re = obj->pDataLinearIndices->data[ihi];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &b_emlrtDCI,
      emlrtRootTLSGlobal);
    b_x->data[ihi] = postFFT[emlrtDynamicBoundsCheckFastR2012b(ib, 1, 768,
      &ab_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  varargin_1[0] = (real_T)x->size[0] / 12.0;
  varargin_1[1] = 12.0;
  varargin_1[2] = 1.0;
  emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  emxFree_real_T(&x);
  do {
    exitg1 = 0;
    if (k < 3) {
      if (varargin_1[k] != muDoubleScalarFloor(varargin_1[k])) {
        overflow = FALSE;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      overflow = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (overflow) {
  } else {
    emlrtPushRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
    f_y = NULL;
    m25 = mxCreateCharArray(2, iv70);
    for (i = 0; i < 57; i++) {
      cv84[i] = cv85[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 57, m25, cv84);
    emlrtAssign(&f_y, m25);
    b_error(b_message(f_y, &db_emlrtMCI), &eb_emlrtMCI);
    emlrtPopRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
  }

  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (varargin_1[k] <= 0.0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= varargin_1[k];
    }
  }

  if (2.147483647E+9 >= tmp_re) {
  } else {
    emlrtPushRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m25 = mxCreateCharArray(2, iv71);
    for (i = 0; i < 21; i++) {
      cv86[i] = cv87[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m25, cv86);
    emlrtAssign(&g_y, m25);
    b_error(b_message(g_y, &fb_emlrtMCI), &gb_emlrtMCI);
    emlrtPopRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  for (ihi = 0; ihi < 3; ihi++) {
    sz[ihi] = (int32_T)varargin_1[ihi];
  }

  i2 = b_x->size[0];
  if (1 > i2) {
    i2 = 1;
  }

  if (b_x->size[0] < i2) {
  } else {
    i2 = b_x->size[0];
  }

  if (sz[0] > i2) {
    emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (12 > i2) {
    emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&h_y, 3, &x_emlrtRTEI, TRUE);
  ihi = h_y->size[0] * h_y->size[1] * h_y->size[2];
  h_y->size[0] = sz[0];
  h_y->size[1] = 12;
  h_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)h_y, ihi, (int32_T)sizeof(creal_T),
                    &s_emlrtRTEI);
  if (b_x->size[0] == sz[0] * 12) {
  } else {
    emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m25 = mxCreateCharArray(2, iv72);
    for (i = 0; i < 40; i++) {
      cv88[i] = cv89[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m25, cv88);
    emlrtAssign(&i_y, m25);
    b_error(b_message(i_y, &bb_emlrtMCI), &cb_emlrtMCI);
    emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > b_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (b_x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k + 1 <= b_x->size[0]; k++) {
    h_y->data[k] = b_x->data[k];
  }

  emxFree_creal_T(&b_x);
  emlrtPopRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 48; k++) {
    PilotNormal[k] = postFFT[iv73[k]];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  ihi = Rraw->size[0] * Rraw->size[1] * Rraw->size[2];
  Rraw->size[0] = h_y->size[0];
  Rraw->size[1] = h_y->size[1];
  Rraw->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)Rraw, ihi, (int32_T)sizeof(creal_T),
                    &x_emlrtRTEI);
  i2 = h_y->size[0] * h_y->size[1] * h_y->size[2];
  for (ihi = 0; ihi < i2; ihi++) {
    Rraw->data[ihi] = h_y->data[ihi];
  }

  /*  Expand equalizer gains to full frame size */
  ib = 0;
  for (i2 = 0; i2 < 12; i2++) {
    ia = 0;
    for (k = 0; k < 53; k++) {
      preambleGainsFull[ib] = b_preambleEqGains[ia];
      ia++;
      ib++;
    }
  }

  /*  Isolate pilot gains from preamble equalizer */
  /*  Needed to correctly adjust pilot gains */
  /*  Apply preamble equalizer gains to data and pilots */
  /* Correct pilots */
  for (i = 0; i < 3; i++) {
    sz[i] = iv74[i];
  }

  for (ihi = 0; ihi < 3; ihi++) {
    j_y[ihi] = h_y->size[ihi];
  }

  emlrtSizeEqCheckNDR2012b(sz, j_y, &c_emlrtECI, emlrtRootTLSGlobal);

  /* Correct data */
  /*     %% Pilot Equalization */
  /*  Get pilot-based equalizer gains */
  emlrtPushRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate Equalizer Taps with pilot symbols */
  /*  Calculate non-normalized channel gains */
  for (ihi = 0; ihi < 12; ihi++) {
    for (ib = 0; ib < 4; ib++) {
      tmp_re = preambleGainsFull[(14 * ib + 53 * ihi) + 5].re * PilotNormal[ib +
        (ihi << 2)].re - preambleGainsFull[(14 * ib + 53 * ihi) + 5].im *
        PilotNormal[ib + (ihi << 2)].im;
      tmp_im = preambleGainsFull[(14 * ib + 53 * ihi) + 5].re * PilotNormal[ib +
        (ihi << 2)].im + preambleGainsFull[(14 * ib + 53 * ihi) + 5].im *
        PilotNormal[ib + (ihi << 2)].re;
      if (tmp_im == 0.0) {
        PilotNormal[ib + (ihi << 2)].re = tmp_re / (real_T)iv75[ib + (ihi << 2)];
        PilotNormal[ib + (ihi << 2)].im = 0.0;
      } else if (tmp_re == 0.0) {
        PilotNormal[ib + (ihi << 2)].re = 0.0;
        PilotNormal[ib + (ihi << 2)].im = tmp_im / (real_T)iv75[ib + (ihi << 2)];
      } else {
        PilotNormal[ib + (ihi << 2)].re = tmp_re / (real_T)iv75[ib + (ihi << 2)];
        PilotNormal[ib + (ihi << 2)].im = tmp_im / (real_T)iv75[ib + (ihi << 2)];
      }
    }
  }

  /*  Scale channel gains */
  for (k = 0; k < 48; k++) {
    tmp_re = muDoubleScalarHypot(PilotNormal[k].re, PilotNormal[k].im);
    PilotEnergy[k] = tmp_re * tmp_re;
  }

  /*  Interpolate to data carrier size */
  emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  for (ihi = 0; ihi < 48; ihi++) {
    if (-PilotNormal[ihi].im == 0.0) {
      b_PilotNormal[ihi].re = PilotNormal[ihi].re / PilotEnergy[ihi];
      b_PilotNormal[ihi].im = 0.0;
    } else if (PilotNormal[ihi].re == 0.0) {
      b_PilotNormal[ihi].re = 0.0;
      b_PilotNormal[ihi].im = -PilotNormal[ihi].im / PilotEnergy[ihi];
    } else {
      b_PilotNormal[ihi].re = PilotNormal[ihi].re / PilotEnergy[ihi];
      b_PilotNormal[ihi].im = -PilotNormal[ihi].im / PilotEnergy[ihi];
    }
  }

  emxInit_creal_T(&k_y, 3, &x_emlrtRTEI, TRUE);
  resample(SD, b_PilotNormal, b_pilotEqGains);
  emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);

  /*  Apply Equalizer from Pilots */
  ihi = k_y->size[0] * k_y->size[1] * k_y->size[2];
  k_y->size[0] = h_y->size[0];
  k_y->size[1] = h_y->size[1];
  k_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)k_y, ihi, (int32_T)sizeof(creal_T),
                    &x_emlrtRTEI);
  i2 = h_y->size[1];
  for (ihi = 0; ihi < i2; ihi++) {
    ia = h_y->size[0];
    for (ib = 0; ib < ia; ib++) {
      k_y->data[ib + k_y->size[0] * ihi] = h_y->data[ib + h_y->size[0] * ihi];
    }
  }

  emxFree_creal_T(&h_y);
  for (ihi = 0; ihi < 12; ihi++) {
    for (ib = 0; ib < 48; ib++) {
      tmp_re = preambleGainsFull[iv76[ib] + 53 * ihi].re * k_y->data[ib + 48 *
        ihi].re - preambleGainsFull[iv76[ib] + 53 * ihi].im * k_y->data[ib + 48 *
        ihi].im;
      tmp_im = preambleGainsFull[iv76[ib] + 53 * ihi].re * k_y->data[ib + 48 *
        ihi].im + preambleGainsFull[iv76[ib] + 53 * ihi].im * k_y->data[ib + 48 *
        ihi].re;
      R[ib + 48 * ihi].re = b_pilotEqGains[ib + 48 * ihi].re * tmp_re -
        b_pilotEqGains[ib + 48 * ihi].im * tmp_im;
      R[ib + 48 * ihi].im = b_pilotEqGains[ib + 48 * ihi].re * tmp_im +
        b_pilotEqGains[ib + 48 * ihi].im * tmp_re;
    }
  }

  emxFree_creal_T(&k_y);

  /*  Save Gains for visualization */
  for (ihi = 0; ihi < 576; ihi++) {
    estimate->pilotEqGains[ihi] = b_pilotEqGains[ihi];
  }

  for (i = 0; i < 53; i++) {
    estimate->preambleEqGains[i] = b_preambleEqGains[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void c_eml_error(void)
{
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &cb_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
}

void check_forloop_overflow_error(void)
{
  const mxArray *b_y;
  static const int32_T iv32[2] = { 1, 34 };

  const mxArray *m2;
  char_T cv28[34];
  int32_T i;
  static const char_T cv29[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c_y;
  static const int32_T iv33[2] = { 1, 23 };

  char_T cv30[23];
  static const char_T cv31[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m2 = mxCreateCharArray(2, iv32);
  for (i = 0; i < 34; i++) {
    cv28[i] = cv29[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m2, cv28);
  emlrtAssign(&b_y, m2);
  c_y = NULL;
  m2 = mxCreateCharArray(2, iv33);
  for (i = 0; i < 23; i++) {
    cv30[i] = cv31[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m2, cv30);
  emlrtAssign(&c_y, m2);
  b_error(message(b_y, c_y, &g_emlrtMCI), &h_emlrtMCI);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
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
