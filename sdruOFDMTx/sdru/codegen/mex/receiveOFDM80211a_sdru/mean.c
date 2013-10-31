/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "mean.h"
#include <stdio.h>

/* Function Definitions */
void b_mean(const creal_T x[106], creal_T b_y[53])
{
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  real_T y_im;
  iy = -1;
  ixstart = 52;
  for (j = 0; j < 53; j++) {
    ixstart++;
    iy++;
    b_y[iy].re = x[ixstart - 53].re + x[ixstart].re;
    b_y[iy].im = x[ixstart - 53].im + x[ixstart].im;
  }

  for (iy = 0; iy < 53; iy++) {
    y_im = b_y[iy].im;
    if (b_y[iy].im == 0.0) {
      b_y[iy].re /= 2.0;
      b_y[iy].im = 0.0;
    } else if (b_y[iy].re == 0.0) {
      b_y[iy].re = 0.0;
      b_y[iy].im = y_im / 2.0;
    } else {
      b_y[iy].re /= 2.0;
      b_y[iy].im = y_im / 2.0;
    }
  }
}

void mean(const real_T x[106], real_T b_y[53])
{
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  iy = -1;
  ixstart = 52;
  for (j = 0; j < 53; j++) {
    ixstart++;
    iy++;
    b_y[iy] = x[ixstart - 53] + x[ixstart];
  }

  for (iy = 0; iy < 53; iy++) {
    b_y[iy] /= 2.0;
  }
}

/* End of code generation (mean.c) */
