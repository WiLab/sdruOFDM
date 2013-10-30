/*
 * SDRuTransmitter.c
 *
 * Code generation for function 'SDRuTransmitter'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "SDRuTransmitter.h"
#include "sendComplexDoubleData.h"
#include "error.h"
#include "sdruOFDMTransmitterRun_mexutil.h"
#include "sdruOFDMTransmitterRun_data.h"

/* Type Definitions */
#include "usrp_uhd_capi.hpp"

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 6, "openDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m" };

static emlrtRSInfo eb_emlrtRSI = { 138, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo fb_emlrtRSI = { 141, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo gb_emlrtRSI = { 146, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo hb_emlrtRSI = { 151, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ib_emlrtRSI = { 152, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
void SDRuTransmitter_setupImplLocal(comm_SDRuTransmitter *obj,
  UsrpErrorCapiEnumT *errStatus, char_T errMsg_data[1024], int32_T errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i;
  const mxArray *y;
  static const int32_T iv29[2] = { 1, 6 };

  const mxArray *m4;
  char_T cv34[6];
  static const char_T cv35[6] = { 's', 'i', 'l', 'e', 'n', 't' };

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
  int32_T i8;
  comm_SDRuTransmitter *b_obj;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  boardId = obj->pSubDevice;
  for (i = 0; i < 15; i++) {
    requester[i] = (uint8_T)obj->ObjectID[i];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m4 = mxCreateCharArray(2, iv29);
    for (i = 0; i < 6; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m4, cv34);
    emlrtAssign(&y, m4);
    setupsdru(sdruroot(&n_emlrtMCI), y, &o_emlrtMCI);
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
  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  addr_c = (char *)(addr_null);
  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 15; i++) {
    req_null[i] = requester[i];
  }

  req_null[15] = 0;
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  req_c = (char *)(req_null);
  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
  openDataConnection_c(addr_c, boardId, req_c, 25600U, DPortDTypeCDouble,
                       BuffModeContinuous, 0U, &driverApiH, errStatus,
                       &errMsg_data[0]);
  emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  (void)(addr_null);
  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  (void)(req_null);
  emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errMsg_data[0]);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    b_error(b_y, &m_emlrtMCI);
    emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
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

  emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pDriverHandle = driverApiH;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void SDRuTransmitter_stepImpl(sdruOFDMTransmitterRunStackData *SD, const
  comm_SDRuTransmitter *obj, const creal_T x[25600])
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T interp;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T underrun;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  interp = obj->InterpolationFactor;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  sendComplexDoubleData(SD, obj->pDriverHandle, x, fc, loOffset, gain, interp,
                        &underrun, &errStatus, errMsg_data, errMsg_size);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  if (errStatus != UsrpDriverSuccess) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    error(errMsg_data, errMsg_size);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }
}

/* End of code generation (SDRuTransmitter.c) */
