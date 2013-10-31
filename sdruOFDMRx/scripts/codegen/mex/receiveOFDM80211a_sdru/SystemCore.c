/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "SystemCore.h"
#include "receiveData.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "equalizeOFDM.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo rf_emlrtRSI = { 19, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRSInfo sf_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

static emlrtRSInfo tf_emlrtRSI = { 43, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo r_emlrtRTEI = { 1, 13, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo w_emlrtBCI = { 1, 64, 171, 28, "postShift", "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m", 0
};

static emlrtRTEInfo db_emlrtRTEI = { 41, 1, "update",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 43, 20, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 19, 1, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 43, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

/* Function Definitions */
void SystemCore_reset(dspcodegen_FIRRateConverter_112 *obj)
{
  const mxArray *b_y;
  static const int32_T iv52[2] = { 1, 45 };

  const mxArray *m11;
  char_T cv60[45];
  int32_T i;
  static const char_T cv61[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv53[2] = { 1, 5 };

  char_T cv62[5];
  static const char_T cv63[5] = { 'r', 'e', 's', 'e', 't' };

  dspcodegen_FIRRateConverter_112 *b_obj;
  dsp_FIRRateConverter_1 *c_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m11 = mxCreateCharArray(2, iv52);
    for (i = 0; i < 45; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m11, cv60);
    emlrtAssign(&b_y, m11);
    c_y = NULL;
    m11 = mxCreateCharArray(2, iv53);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m11, cv62);
    emlrtAssign(&c_y, m11);
    b_error(message(b_y, c_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_step(OFDMDemodulator_1 *obj, const creal_T varargin_1[64],
                     emxArray_creal_T *varargout_1)
{
  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 45 };

  const mxArray *m9;
  char_T cv40[45];
  int32_T i;
  static const char_T cv41[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 4 };

  char_T cv42[4];
  static const char_T cv43[4] = { 's', 't', 'e', 'p' };

  OFDMDemodulator_1 *b_obj;
  const mxArray *d_y;
  static const int32_T iv40[2] = { 1, 51 };

  char_T cv44[51];
  static const char_T cv45[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv41[2] = { 1, 5 };

  char_T cv46[5];
  static const char_T cv47[5] = { 's', 'e', 't', 'u', 'p' };

  int8_T fullGrid[64];
  int32_T ju;
  static const int8_T iv42[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  int32_T idx;
  int8_T ii_data[64];
  int32_T ix;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T b_inputIn3D[64];
  creal_T postFFT[64];
  boolean_T overflow;
  real_T tmp_re;
  real_T tmp_im;
  int32_T iDelta;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  static const real_T dv8[33] = { 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0, -0.99518472667219693, -0.98078528040323043,
    -0.95694033573220882, -0.92387953251128674, -0.881921264348355,
    -0.83146961230254524, -0.773010453362737, -0.70710678118654757,
    -0.63439328416364549, -0.55557023301960218, -0.47139673682599764,
    -0.38268343236508978, -0.29028467725446233, -0.19509032201612825,
    -0.0980171403295606, -0.0 };

  static const real_T dv9[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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
  int32_T b_varargin_1[3];
  const mxArray *f_y;
  static const int32_T iv43[2] = { 1, 21 };

  char_T cv48[21];
  static const char_T cv49[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *g_y;
  const mxArray *h_y;
  static const int32_T iv44[2] = { 1, 40 };

  char_T cv50[40];
  static const char_T cv51[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m9 = mxCreateCharArray(2, iv38);
    for (i = 0; i < 45; i++) {
      cv40[i] = cv41[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m9, cv40);
    emlrtAssign(&b_y, m9);
    c_y = NULL;
    m9 = mxCreateCharArray(2, iv39);
    for (i = 0; i < 4; i++) {
      cv42[i] = cv43[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m9, cv42);
    emlrtAssign(&c_y, m9);
    b_error(message(b_y, c_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m9 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 51; i++) {
        cv44[i] = cv45[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m9, cv44);
      emlrtAssign(&d_y, m9);
      e_y = NULL;
      m9 = mxCreateCharArray(2, iv41);
      for (i = 0; i < 5; i++) {
        cv46[i] = cv47[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m9, cv46);
      emlrtAssign(&e_y, m9);
      b_error(message(d_y, e_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
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
    memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
    for (ju = 0; ju < 11; ju++) {
      fullGrid[iv42[ju]] = 0;
    }

    emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    idx = 0;
    ix = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ix < 65)) {
      guard1 = FALSE;
      if (fullGrid[ix - 1] == 1) {
        idx++;
        ii_data[idx - 1] = (int8_T)ix;
        if (idx >= 64) {
          exitg1 = TRUE;
        } else {
          guard1 = TRUE;
        }
      } else {
        guard1 = TRUE;
      }

      if (guard1 == TRUE) {
        ix++;
      }
    }

    if (1 > idx) {
      idx = 0;
    }

    for (ju = 0; ju < idx; ju++) {
      b_ii_data[ju] = ii_data[ju];
    }

    for (ju = 0; ju < idx; ju++) {
      ii_data[ju] = b_ii_data[ju];
    }

    ju = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = idx;
    emxEnsureCapacity((emxArray__common *)b_obj->pDataLinearIndices, ju,
                      (int32_T)sizeof(real_T), &r_emlrtRTEI);
    for (ju = 0; ju < idx; ju++) {
      b_obj->pDataLinearIndices->data[ju] = ii_data[ju];
    }

    emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  memcpy(&b_inputIn3D[0], &varargin_1[0], sizeof(creal_T) << 6);
  ix = 0;
  ju = 0;
  idx = 0;
  for (i = 0; i < 63; i++) {
    postFFT[idx] = b_inputIn3D[ix];
    idx = 64;
    overflow = TRUE;
    while (overflow) {
      if (idx >= 0) {
        idx = (int32_T)((uint32_T)idx >> 1);
      } else {
        idx = ~(int32_T)((uint32_T)~idx >> 1);
      }

      ju ^= idx;
      overflow = ((ju & idx) == 0);
    }

    idx = ju;
    ix++;
  }

  postFFT[idx] = b_inputIn3D[ix];
  for (i = 0; i < 64; i += 2) {
    tmp_re = postFFT[i + 1].re;
    tmp_im = postFFT[i + 1].im;
    postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
    postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
    postFFT[i].re += tmp_re;
    postFFT[i].im += tmp_im;
  }

  iDelta = 2;
  iDelta2 = 4;
  k = 16;
  iheight = 61;
  while (k > 0) {
    for (i = 0; i < iheight; i += iDelta2) {
      idx = i + iDelta;
      tmp_re = postFFT[idx].re;
      tmp_im = postFFT[idx].im;
      postFFT[i + iDelta].re = postFFT[i].re - postFFT[idx].re;
      postFFT[i + iDelta].im = postFFT[i].im - postFFT[idx].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    idx = 1;
    for (ix = k; ix < 32; ix += k) {
      i = idx;
      ju = idx + iheight;
      while (i < ju) {
        tmp_re = dv9[ix] * postFFT[i + iDelta].re - dv8[ix] * postFFT[i + iDelta]
          .im;
        tmp_im = dv9[ix] * postFFT[i + iDelta].im + dv8[ix] * postFFT[i + iDelta]
          .re;
        postFFT[i + iDelta].re = postFFT[i].re - tmp_re;
        postFFT[i + iDelta].im = postFFT[i].im - tmp_im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      idx++;
    }

    ju = k;
    k = (int32_T)((uint32_T)ju >> 1);
    iDelta = iDelta2;
    iDelta2 <<= 1;
    iheight -= iDelta;
  }

  idx = 0;
  ix = 32;
  for (k = 0; k < 32; k++) {
    tmp_re = postFFT[idx].re;
    tmp_im = postFFT[idx].im;
    postFFT[idx] = postFFT[ix];
    postFFT[ix].re = tmp_re;
    postFFT[ix].im = tmp_im;
    idx++;
    ix++;
  }

  emxInit_real_T(&x, 1, &r_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
  ju = x->size[0];
  x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)x, ju, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  idx = b_obj->pDataLinearIndices->size[0];
  for (ju = 0; ju < idx; ju++) {
    x->data[ju] = b_obj->pDataLinearIndices->data[ju];
  }

  b_emxInit_creal_T(&b_x, 1, &r_emlrtRTEI, TRUE);
  ju = b_x->size[0];
  b_x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ju, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  idx = b_obj->pDataLinearIndices->size[0];
  for (ju = 0; ju < idx; ju++) {
    tmp_re = b_obj->pDataLinearIndices->data[ju];
    ix = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &b_emlrtDCI,
      emlrtRootTLSGlobal);
    b_x->data[ju] = postFFT[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 64,
      &w_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  b_varargin_1[0] = x->size[0];
  b_varargin_1[1] = 1;
  b_varargin_1[2] = 1;
  emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  emxFree_real_T(&x);
  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (b_varargin_1[k] <= 0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= (real_T)b_varargin_1[k];
    }
  }

  if (2.147483647E+9 >= tmp_re) {
  } else {
    emlrtPushRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
    f_y = NULL;
    m9 = mxCreateCharArray(2, iv43);
    for (i = 0; i < 21; i++) {
      cv48[i] = cv49[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m9, cv48);
    emlrtAssign(&f_y, m9);
    b_error(b_message(f_y, &fb_emlrtMCI), &gb_emlrtMCI);
    emlrtPopRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  for (ju = 0; ju < 3; ju++) {
    sz[ju] = b_varargin_1[ju];
  }

  idx = b_x->size[0];
  if (1 > idx) {
    idx = 1;
  }

  if (b_x->size[0] < idx) {
  } else {
    idx = b_x->size[0];
  }

  if (sz[0] > idx) {
    emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > idx) {
    emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&g_y, 3, &r_emlrtRTEI, TRUE);
  ju = g_y->size[0] * g_y->size[1] * g_y->size[2];
  g_y->size[0] = sz[0];
  g_y->size[1] = 1;
  g_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)g_y, ju, (int32_T)sizeof(creal_T),
                    &s_emlrtRTEI);
  if (b_x->size[0] == sz[0]) {
  } else {
    emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
    h_y = NULL;
    m9 = mxCreateCharArray(2, iv44);
    for (i = 0; i < 40; i++) {
      cv50[i] = cv51[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m9, cv50);
    emlrtAssign(&h_y, m9);
    b_error(b_message(h_y, &bb_emlrtMCI), &cb_emlrtMCI);
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
    g_y->data[k] = b_x->data[k];
  }

  emxFree_creal_T(&b_x);
  ju = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = g_y->size[0];
  varargout_1->size[1] = g_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)varargout_1, ju, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  idx = g_y->size[0] * g_y->size[1] * g_y->size[2];
  for (ju = 0; ju < idx; ju++) {
    varargout_1->data[ju] = g_y->data[ju];
  }

  emxFree_creal_T(&g_y);
  emlrtPopRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void b_SystemCore_step(dspcodegen_FIRRateConverter_112 *obj, const creal_T
  varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *b_y;
  static const int32_T iv47[2] = { 1, 45 };

  const mxArray *m10;
  char_T cv52[45];
  int32_T i;
  static const char_T cv53[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv48[2] = { 1, 4 };

  char_T cv54[4];
  static const char_T cv55[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter_112 *b_obj;
  const mxArray *d_y;
  static const int32_T iv49[2] = { 1, 51 };

  char_T cv56[51];
  static const char_T cv57[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv50[2] = { 1, 5 };

  char_T cv58[5];
  static const char_T cv59[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_1 *c_obj;
  boolean_T exitg1;
  static const int8_T iv51[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  int32_T outIdx;
  int32_T inIdx;
  int32_T m;
  int32_T inBufIdx;
  int32_T inputChannelOffset;
  int32_T n;
  int32_T outputStartIdx;
  int32_T outputStopIdx;
  real_T acc_re;
  real_T acc_im;
  int32_T coefPolyphaseOffset;
  real_T prod_re;
  real_T prod_im;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m10 = mxCreateCharArray(2, iv47);
    for (i = 0; i < 45; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m10, cv52);
    emlrtAssign(&b_y, m10);
    c_y = NULL;
    m10 = mxCreateCharArray(2, iv48);
    for (i = 0; i < 4; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m10, cv54);
    emlrtAssign(&c_y, m10);
    b_error(message(b_y, c_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m10 = mxCreateCharArray(2, iv49);
      for (i = 0; i < 51; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m10, cv56);
      emlrtAssign(&d_y, m10);
      e_y = NULL;
      m10 = mxCreateCharArray(2, iv50);
      for (i = 0; i < 5; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m10, cv58);
      emlrtAssign(&e_y, m10);
      b_error(message(d_y, e_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
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
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &gb_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &gb_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv51[i]) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &eb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;
  for (m = 0; m < 12; m++) {
    /* Update inBufIdx and inputChannelOffset for current channel */
    inBufIdx = c_obj->W1_InBufIdx;
    inputChannelOffset = m * 21;
    for (n = 0; n < 24; n++) {
      outputStartIdx = c_obj->P2_StartIdx;
      outputStopIdx = c_obj->P3_StopIdx;

      /* Read input into inBufArray */
      c_obj->W0_InBuf[inBufIdx + inputChannelOffset] = varargin_1[inIdx];
      inIdx++;

      /* Generate outputs (if any) for current input n */
      while (outputStartIdx < outputStopIdx) {
        acc_re = 0.0;
        acc_im = 0.0;
        coefPolyphaseOffset = c_obj->P1_PolyphaseSelector[outputStartIdx] * 21;
        for (i = inBufIdx; i < 21; i++) {
          prod_re = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
            c_obj->W0_InBuf[i + inputChannelOffset].re;
          prod_im = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
            c_obj->W0_InBuf[i + inputChannelOffset].im;
          acc_re += prod_re;
          acc_im += prod_im;
        }

        for (i = 0; i < inBufIdx; i++) {
          prod_re = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21]
            * c_obj->W0_InBuf[i + inputChannelOffset].re;
          prod_im = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21]
            * c_obj->W0_InBuf[i + inputChannelOffset].im;
          acc_re += prod_re;
          acc_im += prod_im;
        }

        varargout_1[outIdx].re = acc_re;
        varargout_1[outIdx].im = acc_im;
        outIdx++;
        outputStartIdx++;
      }

      /* Decrement inBufIdx, wrap if necessary */
      if (inBufIdx == 0) {
        inBufIdx = 20;
      } else {
        inBufIdx--;
      }
    }
  }

  /* Update inBufIdx */
  c_obj->W1_InBufIdx = inBufIdx;
  emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &db_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&lf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
