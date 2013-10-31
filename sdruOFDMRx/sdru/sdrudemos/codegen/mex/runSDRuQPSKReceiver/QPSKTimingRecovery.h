/*
 * QPSKTimingRecovery.h
 *
 * Code generation for function 'QPSKTimingRecovery'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

#ifndef __QPSKTIMINGRECOVERY_H__
#define __QPSKTIMINGRECOVERY_H__
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
extern void QPSKTimingRecovery_stepImpl(QPSKTimingRecovery *obj, const creal_T y, creal_T dataOut[100], boolean_T *isDataValid, real_T *normTimingErr);
#endif
/* End of code generation (QPSKTimingRecovery.h) */
