/*
 * sdruQPSKRx.h
 *
 * Code generation for function 'sdruQPSKRx'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

#ifndef __SDRUQPSKRX_H__
#define __SDRUQPSKRX_H__
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
extern sdruQPSKRx_283 *sdruQPSKRx_sdruQPSKRx(sdruQPSKRx_283 *obj);
extern void sdruQPSKRx_setupImpl(sdruQPSKRx_283 *obj);
extern void sdruQPSKRx_stepImpl(runSDRuQPSKReceiverStackData *SD, sdruQPSKRx_283 *obj, const creal_T bufferSignal[4000], real_T BER[3]);
#endif
/* End of code generation (sdruQPSKRx.h) */
