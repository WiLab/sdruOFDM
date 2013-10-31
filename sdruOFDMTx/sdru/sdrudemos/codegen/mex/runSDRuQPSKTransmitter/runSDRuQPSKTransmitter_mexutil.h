/*
 * runSDRuQPSKTransmitter_mexutil.h
 *
 * Code generation for function 'runSDRuQPSKTransmitter_mexutil'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

#ifndef __RUNSDRUQPSKTRANSMITTER_MEXUTIL_H__
#define __RUNSDRUQPSKTRANSMITTER_MEXUTIL_H__
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
#include "runSDRuQPSKTransmitter_types.h"

/* Function Declarations */
extern void b_error(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern void c_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(emlrtMCInfo *location);
extern void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (runSDRuQPSKTransmitter_mexutil.h) */
