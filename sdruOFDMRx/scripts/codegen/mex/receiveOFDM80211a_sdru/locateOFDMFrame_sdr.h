/*
 * locateOFDMFrame_sdr.h
 *
 * Code generation for function 'locateOFDMFrame_sdr'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __LOCATEOFDMFRAME_SDR_H__
#define __LOCATEOFDMFRAME_SDR_H__
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
extern void locateShortpreamble(const real_T M[1224], real_T *preambleEstimatedLocation, real_T *b_numPeaks);
#endif
/* End of code generation (locateOFDMFrame_sdr.h) */
