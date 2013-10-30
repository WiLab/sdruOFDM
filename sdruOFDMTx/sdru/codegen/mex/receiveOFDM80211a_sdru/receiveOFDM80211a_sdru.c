/*
 * receiveOFDM80211a_sdru.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "SDRuReceiver.h"
#include "equalizeOFDM.h"
#include "fprintf.h"
#include "sum.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "locateOFDMFrame_sdr.h"
#include "rdivide.h"
#include "power.h"
#include "abs.h"
#include "xcorr.h"
#include "SystemCore.h"
#include "receiveData.h"
#include "OFDMDemodulator.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "createOFDMDemods.h"
#include "SystemProp.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 52, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo b_emlrtRSI = { 133, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo c_emlrtRSI = { 113, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo d_emlrtRSI = { 112, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo e_emlrtRSI = { 100, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo f_emlrtRSI = { 97, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo g_emlrtRSI = { 94, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo h_emlrtRSI = { 75, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo i_emlrtRSI = { 72, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo j_emlrtRSI = { 66, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo k_emlrtRSI = { 49, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo l_emlrtRSI = { 41, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo m_emlrtRSI = { 69, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRSInfo r_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

static emlrtRSInfo s_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtRSInfo ob_emlrtRSI = { 1, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pb_emlrtRSI = { 134, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo oc_emlrtRSI = { 73, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

static emlrtRSInfo qc_emlrtRSI = { 63, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

static emlrtRSInfo sc_emlrtRSI = { 53, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

static emlrtRSInfo uc_emlrtRSI = { 42, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

static emlrtRSInfo qd_emlrtRSI = { 16, "locateOFDMFrame_sdr",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo rd_emlrtRSI = { 17, "locateOFDMFrame_sdr",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo sd_emlrtRSI = { 28, "locateOFDMFrame_sdr",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo qe_emlrtRSI = { 17, "coarseOFDMFreqEst_sdr",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/coarseOFDMFreqEst_sdr.m" };

static emlrtMCInfo emlrtMCI = { 69, 9, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtMCInfo b_emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtRTEInfo emlrtRTEI = { 52, 19, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRTEInfo b_emlrtRTEI = { 52, 3, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtRTEInfo c_emlrtRTEI = { 1, 33, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtBCInfo emlrtBCI = { 1, 15, 10, 5, "", "coarseOFDMFreqEst_sdr",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/coarseOFDMFreqEst_sdr.m", 0
};

static emlrtRTEInfo cb_emlrtRTEI = { 94, 25, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m" };

static emlrtBCInfo b_emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

static emlrtBCInfo c_emlrtBCI = { 1, 5120, 94, 18, "", "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m", 0 };

static emlrtDCInfo emlrtDCI = { 94, 18, "receiveOFDM80211a_sdru",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/receiveOFDM80211a_sdru.m", 1 };

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T b_y[10]);
static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static void disp(const mxArray *b, emlrtMCInfo *location);
static void e_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);
static boolean_T eml_relop(const creal_T a, const creal_T b);
static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T b_y[10]);

/* Function Definitions */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T b_y[10])
{
  e_emlrt_marshallIn(emlrtAlias(u), parentId, b_y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m25;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m25, 2, pArrays, "rand",
    TRUE, location);
}

static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m29;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m29, 3, pArrays,
    "message", TRUE, location);
}

static void disp(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "disp", TRUE,
                        location);
}

static void e_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv63[2];
  int32_T i25;
  for (i25 = 0; i25 < 2; i25++) {
    iv63[i25] = 1 + 9 * i25;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv63);
  for (i25 = 0; i25 < 10; i25++) {
    ret[i25] = (*(real_T (*)[10])mxGetData(src))[i25];
  }

  emlrtDestroyArray(&src);
}

static boolean_T eml_relop(const creal_T a, const creal_T b)
{
  boolean_T p;
  real_T absbi;
  real_T b_y;
  real_T absxk;
  int32_T exponent;
  real_T absar;
  real_T absbr;
  real_T Ma;
  int32_T b_exponent;
  int32_T c_exponent;
  int32_T d_exponent;
  if ((muDoubleScalarAbs(a.re) > 8.9884656743115785E+307) || (muDoubleScalarAbs
       (a.im) > 8.9884656743115785E+307) || (muDoubleScalarAbs(b.re) >
       8.9884656743115785E+307) || (muDoubleScalarAbs(b.im) >
       8.9884656743115785E+307)) {
    absbi = muDoubleScalarHypot(a.re / 2.0, a.im / 2.0);
    b_y = muDoubleScalarHypot(b.re / 2.0, b.im / 2.0);
  } else {
    absbi = muDoubleScalarHypot(a.re, a.im);
    b_y = muDoubleScalarHypot(b.re, b.im);
  }

  absxk = b_y / 2.0;
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

  if ((muDoubleScalarAbs(b_y - absbi) < absxk) || (muDoubleScalarIsInf(absbi) &&
       muDoubleScalarIsInf(b_y) && ((absbi > 0.0) == (b_y > 0.0)))) {
    p = TRUE;
  } else {
    p = FALSE;
  }

  if (p) {
    absar = muDoubleScalarAbs(a.re);
    absxk = muDoubleScalarAbs(a.im);
    absbr = muDoubleScalarAbs(b.re);
    absbi = muDoubleScalarAbs(b.im);
    if (absar > absxk) {
      Ma = absar;
      absar = absxk;
    } else {
      Ma = absxk;
    }

    if (absbr > absbi) {
      absxk = absbr;
      absbr = absbi;
    } else {
      absxk = absbi;
    }

    if (Ma > absxk) {
      if (absar < absbr) {
        absbi = Ma - absxk;
        b_y = (absar / 2.0 + absbr / 2.0) / (Ma / 2.0 + absxk / 2.0) * (absbr -
          absar);
      } else {
        absbi = Ma;
        b_y = absxk;
      }
    } else if (Ma < absxk) {
      if (absar > absbr) {
        b_y = absxk - Ma;
        absbi = (absar / 2.0 + absbr / 2.0) / (Ma / 2.0 + absxk / 2.0) * (absar
          - absbr);
      } else {
        absbi = Ma;
        b_y = absxk;
      }
    } else {
      absbi = absar;
      b_y = absbr;
    }

    absxk = muDoubleScalarAbs(b_y / 2.0);
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

    if ((muDoubleScalarAbs(b_y - absbi) < absxk) || (muDoubleScalarIsInf(absbi) &&
         muDoubleScalarIsInf(b_y) && ((absbi > 0.0) == (b_y > 0.0)))) {
      p = TRUE;
    } else {
      p = FALSE;
    }

    if (p) {
      absbi = muDoubleScalarAtan2(a.im, a.re);
      b_y = muDoubleScalarAtan2(b.im, b.re);
      absxk = muDoubleScalarAbs(b_y / 2.0);
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

      if ((muDoubleScalarAbs(b_y - absbi) < absxk) || (muDoubleScalarIsInf(absbi)
           && muDoubleScalarIsInf(b_y) && ((absbi > 0.0) == (b_y > 0.0)))) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        if (absbi > 0.78539816339744828) {
          if (absbi > 2.3561944901923448) {
            absbi = -a.im;
            b_y = -b.im;
          } else {
            absbi = -a.re;
            b_y = -b.re;
          }
        } else if (absbi > -0.78539816339744828) {
          absbi = a.im;
          b_y = b.im;
        } else if (absbi > -2.3561944901923448) {
          absbi = a.re;
          b_y = b.re;
        } else {
          absbi = -a.im;
          b_y = -b.im;
        }

        absxk = muDoubleScalarAbs(b_y / 2.0);
        if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &d_exponent);
            absxk = ldexp(1.0, d_exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        if ((muDoubleScalarAbs(b_y - absbi) < absxk) || (muDoubleScalarIsInf
             (absbi) && muDoubleScalarIsInf(b_y) && ((absbi > 0.0) == (b_y > 0.0))))
        {
          p = TRUE;
        } else {
          p = FALSE;
        }

        if (p) {
          absbi = 0.0;
          b_y = 0.0;
        }
      }
    }
  }

  return absbi > b_y;
}

static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T b_y[10])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, b_y);
  emlrtDestroyArray(&c_rand);
}

void receiveOFDM80211a_sdru(receiveOFDM80211a_sdruStackData *SD, real_T
  offsetCompensationValue, real_T b_numFrames, real_T *frameBER, b_struct_T
  *estimate)
{
  OFDMDemodulator b_hDataDemod;
  OFDMDemodulator b_hPreambleDemod;
  int32_T i;
  int32_T i0;
  comm_SDRuReceiver hSDRu;
  comm_SDRuReceiver *obj;
  real_T r[10];
  char_T temp[10];
  static const char_T cv0[5] = { 'S', 'D', 'R', 'u', '_' };

  comm_AGC hAGC;
  comm_AGC *b_obj;
  OFDMDemodulator *c_hDataDemod;
  OFDMDemodulator_1 *c_hPreambleDemod;
  real_T lastFound;
  real_T numBuffersProcessed;
  emxArray_creal_T *RPreEqualizer;
  const mxArray *b_y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv1[45];
  static const char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv3[4];
  static const char_T cv4[4] = { 's', 't', 'e', 'p' };

  const mxArray *d_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T cv5[51];
  static const char_T cv6[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv3[2] = { 1, 5 };

  char_T cv7[5];
  static const char_T cv8[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *f_y;
  static const int32_T iv4[2] = { 1, 35 };

  char_T cv9[35];
  static const char_T cv10[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *g_y;
  static const int32_T iv5[2] = { 1, 12 };

  char_T cv11[12];
  static const char_T cv12[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *h_y;
  static const int32_T iv6[2] = { 1, 43 };

  char_T cv13[43];
  static const char_T cv14[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *i_y;
  static const int32_T iv7[2] = { 1, 35 };

  static const char_T cv15[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *j_y;
  static const int32_T iv8[2] = { 1, 12 };

  const mxArray *k_y;
  static const int32_T iv9[2] = { 1, 26 };

  char_T cv16[26];
  static const char_T cv17[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *l_y;
  static const int32_T iv10[2] = { 1, 12 };

  const mxArray *m_y;
  static const int32_T iv11[2] = { 1, 35 };

  static const char_T cv18[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T value[4];
  creal_T P;
  const mxArray *n_y;
  static const int32_T iv12[2] = { 1, 16 };

  char_T cv19[16];
  static const char_T cv20[16] = { 'A', 'l', 'l', ' ', 'z', 'e', 'r', 'o', 's',
    ' ', '(', 'B', 'u', 'g', '?', ')' };

  static const creal_T dcv0[16] = { { 0.0459987545121242, -0.0459987545121242 },
    { -0.13244371685162329, -0.0023395918849900038 }, { -0.013472723270465881,
      0.078524785753782522 }, { 0.14275529282051713, 0.012651167853883804 }, {
      0.0919975090242484, -0.0 }, { 0.14275529282051713, 0.012651167853883833 },
    { -0.013472723270465881, 0.078524785753782522 }, { -0.13244371685162332,
      -0.0023395918849899934 }, { 0.0459987545121242, -0.0459987545121242 }, {
      0.0023395918849899934, 0.13244371685162332 }, { -0.078524785753782522,
      0.013472723270465881 }, { -0.012651167853883812, -0.1427552928205171 }, {
      0.0, -0.0919975090242484 }, { -0.012651167853883812, -0.14275529282051713
    }, { -0.078524785753782522, 0.013472723270465881 }, { 0.0023395918849900038,
      0.13244371685162329 } };

  real_T dv0[1231];
  real_T dv1[1231];
  real_T dv2[1231];
  real_T dv3[1224];
  real_T dv4[1224];
  real_T dv5[1224];
  real_T dv6[1224];
  real_T dv7[1224];
  real_T b_numPeaks;
  real_T preambleEstimatedLocation;
  boolean_T b0;
  b_struct_T b_estimate;
  int32_T b_preambleEstimatedLocation[1280];
  int32_T c_preambleEstimatedLocation[1280];
  creal_T d_buffer[32];
  creal_T RPostEqualizer[576];
  creal_T RLinear[576];
  boolean_T b_RLinear[560];
  static const int8_T iv13[560] = { 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1,
    1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0,
    0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0,
    0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1,
    1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0,
    1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1,
    0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1,
    1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1,
    0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
    1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0,
    0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1,
    0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1,
    0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0,
    0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1,
    0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1,
    0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMDemodulator(&b_hDataDemod, &emlrtRTEI, TRUE);
  emxInitStruct_OFDMDemodulator(&b_hPreambleDemod, &b_emlrtRTEI, TRUE);
  estimate->phi = 0.0;
  estimate->delay = 0.0;
  estimate->numPeaks = 0.0;
  for (i = 0; i < 15; i++) {
    estimate->frequency[i] = 0.0;
  }

  estimate->phase = 0.0;
  estimate->frequencyMA = 0.0;
  estimate->numProcessed = 0.0;
  estimate->inputBufferLength = 5120.0;
  estimate->numFreqToAverage = 15.0;
  for (i0 = 0; i0 < 576; i0++) {
    estimate->pilotEqGains[i0].re = 0.0;
    estimate->pilotEqGains[i0].im = 0.0;
  }

  for (i = 0; i < 53; i++) {
    estimate->preambleEqGains[i].re = 0.0;
    estimate->preambleEqGains[i].im = 0.0;
  }

  for (i = 0; i < 80; i++) {
    estimate->message[i] = 0.0;
  }

  estimate->printReceivedData = TRUE;
  *frameBER = 0.0;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hSDRu;
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  obj->LocalOscillatorOffset = 0.0;
  obj->pConnected = FALSE;
  obj->pDriverHandle = 0;
  obj->pSubDevice = RxId;
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 4; i0++) {
    obj->tunablePropertyChanged[i0] = FALSE;
  }

  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrt_marshallIn(b_rand(emlrt_marshallOut(1.0), emlrt_marshallOut(10.0),
    &b_emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 10; i++) {
    r[i] = 48.0 + muDoubleScalarFloor(r[i] * 10.0);
  }

  for (i0 = 0; i0 < 10; i0++) {
    i = (int32_T)r[i0];
    i = emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &b_emlrtBCI,
      emlrtRootTLSGlobal);
    i = (int32_T)muDoubleScalarRem(i, 256.0);
    if (i < 0) {
      temp[i0] = (int8_T)-(int8_T)(uint8_T)-(real_T)i;
    } else {
      temp[i0] = (int8_T)(uint8_T)(real_T)i;
    }
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 5; i0++) {
    obj->ObjectID[i0] = cv0[i0];
  }

  for (i0 = 0; i0 < 10; i0++) {
    obj->ObjectID[i0 + 5] = temp[i0];
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  SystemProp_setProperties(obj, 2.2E+9 + offsetCompensationValue);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &hAGC;
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->isInitialized = FALSE;
  b_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  createOFDMDemods(&b_hDataDemod, &b_hPreambleDemod, &c_hPreambleDemod,
                   &c_hDataDemod);
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  lastFound = -2.0;
  numBuffersProcessed = 0.0;
  emxInit_creal_T(&RPreEqualizer, 3, &c_emlrtRTEI, TRUE);
  while (estimate->numProcessed < b_numFrames) {
    numBuffersProcessed++;
    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    obj = &hSDRu;
    if (!obj->isReleased) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      b_y = NULL;
      m0 = mxCreateCharArray(2, iv0);
      for (i = 0; i < 45; i++) {
        cv1[i] = cv2[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv1);
      emlrtAssign(&b_y, m0);
      c_y = NULL;
      m0 = mxCreateCharArray(2, iv1);
      for (i = 0; i < 4; i++) {
        cv3[i] = cv4[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m0, cv3);
      emlrtAssign(&c_y, m0);
      b_error(message(b_y, c_y, &l_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (!obj->isInitialized) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      if (!obj->isInitialized) {
      } else {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        d_y = NULL;
        m0 = mxCreateCharArray(2, iv2);
        for (i = 0; i < 51; i++) {
          cv5[i] = cv6[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m0, cv5);
        emlrtAssign(&d_y, m0);
        e_y = NULL;
        m0 = mxCreateCharArray(2, iv3);
        for (i = 0; i < 5; i++) {
          cv7[i] = cv8[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m0, cv7);
        emlrtAssign(&e_y, m0);
        b_error(message(d_y, e_y, &l_emlrtMCI), &l_emlrtMCI);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      obj->isInitialized = TRUE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      SDRuReceiver_setupImplLocal(obj, &deviceStatus, errMsg_data, errMsg_size);
      emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);

      /* reportSDRuStatus SDRu status reporter */
      /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
      /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
      /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
      /*    can be Warning, Error , or None. */
      /*  */
      /*    USRP(R) is a trademark of National Instruments Corp. */
      /*    Copyright 2012 The MathWorks, Inc. */
      switch (deviceStatus) {
       case UsrpDriverNotCompatible:
        emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverNotCompatible)) {
        } else {
          emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
          f_y = NULL;
          m0 = mxCreateCharArray(2, iv4);
          for (i = 0; i < 35; i++) {
            cv9[i] = cv10[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m0, cv9);
          emlrtAssign(&f_y, m0);
          g_y = NULL;
          m0 = mxCreateCharArray(2, iv5);
          for (i = 0; i < 12; i++) {
            cv11[i] = cv12[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m0, cv11);
          emlrtAssign(&g_y, m0);
          h_y = NULL;
          m0 = mxCreateCharArray(2, iv6);
          for (i = 0; i < 43; i++) {
            cv13[i] = cv14[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m0, cv13);
          emlrtAssign(&h_y, m0);
          b_error(c_message(f_y, g_y, h_y, &c_emlrtMCI), &c_emlrtMCI);
          emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverNotResponding:
        emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverNotResponding)) {
        } else {
          emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
          i_y = NULL;
          m0 = mxCreateCharArray(2, iv7);
          for (i = 0; i < 35; i++) {
            cv9[i] = cv15[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m0, cv9);
          emlrtAssign(&i_y, m0);
          j_y = NULL;
          m0 = mxCreateCharArray(2, iv8);
          for (i = 0; i < 12; i++) {
            cv11[i] = cv12[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m0, cv11);
          emlrtAssign(&j_y, m0);
          b_error(message(i_y, j_y, &c_emlrtMCI), &c_emlrtMCI);
          emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverBusy:
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverBusy)) {
        } else {
          emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
          k_y = NULL;
          m0 = mxCreateCharArray(2, iv9);
          for (i = 0; i < 26; i++) {
            cv16[i] = cv17[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m0, cv16);
          emlrtAssign(&k_y, m0);
          l_y = NULL;
          m0 = mxCreateCharArray(2, iv10);
          for (i = 0; i < 12; i++) {
            cv11[i] = cv12[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m0, cv11);
          emlrtAssign(&l_y, m0);
          b_error(message(k_y, l_y, &c_emlrtMCI), &c_emlrtMCI);
          emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverError:
        emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverError)) {
        } else {
          emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
          m_y = NULL;
          m0 = mxCreateCharArray(2, iv11);
          for (i = 0; i < 35; i++) {
            cv9[i] = cv18[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m0, cv9);
          emlrtAssign(&m_y, m0);
          b_error(b_message(m_y, &c_emlrtMCI), &c_emlrtMCI);
          emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
        break;
      }

      emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      if (deviceStatus == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
        obj->pConnected = TRUE;
        emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
        obj->pConnected = FALSE;
        emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    if (obj->TunablePropsChanged) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 4; i++) {
        for (i0 = 0; i0 < 4; i0++) {
          value[i0] = obj->tunablePropertyChanged[i0];
        }

        value[i] = FALSE;
        emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        for (i0 = 0; i0 < 4; i0++) {
          obj->tunablePropertyChanged[i0] = value[i0];
        }

        emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    SDRuReceiver_stepImpl(SD, obj, SD->f2.buffer);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    P = SD->f2.buffer[0];
    for (i = 0; i < 5119; i++) {
      if (eml_relop(SD->f2.buffer[i + 1], P)) {
        P = SD->f2.buffer[i + 1];
      }
    }

    if ((P.re == 0.0) && (P.im == 0.0)) {
      emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
      n_y = NULL;
      m0 = mxCreateCharArray(2, iv12);
      for (i = 0; i < 16; i++) {
        cv19[i] = cv20[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 16, m0, cv19);
      emlrtAssign(&n_y, m0);
      disp(n_y, &emlrtMCI);
      emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      memcpy(&SD->f2.b_buffer[0], &SD->f2.buffer[0], 5120U * sizeof(creal_T));
      SystemCore_step(&hAGC, SD->f2.b_buffer, SD->f2.buffer);
      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
      xcorr(*(creal_T (*)[1231])&SD->f2.buffer[0], dcv0, SD->f2.Phat);
      emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
      b_abs(*(creal_T (*)[1231])&SD->f2.buffer[0], dv0);
      memcpy(&dv1[0], &dv0[0], 1231U * sizeof(real_T));
      power(dv1, dv2);
      b_xcorr(dv2, SD->f2.Rhat);
      emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
      c_abs(*(creal_T (*)[1224])&SD->f2.Phat[1230], dv3);
      memcpy(&dv4[0], &dv3[0], 1224U * sizeof(real_T));
      b_power(dv4, dv3);
      b_power(*(real_T (*)[1224])&SD->f2.Rhat[1230], dv5);
      memcpy(&dv6[0], &dv3[0], 1224U * sizeof(real_T));
      rdivide(dv6, dv5, dv7);
      locateShortpreamble(dv7, &preambleEstimatedLocation, &b_numPeaks);
      emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
      estimate->delay = preambleEstimatedLocation;
      estimate->numPeaks = b_numPeaks;
      if ((preambleEstimatedLocation > -1.0) && (numBuffersProcessed - lastFound
           >= 2.0)) {
        b0 = TRUE;
      } else {
        b0 = FALSE;
      }

      if (b0) {
        lastFound = numBuffersProcessed;
        estimate->numProcessed++;
        if (preambleEstimatedLocation == preambleEstimatedLocation) {
        } else {
          emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
          emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &cb_emlrtRTEI,
            "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
          emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
        }

        for (i0 = 0; i0 < 1280; i0++) {
          b_numPeaks = preambleEstimatedLocation + (1.0 + (real_T)i0);
          i = (int32_T)emlrtIntegerCheckFastR2012b(b_numPeaks, &emlrtDCI,
            emlrtRootTLSGlobal);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, 5120, &c_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
        b_estimate = *estimate;
        for (i0 = 0; i0 < 1280; i0++) {
          b_preambleEstimatedLocation[i0] = (int32_T)(preambleEstimatedLocation
            + (1.0 + (real_T)i0));
          c_preambleEstimatedLocation[i0] = (int32_T)(preambleEstimatedLocation
            + (1.0 + (real_T)i0));
        }

        for (i0 = 0; i0 < 32; i0++) {
          d_buffer[i0].re = SD->f2.buffer[b_preambleEstimatedLocation[i0] - 1].
            re * SD->f2.buffer[c_preambleEstimatedLocation[32 + i0] - 1].re -
            -SD->f2.buffer[b_preambleEstimatedLocation[i0] - 1].im *
            SD->f2.buffer[c_preambleEstimatedLocation[32 + i0] - 1].im;
          d_buffer[i0].im = SD->f2.buffer[b_preambleEstimatedLocation[i0] - 1].
            re * SD->f2.buffer[c_preambleEstimatedLocation[32 + i0] - 1].im +
            -SD->f2.buffer[b_preambleEstimatedLocation[i0] - 1].im *
            SD->f2.buffer[c_preambleEstimatedLocation[32 + i0] - 1].re;
        }

        P = sum(d_buffer);
        b_numPeaks = muDoubleScalarAtan2(P.im, P.re);
        b_estimate.phi = muDoubleScalarAtan2(P.im, P.re);
        if (estimate->numProcessed < 15.0) {
          i0 = (int32_T)estimate->numProcessed;
          b_estimate.frequency[emlrtDynamicBoundsCheckFastR2012b(i0, 1, 15,
            &emlrtBCI, emlrtRootTLSGlobal) - 1] = b_numPeaks /
            0.00020106192982974677;
        } else {
          for (i = 0; i < 14; i++) {
            b_estimate.frequency[i] = estimate->frequency[i + 1];
          }

          b_estimate.frequency[14] = b_numPeaks / 0.00020106192982974677;
        }

        emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
        for (i0 = 0; i0 < 1280; i0++) {
          SD->f2.c_buffer[i0] = SD->f2.buffer[(int32_T)
            (preambleEstimatedLocation + (1.0 + (real_T)i0)) - 1];
        }

        freqCorrectOFDM(&b_estimate, SD->f2.c_buffer, SD->f2.rFreqShifted);
        emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
        equalizeOFDM(SD, SD->f2.rFreqShifted, &b_estimate, &b_hPreambleDemod,
                     &b_hDataDemod, RPostEqualizer, RPreEqualizer, estimate);
        emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
        memcpy(&RLinear[0], &RPostEqualizer[0], 576U * sizeof(creal_T));
        for (i = 0; i < 560; i++) {
          b_RLinear[i] = ((RLinear[i].re < 0.0) != iv13[i]);
        }

        *frameBER = b_sum(b_RLinear) / 560.0;
        emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
        b_numPeaks = muDoubleScalarRound(estimate->numProcessed);
        if (b_numPeaks < 2.147483648E+9) {
          if (b_numPeaks >= -2.147483648E+9) {
            i0 = (int32_T)b_numPeaks;
          } else {
            i0 = MIN_int32_T;
          }
        } else if (b_numPeaks >= 2.147483648E+9) {
          i0 = MAX_int32_T;
        } else {
          i0 = 0;
        }

        b_fprintf(i0);
        emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        d_fprintf(*frameBER);
        emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
      }
    }
  }

  emxFree_creal_T(&RPreEqualizer);
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_release(&hSDRu);
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  emxFreeStruct_OFDMDemodulator(&b_hPreambleDemod);
  emxFreeStruct_OFDMDemodulator(&b_hDataDemod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (receiveOFDM80211a_sdru.c) */
