/*
 * OFDMDemodulator.c
 *
 * Code generation for function 'OFDMDemodulator'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "OFDMDemodulator.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "SystemProp.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo kb_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo yb_emlrtRSI = { 102, "OFDMBase",
  "/home/sdruser/git/OFDMSync/OFDMBase.m" };

static emlrtRSInfo ac_emlrtRSI = { 42, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo bc_emlrtRSI = { 228, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo cc_emlrtRSI = { 218, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo ec_emlrtRSI = { 194, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo df_emlrtRSI = { 171, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

static emlrtRSInfo ef_emlrtRSI = { 68, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ff_emlrtRSI = { 66, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo gf_emlrtRSI = { 61, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo hf_emlrtRSI = { 22, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo if_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo jf_emlrtRSI = { 52, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo kf_emlrtRSI = { 136, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

static emlrtMCInfo h_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo i_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo cb_emlrtMCI = { 67, 5, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo db_emlrtMCI = { 66, 15, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo eb_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo fb_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo gb_emlrtMCI = { 53, 5, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo hb_emlrtMCI = { 52, 15, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRTEInfo t_emlrtRTEI = { 144, 24, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

static emlrtRTEInfo u_emlrtRTEI = { 65, 1, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtBCInfo v_emlrtBCI = { 1, 64, 171, 28, "postShift", "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 171, 28, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m", 1 };

static emlrtBCInfo w_emlrtBCI = { 1, 768, 171, 28, "postShift",
  "OFDMDemodulator", "/home/sdruser/git/OFDMSync/OFDMDemodulator.m", 0 };

/* Function Declarations */
static void c_eml_error(void);
static void eml_assert_valid_size_arg(const real_T varargin_1[3]);

/* Function Definitions */
static void c_eml_error(void)
{
  emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &db_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
}

static void eml_assert_valid_size_arg(const real_T varargin_1[3])
{
  int32_T i;
  int32_T exitg1;
  boolean_T p;
  const mxArray *b_y;
  static const int32_T iv36[2] = { 1, 57 };

  const mxArray *m13;
  char_T cv60[57];
  static const char_T cv61[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  real_T n;
  const mxArray *c_y;
  static const int32_T iv37[2] = { 1, 21 };

  char_T cv62[21];
  static const char_T cv63[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  i = 0;
  do {
    exitg1 = 0;
    if (i < 3) {
      if ((varargin_1[i] != muDoubleScalarFloor(varargin_1[i])) ||
          muDoubleScalarIsInf(varargin_1[i])) {
        p = FALSE;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      p = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (p) {
  } else {
    emlrtPushRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv36);
    for (i = 0; i < 57; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 57, m13, cv60);
    emlrtAssign(&b_y, m13);
    b_error(b_message(b_y, &eb_emlrtMCI), &fb_emlrtMCI);
    emlrtPopRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
  }

  n = 1.0;
  for (i = 0; i < 3; i++) {
    if (varargin_1[i] <= 0.0) {
      n = 0.0;
    } else {
      n *= varargin_1[i];
    }
  }

  if (2.147483647E+9 >= n) {
  } else {
    emlrtPushRtStackR2012b(&jf_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m13 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 21; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m13, cv62);
    emlrtAssign(&c_y, m13);
    b_error(b_message(c_y, &gb_emlrtMCI), &hb_emlrtMCI);
    emlrtPopRtStackR2012b(&jf_emlrtRSI, emlrtRootTLSGlobal);
  }
}

OFDMDemodulator *OFDMDemodulator_OFDMDemodulator(OFDMDemodulator *object)
{
  OFDMDemodulator *b_object;
  OFDMDemodulator *obj;
  int8_T b_data[4];
  int32_T i;
  int32_T nb;
  int32_T x;
  int32_T exitg1;
  int32_T exponent;
  boolean_T b1;
  int32_T i8;
  const mxArray *b_y;
  static const int32_T iv21[2] = { 1, 13 };

  const mxArray *m4;
  char_T cv34[13];
  static const char_T cv35[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  b_object = object;
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  obj = b_object;
  emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);

  /* OFDMBase Base object for OFDMModulator and OFDMDemodulator System objects */
  /*  Copyright 2013 The MathWorks, Inc. */
  /* FFTLength FFT length */
  /*  Specify the IFFT length. This property can be set to an integer */
  /*  scalar. The value must be a power of two. The default value of */
  /*  this property is 64. */
  /* CyclicPrefixLength Cyclic prefix length */
  /*  Specify the cyclic prefix length. This property can be set to a */
  /*  non-negative interher scalar. The default value of this property is 16. */
  /* NumGuardBandCarriers Number of guard bands */
  /*  Specify the lower and upper guard bands in frequency domain.This */
  /*  property can be set to a non-nagative two-element vector.  */
  /*  The default setting of this property is [6 5]. */
  /* NumSymbols Number of OFDM symbols */
  /*  Specify the number of OFDM symbols at the output. The default value  */
  /*  of this property is 1. */
  /* PilotCarrierIndices Pilot subcarrier indices */
  /*  Specify the locations where pilots are to be inserted. You can */
  /*  set this property to a numeric scalar, column vector, matrix, or */
  /*  3-D array. The defalut value of the property is [-21; -7; 7; 21]. */
  /*  Nontunable ideally */
  /*  Constructor */
  /*      validateattributes(fftLen, {'numeric'}, ... */
  /*          {'real','scalar','integer','finite','>=',8}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(CPLen, {'numeric'}, ... */
  /*          {'real','row','integer','nonnegative','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(guardBands, {'numeric'}, ... */
  /*          {'real','integer','nonnegative','finite','size', [2, 1]}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(numSym, {'numeric'}, ... */
  /*          {'real','scalar','integer','positive','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(pilotIdx, {'numeric'}, ... */
  /*          {'real','integer','positive','finite','3d'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*  Check the 3rd dimension for numTx */
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 4; i++) {
    b_data[i] = (int8_T)(12 + 14 * i);
  }

  nb = 0;
  i = 1;
  while (i <= 4) {
    x = b_data[i - 1];
    do {
      exitg1 = 0;
      i++;
      if (i > 4) {
        exitg1 = 1;
      } else {
        frexp((real_T)x / 2.0, &exponent);
        if (!(muDoubleScalarAbs(x - b_data[i - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    nb++;
    b_data[nb - 1] = (int8_T)x;
    emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    b1 = FALSE;
  } else {
    b1 = (nb > 2147483646);
  }

  if (b1) {
    emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    i8 = 0;
  } else {
    i8 = nb;
  }

  if (!(4 != i8)) {
  } else {
    emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m4 = mxCreateCharArray(2, iv21);
    for (i = 0; i < 13; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m4, cv34);
    emlrtAssign(&b_y, m4);
    b_error(b_message(b_y, &c_emlrtMCI), &c_emlrtMCI);
    emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  return b_object;
}

void OFDMDemodulator_setupImpl(OFDMDemodulator *obj)
{
  int8_T fullGrid[768];
  int32_T ii;
  int32_T idx;
  static const int8_T iv38[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv39[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
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
      fullGrid[iv38[idx] + (ii << 6)] = 0;
    }

    fullGrid[32 + (ii << 6)] = 0;
  }

  emlrtPushRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 48; ii++) {
    fullGrid[iv39[ii]] = 2;
  }

  emlrtPushRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
}

void OFDMDemodulator_stepImpl(const OFDMDemodulator_1 *obj, const creal_T x[64],
  emxArray_creal_T *varargout_1)
{
  creal_T inputIn3D[64];
  creal_T postFFT[64];
  int32_T ix;
  int32_T ju;
  int32_T iy;
  int32_T i;
  int32_T ib;
  boolean_T overflow;
  real_T tmp_re;
  real_T tmp_im;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  static const real_T dv8[33] = { 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0, -0.99518472667219693, -0.98078528040323043,
    -0.95694033573220882, -0.92387953251128674, -0.881921264348355,
    -0.83146961230254524, -0.773010453362737, -0.70710678118654757,
    -0.63439328416364549, -0.55557023301960218, -0.47139673682599764,
    -0.38268343236508978, -0.29028467725446233, -0.19509032201612825,
    -0.0980171403295606, -0.0 };

  static const real_T dv9[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emxArray_real_T *b_x;
  emxArray_creal_T *c_x;
  real_T varargin_1[3];
  int32_T sz[3];
  emxArray_creal_T *b_y;
  const mxArray *c_y;
  static const int32_T iv35[2] = { 1, 40 };

  const mxArray *m12;
  char_T cv58[40];
  static const char_T cv59[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  memcpy(&inputIn3D[0], &x[0], sizeof(creal_T) << 6);
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 63; i++) {
    postFFT[iy] = inputIn3D[ix];
    ib = 64;
    overflow = TRUE;
    while (overflow) {
      if (ib >= 0) {
        ib = (int32_T)((uint32_T)ib >> 1);
      } else {
        ib = ~(int32_T)((uint32_T)~ib >> 1);
      }

      ju ^= ib;
      overflow = ((ju & ib) == 0);
    }

    iy = ju;
    ix++;
  }

  postFFT[iy] = inputIn3D[ix];
  for (i = 0; i < 64; i += 2) {
    tmp_re = postFFT[i + 1].re;
    tmp_im = postFFT[i + 1].im;
    postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
    postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
    postFFT[i].re += tmp_re;
    postFFT[i].im += tmp_im;
  }

  ju = 2;
  iDelta2 = 4;
  k = 16;
  iheight = 61;
  while (k > 0) {
    for (i = 0; i < iheight; i += iDelta2) {
      ib = i + ju;
      tmp_re = postFFT[ib].re;
      tmp_im = postFFT[ib].im;
      postFFT[i + ju].re = postFFT[i].re - postFFT[ib].re;
      postFFT[i + ju].im = postFFT[i].im - postFFT[ib].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 1;
    for (iy = k; iy < 32; iy += k) {
      i = ib;
      ix = ib + iheight;
      while (i < ix) {
        tmp_re = dv9[iy] * postFFT[i + ju].re - dv8[iy] * postFFT[i + ju].im;
        tmp_im = dv9[iy] * postFFT[i + ju].im + dv8[iy] * postFFT[i + ju].re;
        postFFT[i + ju].re = postFFT[i].re - tmp_re;
        postFFT[i + ju].im = postFFT[i].im - tmp_im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      ib++;
    }

    ix = k;
    k = (int32_T)((uint32_T)ix >> 1);
    ju = iDelta2;
    iDelta2 <<= 1;
    iheight -= ju;
  }

  iy = 0;
  ib = 32;
  for (k = 0; k < 32; k++) {
    tmp_re = postFFT[iy].re;
    tmp_im = postFFT[iy].im;
    postFFT[iy] = postFFT[ib];
    postFFT[ib].re = tmp_re;
    postFFT[ib].im = tmp_im;
    iy++;
    ib++;
  }

  emxInit_real_T(&b_x, 1, &t_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  ix = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ix, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  iy = obj->pDataLinearIndices->size[0];
  for (ix = 0; ix < iy; ix++) {
    b_x->data[ix] = obj->pDataLinearIndices->data[ix];
  }

  b_emxInit_creal_T(&c_x, 1, &t_emlrtRTEI, TRUE);
  ix = c_x->size[0];
  c_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)c_x, ix, (int32_T)sizeof(creal_T),
                    &t_emlrtRTEI);
  iy = obj->pDataLinearIndices->size[0];
  for (ix = 0; ix < iy; ix++) {
    tmp_re = obj->pDataLinearIndices->data[ix];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &b_emlrtDCI,
      emlrtRootTLSGlobal);
    c_x->data[ix] = postFFT[emlrtDynamicBoundsCheckFastR2012b(ib, 1, 64,
      &v_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  varargin_1[0] = b_x->size[0];
  varargin_1[1] = 1.0;
  varargin_1[2] = 1.0;
  emlrtPushRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
  eml_assert_valid_size_arg(varargin_1);
  emlrtPopRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
  emxFree_real_T(&b_x);
  for (ix = 0; ix < 3; ix++) {
    sz[ix] = (int32_T)varargin_1[ix];
  }

  iy = c_x->size[0];
  if (1 > iy) {
    iy = 1;
  }

  if (c_x->size[0] < iy) {
  } else {
    iy = c_x->size[0];
  }

  if (sz[0] > iy) {
    emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > iy) {
    emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&b_y, 3, &t_emlrtRTEI, TRUE);
  ix = b_y->size[0] * b_y->size[1] * b_y->size[2];
  b_y->size[0] = sz[0];
  b_y->size[1] = 1;
  b_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)b_y, ix, (int32_T)sizeof(creal_T),
                    &u_emlrtRTEI);
  if (c_x->size[0] == sz[0]) {
  } else {
    emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m12 = mxCreateCharArray(2, iv35);
    for (i = 0; i < 40; i++) {
      cv58[i] = cv59[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m12, cv58);
    emlrtAssign(&c_y, m12);
    b_error(b_message(c_y, &cb_emlrtMCI), &db_emlrtMCI);
    emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > c_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (c_x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k + 1 <= c_x->size[0]; k++) {
    b_y->data[k] = c_x->data[k];
  }

  emxFree_creal_T(&c_x);
  ix = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = b_y->size[0];
  varargout_1->size[1] = b_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)varargout_1, ix, (int32_T)sizeof(creal_T),
                    &t_emlrtRTEI);
  iy = b_y->size[0] * b_y->size[1] * b_y->size[2];
  for (ix = 0; ix < iy; ix++) {
    varargout_1->data[ix] = b_y->data[ix];
  }

  emxFree_creal_T(&b_y);
  emlrtPopRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void b_OFDMDemodulator_stepImpl(const OFDMDemodulator *obj, const creal_T x[960],
  emxArray_creal_T *varargout_1, creal_T varargout_2[48])
{
  creal_T inputIn3D[960];
  creal_T postFFT[768];
  int32_T ix;
  int32_T chanStart;
  int32_T i1;
  int32_T i2;
  int32_T i;
  int32_T b_ix;
  boolean_T overflow;
  int32_T c_ix;
  real_T tmp_re;
  real_T tmp_im;
  int32_T ib;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv10[33] = { 0.0, -0.0980171403295606,
    -0.19509032201612825, -0.29028467725446233, -0.38268343236508978,
    -0.47139673682599764, -0.55557023301960218, -0.63439328416364549,
    -0.70710678118654757, -0.773010453362737, -0.83146961230254524,
    -0.881921264348355, -0.92387953251128674, -0.95694033573220882,
    -0.98078528040323043, -0.99518472667219693, -1.0, -0.99518472667219693,
    -0.98078528040323043, -0.95694033573220882, -0.92387953251128674,
    -0.881921264348355, -0.83146961230254524, -0.773010453362737,
    -0.70710678118654757, -0.63439328416364549, -0.55557023301960218,
    -0.47139673682599764, -0.38268343236508978, -0.29028467725446233,
    -0.19509032201612825, -0.0980171403295606, -0.0 };

  static const real_T dv11[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emxArray_real_T *b_x;
  emxArray_creal_T *c_x;
  real_T varargin_1[3];
  int32_T sz[3];
  emxArray_creal_T *b_y;
  const mxArray *c_y;
  static const int32_T iv40[2] = { 1, 40 };

  const mxArray *m14;
  char_T cv64[40];
  static const char_T cv65[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  static const int16_T iv41[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  memcpy(&inputIn3D[0], &x[0], 960U * sizeof(creal_T));
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    i1 = 0;
    i2 = chanStart;
    for (i = 0; i < 63; i++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 6);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 6);
      }

      postFFT[i2] = inputIn3D[(ix % 64 + 80 * b_ix) + 16];
      i2 = 64;
      overflow = TRUE;
      while (overflow) {
        if (i2 >= 0) {
          i2 = (int32_T)((uint32_T)i2 >> 1);
        } else {
          i2 = ~(int32_T)((uint32_T)~i2 >> 1);
        }

        i1 ^= i2;
        overflow = ((i1 & i2) == 0);
      }

      i2 = chanStart + i1;
      ix++;
    }

    if (ix >= 0) {
      c_ix = (int32_T)((uint32_T)ix >> 6);
    } else {
      c_ix = ~(int32_T)((uint32_T)~ix >> 6);
    }

    postFFT[i2] = inputIn3D[(ix % 64 + 80 * c_ix) + 16];
    ix++;
    for (i = chanStart; i <= chanStart + 62; i += 2) {
      tmp_re = postFFT[i + 1].re;
      tmp_im = postFFT[i + 1].im;
      postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
      postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 2;
    iDelta2 = 4;
    k = 16;
    iheight = 61;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        i2 = i + ib;
        tmp_re = postFFT[i2].re;
        tmp_im = postFFT[i2].im;
        postFFT[i + ib].re = postFFT[i].re - postFFT[i2].re;
        postFFT[i + ib].im = postFFT[i].im - postFFT[i2].im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      i2 = chanStart + 1;
      for (i1 = k; i1 < 32; i1 += k) {
        i = i2;
        ihi = i2 + iheight;
        while (i < ihi) {
          tmp_re = dv11[i1] * postFFT[i + ib].re - dv10[i1] * postFFT[i + ib].im;
          tmp_im = dv11[i1] * postFFT[i + ib].im + dv10[i1] * postFFT[i + ib].re;
          postFFT[i + ib].re = postFFT[i].re - tmp_re;
          postFFT[i + ib].im = postFFT[i].im - tmp_im;
          postFFT[i].re += tmp_re;
          postFFT[i].im += tmp_im;
          i += iDelta2;
        }

        i2++;
      }

      ib = k;
      k = (int32_T)((uint32_T)ib >> 1);
      ib = iDelta2;
      iDelta2 <<= 1;
      iheight -= ib;
    }
  }

  i2 = 0;
  for (i = 0; i < 12; i++) {
    i1 = i2;
    i2 += 64;
    ib = i1 + 32;
    for (k = 0; k < 32; k++) {
      tmp_re = postFFT[i1].re;
      tmp_im = postFFT[i1].im;
      postFFT[i1] = postFFT[ib];
      postFFT[ib].re = tmp_re;
      postFFT[ib].im = tmp_im;
      i1++;
      ib++;
    }
  }

  emxInit_real_T(&b_x, 1, &t_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  ib = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ib, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    b_x->data[ib] = obj->pDataLinearIndices->data[ib];
  }

  b_emxInit_creal_T(&c_x, 1, &t_emlrtRTEI, TRUE);
  ib = c_x->size[0];
  c_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)c_x, ib, (int32_T)sizeof(creal_T),
                    &t_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    tmp_re = obj->pDataLinearIndices->data[ib];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &b_emlrtDCI,
      emlrtRootTLSGlobal);
    c_x->data[ib] = postFFT[emlrtDynamicBoundsCheckFastR2012b(i1, 1, 768,
      &w_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  varargin_1[0] = (real_T)b_x->size[0] / 12.0;
  varargin_1[1] = 12.0;
  varargin_1[2] = 1.0;
  emlrtPushRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
  eml_assert_valid_size_arg(varargin_1);
  emlrtPopRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
  emxFree_real_T(&b_x);
  for (ib = 0; ib < 3; ib++) {
    sz[ib] = (int32_T)varargin_1[ib];
  }

  i2 = c_x->size[0];
  if (1 > i2) {
    i2 = 1;
  }

  if (c_x->size[0] < i2) {
  } else {
    i2 = c_x->size[0];
  }

  if (sz[0] > i2) {
    emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (12 > i2) {
    emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&b_y, 3, &t_emlrtRTEI, TRUE);
  ib = b_y->size[0] * b_y->size[1] * b_y->size[2];
  b_y->size[0] = sz[0];
  b_y->size[1] = 12;
  b_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)b_y, ib, (int32_T)sizeof(creal_T),
                    &u_emlrtRTEI);
  if (c_x->size[0] == sz[0] * 12) {
  } else {
    emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m14 = mxCreateCharArray(2, iv40);
    for (i = 0; i < 40; i++) {
      cv64[i] = cv65[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m14, cv64);
    emlrtAssign(&c_y, m14);
    b_error(b_message(c_y, &cb_emlrtMCI), &db_emlrtMCI);
    emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > c_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (c_x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k + 1 <= c_x->size[0]; k++) {
    b_y->data[k] = c_x->data[k];
  }

  emxFree_creal_T(&c_x);
  ib = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = b_y->size[0];
  varargout_1->size[1] = b_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)varargout_1, ib, (int32_T)sizeof(creal_T),
                    &t_emlrtRTEI);
  i2 = b_y->size[0] * b_y->size[1] * b_y->size[2];
  for (ib = 0; ib < i2; ib++) {
    varargout_1->data[ib] = b_y->data[ib];
  }

  emxFree_creal_T(&b_y);
  emlrtPopRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 48; k++) {
    varargout_2[k] = postFFT[iv41[k]];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void check_forloop_overflow_error(void)
{
  const mxArray *b_y;
  static const int32_T iv19[2] = { 1, 34 };

  const mxArray *m3;
  char_T cv30[34];
  int32_T i;
  static const char_T cv31[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c_y;
  static const int32_T iv20[2] = { 1, 23 };

  char_T cv32[23];
  static const char_T cv33[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m3 = mxCreateCharArray(2, iv19);
  for (i = 0; i < 34; i++) {
    cv30[i] = cv31[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m3, cv30);
  emlrtAssign(&b_y, m3);
  c_y = NULL;
  m3 = mxCreateCharArray(2, iv20);
  for (i = 0; i < 23; i++) {
    cv32[i] = cv33[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m3, cv32);
  emlrtAssign(&c_y, m3);
  b_error(message(b_y, c_y, &h_emlrtMCI), &i_emlrtMCI);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (OFDMDemodulator.c) */
