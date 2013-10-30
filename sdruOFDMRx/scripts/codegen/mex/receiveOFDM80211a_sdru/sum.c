/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "sum.h"
#include <stdio.h>

/* Function Definitions */
real_T b_sum(const boolean_T x[560])
{
  real_T b_y;
  int32_T k;
  b_y = x[0];
  for (k = 0; k < 559; k++) {
    b_y += (real_T)x[k + 1];
  }

  return b_y;
}

creal_T sum(const creal_T x[32])
{
  creal_T b_y;
  int32_T k;
  b_y = x[0];
  for (k = 0; k < 31; k++) {
    b_y.re += x[k + 1].re;
    b_y.im += x[k + 1].im;
  }

  return b_y;
}

/* End of code generation (sum.c) */
