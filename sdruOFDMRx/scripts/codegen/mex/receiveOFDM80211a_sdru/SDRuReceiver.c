/*
 * SDRuReceiver.c
 *
 * Code generation for function 'SDRuReceiver'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "SDRuReceiver.h"
#include "error.h"
#include "receiveData.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Type Definitions */
#include "usrp_uhd_capi.hpp"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 6, "openDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m" };

static emlrtRSInfo gc_emlrtRSI = { 138, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo hc_emlrtRSI = { 141, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ic_emlrtRSI = { 146, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo jc_emlrtRSI = { 151, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo kc_emlrtRSI = { 152, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
void SDRuReceiver_setupImplLocal(comm_SDRuReceiver *obj, UsrpErrorCapiEnumT
  *deviceStatus, char_T errMsg_data[1024], int32_T errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i;
  const mxArray *b_y;
  static const int32_T iv35[2] = { 1, 6 };

  const mxArray *m4;
  char_T cv34[6];
  static const char_T cv35[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  static const uint8_T addr_null[13] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U,
    49U, 48U, 46U, 50U, 0U };

  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  int32_T driverApiH;
  const mxArray *c_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errMsg_data[1024];
  int32_T i8;
  comm_SDRuReceiver *b_obj;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  boardId = obj->pSubDevice;
  for (i = 0; i < 15; i++) {
    requester[i] = (uint8_T)obj->ObjectID[i];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    b_y = NULL;
    m4 = mxCreateCharArray(2, iv35);
    for (i = 0; i < 6; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m4, cv34);
    emlrtAssign(&b_y, m4);
    setupsdru(sdruroot(&m_emlrtMCI), b_y, &n_emlrtMCI);
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
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  addr_c = (char *)(addr_null);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 15; i++) {
    req_null[i] = requester[i];
  }

  req_null[15] = 0;
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  req_c = (char *)(req_null);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  openDataConnection_c(addr_c, boardId, req_c, 5120U, DPortDTypeCInt16,
                       BuffModeContinuous, 0U, &driverApiH, deviceStatus,
                       &errMsg_data[0]);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  (void)(addr_null);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  (void)(req_null);
  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errMsg_data[0]);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m4);
    b_error(c_y, &l_emlrtMCI);
    emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &b_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = 1 + i;
  }

  for (i = 0; i < loop_ub; i++) {
    i8 = 0;
    while (i8 <= 0) {
      b_errMsg_data[i] = errMsg_data[tmp_data[i] - 1];
      i8 = 1;
    }
  }

  errMsg_size[0] = 1;
  errMsg_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errMsg_data[i] = b_errMsg_data[i];
  }

  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pDriverHandle = driverApiH;
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
}

void SDRuReceiver_stepImpl(receiveOFDM80211a_sdruStackData *SD, const
  comm_SDRuReceiver *obj, creal_T b_y[5120])
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T decim;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T overrun;
  uint32_T dataLen;
  int32_T i;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  decim = obj->DecimationFactor;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  receiveData(obj->pDriverHandle, fc, loOffset, gain, decim, SD->u1.f1.yTemp,
              &dataLen, &overrun, &errStatus, errMsg_data, errMsg_size);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  if (errStatus != UsrpDriverSuccess) {
    emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
    error(errMsg_data, errMsg_size);
    emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  }

  for (i = 0; i < 5120; i++) {
    b_y[i].re = SD->u1.f1.yTemp[i].re;
    b_y[i].im = SD->u1.f1.yTemp[i].im;
    fc = b_y[i].im;
    b_y[i].re *= 3.0518509475997192E-5;
    b_y[i].im = 3.0518509475997192E-5 * fc;
  }
}

/* End of code generation (SDRuReceiver.c) */
