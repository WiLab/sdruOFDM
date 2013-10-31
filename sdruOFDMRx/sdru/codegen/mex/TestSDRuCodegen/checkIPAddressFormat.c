/*
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 * C source code generated on: Tue Oct  8 16:14:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TestSDRuCodegen.h"
#include "checkIPAddressFormat.h"
#include "TestSDRuCodegen_mexutil.h"
#include "TestSDRuCodegen_data.h"

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = { 53, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo s_emlrtRSI = { 52, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo t_emlrtRSI = { 12, "any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/any.m" };

static emlrtECInfo emlrtECI = { 2, 53, 23, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

/* Function Definitions */
void checkNumeric(const int16_T x_data[12], const int32_T x_size[2])
{
  boolean_T guard1 = FALSE;
  int32_T b_x_size[2];
  int32_T i;
  int32_T i7;
  boolean_T b_x_data[12];
  int32_T tmp_size[2];
  boolean_T tmp_data[12];
  int32_T x[2];
  int32_T iv5[2];
  boolean_T cond;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 42 };

  const mxArray *m2;
  char_T cv11[42];
  static const char_T cv12[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 9 };

  char_T cv13[9];
  static const char_T cv14[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  guard1 = FALSE;
  if (x_size[1] == 0) {
    guard1 = TRUE;
  } else {
    b_x_size[0] = 1;
    b_x_size[1] = x_size[1];
    i = x_size[0] * x_size[1];
    for (i7 = 0; i7 < i; i7++) {
      b_x_data[i7] = (x_data[i7] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = x_size[1];
    i = x_size[0] * x_size[1];
    for (i7 = 0; i7 < i; i7++) {
      tmp_data[i7] = (x_data[i7] <= 57);
    }

    for (i7 = 0; i7 < 2; i7++) {
      x[i7] = b_x_size[i7];
      iv5[i7] = tmp_size[i7];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv5, &emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    i = x_size[1];
    for (i7 = 0; i7 < i; i7++) {
      b_x_data[i7] = !(b_x_data[i7] && tmp_data[i7]);
    }

    emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    i = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (i <= x_size[1])) {
      if (!(b_x_data[i - 1] == 0)) {
        cond = TRUE;
        exitg1 = TRUE;
      } else {
        i++;
      }
    }

    emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard1 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard1 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m2 = mxCreateCharArray(2, iv6);
    for (i = 0; i < 42; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m2, cv11);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv7);
    for (i = 0; i < 9; i++) {
      cv13[i] = cv14[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m2, cv13);
    emlrtAssign(&b_y, m2);
    error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (checkIPAddressFormat.c) */
