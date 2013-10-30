/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "rdivide.h"
#include <stdio.h>

/* Function Definitions */
void b_rdivide(const creal_T x[106], const real_T b_y[106], creal_T z[106])
{
  int32_T i17;
  for (i17 = 0; i17 < 106; i17++) {
    if (x[i17].im == 0.0) {
      z[i17].re = x[i17].re / b_y[i17];
      z[i17].im = 0.0;
    } else if (x[i17].re == 0.0) {
      z[i17].re = 0.0;
      z[i17].im = x[i17].im / b_y[i17];
    } else {
      z[i17].re = x[i17].re / b_y[i17];
      z[i17].im = x[i17].im / b_y[i17];
    }
  }
}

void c_rdivide(const creal_T x[53], const real_T b_y[53], creal_T z[53])
{
  int32_T i;
  for (i = 0; i < 53; i++) {
    if (x[i].im == 0.0) {
      z[i].re = x[i].re / b_y[i];
      z[i].im = 0.0;
    } else if (x[i].re == 0.0) {
      z[i].re = 0.0;
      z[i].im = x[i].im / b_y[i];
    } else {
      z[i].re = x[i].re / b_y[i];
      z[i].im = x[i].im / b_y[i];
    }
  }
}

void d_rdivide(const creal_T x[48], const real_T b_y[48], creal_T z[48])
{
  int32_T i19;
  for (i19 = 0; i19 < 48; i19++) {
    if (x[i19].im == 0.0) {
      z[i19].re = x[i19].re / b_y[i19];
      z[i19].im = 0.0;
    } else if (x[i19].re == 0.0) {
      z[i19].re = 0.0;
      z[i19].im = x[i19].im / b_y[i19];
    } else {
      z[i19].re = x[i19].re / b_y[i19];
      z[i19].im = x[i19].im / b_y[i19];
    }
  }
}

void rdivide(const real_T x[1224], const real_T b_y[1224], real_T z[1224])
{
  int32_T i;
  for (i = 0; i < 1224; i++) {
    z[i] = x[i] / b_y[i];
  }
}

/* End of code generation (rdivide.c) */
