/*
 * closeDataConnection.c
 *
 * Code generation for function 'closeDataConnection'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "closeDataConnection.h"
#include "sendComplexDoubleData.h"
#include "sdruOFDMTransmitterRun_mexutil.h"
#include "sdruOFDMTransmitterRun_data.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 6, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

static emlrtRSInfo hc_emlrtRSI = { 155, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
void closeDataConnection(int32_T driverApiH, UsrpErrorCapiEnumT *errStat, char_T
  errStr_data[1024], int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv32[2] = { 1, 6 };

  const mxArray *m7;
  char_T cv40[6];
  int32_T i;
  static const char_T cv41[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errStr_data[1024];
  int32_T i11;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m7 = mxCreateCharArray(2, iv32);
    for (i = 0; i < 6; i++) {
      cv40[i] = cv41[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m7, cv40);
    emlrtAssign(&y, m7);
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

  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  closeDataConnection_c(driverApiH, errStat, &errStr_data[0]);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errStr_data[0]);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m7 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m7);
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
    i11 = 0;
    while (i11 <= 0) {
      b_errStr_data[i] = errStr_data[tmp_data[i] - 1];
      i11 = 1;
    }
  }

  errStr_size[0] = 1;
  errStr_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errStr_data[i] = b_errStr_data[i];
  }

  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (closeDataConnection.c) */
