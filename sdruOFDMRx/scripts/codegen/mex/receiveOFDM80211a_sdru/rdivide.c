/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
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
  int32_T i16;
  for (i16 = 0; i16 < 106; i16++) {
    if (x[i16].im == 0.0) {
      z[i16].re = x[i16].re / b_y[i16];
      z[i16].im = 0.0;
    } else if (x[i16].re == 0.0) {
      z[i16].re = 0.0;
      z[i16].im = x[i16].im / b_y[i16];
    } else {
      z[i16].re = x[i16].re / b_y[i16];
      z[i16].im = x[i16].im / b_y[i16];
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

void rdivide(const real_T x[1224], const real_T b_y[1224], real_T z[1224])
{
  int32_T i;
  for (i = 0; i < 1224; i++) {
    z[i] = x[i] / b_y[i];
  }
}

/* End of code generation (rdivide.c) */
