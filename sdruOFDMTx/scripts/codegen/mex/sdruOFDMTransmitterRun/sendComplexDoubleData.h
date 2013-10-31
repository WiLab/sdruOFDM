/*
 * sendComplexDoubleData.h
 *
 * Code generation for function 'sendComplexDoubleData'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

#ifndef __SENDCOMPLEXDOUBLEDATA_H__
#define __SENDCOMPLEXDOUBLEDATA_H__
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
extern void sendComplexDoubleData(sdruOFDMTransmitterRunStackData *SD, int32_T driverApiH, const creal_T data[25600], real_T freq, real_T loOffset, real_T gain, real_T interp, uint32_T *underflow, UsrpErrorCapiEnumT *errStat, char_T errStr_data[1024], int32_T errStr_size[2]);
#endif
/* End of code generation (sendComplexDoubleData.h) */
