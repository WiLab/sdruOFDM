/*
 * sdruOFDMTransmitterRun_mexutil.h
 *
 * Code generation for function 'sdruOFDMTransmitterRun_mexutil'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

#ifndef __SDRUOFDMTRANSMITTERRUN_MEXUTIL_H__
#define __SDRUOFDMTRANSMITTERRUN_MEXUTIL_H__
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
#include "sdruOFDMTransmitterRun_types.h"

/* Function Declarations */
extern void b_error(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(emlrtMCInfo *location);
extern void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (sdruOFDMTransmitterRun_mexutil.h) */
