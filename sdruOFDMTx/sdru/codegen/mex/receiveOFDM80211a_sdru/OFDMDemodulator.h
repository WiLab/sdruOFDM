/*
 * OFDMDemodulator.h
 *
 * Code generation for function 'OFDMDemodulator'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

#ifndef __OFDMDEMODULATOR_H__
#define __OFDMDEMODULATOR_H__
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
extern OFDMDemodulator *OFDMDemodulator_OFDMDemodulator(OFDMDemodulator *object);
extern void OFDMDemodulator_setupImpl(OFDMDemodulator *obj);
extern void OFDMDemodulator_stepImpl(const OFDMDemodulator_1 *obj, const creal_T x[64], emxArray_creal_T *varargout_1);
extern void b_OFDMDemodulator_stepImpl(const OFDMDemodulator *obj, const creal_T x[960], emxArray_creal_T *varargout_1, creal_T varargout_2[48]);
extern void check_forloop_overflow_error(void);
#endif
/* End of code generation (OFDMDemodulator.h) */
