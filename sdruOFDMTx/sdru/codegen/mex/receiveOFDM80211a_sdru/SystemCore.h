/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
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
#include "receiveOFDM80211a_sdru_types.h"

/* Function Declarations */
extern void SystemCore_release(comm_SDRuReceiver *obj);
extern void SystemCore_reset(dspcodegen_FIRRateConverter_112 *obj);
extern void SystemCore_step(comm_AGC *obj, const creal_T varargin_1[5120], creal_T varargout_1[5120]);
extern void b_SystemCore_step(OFDMDemodulator_1 *obj, const creal_T varargin_1[64], emxArray_creal_T *varargout_1);
extern void c_SystemCore_step(dspcodegen_FIRRateConverter_112 *obj, const creal_T varargin_1[288], creal_T varargout_1[3456]);
#endif
/* End of code generation (SystemCore.h) */
