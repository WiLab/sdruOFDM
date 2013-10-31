/*
 * receiveOFDM80211a_sdru_emxutil.h
 *
 * Code generation for function 'receiveOFDM80211a_sdru_emxutil'
 *
 * C source code generated on: Tue Oct  8 14:08:19 2013
 *
 */

#ifndef __RECEIVEOFDM80211A_SDRU_EMXUTIL_H__
#define __RECEIVEOFDM80211A_SDRU_EMXUTIL_H__
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
extern void b_emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxFreeStruct_OFDMDemodulator(OFDMDemodulator *pStruct);
extern void emxFree_creal_T(emxArray_creal_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInitStruct_OFDMDemodulator(OFDMDemodulator *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
#endif
/* End of code generation (receiveOFDM80211a_sdru_emxutil.h) */
