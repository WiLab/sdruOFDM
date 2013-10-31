/*
 * resample.h
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __RESAMPLE_H__
#define __RESAMPLE_H__
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
extern void resample(receiveOFDM80211a_sdruStackData *SD, const creal_T x[48], creal_T yout[576]);
#endif
/* End of code generation (resample.h) */
