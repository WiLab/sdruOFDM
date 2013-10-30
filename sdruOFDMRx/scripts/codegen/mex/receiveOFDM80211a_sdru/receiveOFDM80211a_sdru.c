/*
 * receiveOFDM80211a_sdru.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "SDRuReceiver.h"
#include "equalizeOFDM.h"
#include "sum.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "locateOFDMFrame_sdr.h"
#include "rdivide.h"
#include "power.h"
#include "abs.h"
#include "xcorr.h"
#include "AGC.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "fprintf.h"
#include "closeDataConnection.h"
#include "createOFDMDemods.h"
#include "checkIPAddressFormat.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 52, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo b_emlrtRSI = { 140, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo c_emlrtRSI = { 139, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo d_emlrtRSI = { 135, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo e_emlrtRSI = { 101, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo f_emlrtRSI = { 98, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo g_emlrtRSI = { 95, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo h_emlrtRSI = { 76, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo i_emlrtRSI = { 73, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo j_emlrtRSI = { 67, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo k_emlrtRSI = { 49, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo l_emlrtRSI = { 41, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRSInfo q_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

static emlrtRSInfo r_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtRSInfo t_emlrtRSI = { 1, "SDRuBase",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p" };

static emlrtRSInfo u_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

static emlrtRSInfo kb_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

static emlrtRSInfo lb_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo nb_emlrtRSI = { 1, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ob_emlrtRSI = { 134, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo nc_emlrtRSI = { 73, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo pc_emlrtRSI = { 63, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo rc_emlrtRSI = { 53, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo tc_emlrtRSI = { 42, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo wc_emlrtRSI = { 85, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo xc_emlrtRSI = { 86, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo yc_emlrtRSI = { 87, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo dd_emlrtRSI = { 172, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ed_emlrtRSI = { 173, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo fd_emlrtRSI = { 176, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo gd_emlrtRSI = { 183, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo hd_emlrtRSI = { 184, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo id_emlrtRSI = { 185, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo jd_emlrtRSI = { 189, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ld_emlrtRSI = { 282, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pd_emlrtRSI = { 16, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo qd_emlrtRSI = { 17, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo rd_emlrtRSI = { 28, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo pe_emlrtRSI = { 17, "coarseOFDMFreqEst_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo wf_emlrtRSI = { 6, "reportDrivers",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m" };

static emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtMCInfo i_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo j_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo o_emlrtMCI = { 87, 13, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 33, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 52, 19, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 52, 3, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtBCInfo emlrtBCI = { 1, 15, 10, 5, "estimate.frequency",
  "coarseOFDMFreqEst_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 88, 32, "flatAddrList", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

static emlrtRTEInfo bb_emlrtRTEI = { 95, 25, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m"
};

static emlrtBCInfo d_emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

static emlrtBCInfo e_emlrtBCI = { 1, 5120, 95, 18, "buffer",
  "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m",
  0 };

static emlrtDCInfo emlrtDCI = { 95, 18, "receiveOFDM80211a_sdru",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m",
  1 };

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T b_y[10]);
static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static void e_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);
static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2]);
static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T b_y[10]);
static void warning(const mxArray *b, emlrtMCInfo *location);

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
  const mxArray *m19;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m19, 2, pArrays, "rand",
    TRUE, location);
}

static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m23;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m23, 3, pArrays,
    "message", TRUE, location);
}

static void e_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv65[2];
  int32_T i23;
  for (i23 = 0; i23 < 2; i23++) {
    iv65[i23] = 1 + 9 * i23;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv65);
  for (i23 = 0; i23 < 10; i23++) {
    ret[i23] = (*(real_T (*)[10])mxGetData(src))[i23];
  }

  emlrtDestroyArray(&src);
}

static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2])
{
  const mxArray *b_y;
  static const int32_T iv55[2] = { 1, 31 };

  const mxArray *m13;
  char_T cv66[31];
  int32_T i;
  static const char_T cv67[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  int32_T u_size[2];
  int32_T i21;
  char_T u_data[1024];
  const mxArray *c_y;
  emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m13 = mxCreateCharArray(2, iv55);
  for (i = 0; i < 31; i++) {
    cv66[i] = cv67[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m13, cv66);
  emlrtAssign(&b_y, m13);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i21 = 0; i21 < i; i21++) {
    u_data[i21] = varargin_2_data[i21];
  }

  c_y = NULL;
  m13 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m13, (char_T *)&u_data);
  emlrtAssign(&c_y, m13);
  warning(message(b_y, c_y, &i_emlrtMCI), &j_emlrtMCI);
  emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
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

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
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

  boolean_T disconnected;
  comm_AGC hAGC;
  comm_AGC *b_obj;
  OFDMDemodulator *c_hDataDemod;
  OFDMDemodulator_1 *c_hPreambleDemod;
  real_T lastFound;
  real_T numBuffersProcessed;
  real_T totalBER;
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
  UsrpErrorCapiEnumT errStat_i;
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
  const mxArray *n_y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *o_y;
  static const int32_T iv13[2] = { 1, 4 };

  const mxArray *p_y;
  static const int32_T iv14[2] = { 1, 51 };

  const mxArray *q_y;
  static const int32_T iv15[2] = { 1, 5 };

  static const int16_T b_value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv16[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

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
  b_struct_T b_estimate;
  int32_T b_preambleEstimatedLocation[1280];
  int32_T c_preambleEstimatedLocation[1280];
  creal_T d_buffer[32];
  creal_T P;
  creal_T RPostEqualizer[576];
  creal_T RLinear[576];
  boolean_T b_RLinear[560];
  static const int8_T iv17[560] = { 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1,
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

  const mxArray *r_y;
  static const int32_T iv18[2] = { 1, 45 };

  const mxArray *s_y;
  static const int32_T iv19[2] = { 1, 7 };

  char_T cv19[7];
  static const char_T cv20[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  const mxArray *t_y;
  static const int32_T iv20[2] = { 1, 6 };

  char_T cv21[6];
  static const char_T cv22[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  char_T flatAddrList_data[128];
  const mxArray *u_y;
  const mxArray *v_y;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMDemodulator(&b_hDataDemod, &b_emlrtRTEI, TRUE);
  emxInitStruct_OFDMDemodulator(&b_hPreambleDemod, &c_emlrtRTEI, TRUE);

  /*  receiveOFDM80211a: Recover OFDM signal from input data stream and  */
  /*  return synchronization estimates and BER values of that recovered data. */
  /*  Input signal is assumed to be based upon the IEEE 802.11a standard. */
  /*  Inputs: */
  /*    -tx: struct containing transmitter's specifications */
  /*    -offsetCompensationValue: additional carrier offset adjustment value */
  /*    -numFrames: estimated number of frames in rChannel */
  /*    -useScopes: enables scope visuals */
  /*    -printPreceivedData: enables printing of recovered data to command window */
  /* Ignore scopes when generating code */
  /* % Setup buffer parameters and system objects */
  /*  "buffer" is a window of samples from the input signal "recv".  This */
  /*  window is slid across the input signal in order to locate the start of */
  /*  frames. The variable "windowSlideDistance" determines the number of */
  /*  samples the buffer is slid between iterations. This sliding is not done */
  /*  on an individual sample basis for performance reasons. The "buffer" */
  /*  itself is set to be larger than a single frame to accommodate this group */
  /*  sliding, while still allowing for full individual frame detection. */
  /* Size of Buffer of sliding window */
  /* Create memory structure to collect measurements for sync algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /*  initializeOFDMSyncMemory: Initialize memory for simulation which is returned by */
  /*  the main function OFDM80211aReceiver */
  /*  Pre-initialize estimates to be saved between numFrames */
  estimate->phi = 0.0;
  estimate->delay = 0.0;

  /* Additional points needed for sliding buffer  */
  estimate->numPeaks = 0.0;

  /* Additional points needed for sliding buffer */
  for (i = 0; i < 15; i++) {
    estimate->frequency[i] = 0.0;
  }

  estimate->phase = 0.0;
  estimate->frequencyMA = 0.0;
  estimate->numProcessed = 0.0;

  /* Tracking number of processed found numFrames */
  estimate->inputBufferLength = 5120.0;

  /* Input buffer */
  estimate->numFreqToAverage = 15.0;

  /* Buffer for moving averages of offset estimates */
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

  /* Save individual received frame BER's */
  estimate->printReceivedData = TRUE;
  *frameBER = 0.0;

  /*  Create visualization objects */
  /*  Setup USRP */
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hSDRu;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  obj->LocalOscillatorOffset = 0.0;
  obj->pConnected = FALSE;
  obj->pDriverHandle = 0;
  obj->pSubDevice = RxId;
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 4; i0++) {
    obj->tunablePropertyChanged[i0] = FALSE;
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrt_marshallIn(b_rand(emlrt_marshallOut(1.0), emlrt_marshallOut(10.0),
    &emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 10; i++) {
    r[i] = 48.0 + muDoubleScalarFloor(r[i] * 10.0);
  }

  for (i0 = 0; i0 < 10; i0++) {
    i = (int32_T)r[i0];
    i = emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &d_emlrtBCI,
      emlrtRootTLSGlobal);
    i = (int32_T)muDoubleScalarRem(i, 256.0);
    if (i < 0) {
      temp[i0] = (int8_T)-(int8_T)(uint8_T)-(real_T)i;
    } else {
      temp[i0] = (int8_T)(uint8_T)(real_T)i;
    }
  }

  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 5; i0++) {
    obj->ObjectID[i0] = cv0[i0];
  }

  for (i0 = 0; i0 < 10; i0++) {
    obj->ObjectID[i0 + 5] = temp[i0];
  }

  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  checkIPAddressFormat();
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  obj->CenterFrequency = 2.2E+9 + offsetCompensationValue;
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->isInitialized && (!obj->isReleased)) {
    disconnected = TRUE;
  } else {
    disconnected = FALSE;
  }

  if (disconnected) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[1] = TRUE;
  }

  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  obj->DecimationFactor = 20.0;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->isInitialized && (!obj->isReleased)) {
    disconnected = TRUE;
  } else {
    disconnected = FALSE;
  }

  if (disconnected) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[0] = TRUE;
  }

  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  obj->Gain = 18.0;
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->isInitialized && (!obj->isReleased)) {
    disconnected = TRUE;
  } else {
    disconnected = FALSE;
  }

  if (disconnected) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[3] = TRUE;
  }

  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);

  /*  Gain control */
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &hAGC;
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->isInitialized = FALSE;
  b_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);

  /*  Create demodulators objects */
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  createOFDMDemods(&b_hDataDemod, &b_hPreambleDemod, &c_hPreambleDemod,
                   &c_hDataDemod);
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  lastFound = -2.0;

  /* Flag for found frame, used for dup check */
  numBuffersProcessed = 0.0;

  /* Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found) */
  totalBER = 0.0;

  /* % Process received data */
  /*  Locate frames in buffer and compensate for channel affects */
  /* for frames = 1 : numFrames */
  emxInit_creal_T(&RPreEqualizer, 3, &emlrtRTEI, TRUE);
  while (estimate->numProcessed < b_numFrames) {
    numBuffersProcessed++;

    /*  Increment processed data index */
    /* buffer = rChannel(windowIndex : windowIndex + estimate.inputBufferLength - 1);% Add incoming samples to buffer */
    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    obj = &hSDRu;
    if (!obj->isReleased) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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
      b_error(message(b_y, c_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (!obj->isInitialized) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      if (!obj->isInitialized) {
      } else {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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
        b_error(message(d_y, e_y, &k_emlrtMCI), &k_emlrtMCI);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      obj->isInitialized = TRUE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      SDRuReceiver_setupImplLocal(obj, &errStat_i, errMsg_data, errMsg_size);
      emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);

      /* reportSDRuStatus SDRu status reporter */
      /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
      /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
      /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
      /*    can be Warning, Error , or None. */
      /*  */
      /*    USRP(R) is a trademark of National Instruments Corp. */
      /*    Copyright 2012 The MathWorks, Inc. */
      switch (errStat_i) {
       case UsrpDriverNotCompatible:
        emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(errStat_i == UsrpDriverNotCompatible)) {
        } else {
          emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
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
          b_error(c_message(f_y, g_y, h_y, &b_emlrtMCI), &b_emlrtMCI);
          emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverNotResponding:
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(errStat_i == UsrpDriverNotResponding)) {
        } else {
          emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
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
          b_error(message(i_y, j_y, &b_emlrtMCI), &b_emlrtMCI);
          emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverBusy:
        emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(errStat_i == UsrpDriverBusy)) {
        } else {
          emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
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
          b_error(message(k_y, l_y, &b_emlrtMCI), &b_emlrtMCI);
          emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverError:
        emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
        if (!(errStat_i == UsrpDriverError)) {
        } else {
          emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
          m_y = NULL;
          m0 = mxCreateCharArray(2, iv11);
          for (i = 0; i < 35; i++) {
            cv9[i] = cv18[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m0, cv9);
          emlrtAssign(&m_y, m0);
          b_error(b_message(m_y, &b_emlrtMCI), &b_emlrtMCI);
          emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
        break;
      }

      emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      if (errStat_i == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        obj->pConnected = TRUE;
        emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        obj->pConnected = FALSE;
        emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    if (obj->TunablePropsChanged) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 4; i++) {
        for (i0 = 0; i0 < 4; i0++) {
          value[i0] = obj->tunablePropertyChanged[i0];
        }

        value[i] = FALSE;
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        for (i0 = 0; i0 < 4; i0++) {
          obj->tunablePropertyChanged[i0] = value[i0];
        }

        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    SDRuReceiver_stepImpl(SD, obj, SD->f3.buffer);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);

    /* if max(buffer)==0 */
    /*     % All zeros from radio (Bug?) */
    /*     disp('All zeros (Bug?)'); */
    /*     continue; */
    /* end */
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = &hAGC;
    if (!b_obj->isReleased) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      n_y = NULL;
      m0 = mxCreateCharArray(2, iv12);
      for (i = 0; i < 45; i++) {
        cv1[i] = cv2[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv1);
      emlrtAssign(&n_y, m0);
      o_y = NULL;
      m0 = mxCreateCharArray(2, iv13);
      for (i = 0; i < 4; i++) {
        cv3[i] = cv4[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m0, cv3);
      emlrtAssign(&o_y, m0);
      b_error(message(n_y, o_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (!b_obj->isInitialized) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      if (!b_obj->isInitialized) {
      } else {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        p_y = NULL;
        m0 = mxCreateCharArray(2, iv14);
        for (i = 0; i < 51; i++) {
          cv5[i] = cv6[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m0, cv5);
        emlrtAssign(&p_y, m0);
        q_y = NULL;
        m0 = mxCreateCharArray(2, iv15);
        for (i = 0; i < 5; i++) {
          cv7[i] = cv8[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m0, cv7);
        emlrtAssign(&q_y, m0);
        b_error(message(p_y, q_y, &k_emlrtMCI), &k_emlrtMCI);
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
      for (i0 = 0; i0 < 8; i0++) {
        b_obj->inputVarSize1[i0] = (uint32_T)b_value[i0];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->Gain = 1.0;
      emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pDetectorIsRectifier = TRUE;
      emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->Gain = 1.0;
      emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    if (b_obj->TunablePropsChanged) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    i = 0;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (i < 8)) {
      if (b_obj->inputVarSize1[i] != (uint32_T)iv16[i]) {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        for (i0 = 0; i0 < 8; i0++) {
          b_obj->inputVarSize1[i0] = (uint32_T)b_value[i0];
        }

        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        exitg1 = TRUE;
      } else {
        i++;
      }
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    memcpy(&SD->f3.b_buffer[0], &SD->f3.buffer[0], 5120U * sizeof(creal_T));
    AGC_stepImpl(b_obj, SD->f3.b_buffer, SD->f3.buffer);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);

    /*     %% Find preamble in buffer */
    emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);

    /*  locateOFDMFrame: Locate 802.11a based preamble from input data stream. */
    /*  It is assumed that the received signal is still in the time domain.  The */
    /*  location of the start of the preamble will be returned, if not found -1 */
    /*  is returned */
    /* % Timing Estimate */
    /*  Quarter of short preamble sequence */
    /*  Cross correlate */
    emlrtPushRtStackR2012b(&pd_emlrtRSI, emlrtRootTLSGlobal);
    xcorr(*(creal_T (*)[1231])&SD->f3.buffer[0], dcv0, SD->f3.Phat);
    emlrtPopRtStackR2012b(&pd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
    b_abs(*(creal_T (*)[1231])&SD->f3.buffer[0], dv0);
    memcpy(&dv1[0], &dv0[0], 1231U * sizeof(real_T));
    power(dv1, dv2);
    b_xcorr(dv2, SD->f3.Rhat);
    emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);

    /*  moving average */
    /*  Remove leading and tail zeros overlaps */
    /*  Calculate timing metric */
    /*  Determine start of short preamble */
    /*  peak threshold after normalization (TUNABLE) */
    emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    c_abs(*(creal_T (*)[1224])&SD->f3.Phat[1230], dv3);
    memcpy(&dv4[0], &dv3[0], 1224U * sizeof(real_T));
    b_power(dv4, dv3);
    b_power(*(real_T (*)[1224])&SD->f3.Rhat[1230], dv5);
    memcpy(&dv6[0], &dv3[0], 1224U * sizeof(real_T));
    rdivide(dv6, dv5, dv7);
    locateShortpreamble(dv7, &preambleEstimatedLocation, &b_numPeaks);
    emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    estimate->delay = preambleEstimatedLocation;
    estimate->numPeaks = b_numPeaks;

    /*  Plot timing information   */
    /*  Check if frame exists in correct location and whether it's duplicate */
    /*  %Check if full data frame exists in buffer */
    /*  %Check if preamble located */
    if ((preambleEstimatedLocation > -1.0) && (numBuffersProcessed - lastFound >=
         2.0)) {
      disconnected = TRUE;
    } else {
      disconnected = FALSE;
    }

    /* Check if duplicate frame */
    /*     %% Recover found frame */
    if (disconnected) {
      lastFound = numBuffersProcessed;

      /* Flag frame as found so duplicate frames are not processed */
      estimate->numProcessed++;

      /* Increment processed found frames */
      /*  Extract single frame from input buffer */
      if (preambleEstimatedLocation == preambleEstimatedLocation) {
      } else {
        emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &bb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
      }

      for (i0 = 0; i0 < 1280; i0++) {
        b_numPeaks = preambleEstimatedLocation + (1.0 + (real_T)i0);
        i = (int32_T)emlrtIntegerCheckFastR2012b(b_numPeaks, &emlrtDCI,
          emlrtRootTLSGlobal);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, 5120, &e_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      /*  Correct frequency offset */
      emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
      b_estimate = *estimate;

      /*  coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox */
      /*  method, utilizing halves of the short preamble from the 802.11a standard */
      for (i0 = 0; i0 < 1280; i0++) {
        b_preambleEstimatedLocation[i0] = (int32_T)(preambleEstimatedLocation +
          (1.0 + (real_T)i0));
        c_preambleEstimatedLocation[i0] = (int32_T)(preambleEstimatedLocation +
          (1.0 + (real_T)i0));
      }

      for (i0 = 0; i0 < 32; i0++) {
        d_buffer[i0].re = SD->f3.buffer[b_preambleEstimatedLocation[i0] - 1].re *
          SD->f3.buffer[c_preambleEstimatedLocation[32 + i0] - 1].re -
          -SD->f3.buffer[b_preambleEstimatedLocation[i0] - 1].im * SD->
          f3.buffer[c_preambleEstimatedLocation[32 + i0] - 1].im;
        d_buffer[i0].im = SD->f3.buffer[b_preambleEstimatedLocation[i0] - 1].re *
          SD->f3.buffer[c_preambleEstimatedLocation[32 + i0] - 1].im +
          -SD->f3.buffer[b_preambleEstimatedLocation[i0] - 1].im * SD->
          f3.buffer[c_preambleEstimatedLocation[32 + i0] - 1].re;
      }

      P = sum(d_buffer);

      /* Cross-correlate preamble */
      b_numPeaks = muDoubleScalarAtan2(P.im, P.re);
      b_estimate.phi = muDoubleScalarAtan2(P.im, P.re);

      /*  Determine phase angle between preamble halves */
      if (estimate->numProcessed < 15.0) {
        /*  Buffer not full */
        i0 = (int32_T)estimate->numProcessed;
        b_estimate.frequency[emlrtDynamicBoundsCheckFastR2012b(i0, 1, 15,
          &emlrtBCI, emlrtRootTLSGlobal) - 1] = b_numPeaks /
          4.0212385965949353E-5;

        /*  Convert angle to frequency */
      } else {
        for (i = 0; i < 14; i++) {
          b_estimate.frequency[i] = estimate->frequency[i + 1];
        }

        b_estimate.frequency[14] = b_numPeaks / 4.0212385965949353E-5;
      }

      /*  Apply frequency estimate */
      emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
      for (i0 = 0; i0 < 1280; i0++) {
        SD->f3.c_buffer[i0] = SD->f3.buffer[(int32_T)(preambleEstimatedLocation
          + (1.0 + (real_T)i0)) - 1];
      }

      freqCorrectOFDM(&b_estimate, SD->f3.c_buffer, SD->f3.rFreqShifted);
      emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);

      /*  Equalize */
      emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
      equalizeOFDM(SD, SD->f3.rFreqShifted, &b_estimate, &b_hPreambleDemod,
                   &b_hDataDemod, RPostEqualizer, RPreEqualizer, estimate);
      emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);

      /*  Demod subcarriers */
      /*  demodOFDMSubcarriers: Hard demodulate then compare received and */
      /*  transmitted data */
      /*  Demodulate subcarrier data */
      memcpy(&RLinear[0], &RPostEqualizer[0], 576U * sizeof(creal_T));

      /* Bits */
      /*  Decode received text */
      /* estimate.message = OFDMbits2letters(RHard > 0); */
      /*  Check results */
      for (i = 0; i < 560; i++) {
        b_RLinear[i] = ((RLinear[i].re < 0.0) != iv17[i]);
      }

      *frameBER = b_sum(b_RLinear) / 560.0;

      /*  Save additional information */
      /* estimate.totalFrameErrors(estimate.numProcessed) = sum(RHard~=tx.originalData); */
      /* estimate.totalFrameBits(estimate.numProcessed) = numel(RHard);            */
      /*  Visualize */
      /* Just text */
      /* if estimate.printReceivedData && ~useScopes */
      /*    fprintf('Found frames: %i\n',int32(estimate.numProcessed)); */
      /*    fprintf('Averge frame BER: %f\n',frameBER); */
      /*    %disp(['MSG: ', estimate.message.']); */
      /* end */
      totalBER += *frameBER;
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_creal_T(&RPreEqualizer);

  /* % Cleanup */
  /*  Release objects */
  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hSDRu;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    r_y = NULL;
    m0 = mxCreateCharArray(2, iv18);
    for (i = 0; i < 45; i++) {
      cv1[i] = cv2[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv1);
    emlrtAssign(&r_y, m0);
    s_y = NULL;
    m0 = mxCreateCharArray(2, iv19);
    for (i = 0; i < 7; i++) {
      cv19[i] = cv20[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m0, cv19);
    emlrtAssign(&s_y, m0);
    b_error(message(r_y, s_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    disconnected = TRUE;
    if (obj->pConnected) {
      emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      closeDataConnection(obj->pDriverHandle, &errStat_i, errMsg_data,
                          errMsg_size);
      emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      if (errStat_i == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        obj->pDriverHandle = 0;
        emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);

        /*    Copyright 2011-2012 The MathWorks, Inc. */
        emlrtPushRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);

        /*  */
        /*  This function unifies handling of interp vs. codegen call as well as */
        /*  errStat / errStr assignment. */
        /*  */
        /*    Copyright 2011-2012 The MathWorks, Inc. */
        if (!isSetupsdruCalled) {
          t_y = NULL;
          m0 = mxCreateCharArray(2, iv20);
          for (i = 0; i < 6; i++) {
            cv21[i] = cv22[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m0, cv21);
          emlrtAssign(&t_y, m0);
          setupsdru(sdruroot(&m_emlrtMCI), t_y, &n_emlrtMCI);
          isSetupsdruCalled = TRUE;
        }

        /*  These sizes must match those in C code. */
        /*  Arbitrary max imposed on ML/SL side */
        /*  function is being called in interpreted mode */
        /*  not being found:  */
        /*  eml_allow_enum_inputs; */
        /* errStat_i = int32(0); */
        for (i0 = 0; i0 < 1024; i0++) {
          errStr_data[i0] = '\x00';
        }

        for (i0 = 0; i0 < 128; i0++) {
          flatAddrList_data[i0] = '\x00';
        }

        emlrtPushRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
        reportDrivers_c(&flatAddrList_data[0], &errStat_i, &errStr_data[0]);
        emlrtPopRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&flatAddrList_data[0]);
        emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 128) {
        } else {
          emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
          u_y = NULL;
          m0 = mxCreateString("Assertion failed.");
          emlrtAssign(&u_y, m0);
          b_error(u_y, &o_emlrtMCI);
          emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
          i0 = 0;
        } else {
          i0 = emlrtDynamicBoundsCheckFastR2012b(i, 1, 128, &c_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /* errStat = UsrpErrorCapiEnumT(errStat_i); */
        emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&errStr_data[0]);
        emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 1024) {
        } else {
          emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
          v_y = NULL;
          m0 = mxCreateString("Assertion failed.");
          emlrtAssign(&v_y, m0);
          b_error(v_y, &l_emlrtMCI);
          emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
        } else {
          emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &b_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        if (!(i0 == 0)) {
          disconnected = FALSE;
          emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
          eml_warning(errMsg_data, errMsg_size);
          emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        }
      }

      emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      obj->pConnected = !disconnected;
      emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);

  /*  Print Results */
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  b_fprintf(totalBER / estimate->numProcessed);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  d_fprintf(estimate->numProcessed);
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  emxFreeStruct_OFDMDemodulator(&b_hPreambleDemod);
  emxFreeStruct_OFDMDemodulator(&b_hDataDemod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (receiveOFDM80211a_sdru.c) */
