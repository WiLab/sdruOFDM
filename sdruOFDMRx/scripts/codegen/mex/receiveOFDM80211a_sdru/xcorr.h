/*
 * xcorr.h
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __XCORR_H__
#define __XCORR_H__
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
extern void b_xcorr(const real_T arg1[1231], real_T C[2461]);
extern void xcorr(const creal_T arg1[1231], const creal_T arg2[16], creal_T C[2461]);
#endif
/* End of code generation (xcorr.h) */
