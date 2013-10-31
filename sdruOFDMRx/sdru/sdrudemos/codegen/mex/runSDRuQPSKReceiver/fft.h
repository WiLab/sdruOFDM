/*
 * fft.h
 *
 * Code generation for function 'fft'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

#ifndef __FFT_H__
#define __FFT_H__
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
#include "runSDRuQPSKReceiver_types.h"

/* Function Declarations */
extern void fft(const creal_T x[2000], creal_T y[2048]);
#endif
/* End of code generation (fft.h) */
