/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
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
#include "runSDRuQPSKReceiver_types.h"

/* Function Declarations */
extern void SystemCore_release(sdruQPSKRx_283 *obj);
extern void SystemCore_step(comm_SDRuReceiver *obj, creal_T varargout_1[4000], uint32_T *varargout_2);
extern void b_SystemCore_release(comm_SDRuReceiver *obj);
extern void b_SystemCore_step(runSDRuQPSKReceiverStackData *SD, sdruQPSKRx_283 *obj, const creal_T varargin_1[4000], real_T varargout_1[3]);
extern void c_SystemCore_step(comm_AGC *obj, const creal_T varargin_1[4000], creal_T varargout_1[4000]);
extern void d_SystemCore_step(dspcodegen_FIRDecimator *obj, const creal_T varargin_1[4000], creal_T varargout_1[2000]);
extern void e_SystemCore_step(d_QPSKCoarseFrequencyCompensato *obj, const creal_T varargin_1[2000], creal_T varargout_1[2000]);
extern void f_SystemCore_step(c_commcodegen_PhaseFrequencyOff *obj, const creal_T varargin_1[2000], real_T varargin_2, creal_T varargout_1[2000]);
extern creal_T g_SystemCore_step(QPSKFineFrequencyCompensator *obj, const creal_T varargin_1[2]);
extern void h_SystemCore_step(QPSKTimingRecovery *obj, const creal_T varargin_1, creal_T varargout_1[100], boolean_T *varargout_2, real_T *varargout_3);
extern void i_SystemCore_step(sdruQPSKDataDecoder_264 *obj, const creal_T varargin_1[100], real_T varargout_1[3]);
extern void j_SystemCore_step(dspcodegen_Buffer *obj, const creal_T varargin_1[100], creal_T varargout_1[200]);
extern void k_SystemCore_step(commcodegen_Descrambler *obj, const real_T varargin_1[174], real_T varargout_1[174]);
extern void l_SystemCore_step(dspcodegen_Crosscorrelator *obj, const creal_T varargin_1[13], const creal_T varargin_2[100], creal_T varargout_1[112]);
extern void m_SystemCore_step(commcodegen_ErrorRate *obj, const real_T varargin_1[105], const real_T varargin_2[105], real_T varargout_1[3]);
#endif
/* End of code generation (SystemCore.h) */
