/*
 * closeDataConnection.c
 *
 * Code generation for function 'closeDataConnection'
 *
 * C source code generated on: Tue Oct  8 14:08:19 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "closeDataConnection.h"
#include "receiveData.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo yf_emlrtRSI = { 6, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

static emlrtRSInfo ag_emlrtRSI = { 155, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
void closeDataConnection(int32_T driverApiH, UsrpErrorCapiEnumT *errStat, char_T
  errStr_data[1024], int32_T errStr_size[2])
{
  const mxArray *b_y;
  static const int32_T iv56[2] = { 1, 6 };

  const mxArray *m20;
  char_T cv92[6];
  int32_T i;
  static const char_T cv93[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *c_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errStr_data[1024];
  int32_T i22;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    b_y = NULL;
    m20 = mxCreateCharArray(2, iv56);
    for (i = 0; i < 6; i++) {
      cv92[i] = cv93[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m20, cv92);
    emlrtAssign(&b_y, m20);
    setupsdru(sdruroot(&n_emlrtMCI), b_y, &o_emlrtMCI);
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

  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  closeDataConnection_c(driverApiH, errStat, &errStr_data[0]);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errStr_data[0]);
  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m20 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m20);
    b_error(c_y, &m_emlrtMCI);
    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &n_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = 1 + i;
  }

  for (i = 0; i < loop_ub; i++) {
    i22 = 0;
    while (i22 <= 0) {
      b_errStr_data[i] = errStr_data[tmp_data[i] - 1];
      i22 = 1;
    }
  }

  errStr_size[0] = 1;
  errStr_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errStr_data[i] = b_errStr_data[i];
  }

  emlrtPopRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (closeDataConnection.c) */
