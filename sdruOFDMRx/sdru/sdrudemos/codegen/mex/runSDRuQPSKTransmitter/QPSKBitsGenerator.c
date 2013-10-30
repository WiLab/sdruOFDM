/*
 * QPSKBitsGenerator.c
 *
 * Code generation for function 'QPSKBitsGenerator'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "QPSKBitsGenerator.h"
#include "sendComplexDoubleData.h"
#include "SystemCore.h"
#include "error.h"
#include "runSDRuQPSKTransmitter_mexutil.h"
#include "runSDRuQPSKTransmitter_data.h"

/* Variable Definitions */
static emlrtRSInfo ac_emlrtRSI = { 142, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo bc_emlrtRSI = { 143, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo cc_emlrtRSI = { 144, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo dc_emlrtRSI = { 147, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo ec_emlrtRSI = { 152, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo fc_emlrtRSI = { 154, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

static emlrtRSInfo hc_emlrtRSI = { 134, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

static emlrtRSInfo lc_emlrtRSI = { 36, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

static emlrtMCInfo n_emlrtMCI = { 154, 1, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

static emlrtDCInfo emlrtDCI = { 141, 37, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m", 1 };

static emlrtBCInfo l_emlrtBCI = { 1, 100, 141, 37, "", "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m", 0 };

/* Function Declarations */
static void c_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[69]);
static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[69]);
static void f_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[69]);

/* Function Definitions */
static void c_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[69])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, y);
  emlrtDestroyArray(&c_rand);
}

static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[69])
{
  f_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void f_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[69])
{
  int32_T iv62[1];
  int32_T i15;
  iv62[0] = 69;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv62);
  for (i15 = 0; i15 < 69; i15++) {
    ret[i15] = (*(real_T (*)[69])mxGetData(src))[i15];
  }

  emlrtDestroyArray(&src);
}

void QPSKBitsGenerator_stepImpl(QPSKBitsGenerator_220 *obj, real_T y[200],
  real_T msg[105])
{
  real_T x;
  int32_T j;
  int32_T i;
  char_T msgStr[15];
  int8_T d[15];
  uint8_T u0;
  int8_T mtmp;
  const mxArray *b_y;
  static const int32_T iv27[2] = { 1, 17 };

  const mxArray *m7;
  char_T cv33[17];
  static const char_T cv34[17] = { 'c', 'o', 'm', 'm', ':', 'd', 'e', '2', 'b',
    'i', ':', 'S', 'm', 'a', 'l', 'l', 'N' };

  const mxArray *c_y;
  static const int32_T iv28[2] = { 1, 58 };

  char_T cv35[58];
  static const char_T cv36[58] = { 'S', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd',
    ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 'c', 'o', 'l', 'u',
    'm', 'n', 's', ' ', 'i', 'n', ' ', 'o', 'u', 't', 'p', 'u', 't', ' ', 'm',
    'a', 't', 'r', 'i', 'x', ' ', 'i', 's', ' ', 't', 'o', 'o', ' ', 's', 'm',
    'a', 'l', 'l', '.' };

  int8_T msgBin_data[105];
  int32_T tmp;
  int8_T b_msgBin_data[105];
  real_T x_data[105];
  const mxArray *d_y;
  const mxArray *e_y;
  real_T r[69];
  real_T data[174];
  commcodegen_Scrambler *b_obj;
  const mxArray *f_y;
  static const int32_T iv29[2] = { 1, 45 };

  char_T cv37[45];
  static const char_T cv38[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *g_y;
  static const int32_T iv30[2] = { 1, 4 };

  char_T cv39[4];
  static const char_T cv40[4] = { 's', 't', 'e', 'p' };

  const mxArray *h_y;
  static const int32_T iv31[2] = { 1, 51 };

  char_T cv41[51];
  static const char_T cv42[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *i_y;
  static const int32_T iv32[2] = { 1, 5 };

  char_T cv43[5];
  static const char_T cv44[5] = { 's', 'e', 't', 'u', 'p' };

  static const uint8_T value[8] = { 174U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  comm_Scrambler_2 *c_obj;
  boolean_T exitg1;
  static const uint8_T uv0[8] = { 174U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T scrambledData[174];
  QPSKBitsGenerator_220 *d_obj;
  x = obj->pCount;
  x = (x - muDoubleScalarFloor(x / 100.0) * 100.0) + 1.0;
  j = (int32_T)emlrtIntegerCheckFastR2012b(x, &emlrtDCI, emlrtRootTLSGlobal);
  i = emlrtDynamicBoundsCheckFastR2012b(j, 1, 100, &l_emlrtBCI,
    emlrtRootTLSGlobal);
  for (j = 0; j < 15; j++) {
    msgStr[j] = obj->pMsgStrSet[(i + 100 * j) - 1];
  }

  emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  for (j = 0; j < 15; j++) {
    u0 = (uint8_T)msgStr[j];
    if (u0 > 127) {
      u0 = 127;
    }

    d[j] = (int8_T)u0;
  }

  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  mtmp = d[0];
  for (i = 0; i < 14; i++) {
    if (d[i + 1] > mtmp) {
      mtmp = d[i + 1];
    }
  }

  if (mtmp != 0) {
    emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
    i = (int32_T)muDoubleScalarFloor(muDoubleScalarLog(mtmp) /
      0.69314718055994529) + 1;
    emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  } else {
    i = 1;
  }

  if (!((int32_T)muDoubleScalarPower(2.0, i) > mtmp)) {
    i++;
  }

  if (7 >= i) {
  } else {
    emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m7 = mxCreateCharArray(2, iv27);
    for (i = 0; i < 17; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 17, m7, cv33);
    emlrtAssign(&b_y, m7);
    c_y = NULL;
    m7 = mxCreateCharArray(2, iv28);
    for (i = 0; i < 58; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 58, m7, cv35);
    emlrtAssign(&c_y, m7);
    c_error(b_y, c_y, &n_emlrtMCI);
    emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  memset(&msgBin_data[0], 0, 105U * sizeof(int8_T));
  for (i = 0; i < 15; i++) {
    j = 1;
    tmp = d[i];
    while ((j <= 7) && (tmp > 0)) {
      msgBin_data[i + 15 * (j - 1)] = (int8_T)muDoubleScalarRem(tmp, 2.0);
      tmp = (int32_T)muDoubleScalarFloor((real_T)tmp / 2.0);
      j++;
    }
  }

  for (j = 0; j < 7; j++) {
    for (i = 0; i < 15; i++) {
      b_msgBin_data[i + 15 * j] = msgBin_data[i + 15 * (6 - j)];
    }
  }

  for (j = 0; j < 7; j++) {
    for (i = 0; i < 15; i++) {
      msgBin_data[i + 15 * j] = b_msgBin_data[i + 15 * j];
    }
  }

  emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  for (j = 0; j < 15; j++) {
    for (i = 0; i < 7; i++) {
      x_data[i + 7 * j] = msgBin_data[j + 15 * i];
    }
  }

  memcpy(&msg[0], &x_data[0], 105U * sizeof(real_T));
  emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  d_y = NULL;
  m7 = mxCreateDoubleScalar(69.0);
  emlrtAssign(&d_y, m7);
  e_y = NULL;
  m7 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&e_y, m7);
  c_emlrt_marshallIn(b_rand(d_y, e_y, &emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 69; i++) {
    r[i] = muDoubleScalarFloor(r[i] * 2.0);
  }

  memcpy(&data[0], &msg[0], 105U * sizeof(real_T));
  memcpy(&data[105], &r[0], 69U * sizeof(real_T));
  emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->pScrambler;
  if (!b_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    f_y = NULL;
    m7 = mxCreateCharArray(2, iv29);
    for (i = 0; i < 45; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m7, cv37);
    emlrtAssign(&f_y, m7);
    g_y = NULL;
    m7 = mxCreateCharArray(2, iv30);
    for (i = 0; i < 4; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m7, cv39);
    emlrtAssign(&g_y, m7);
    b_error(message(f_y, g_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!b_obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      h_y = NULL;
      m7 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 51; i++) {
        cv41[i] = cv42[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m7, cv41);
      emlrtAssign(&h_y, m7);
      i_y = NULL;
      m7 = mxCreateCharArray(2, iv32);
      for (i = 0; i < 5; i++) {
        cv43[i] = cv44[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m7, cv43);
      emlrtAssign(&i_y, m7);
      b_error(message(h_y, i_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    for (j = 0; j < 8; j++) {
      b_obj->inputVarSize1[j] = value[j];
    }

    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: comm.Scrambler */
      for (i = 0; i < 4; i++) {
        c_obj->W0_shiftReg[i] = c_obj->P1_IniState[i];
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &j_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: comm.Scrambler */
    for (i = 0; i < 4; i++) {
      c_obj->W0_shiftReg[i] = c_obj->P1_IniState[i];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != uv0[i]) {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      for (j = 0; j < 8; j++) {
        b_obj->inputVarSize1[j] = value[j];
      }

      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &l_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.Scrambler */
    for (i = 0; i < 4; i++) {
      c_obj->W0_shiftReg[i] = c_obj->P1_IniState[i];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.Scrambler */
  for (j = 0; j < 174; j++) {
    tmp = (int32_T)muDoubleScalarFloor(data[j]);
    for (i = 0; i < 4; i++) {
      tmp += (uint8_T)(c_obj->P0_Polynomial[i + 1] * c_obj->W0_shiftReg[i]);
    }

    tmp %= 2;
    scrambledData[j] = tmp;
    for (i = 2; i > -1; i += -1) {
      c_obj->W0_shiftReg[i + 1] = c_obj->W0_shiftReg[i];
    }

    c_obj->W0_shiftReg[0U] = tmp;
  }

  emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &k_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 26; i++) {
    y[i] = obj->pHeader[i];
  }

  for (i = 0; i < 174; i++) {
    y[i + 26] = scrambledData[i];
  }

  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = obj;
  x = obj->pCount + 1.0;
  d_obj->pCount = x;
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (QPSKBitsGenerator.c) */
