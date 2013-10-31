/*
 * AGC.h
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

#ifndef __AGC_H__
#define __AGC_H__
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
extern void AGC_stepImpl(comm_AGC *obj, const creal_T x[5120], creal_T b_y[5120]);
#endif
/* End of code generation (AGC.h) */
