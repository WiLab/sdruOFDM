/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "power.h"
#include <stdio.h>

/* Function Definitions */
void b_power(const real_T a[1224], real_T b_y[1224])
{
  int32_T k;
  for (k = 0; k < 1224; k++) {
    b_y[k] = a[k] * a[k];
  }
}

void c_power(const real_T a[106], real_T b_y[106])
{
  int32_T k;
  for (k = 0; k < 106; k++) {
    b_y[k] = a[k] * a[k];
  }
}

void power(const real_T a[1231], real_T b_y[1231])
{
  int32_T k;
  for (k = 0; k < 1231; k++) {
    b_y[k] = a[k] * a[k];
  }
}

/* End of code generation (power.c) */
