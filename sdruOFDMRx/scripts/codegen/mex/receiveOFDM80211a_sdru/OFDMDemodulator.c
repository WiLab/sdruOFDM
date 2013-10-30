/*
 * OFDMDemodulator.c
 *
 * Code generation for function 'OFDMDemodulator'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "OFDMDemodulator.h"
#include "SystemProp.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo jf_emlrtRSI = { 136, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m" };

/* Function Definitions */
void OFDMDemodulator_setupImpl(OFDMDemodulator *obj)
{
  int8_T fullGrid[768];
  int32_T ii;
  int32_T idx;
  static const int8_T iv45[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv46[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  int16_T ii_data[768];
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int16_T b_ii_data[768];
  real_T c_ii_data[768];
  int32_T ii_size[1];
  memset(&fullGrid[0], 1, 768U * sizeof(int8_T));
  for (ii = 0; ii < 12; ii++) {
    for (idx = 0; idx < 11; idx++) {
      fullGrid[iv45[idx] + (ii << 6)] = 0;
    }

    fullGrid[32 + (ii << 6)] = 0;
  }

  emlrtPushRtStackR2012b(&jf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jf_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 48; ii++) {
    fullGrid[iv46[ii]] = 2;
  }

  emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
  idx = 0;
  ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii < 769)) {
    guard1 = FALSE;
    if (fullGrid[ii - 1] == 1) {
      idx++;
      ii_data[idx - 1] = (int16_T)ii;
      if (idx >= 768) {
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
    idx = 0;
  }

  for (ii = 0; ii < idx; ii++) {
    b_ii_data[ii] = ii_data[ii];
  }

  for (ii = 0; ii < idx; ii++) {
    ii_data[ii] = b_ii_data[ii];
  }

  ii_size[0] = idx;
  for (ii = 0; ii < idx; ii++) {
    c_ii_data[ii] = ii_data[ii];
  }

  d_SystemProp_matlabCodegenSetAn(obj, c_ii_data, ii_size);
  emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (OFDMDemodulator.c) */
