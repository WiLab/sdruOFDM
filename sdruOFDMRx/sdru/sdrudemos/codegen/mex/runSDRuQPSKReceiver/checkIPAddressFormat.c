/*
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "checkIPAddressFormat.h"
#include "SystemCore.h"
#include "runSDRuQPSKReceiver_mexutil.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 34, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo v_emlrtRSI = { 43, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo w_emlrtRSI = { 44, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo x_emlrtRSI = { 45, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo y_emlrtRSI = { 46, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo bb_emlrtRSI = { 53, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo cb_emlrtRSI = { 52, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo db_emlrtRSI = { 12, "any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/any.m" };

static emlrtRSInfo gb_emlrtRSI = { 109, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtECInfo emlrtECI = { 2, 53, 23, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

static emlrtBCInfo b_emlrtBCI = { 1, 12, 41, 8, "aAddrs", "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 41, 15, "dotIndices",
  "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo d_emlrtBCI = { 1, 12, 40, 8, "aAddrs", "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 40, 31, "dotIndices",
  "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 40, 15, "dotIndices",
  "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo g_emlrtBCI = { 1, 12, 39, 8, "aAddrs", "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 39, 31, "dotIndices",
  "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 39, 15, "dotIndices",
  "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo j_emlrtBCI = { 1, 12, 38, 8, "aAddrs", "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 38, 17, "dotIndices",
  "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m", 0 };

/* Function Definitions */
void checkIPAddressFormat(void)
{
  int32_T idx;
  int8_T ii_data[12];
  int32_T ii;
  boolean_T exitg5;
  boolean_T guard1 = FALSE;
  static const boolean_T bv0[12] = { FALSE, FALSE, FALSE, TRUE, FALSE, FALSE,
    FALSE, TRUE, FALSE, FALSE, TRUE, FALSE };

  int32_T loop_ub;
  int32_T tmp_data[12];
  int32_T i1;
  int8_T b_ii_data[12];
  int32_T i2;
  int8_T dotIndices_data[12];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 42 };

  const mxArray *m1;
  char_T cv1[42];
  static const char_T cv2[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 9 };

  char_T cv3[9];
  static const char_T cv4[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T b_tmp_data[11];
  static const char_T cv5[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  int8_T x_data[12];
  boolean_T guard4 = FALSE;
  int32_T x_size[2];
  boolean_T b_x_data[12];
  int32_T tmp_size[2];
  int32_T x[2];
  int32_T iv2[2];
  boolean_T cond;
  boolean_T exitg4;
  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 42 };

  const mxArray *d_y;
  static const int32_T iv4[2] = { 1, 9 };

  boolean_T guard3 = FALSE;
  boolean_T exitg3;
  const mxArray *e_y;
  static const int32_T iv5[2] = { 1, 42 };

  const mxArray *f_y;
  static const int32_T iv6[2] = { 1, 9 };

  boolean_T guard2 = FALSE;
  boolean_T exitg2;
  const mxArray *g_y;
  static const int32_T iv7[2] = { 1, 42 };

  const mxArray *h_y;
  static const int32_T iv8[2] = { 1, 9 };

  boolean_T b_guard1 = FALSE;
  boolean_T exitg1;
  const mxArray *i_y;
  static const int32_T iv9[2] = { 1, 42 };

  const mxArray *j_y;
  static const int32_T iv10[2] = { 1, 9 };

  /* checkIPAddressFormat IP address format checker */
  /*  */
  /*    Warning: This function is an internal MathWorks function and may be removed */
  /*    in a future release. */
  /*  */
  /*    checkIPAddressFormat(ADDRS, NAME) returns true if the ADDRS is a valid */
  /*    dotted quad IP address. Otherwise, it errors out and prompts that variable */
  /*    NAME is not a valid IP address. */
  /*  */
  /*    % Example: */
  /*    %   Check if the string '192.168.10.a' is a valid IP address for variable */
  /*    %   IPAddress */
  /*    checkIPAddressFormat('192.168.10.a', 'IPAddress') */
  /*    Copyright 2012 The MathWorks, Inc. */
  /*  Look for three dots */
  idx = 0;
  ii = 1;
  exitg5 = FALSE;
  while ((exitg5 == FALSE) && (ii < 13)) {
    guard1 = FALSE;
    if (bv0[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)ii;
      if (idx >= 12) {
        exitg5 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      ii++;
    }
  }

  if (1 > idx) {
    loop_ub = 0;
  } else {
    loop_ub = idx;
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    tmp_data[i1] = 1 + i1;
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    i2 = 0;
    while (i2 <= 0) {
      b_ii_data[i1] = ii_data[tmp_data[i1] - 1];
      i2 = 1;
    }
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    ii_data[i1] = b_ii_data[i1];
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    dotIndices_data[i1] = ii_data[i1];
  }

  /*  Used instead of findstr since */
  /*  findstr does not generate code */
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  if (!(loop_ub != 3)) {
  } else {
    emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m1 = mxCreateCharArray(2, iv0);
    for (idx = 0; idx < 42; idx++) {
      cv1[idx] = cv2[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m1, cv1);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv1);
    for (idx = 0; idx < 9; idx++) {
      cv3[idx] = cv4[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m1, cv3);
    emlrtAssign(&b_y, m1);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);

  /*  Check if all the elements other than the dots are numbers */
  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &k_emlrtBCI,
    emlrtRootTLSGlobal);
  if (1 > dotIndices_data[0] - 1) {
    ii = 0;
  } else {
    i1 = dotIndices_data[0] - 1;
    ii = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 12, &j_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &i_emlrtBCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &h_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[0] + 1 > dotIndices_data[1] - 1) {
    i1 = 1;
    i2 = 0;
  } else {
    i1 = dotIndices_data[0] + 1;
    i1 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 12, &g_emlrtBCI,
      emlrtRootTLSGlobal);
    i2 = dotIndices_data[1] - 1;
    i2 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, 12, &g_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &f_emlrtBCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &e_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[1] + 1 > dotIndices_data[2] - 1) {
    i3 = 1;
    i4 = 0;
  } else {
    i3 = dotIndices_data[1] + 1;
    i3 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, 12, &d_emlrtBCI,
      emlrtRootTLSGlobal);
    i4 = dotIndices_data[2] - 1;
    i4 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, 12, &d_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &c_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[2] + 1 > 12) {
    i5 = 1;
    i6 = 1;
  } else {
    i5 = dotIndices_data[2] + 1;
    i5 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, 12, &b_emlrtBCI,
      emlrtRootTLSGlobal);
    i6 = 13;
  }

  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  for (idx = 0; idx < ii; idx++) {
    b_tmp_data[idx] = 1 + idx;
  }

  for (idx = 0; idx < ii; idx++) {
    x_data[idx] = cv5[b_tmp_data[idx] - 1];
  }

  guard4 = FALSE;
  if (ii == 0) {
    guard4 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (idx = 0; idx < ii; idx++) {
      b_x_data[idx] = (x_data[idx] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (idx = 0; idx < 2; idx++) {
      x[idx] = x_size[idx];
      iv2[idx] = tmp_size[idx];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv2, &emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    for (idx = 0; idx < ii; idx++) {
      b_x_data[idx] = !b_x_data[idx];
    }

    emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg4 = FALSE;
    while ((exitg4 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg4 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard4 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard4 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m1 = mxCreateCharArray(2, iv3);
    for (idx = 0; idx < 42; idx++) {
      cv1[idx] = cv2[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m1, cv1);
    emlrtAssign(&c_y, m1);
    d_y = NULL;
    m1 = mxCreateCharArray(2, iv4);
    for (idx = 0; idx < 9; idx++) {
      cv3[idx] = cv4[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m1, cv3);
    emlrtAssign(&d_y, m1);
    b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  ii = (i2 - i1) + 1;
  loop_ub = i2 - i1;
  for (i2 = 0; i2 <= loop_ub; i2++) {
    b_tmp_data[i2] = i1 + i2;
  }

  for (i1 = 0; i1 < ii; i1++) {
    x_data[i1] = cv5[b_tmp_data[i1] - 1];
  }

  guard3 = FALSE;
  if (ii == 0) {
    guard3 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i1 = 0; i1 < ii; i1++) {
      b_x_data[i1] = (x_data[i1] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i1 = 0; i1 < 2; i1++) {
      x[i1] = x_size[i1];
      iv2[i1] = tmp_size[i1];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv2, &emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    for (i1 = 0; i1 < ii; i1++) {
      b_x_data[i1] = !b_x_data[i1];
    }

    emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg3 = FALSE;
    while ((exitg3 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg3 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard3 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard3 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m1 = mxCreateCharArray(2, iv5);
    for (idx = 0; idx < 42; idx++) {
      cv1[idx] = cv2[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m1, cv1);
    emlrtAssign(&e_y, m1);
    f_y = NULL;
    m1 = mxCreateCharArray(2, iv6);
    for (idx = 0; idx < 9; idx++) {
      cv3[idx] = cv4[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m1, cv3);
    emlrtAssign(&f_y, m1);
    b_error(message(e_y, f_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  ii = (i4 - i3) + 1;
  loop_ub = i4 - i3;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    b_tmp_data[i1] = i3 + i1;
  }

  for (i1 = 0; i1 < ii; i1++) {
    x_data[i1] = cv5[b_tmp_data[i1] - 1];
  }

  guard2 = FALSE;
  if (ii == 0) {
    guard2 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i1 = 0; i1 < ii; i1++) {
      b_x_data[i1] = (x_data[i1] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i1 = 0; i1 < 2; i1++) {
      x[i1] = x_size[i1];
      iv2[i1] = tmp_size[i1];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv2, &emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    for (i1 = 0; i1 < ii; i1++) {
      b_x_data[i1] = !b_x_data[i1];
    }

    emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg2 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard2 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard2 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m1 = mxCreateCharArray(2, iv7);
    for (idx = 0; idx < 42; idx++) {
      cv1[idx] = cv2[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m1, cv1);
    emlrtAssign(&g_y, m1);
    h_y = NULL;
    m1 = mxCreateCharArray(2, iv8);
    for (idx = 0; idx < 9; idx++) {
      cv3[idx] = cv4[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m1, cv3);
    emlrtAssign(&h_y, m1);
    b_error(message(g_y, h_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  ii = i6 - i5;
  loop_ub = i6 - i5;
  for (i1 = 0; i1 < loop_ub; i1++) {
    tmp_data[i1] = i5 + i1;
  }

  for (i1 = 0; i1 < ii; i1++) {
    x_data[i1] = cv5[tmp_data[i1] - 1];
  }

  b_guard1 = FALSE;
  if (ii == 0) {
    b_guard1 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i1 = 0; i1 < ii; i1++) {
      b_x_data[i1] = (x_data[i1] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i1 = 0; i1 < 2; i1++) {
      x[i1] = x_size[i1];
      iv2[i1] = tmp_size[i1];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv2, &emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    for (i1 = 0; i1 < ii; i1++) {
      b_x_data[i1] = !b_x_data[i1];
    }

    emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg1 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      b_guard1 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (b_guard1 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m1 = mxCreateCharArray(2, iv9);
    for (idx = 0; idx < 42; idx++) {
      cv1[idx] = cv2[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m1, cv1);
    emlrtAssign(&i_y, m1);
    j_y = NULL;
    m1 = mxCreateCharArray(2, iv10);
    for (idx = 0; idx < 9; idx++) {
      cv3[idx] = cv4[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m1, cv3);
    emlrtAssign(&j_y, m1);
    b_error(message(i_y, j_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (checkIPAddressFormat.c) */
