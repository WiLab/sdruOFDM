/*
 * receiveOFDM80211a_sdru_mexutil.h
 *
 * Code generation for function 'receiveOFDM80211a_sdru_mexutil'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __RECEIVEOFDM80211A_SDRU_MEXUTIL_H__
#define __RECEIVEOFDM80211A_SDRU_MEXUTIL_H__
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
extern void b_error(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);
extern real_T c_emlrt_marshallIn(const mxArray *b_feval, const char_T *identifier);
#ifdef __WATCOMC__
#pragma aux c_emlrt_marshallIn value [8087];
#endif
extern const mxArray *emlrt_marshallOut(real_T u);
extern const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(emlrtMCInfo *location);
extern void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (receiveOFDM80211a_sdru_mexutil.h) */
