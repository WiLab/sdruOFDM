/*
 * receiveData.c
 *
 * Code generation for function 'receiveData'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "runSDRuQPSKReceiver_mexutil.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 7, "receiveData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m" };

static emlrtRSInfo hc_emlrtRSI = { 216, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
void receiveData(int32_T driverApiH, real_T freq, real_T loOffset, real_T gain,
                 real_T decim, cint16_T data[46336], uint32_T *dataLength,
                 uint32_T *overflow, UsrpErrorCapiEnumT *errStat, char_T
                 errStr_data[1024], int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 6 };

  const mxArray *m5;
  char_T cv26[6];
  int32_T i;
  static const char_T cv27[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errStr_data[1024];
  int32_T i9;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m5 = mxCreateCharArray(2, iv24);
    for (i = 0; i < 6; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m5, cv26);
    emlrtAssign(&y, m5);
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

  /*  46336 represents 0.00185344 seconds at 25Msps.  1 ms seems to be a decent */
  /*  time interval to interact with the IP stack on a default glnxa64 machine. */
  /*  32768 seems to be the max for UHD(TM) so we may want to change to that. */
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  receiveData_c(driverApiH, freq, loOffset, gain, decim, data, dataLength,
                overflow, errStat, &errStr_data[0]);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errStr_data[0]);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m5 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
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

  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (receiveData.c) */
