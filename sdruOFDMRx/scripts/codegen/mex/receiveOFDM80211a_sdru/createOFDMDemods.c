/*
 * createOFDMDemods.c
 *
 * Code generation for function 'createOFDMDemods'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "createOFDMDemods.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo pb_emlrtRSI = { 1, "OFDMBase",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m" };

static emlrtRSInfo qb_emlrtRSI = { 4, "createOFDMDemods",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/createOFDMDemods.m" };

static emlrtRSInfo rb_emlrtRSI = { 12, "createOFDMDemods",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/createOFDMDemods.m" };

static emlrtRSInfo ub_emlrtRSI = { 1, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m" };

static emlrtRSInfo vb_emlrtRSI = { 83, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m" };

static emlrtRSInfo xb_emlrtRSI = { 102, "OFDMBase",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m" };

static emlrtRSInfo yb_emlrtRSI = { 42, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo ac_emlrtRSI = { 228, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo bc_emlrtRSI = { 218, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo dc_emlrtRSI = { 194, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

/* Function Definitions */
void createOFDMDemods(OFDMDemodulator *iobj_0, OFDMDemodulator_1 *iobj_1,
                      OFDMDemodulator_1 **b_hPreambleDemod, OFDMDemodulator
                      **b_hDataDemod)
{
  OFDMDemodulator *object;
  int8_T b_data[4];
  int32_T i;
  int32_T nb;
  int32_T x;
  int32_T exitg1;
  int32_T exponent;
  boolean_T b0;
  int32_T i7;
  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 13 };

  const mxArray *m3;
  char_T cv32[13];
  static const char_T cv33[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  OFDMDemodulator_1 *b_object;

  /*  createOFDMDemods: Create demodulator blocks from transmitter input */
  /*  structure */
  emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  object = iobj_0;
  *b_hDataDemod = object;
  emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  object = *b_hDataDemod;
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    b0 = FALSE;
  } else {
    b0 = (nb > 2147483646);
  }

  if (b0) {
    emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    i7 = 0;
  } else {
    i7 = nb;
  }

  if (!(4 != i7)) {
  } else {
    emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv34);
    for (i = 0; i < 13; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m3, cv32);
    emlrtAssign(&b_y, m3);
    b_error(b_message(b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  b_object = iobj_1;
  *b_hPreambleDemod = b_object;
  emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  b_object = *b_hPreambleDemod;
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (createOFDMDemods.c) */
