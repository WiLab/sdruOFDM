/*
 * TestSDRuCodegen_mexutil.h
 *
 * Code generation for function 'TestSDRuCodegen_mexutil'
 *
 * C source code generated on: Tue Oct  8 16:14:51 2013
 *
 */

#ifndef __TESTSDRUCODEGEN_MEXUTIL_H__
#define __TESTSDRUCODEGEN_MEXUTIL_H__
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
#include "TestSDRuCodegen_types.h"

/* Function Declarations */
extern const mxArray *emlrt_marshallOut(real_T u);
extern void error(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(emlrtMCInfo *location);
extern void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (TestSDRuCodegen_mexutil.h) */
