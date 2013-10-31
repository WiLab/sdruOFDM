/*
 * sendComplexDoubleData.c
 *
 * Code generation for function 'sendComplexDoubleData'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "sendComplexDoubleData.h"
#include "sdruOFDMTransmitterRun_mexutil.h"
#include "sdruOFDMTransmitterRun_data.h"

/* Variable Definitions */
static emlrtRSInfo yb_emlrtRSI = { 231, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ec_emlrtRSI = { 9, "sendComplexDoubleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

/* Function Definitions */
void sendComplexDoubleData(sdruOFDMTransmitterRunStackData *SD, int32_T
  driverApiH, const creal_T data[25600], real_T freq, real_T loOffset, real_T
  gain, real_T interp, uint32_T *underflow, UsrpErrorCapiEnumT *errStat, char_T
  errStr_data[1024], int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv30[2] = { 1, 6 };

  const mxArray *m5;
  char_T cv36[6];
  int32_T i;
  static const char_T cv37[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errStr_data[1024];
  int32_T i9;

  /*  bug: must pass as top-level arg */
  /*  dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeCDouble; */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m5 = mxCreateCharArray(2, iv30);
    for (i = 0; i < 6; i++) {
      cv36[i] = cv37[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m5, cv36);
    emlrtAssign(&y, m5);
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
    errStr_data[i] = '\x00';
  }

  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&SD->f0.data[0], &data[0], 25600U * sizeof(creal_T));
  sendData_c(driverApiH, SD->f0.data, freq, loOffset, gain, interp, underflow,
             errStat, &errStr_data[0]);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errStr_data[0]);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m5 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
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
    i9 = 0;
    while (i9 <= 0) {
      b_errStr_data[i] = errStr_data[tmp_data[i] - 1];
      i9 = 1;
    }
  }

  errStr_size[0] = 1;
  errStr_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errStr_data[i] = b_errStr_data[i];
  }

  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (sendComplexDoubleData.c) */
