/*
 * rdivide.h
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __RDIVIDE_H__
#define __RDIVIDE_H__
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
extern void b_rdivide(const creal_T x[106], const real_T b_y[106], creal_T z[106]);
extern void c_rdivide(const creal_T x[53], const real_T b_y[53], creal_T z[53]);
extern void rdivide(const real_T x[1224], const real_T b_y[1224], real_T z[1224]);
#endif
/* End of code generation (rdivide.h) */
