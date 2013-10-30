/*
 * sdruOFDMTransmitterRun.c
 *
 * Code generation for function 'sdruOFDMTransmitterRun'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "SystemCore.h"
#include "sendComplexDoubleData.h"
#include "closeDataConnection.h"
#include "checkIPAddressFormat.h"
#include "sdruOFDMTransmitterRun_mexutil.h"
#include "sdruOFDMTransmitterRun_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9, "sdruOFDMTransmitterRun",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m"
};

static emlrtRSInfo b_emlrtRSI = { 3, "sdruOFDMTransmitterRun",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m"
};

static emlrtRSInfo c_emlrtRSI = { 12, "sdruOFDMTransmitterRun",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m"
};

static emlrtRSInfo d_emlrtRSI = { 15, "sdruOFDMTransmitterRun",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m"
};

static emlrtRSInfo e_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

static emlrtRSInfo f_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

static emlrtRSInfo i_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

static emlrtRSInfo j_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtRSInfo m_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

static emlrtRSInfo ab_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

static emlrtRSInfo bb_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

static emlrtRSInfo cb_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo ub_emlrtRSI = { 85, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo vb_emlrtRSI = { 86, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo wb_emlrtRSI = { 87, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ic_emlrtRSI = { 6, "reportDrivers",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m" };

static emlrtMCInfo emlrtMCI = { 9, 1, "sdruOFDMTransmitterRun",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m"
};

static emlrtMCInfo b_emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtMCInfo j_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo k_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo p_emlrtMCI = { 87, 13, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 88, 32, "flatAddrList", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

static emlrtBCInfo c_emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

/* Function Declarations */
static void b_eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2]);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10]);
static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void disp(const mxArray *b, emlrtMCInfo *location);
static void eml_warning(void);
static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[10]);
static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);
static void warning(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void b_eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv33[2] = { 1, 31 };

  const mxArray *m8;
  char_T cv42[31];
  int32_T i;
  static const char_T cv43[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  int32_T u_size[2];
  int32_T i12;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m8 = mxCreateCharArray(2, iv33);
  for (i = 0; i < 31; i++) {
    cv42[i] = cv43[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m8, cv42);
  emlrtAssign(&y, m8);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i12 = 0; i12 < i; i12++) {
    u_data[i12] = varargin_2_data[i12];
  }

  b_y = NULL;
  m8 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m8, (char_T *)&u_data);
  emlrtAssign(&b_y, m8);
  warning(message(y, b_y, &j_emlrtMCI), &k_emlrtMCI);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10])
{
  g_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m10;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m10, 2, pArrays, "rand",
    TRUE, location);
}

static void disp(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "disp", TRUE,
                        location);
}

static void eml_warning(void)
{
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 43 };

  const mxArray *m2;
  char_T cv14[43];
  int32_T i;
  static const char_T cv15[43] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'O', 'u', 't',
    'O', 'f', 'R', 'a', 'n', 'g', 'e', 'I', 'n', 't', 'e', 'r', 'p', 'F', 'a',
    'c', 't', 'o', 'r' };

  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m2 = mxCreateCharArray(2, iv15);
  for (i = 0; i < 43; i++) {
    cv14[i] = cv15[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m2, cv14);
  emlrtAssign(&y, m2);
  warning(b_message(y, &j_emlrtMCI), &k_emlrtMCI);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
}

static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[10])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, y);
  emlrtDestroyArray(&c_rand);
}

static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv35[2];
  int32_T i14;
  for (i14 = 0; i14 < 2; i14++) {
    iv35[i14] = 1 + 9 * i14;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv35);
  for (i14 = 0; i14 < 10; i14++) {
    ret[i14] = (*(real_T (*)[10])mxGetData(src))[i14];
  }

  emlrtDestroyArray(&src);
}

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
}

void sdruOFDMTransmitterRun(sdruOFDMTransmitterRunStackData *SD, real_T
  InterpolationFactor, const creal_T txOrg[25600])
{
  comm_SDRuTransmitter hSDRu;
  comm_SDRuTransmitter *obj;
  int32_T i0;
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
  real_T r[10];
  int32_T i;
  char_T temp[10];
  static const char_T cv0[5] = { 'S', 'D', 'R', 'u', '_' };

  boolean_T disconnected;
  const mxArray *c_y;
  static const int32_T iv0[2] = { 1, 25 };

  char_T cv1[25];
  static const char_T cv2[25] = { 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't',
    'i', 'n', 'g', '.', '.', '.', ' ', 'p', 'e', 'w', '!', ' ', 'p', 'e', 'w',
    '!' };

  const mxArray *d_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T cv3[45];
  static const char_T cv4[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv2[2] = { 1, 7 };

  char_T cv5[7];
  static const char_T cv6[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  const mxArray *f_y;
  static const int32_T iv3[2] = { 1, 6 };

  char_T cv7[6];
  static const char_T cv8[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  char_T flatAddrList_data[128];
  const mxArray *g_y;
  const mxArray *h_y;

  /*  Setup transmitter */
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hSDRu;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  obj->LocalOscillatorOffset = 0.0;
  obj->pSubDevice = TxId;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 4; i0++) {
    obj->tunablePropertyChanged[i0] = FALSE;
  }

  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = mxCreateDoubleScalar(10.0);
  emlrtAssign(&b_y, m0);
  emlrt_marshallIn(b_rand(y, b_y, &b_emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 10; i++) {
    r[i] = 48.0 + muDoubleScalarFloor(r[i] * 10.0);
  }

  for (i0 = 0; i0 < 10; i0++) {
    i = (int32_T)r[i0];
    i = emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &c_emlrtBCI,
      emlrtRootTLSGlobal);
    i = (int32_T)muDoubleScalarRem(i, 256.0);
    if (i < 0) {
      temp[i0] = (int8_T)-(int8_T)(uint8_T)-(real_T)i;
    } else {
      temp[i0] = (int8_T)(uint8_T)(real_T)i;
    }
  }

  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 5; i0++) {
    obj->ObjectID[i0] = cv0[i0];
  }

  for (i0 = 0; i0 < 10; i0++) {
    obj->ObjectID[i0 + 5] = temp[i0];
  }

  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  checkIPAddressFormat();
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  obj->CenterFrequency = 2.2E+9;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->isInitialized && (!obj->isReleased)) {
    disconnected = TRUE;
  } else {
    disconnected = FALSE;
  }

  if (disconnected) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[1] = TRUE;
  }

  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  if (InterpolationFactor > 512.0) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    eml_warning();
    emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  obj->InterpolationFactor = InterpolationFactor;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->isInitialized && (!obj->isReleased)) {
    disconnected = TRUE;
  } else {
    disconnected = FALSE;
  }

  if (disconnected) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[0] = TRUE;
  }

  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  obj->Gain = 25.0;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->isInitialized && (!obj->isReleased)) {
    disconnected = TRUE;
  } else {
    disconnected = FALSE;
  }

  if (disconnected) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[3] = TRUE;
  }

  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);

  /*  Run transmitter */
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  c_y = NULL;
  m0 = mxCreateCharArray(2, iv0);
  for (i = 0; i < 25; i++) {
    cv1[i] = cv2[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 25, m0, cv1);
  emlrtAssign(&c_y, m0);
  disp(c_y, &emlrtMCI);
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 100000000; i++) {
    /*  Send data to USRP */
    emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    SystemCore_step(SD, &hSDRu, txOrg);
    emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hSDRu;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    d_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 45; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv3);
    emlrtAssign(&d_y, m0);
    e_y = NULL;
    m0 = mxCreateCharArray(2, iv2);
    for (i = 0; i < 7; i++) {
      cv5[i] = cv6[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m0, cv5);
    emlrtAssign(&e_y, m0);
    b_error(message(d_y, e_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    disconnected = TRUE;
    if (obj->pConnected) {
      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      closeDataConnection(obj->pDriverHandle, &errStat_i, errMsg_data,
                          errMsg_size);
      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      if (errStat_i == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
        obj->pDriverHandle = 0;
        emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);

        /*    Copyright 2011-2012 The MathWorks, Inc. */
        emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

        /*  */
        /*  This function unifies handling of interp vs. codegen call as well as */
        /*  errStat / errStr assignment. */
        /*  */
        /*    Copyright 2011-2012 The MathWorks, Inc. */
        if (!isSetupsdruCalled) {
          f_y = NULL;
          m0 = mxCreateCharArray(2, iv3);
          for (i = 0; i < 6; i++) {
            cv7[i] = cv8[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m0, cv7);
          emlrtAssign(&f_y, m0);
          setupsdru(sdruroot(&n_emlrtMCI), f_y, &o_emlrtMCI);
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

        emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
        reportDrivers_c(&flatAddrList_data[0], &errStat_i, &errStr_data[0]);
        emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&flatAddrList_data[0]);
        emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 128) {
        } else {
          emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
          g_y = NULL;
          m0 = mxCreateString("Assertion failed.");
          emlrtAssign(&g_y, m0);
          b_error(g_y, &p_emlrtMCI);
          emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
          i0 = 0;
        } else {
          i0 = emlrtDynamicBoundsCheckFastR2012b(i, 1, 128, &emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /* errStat = UsrpErrorCapiEnumT(errStat_i); */
        emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&errStr_data[0]);
        emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 1024) {
        } else {
          emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
          h_y = NULL;
          m0 = mxCreateString("Assertion failed.");
          emlrtAssign(&h_y, m0);
          b_error(h_y, &m_emlrtMCI);
          emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
        } else {
          emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &b_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
        if (!(i0 == 0)) {
          disconnected = FALSE;
          emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
          b_eml_warning(errMsg_data, errMsg_size);
          emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
        }
      }

      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      obj->pConnected = !disconnected;
      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (sdruOFDMTransmitterRun.c) */
