/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "abs.h"

/* Function Definitions */
void b_abs(const creal_T x[112], real_T y[112])
{
  int32_T k;
  for (k = 0; k < 112; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

/* End of code generation (abs.c) */
