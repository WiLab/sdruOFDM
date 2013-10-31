/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "abs.h"
#include <stdio.h>

/* Function Definitions */
void b_abs(const creal_T x[1231], real_T b_y[1231])
{
  int32_T k;
  for (k = 0; k < 1231; k++) {
    b_y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

void c_abs(const creal_T x[1224], real_T b_y[1224])
{
  int32_T k;
  for (k = 0; k < 1224; k++) {
    b_y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

void d_abs(const creal_T x[106], real_T b_y[106])
{
  int32_T k;
  for (k = 0; k < 106; k++) {
    b_y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

/* End of code generation (abs.c) */
