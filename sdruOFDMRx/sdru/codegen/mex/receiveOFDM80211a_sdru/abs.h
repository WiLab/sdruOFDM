/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

#ifndef __ABS_H__
#define __ABS_H__
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
extern void b_abs(const creal_T x[1231], real_T b_y[1231]);
extern void c_abs(const creal_T x[1224], real_T b_y[1224]);
extern void d_abs(const creal_T x[106], real_T b_y[106]);
#endif
/* End of code generation (abs.h) */
