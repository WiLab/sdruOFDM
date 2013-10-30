/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

#ifndef __SYSTEMCORE_H__
#define __SYSTEMCORE_H__
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
extern void SystemCore_release(QPSKTransmitter_201 *obj);
extern void SystemCore_step(QPSKTransmitter_201 *obj, creal_T varargout_1[400]);
extern void b_SystemCore_release(comm_SDRuTransmitter *obj);
extern void b_SystemCore_step(QPSKBitsGenerator_220 *obj, real_T varargout_1[200], real_T varargout_2[105]);
extern void c_SystemCore_step(commcodegen_QPSKModulator *obj, const real_T varargin_1[200], creal_T varargout_1[100]);
extern void d_SystemCore_step(comm_SDRuTransmitter *obj, const creal_T varargin_1[400]);
#endif
/* End of code generation (SystemCore.h) */
