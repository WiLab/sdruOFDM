/*
 * closeDataConnection.c
 *
 * Code generation for function 'closeDataConnection'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
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
static emlrtRSInfo uf_emlrtRSI = { 6, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

static emlrtRSInfo vf_emlrtRSI = { 155, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
void closeDataConnection(int32_T driverApiH, UsrpErrorCapiEnumT *errStat, char_T
  errStr_data[1024], int32_T errStr_size[2])
{
  const mxArray *b_y;
  static const int32_T iv54[2] = { 1, 6 };

  const mxArray *m12;
  char_T cv64[6];
  int32_T i;
  static const char_T cv65[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *c_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errStr_data[1024];
  int32_T i20;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&uf_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    b_y = NULL;
    m12 = mxCreateCharArray(2, iv54);
    for (i = 0; i < 6; i++) {
      cv64[i] = cv65[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m12, cv64);
    emlrtAssign(&b_y, m12);
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
    errStr_data[i] = '\x00';
  }

  emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
  closeDataConnection_c(driverApiH, errStat, &errStr_data[0]);
  emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errStr_data[0]);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m12 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m12);
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
    i20 = 0;
    while (i20 <= 0) {
      b_errStr_data[i] = errStr_data[tmp_data[i] - 1];
      i20 = 1;
    }
  }

  errStr_size[0] = 1;
  errStr_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errStr_data[i] = b_errStr_data[i];
  }

  emlrtPopRtStackR2012b(&uf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (closeDataConnection.c) */
