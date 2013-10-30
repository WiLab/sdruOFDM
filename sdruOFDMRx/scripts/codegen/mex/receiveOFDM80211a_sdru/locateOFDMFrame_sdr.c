/*
 * locateOFDMFrame_sdr.c
 *
 * Code generation for function 'locateOFDMFrame_sdr'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "locateOFDMFrame_sdr.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo sd_emlrtRSI = { 53, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo td_emlrtRSI = { 58, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo ud_emlrtRSI = { 62, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo vd_emlrtRSI = { 23, "intersect",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/intersect.m" };

static emlrtRSInfo wd_emlrtRSI = { 65, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo xd_emlrtRSI = { 210, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo yd_emlrtRSI = { 211, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ae_emlrtRSI = { 214, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo be_emlrtRSI = { 363, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ce_emlrtRSI = { 374, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo de_emlrtRSI = { 401, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ee_emlrtRSI = { 22, "issorted",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/issorted.m" };

static emlrtRSInfo fe_emlrtRSI = { 11, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo ge_emlrtRSI = { 14, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo he_emlrtRSI = { 26, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo ie_emlrtRSI = { 39, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo je_emlrtRSI = { 18, "max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo ke_emlrtRSI = { 15, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo le_emlrtRSI = { 88, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ne_emlrtRSI = { 219, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo q_emlrtMCI = { 363, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo r_emlrtMCI = { 374, 9, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo s_emlrtMCI = { 401, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo t_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 53, 33, "MLocations",
  "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m",
  0 };

static emlrtECInfo b_emlrtECI = { -1, 53, 33, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

static emlrtBCInfo s_emlrtBCI = { -1, -1, 58, 1, "peaks", "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 64, 37, "MLocations",
  "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 52, 24, "MLocations",
  "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 53, 5, "peaks", "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m",
  0 };

/* Function Declarations */
static void b_eml_error(void);
static int32_T compute_nones(const boolean_T x_data[1224], int32_T n);
static void do_vectors(const real_T a_data[1224], const int32_T a_size[1], const
  real_T b[8], real_T c_data[8], int32_T c_size[1], int32_T ia_data[8], int32_T
  ia_size[1], int32_T ib_data[8], int32_T ib_size[1]);
static void eml_error(void);
static void eml_li_find(const boolean_T x_data[1224], const int32_T x_size[1],
  int32_T y_data[1224], int32_T y_size[1]);

/* Function Definitions */
static void b_eml_error(void)
{
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &cb_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedB", 0);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
}

static int32_T compute_nones(const boolean_T x_data[1224], int32_T n)
{
  int32_T k;
  boolean_T b1;
  int32_T i;
  k = 0;
  emlrtPushRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > n) {
    b1 = FALSE;
  } else {
    b1 = (n > 2147483646);
  }

  if (b1) {
    emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= n; i++) {
    if (x_data[i - 1]) {
      k++;
    }
  }

  return k;
}

static void do_vectors(const real_T a_data[1224], const int32_T a_size[1], const
  real_T b[8], real_T c_data[8], int32_T c_size[1], int32_T ia_data[8], int32_T
  ia_size[1], int32_T ib_data[8], int32_T ib_size[1])
{
  int32_T ncmax;
  boolean_T b_y;
  int32_T ialast;
  boolean_T exitg4;
  boolean_T p;
  boolean_T exitg3;
  int32_T nc;
  int32_T iafirst;
  int32_T ibfirst;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  boolean_T exitg2;
  real_T absxk;
  int32_T exponent;
  int32_T b_iblast;
  real_T bk;
  boolean_T exitg1;
  int32_T b_exponent;
  int32_T c_exponent;
  const mxArray *c_y;
  const mxArray *m7;
  int32_T b_ia_data[8];
  const mxArray *d_y;
  const mxArray *e_y;
  real_T b_c_data[8];
  ncmax = muIntScalarMin_sint32(a_size[0], 8);
  c_size[0] = (int8_T)ncmax;
  ia_size[0] = ncmax;
  ib_size[0] = ncmax;
  emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  b_y = TRUE;
  if (a_size[0] == 0) {
  } else {
    emlrtPushRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);
    ialast = 1;
    exitg4 = FALSE;
    while ((exitg4 == FALSE) && (ialast <= a_size[0] - 1)) {
      if ((a_data[ialast - 1] <= a_data[ialast]) || muDoubleScalarIsNaN
          (a_data[ialast])) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (!p) {
        b_y = FALSE;
        exitg4 = TRUE;
      } else {
        ialast++;
      }
    }
  }

  emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_y) {
    emlrtPushRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
    eml_error();
    emlrtPopRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
  }

  b_y = TRUE;
  ialast = 1;
  exitg3 = FALSE;
  while ((exitg3 == FALSE) && (ialast < 8)) {
    if ((b[ialast - 1] <= b[ialast]) || muDoubleScalarIsNaN(b[ialast])) {
      p = TRUE;
    } else {
      p = FALSE;
    }

    if (!p) {
      b_y = FALSE;
      exitg3 = TRUE;
    } else {
      ialast++;
    }
  }

  if (!b_y) {
    emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
    b_eml_error();
    emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
  }

  nc = 0;
  iafirst = 0;
  ialast = 0;
  ibfirst = 0;
  iblast = 0;
  while ((ialast + 1 <= a_size[0]) && (iblast + 1 <= 8)) {
    b_ialast = ialast + 1;
    ak = a_data[ialast];
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (b_ialast < a_size[0])) {
      absxk = muDoubleScalarAbs(a_data[ialast] / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &exponent);
          absxk = ldexp(1.0, exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if ((muDoubleScalarAbs(a_data[ialast] - a_data[b_ialast]) < absxk) ||
          (muDoubleScalarIsInf(a_data[b_ialast]) && muDoubleScalarIsInf
           (a_data[ialast]) && ((a_data[b_ialast] > 0.0) == (a_data[ialast] >
             0.0)))) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        b_ialast++;
      } else {
        exitg2 = TRUE;
      }
    }

    ialast = b_ialast - 1;
    b_iblast = iblast + 1;
    bk = b[iblast];
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (b_iblast < 8)) {
      absxk = muDoubleScalarAbs(b[iblast] / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &b_exponent);
          absxk = ldexp(1.0, b_exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if ((muDoubleScalarAbs(b[iblast] - b[b_iblast]) < absxk) ||
          (muDoubleScalarIsInf(b[b_iblast]) && muDoubleScalarIsInf(b[iblast]) &&
           ((b[b_iblast] > 0.0) == (b[iblast] > 0.0)))) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        b_iblast++;
      } else {
        exitg1 = TRUE;
      }
    }

    iblast = b_iblast - 1;
    absxk = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &c_exponent);
        absxk = ldexp(1.0, c_exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(bk - ak) < absxk) || (muDoubleScalarIsInf(ak) &&
         muDoubleScalarIsInf(bk) && ((ak > 0.0) == (bk > 0.0)))) {
      p = TRUE;
    } else {
      p = FALSE;
    }

    if (p) {
      nc++;
      c_data[nc - 1] = ak;
      ia_data[nc - 1] = iafirst + 1;
      ib_data[nc - 1] = ibfirst + 1;
      ialast = b_ialast;
      iafirst = b_ialast;
      iblast = b_iblast;
      ibfirst = b_iblast;
    } else {
      if ((ak < bk) || muDoubleScalarIsNaN(bk)) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        ialast = b_ialast;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast;
        ibfirst = b_iblast;
      }
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      emlrtPushRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m7 = mxCreateString("Assertion failed.");
      emlrtAssign(&c_y, m7);
      b_error(c_y, &q_emlrtMCI);
      emlrtPopRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (1 > nc) {
      ialast = 0;
    } else {
      ialast = nc;
    }

    for (iafirst = 0; iafirst < ialast; iafirst++) {
      b_ia_data[iafirst] = ia_data[iafirst];
    }

    ia_size[0] = ialast;
    for (iafirst = 0; iafirst < ialast; iafirst++) {
      ia_data[iafirst] = b_ia_data[iafirst];
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      emlrtPushRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m7 = mxCreateString("Assertion failed.");
      emlrtAssign(&d_y, m7);
      b_error(d_y, &r_emlrtMCI);
      emlrtPopRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (1 > nc) {
      ialast = 0;
    } else {
      ialast = nc;
    }

    for (iafirst = 0; iafirst < ialast; iafirst++) {
      b_ia_data[iafirst] = ib_data[iafirst];
    }

    ib_size[0] = ialast;
    for (iafirst = 0; iafirst < ialast; iafirst++) {
      ib_data[iafirst] = b_ia_data[iafirst];
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      emlrtPushRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);
      e_y = NULL;
      m7 = mxCreateString("Assertion failed.");
      emlrtAssign(&e_y, m7);
      b_error(e_y, &s_emlrtMCI);
      emlrtPopRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (1 > nc) {
      ialast = 0;
    } else {
      ialast = nc;
    }

    for (iafirst = 0; iafirst < ialast; iafirst++) {
      b_c_data[iafirst] = c_data[iafirst];
    }

    c_size[0] = ialast;
    for (iafirst = 0; iafirst < ialast; iafirst++) {
      c_data[iafirst] = b_c_data[iafirst];
    }
  }
}

static void eml_error(void)
{
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &cb_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedA", 0);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
}

static void eml_li_find(const boolean_T x_data[1224], const int32_T x_size[1],
  int32_T y_data[1224], int32_T y_size[1])
{
  int32_T k;
  const mxArray *b_y;
  const mxArray *m8;
  int32_T i;
  emlrtPushRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);
  k = compute_nones(x_data, x_size[0]);
  emlrtPopRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);
  if (k <= x_size[0]) {
  } else {
    emlrtPushRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m8 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m8);
    b_error(b_y, &t_emlrtMCI);
    emlrtPopRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);
  }

  y_size[0] = k;
  k = 0;
  emlrtPushRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x_size[0]; i++) {
    if (x_data[i - 1]) {
      y_data[k] = i;
      k++;
    }
  }
}

void locateShortpreamble(const real_T M[1224], real_T *preambleEstimatedLocation,
  real_T *b_numPeaks)
{
  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg2;
  int32_T ii_data[1224];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int32_T loop_ub;
  int16_T b_ii_data[1224];
  int16_T MLocations_data[1224];
  int32_T peaks_data[1224];
  real_T MLocationGuesses[8];
  int32_T i15;
  real_T b_MLocations_data[1224];
  int32_T ii_size[1];
  int32_T ib_size[1];
  int32_T ib_data[8];
  int32_T ia_size[1];
  int32_T ia_data[8];
  int32_T c_size[1];
  real_T c_data[8];
  boolean_T b_peaks_data[1224];
  int32_T peaks_size[1];

  /*  Locate of the start of the actual preamble from timing metric */
  /* % Find peaks of correlation */
  /*  Adjust threshold */
  ixstart = 1;
  mtmp = M[0];
  if (muDoubleScalarIsNaN(M[0])) {
    ix = 2;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (ix < 1225)) {
      ixstart = ix;
      if (!muDoubleScalarIsNaN(M[ix - 1])) {
        mtmp = M[ix - 1];
        exitg2 = TRUE;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 1224) {
    while (ixstart + 1 < 1225) {
      if (M[ixstart] > mtmp) {
        mtmp = M[ixstart];
      }

      ixstart++;
    }
  }

  ixstart = 0;
  ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii < 1225)) {
    guard1 = FALSE;
    if (M[ii - 1] > mtmp * 0.6) {
      ixstart++;
      ii_data[ixstart - 1] = ii;
      if (ixstart >= 1224) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      ii++;
    }
  }

  if (1 > ixstart) {
    loop_ub = 0;
  } else {
    loop_ub = ixstart;
  }

  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_ii_data[ixstart] = (int16_T)ii_data[ixstart];
  }

  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    ii_data[ixstart] = b_ii_data[ixstart];
  }

  /*  Correct estimate to start of preamble not its center */
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    MLocations_data[ixstart] = (int16_T)(ii_data[ixstart] - 9);
  }

  /*  Frame Detection */
  ii = (int16_T)loop_ub;
  for (ixstart = 0; ixstart < ii; ixstart++) {
    peaks_data[ixstart] = 0;
  }

  /*  Determine correct peak  */
  ix = 1;
  while (ix - 1 <= loop_ub - 1) {
    emlrtDynamicBoundsCheckFastR2012b(ix, 1, loop_ub, &u_emlrtBCI,
      emlrtRootTLSGlobal);
    for (ixstart = 0; ixstart < 8; ixstart++) {
      MLocationGuesses[ixstart] = (MLocations_data[ix - 1] + 16 * ixstart) + 16;
    }

    if (ix > loop_ub) {
      ixstart = 1;
      i15 = 1;
    } else {
      ixstart = emlrtDynamicBoundsCheckFastR2012b(ix, 1, loop_ub, &r_emlrtBCI,
        emlrtRootTLSGlobal);
      i15 = emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, loop_ub, &r_emlrtBCI,
        emlrtRootTLSGlobal) + 1;
    }

    emlrtVectorVectorIndexCheckR2012b(loop_ub, 1, 1, i15 - ixstart, &b_emlrtECI,
      emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    ii_size[0] = i15 - ixstart;
    ii = i15 - ixstart;
    for (i15 = 0; i15 < ii; i15++) {
      b_MLocations_data[i15] = MLocations_data[(ixstart + i15) - 1];
    }

    do_vectors(b_MLocations_data, ii_size, MLocationGuesses, c_data, c_size,
               ia_data, ia_size, ib_data, ib_size);
    emlrtPopRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
    ixstart = (int16_T)loop_ub;
    peaks_data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstart, &v_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = c_size[0];
    emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
    ix++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  /*  Have at least 5 peaks for positive match */
  /*  (TUNABLE) */
  emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
  peaks_size[0] = (int16_T)loop_ub;
  ii = (int16_T)loop_ub;
  for (ixstart = 0; ixstart < ii; ixstart++) {
    b_peaks_data[ixstart] = (peaks_data[ixstart] < 5);
  }

  eml_li_find(b_peaks_data, peaks_size, ii_data, ii_size);
  emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
  ii = ii_size[0];
  for (ixstart = 0; ixstart < ii; ixstart++) {
    i15 = (int16_T)loop_ub;
    peaks_data[emlrtDynamicBoundsCheckFastR2012b(ii_data[ixstart], 1, i15,
      &s_emlrtBCI, emlrtRootTLSGlobal) - 1] = 0;
  }

  /*  Pick earliest peak in time */
  if (!((int16_T)loop_ub == 0)) {
    emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);
    ixstart = peaks_data[0];
    ii = 1;
    if (((int16_T)loop_ub > 1) && (1 < (int16_T)loop_ub)) {
      emlrtPushRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
      for (ix = 2; ix <= (int16_T)loop_ub; ix++) {
        if (peaks_data[ix - 1] > ixstart) {
          ixstart = peaks_data[ix - 1];
          ii = ix;
        }
      }
    }

    emlrtPopRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
    *b_numPeaks = ixstart;
    if (ixstart > 0) {
      *preambleEstimatedLocation =
        MLocations_data[emlrtDynamicBoundsCheckFastR2012b(ii, 1, loop_ub,
        &t_emlrtBCI, emlrtRootTLSGlobal) - 1];
    } else {
      *preambleEstimatedLocation = -1.0;

      /*  no desirable location found */
    }
  } else {
    *preambleEstimatedLocation = -1.0;
    *b_numPeaks = 0.0;
  }

  /*  Normalize max peaks found */
  *b_numPeaks /= 8.0;
}

/* End of code generation (locateOFDMFrame_sdr.c) */
