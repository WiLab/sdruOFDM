/*
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "checkIPAddressFormat.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 53, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo eb_emlrtRSI = { 52, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo fb_emlrtRSI = { 12, "any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/any.m" };

static emlrtRSInfo ib_emlrtRSI = { 109, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

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
  int32_T iv16[2];
  boolean_T cond;
  boolean_T exitg1;
  const mxArray *b_y;
  static const int32_T iv17[2] = { 1, 42 };

  const mxArray *m2;
  char_T cv26[42];
  static const char_T cv27[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *c_y;
  static const int32_T iv18[2] = { 1, 9 };

  char_T cv28[9];
  static const char_T cv29[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

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
      iv16[i7] = tmp_size[i7];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv16, &emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    i = x_size[1];
    for (i7 = 0; i7 < i; i7++) {
      b_x_data[i7] = !(b_x_data[i7] && tmp_data[i7]);
    }

    emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
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

    emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard1 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard1 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv17);
    for (i = 0; i < 42; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m2, cv26);
    emlrtAssign(&b_y, m2);
    c_y = NULL;
    m2 = mxCreateCharArray(2, iv18);
    for (i = 0; i < 9; i++) {
      cv28[i] = cv29[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m2, cv28);
    emlrtAssign(&c_y, m2);
    b_error(message(b_y, c_y, &c_emlrtMCI), &c_emlrtMCI);
    emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (checkIPAddressFormat.c) */
