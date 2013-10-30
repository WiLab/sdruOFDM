/*
 * SDRuReceiver.c
 *
 * Code generation for function 'SDRuReceiver'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "SDRuReceiver.h"
#include "error.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "checkIPAddressFormat.h"
#include "runSDRuQPSKReceiver_mexutil.h"
#include "runSDRuQPSKReceiver_data.h"

/* Type Definitions */
#include "usrp_uhd_capi.hpp"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

static emlrtRSInfo q_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtRSInfo r_emlrtRSI = { 1, "SDRuReceiver",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p" };

static emlrtRSInfo lb_emlrtRSI = { 6, "openDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m" };

static emlrtRSInfo mb_emlrtRSI = { 138, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo nb_emlrtRSI = { 141, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ob_emlrtRSI = { 146, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo pb_emlrtRSI = { 151, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo qb_emlrtRSI = { 152, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10]);
static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);
static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[10]);

/* Function Definitions */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10])
{
  c_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m28;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m28, 2, pArrays, "rand",
    TRUE, location);
}

static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv108[2];
  int32_T i14;
  for (i14 = 0; i14 < 2; i14++) {
    iv108[i14] = 1 + 9 * i14;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv108);
  for (i14 = 0; i14 < 10; i14++) {
    ret[i14] = (*(real_T (*)[10])mxGetData(src))[i14];
  }

  emlrtDestroyArray(&src);
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

comm_SDRuReceiver *SDRuReceiver_SDRuReceiver(comm_SDRuReceiver *obj)
{
  comm_SDRuReceiver *b_obj;
  comm_SDRuReceiver *c_obj;
  int32_T k;
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
  real_T r[10];
  char_T temp[10];
  int32_T i0;
  static const char_T cv0[5] = { 'S', 'D', 'R', 'u', '_' };

  boolean_T flag;
  b_obj = obj;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  c_obj->LocalOscillatorOffset = 0.0;
  c_obj->pConnected = FALSE;
  c_obj->pDriverHandle = 0;
  c_obj->pSubDevice = RxId;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 4; k++) {
    c_obj->tunablePropertyChanged[k] = FALSE;
  }

  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = mxCreateDoubleScalar(10.0);
  emlrtAssign(&b_y, m0);
  emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 10; k++) {
    r[k] = 48.0 + muDoubleScalarFloor(r[k] * 10.0);
  }

  for (k = 0; k < 10; k++) {
    i0 = (int32_T)r[k];
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 0, 255, &emlrtBCI,
      emlrtRootTLSGlobal);
    i0 = (int32_T)muDoubleScalarRem(i0, 256.0);
    if (i0 < 0) {
      temp[k] = (int8_T)-(int8_T)(uint8_T)-(real_T)i0;
    } else {
      temp[k] = (int8_T)(uint8_T)(real_T)i0;
    }
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 5; k++) {
    c_obj->ObjectID[k] = cv0[k];
  }

  for (k = 0; k < 10; k++) {
    c_obj->ObjectID[k + 5] = temp[k];
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  checkIPAddressFormat();
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->CenterFrequency = 2.4E+9;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[1] = TRUE;
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->Gain = 40.0;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[3] = TRUE;
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->DecimationFactor = 500.0;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[0] = TRUE;
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

void SDRuReceiver_setupImplLocal(comm_SDRuReceiver *obj, UsrpErrorCapiEnumT
  *deviceStatus, char_T errMsg_data[1024], int32_T errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i;
  const mxArray *y;
  static const int32_T iv23[2] = { 1, 6 };

  const mxArray *m4;
  char_T cv24[6];
  static const char_T cv25[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  static const uint8_T addr_null[13] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U,
    49U, 48U, 46U, 50U, 0U };

  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  int32_T driverApiH;
  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errMsg_data[1024];
  int32_T i7;
  comm_SDRuReceiver *b_obj;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  boardId = obj->pSubDevice;
  for (i = 0; i < 15; i++) {
    requester[i] = (uint8_T)obj->ObjectID[i];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m4 = mxCreateCharArray(2, iv23);
    for (i = 0; i < 6; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m4, cv24);
    emlrtAssign(&y, m4);
    setupsdru(sdruroot(&m_emlrtMCI), y, &n_emlrtMCI);
    isSetupsdruCalled = TRUE;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  for (i = 0; i < 1024; i++) {
    errMsg_data[i] = '\x00';
  }

  /*  varargin   1      2         3          4              5       6         7 */
  /*            addr, boardId, requester, frameLength, dportType, buffMode, buffSize */
  /*  varargout  1         2         3 */
  /*            driverH, errStat, errMsg */
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  addr_c = (char *)(addr_null);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 15; i++) {
    req_null[i] = requester[i];
  }

  req_null[15] = 0;
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  req_c = (char *)(req_null);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  openDataConnection_c(addr_c, boardId, req_c, 4000U, DPortDTypeCInt16,
                       BuffModeContinuous, 0U, &driverApiH, deviceStatus,
                       &errMsg_data[0]);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  (void)(addr_null);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  (void)(req_null);
  emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errMsg_data[0]);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    b_error(b_y, &l_emlrtMCI);
    emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &l_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = 1 + i;
  }

  for (i = 0; i < loop_ub; i++) {
    i7 = 0;
    while (i7 <= 0) {
      b_errMsg_data[i] = errMsg_data[tmp_data[i] - 1];
      i7 = 1;
    }
  }

  errMsg_size[0] = 1;
  errMsg_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errMsg_data[i] = b_errMsg_data[i];
  }

  emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pDriverHandle = driverApiH;
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
}

void SDRuReceiver_stepImpl(const comm_SDRuReceiver *obj, creal_T y[4000],
  uint32_T *dataLen)
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T decim;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T overrun;
  cint16_T yTemp[46336];
  int32_T i;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  decim = obj->DecimationFactor;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  receiveData(obj->pDriverHandle, fc, loOffset, gain, decim, yTemp, dataLen,
              &overrun, &errStatus, errMsg_data, errMsg_size);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  if (errStatus != UsrpDriverSuccess) {
    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    error(errMsg_data, errMsg_size);
    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  }

  for (i = 0; i < 4000; i++) {
    y[i].re = yTemp[i].re;
    y[i].im = yTemp[i].im;
    fc = y[i].im;
    y[i].re *= 3.0518509475997192E-5;
    y[i].im = 3.0518509475997192E-5 * fc;
  }
}

/* End of code generation (SDRuReceiver.c) */
