/*
 * power.h
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __POWER_H__
#define __POWER_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "receiveOFDM80211a_sdru_types.h"

/* Function Declarations */
extern void b_power(const real_T a[1224], real_T b_y[1224]);
extern void c_power(const real_T a[106], real_T b_y[106]);
extern void power(const real_T a[1231], real_T b_y[1231]);
#endif
/* End of code generation (power.h) */
