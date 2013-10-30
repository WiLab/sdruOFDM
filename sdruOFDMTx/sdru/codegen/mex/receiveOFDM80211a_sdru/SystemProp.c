/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "SystemProp.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "checkIPAddressFormat.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo v_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

static emlrtRSInfo w_emlrtRSI = { 34, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo x_emlrtRSI = { 43, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo y_emlrtRSI = { 44, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo ab_emlrtRSI = { 45, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo bb_emlrtRSI = { 46, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

static emlrtRTEInfo e_emlrtRTEI = { 1, 13, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

static emlrtBCInfo d_emlrtBCI = { -1, -1, 38, 17, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo e_emlrtBCI = { 1, 12, 38, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 39, 15, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 39, 31, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo h_emlrtBCI = { 1, 12, 39, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo i_emlrtBCI = { -1, -1, 40, 15, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo j_emlrtBCI = { -1, -1, 40, 31, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo k_emlrtBCI = { 1, 12, 40, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo l_emlrtBCI = { -1, -1, 41, 15, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

static emlrtBCInfo m_emlrtBCI = { 1, 12, 41, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m", 0
};

/* Function Definitions */
void SystemProp_setProperties(comm_SDRuReceiver *obj, real_T varargin_3)
{
  comm_SDRuReceiver *b_obj;
  int32_T idx;
  int8_T ii_data[12];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  static const boolean_T bv0[12] = { FALSE, FALSE, FALSE, TRUE, FALSE, FALSE,
    FALSE, TRUE, FALSE, FALSE, TRUE, FALSE };

  int32_T loop_ub;
  int32_T tmp_data[12];
  int32_T i1;
  int8_T b_ii_data[12];
  int32_T i2;
  int8_T dotIndices_data[12];
  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 42 };

  const mxArray *m1;
  char_T cv21[42];
  static const char_T cv22[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 9 };

  char_T cv23[9];
  static const char_T cv24[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int16_T b_tmp_data[11];
  int32_T c_tmp_data[11];
  int32_T tmp_size[2];
  static const char_T cv25[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int16_T d_tmp_data[12];
  int32_T d_tmp_size[2];
  boolean_T flag;
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);

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
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii < 13)) {
    guard1 = FALSE;
    if (bv0[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)ii;
      if (idx >= 12) {
        exitg1 = TRUE;
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
  emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  if (!(loop_ub != 3)) {
  } else {
    emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv14);
    for (idx = 0; idx < 42; idx++) {
      cv21[idx] = cv22[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m1, cv21);
    emlrtAssign(&b_y, m1);
    c_y = NULL;
    m1 = mxCreateCharArray(2, iv15);
    for (idx = 0; idx < 9; idx++) {
      cv23[idx] = cv24[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m1, cv23);
    emlrtAssign(&c_y, m1);
    b_error(message(b_y, c_y, &c_emlrtMCI), &c_emlrtMCI);
    emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);

  /*  Check if all the elements other than the dots are numbers */
  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &d_emlrtBCI,
    emlrtRootTLSGlobal);
  if (1 > dotIndices_data[0] - 1) {
    ii = 0;
  } else {
    i1 = dotIndices_data[0] - 1;
    ii = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 12, &e_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &f_emlrtBCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &g_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[0] + 1 > dotIndices_data[1] - 1) {
    i1 = 1;
    i2 = 0;
  } else {
    i1 = dotIndices_data[0] + 1;
    i1 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 12, &h_emlrtBCI,
      emlrtRootTLSGlobal);
    i2 = dotIndices_data[1] - 1;
    i2 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, 12, &h_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &i_emlrtBCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &j_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[1] + 1 > dotIndices_data[2] - 1) {
    i3 = 1;
    i4 = 0;
  } else {
    i3 = dotIndices_data[1] + 1;
    i3 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, 12, &k_emlrtBCI,
      emlrtRootTLSGlobal);
    i4 = dotIndices_data[2] - 1;
    i4 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, 12, &k_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &l_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[2] + 1 > 12) {
    i5 = 1;
    i6 = 1;
  } else {
    i5 = dotIndices_data[2] + 1;
    i5 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, 12, &m_emlrtBCI,
      emlrtRootTLSGlobal);
    i6 = 13;
  }

  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  for (idx = 0; idx < ii; idx++) {
    c_tmp_data[idx] = 1 + idx;
  }

  tmp_size[0] = 1;
  tmp_size[1] = ii;
  for (idx = 0; idx < ii; idx++) {
    b_tmp_data[idx] = cv25[c_tmp_data[idx] - 1];
  }

  checkNumeric(b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  idx = (i2 - i1) + 1;
  loop_ub = i2 - i1;
  for (i2 = 0; i2 <= loop_ub; i2++) {
    c_tmp_data[i2] = i1 + i2;
  }

  b_tmp_size[0] = 1;
  b_tmp_size[1] = idx;
  for (i1 = 0; i1 < idx; i1++) {
    b_tmp_data[i1] = cv25[c_tmp_data[i1] - 1];
  }

  checkNumeric(b_tmp_data, b_tmp_size);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  idx = (i4 - i3) + 1;
  loop_ub = i4 - i3;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    c_tmp_data[i1] = i3 + i1;
  }

  c_tmp_size[0] = 1;
  c_tmp_size[1] = idx;
  for (i1 = 0; i1 < idx; i1++) {
    b_tmp_data[i1] = cv25[c_tmp_data[i1] - 1];
  }

  checkNumeric(b_tmp_data, c_tmp_size);
  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  idx = i6 - i5;
  loop_ub = i6 - i5;
  for (i1 = 0; i1 < loop_ub; i1++) {
    tmp_data[i1] = i5 + i1;
  }

  d_tmp_size[0] = 1;
  d_tmp_size[1] = idx;
  for (i1 = 0; i1 < idx; i1++) {
    d_tmp_data[i1] = cv25[tmp_data[i1] - 1];
  }

  checkNumeric(d_tmp_data, d_tmp_size);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->CenterFrequency = varargin_3;
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (b_obj->isInitialized && (!b_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    b_obj->TunablePropsChanged = TRUE;
    b_obj->tunablePropertyChanged[1] = TRUE;
  }

  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->DecimationFactor = 100.0;
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (b_obj->isInitialized && (!b_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    b_obj->TunablePropsChanged = TRUE;
    b_obj->tunablePropertyChanged[0] = TRUE;
  }

  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->Gain = 18.0;
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (b_obj->isInitialized && (!b_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    b_obj->TunablePropsChanged = TRUE;
    b_obj->tunablePropertyChanged[3] = TRUE;
  }

  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemProp_matlabCodegenSetAn(comm_AGC *obj, real_T value)
{
  obj->Gain = value;
}

void d_SystemProp_matlabCodegenSetAn(OFDMDemodulator *obj, const real_T
  value_data[768], const int32_T value_size[1])
{
  int32_T i18;
  int32_T loop_ub;
  i18 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity((emxArray__common *)obj->pDataLinearIndices, i18, (int32_T)
                    sizeof(real_T), &e_emlrtRTEI);
  loop_ub = value_size[0];
  for (i18 = 0; i18 < loop_ub; i18++) {
    obj->pDataLinearIndices->data[i18] = value_data[i18];
  }
}

/* End of code generation (SystemProp.c) */
