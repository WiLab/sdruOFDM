/*
 * receiveData.h
 *
 * Code generation for function 'receiveData'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

#ifndef __RECEIVEDATA_H__
#define __RECEIVEDATA_H__
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
extern void receiveData(int32_T driverApiH, real_T freq, real_T loOffset, real_T gain, real_T decim, cint16_T b_data[46336], uint32_T *dataLength, uint32_T *overflow, UsrpErrorCapiEnumT *errStat, char_T errStr_data[1024], int32_T errStr_size[2]);
#endif
/* End of code generation (receiveData.h) */
