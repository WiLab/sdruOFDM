/*
 * coarseOFDMFreqEst_sdr.h
 *
 * Code generation for function 'coarseOFDMFreqEst_sdr'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __COARSEOFDMFREQEST_SDR_H__
#define __COARSEOFDMFREQEST_SDR_H__
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
extern void freqCorrectOFDM(b_struct_T *estimate, const creal_T rFrame[1280], creal_T b_rFreqShifted[1280]);
#endif
/* End of code generation (coarseOFDMFreqEst_sdr.h) */
