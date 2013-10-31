/*
 * closeDataConnection.c
 *
 * Code generation for function 'closeDataConnection'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "closeDataConnection.h"
#include "SystemCore.h"
#include "receiveData.h"
#include "runSDRuQPSKReceiver_mexutil.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo dh_emlrtRSI = { 6, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

static emlrtRSInfo eh_emlrtRSI = { 155, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
void closeDataConnection(int32_T driverApiH, UsrpErrorCapiEnumT *errStat, char_T
  errStr_data[1024], int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv104[2] = { 1, 6 };

  const mxArray *m24;
  char_T cv151[6];
  int32_T i;
  static const char_T cv152[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errStr_data[1024];
  int32_T i11;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&dh_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m24 = mxCreateCharArray(2, iv104);
    for (i = 0; i < 6; i++) {
      cv151[i] = cv152[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m24, cv151);
    emlrtAssign(&y, m24);
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
    errStr_data[i] = '\x00';
  }

  emlrtPushRtStackR2012b(&eh_emlrtRSI, emlrtRootTLSGlobal);
  closeDataConnection_c(driverApiH, errStat, &errStr_data[0]);
  emlrtPopRtStackR2012b(&eh_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errStr_data[0]);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m24 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m24);
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

  emlrtPopRtStackR2012b(&dh_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (closeDataConnection.c) */
