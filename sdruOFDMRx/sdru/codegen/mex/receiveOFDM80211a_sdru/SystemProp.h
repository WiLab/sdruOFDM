/*
 * SystemProp.h
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

#ifndef __SYSTEMPROP_H__
#define __SYSTEMPROP_H__
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
extern void SystemProp_setProperties(comm_SDRuReceiver *obj, real_T varargin_3);
extern void c_SystemProp_matlabCodegenSetAn(comm_AGC *obj, real_T value);
extern void d_SystemProp_matlabCodegenSetAn(OFDMDemodulator *obj, const real_T value_data[768], const int32_T value_size[1]);
#endif
/* End of code generation (SystemProp.h) */
