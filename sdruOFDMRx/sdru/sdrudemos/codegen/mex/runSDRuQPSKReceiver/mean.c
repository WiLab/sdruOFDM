/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "mean.h"

/* Function Definitions */
creal_T mean(const creal_T x[13])
{
  creal_T y;
  int32_T k;
  real_T y_im;
  y = x[0];
  for (k = 0; k < 12; k++) {
    y.re += x[k + 1].re;
    y.im += x[k + 1].im;
  }

  y_im = y.im;
  if (y.im == 0.0) {
    y.re /= 13.0;
    y.im = 0.0;
  } else if (y.re == 0.0) {
    y.re = 0.0;
    y.im = y_im / 13.0;
  } else {
    y.re /= 13.0;
    y.im = y_im / 13.0;
  }

  return y;
}

/* End of code generation (mean.c) */
