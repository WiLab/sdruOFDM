/*
 * equalizeOFDM.h
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

#ifndef __EQUALIZEOFDM_H__
#define __EQUALIZEOFDM_H__
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
extern void c_eml_error(void);
extern void check_forloop_overflow_error(void);
extern void equalizeOFDM(receiveOFDM80211a_sdruStackData *SD, const creal_T recv[1280], const b_struct_T *estimate, OFDMDemodulator_1 *b_hPreambleDemod, OFDMDemodulator *b_hDataDemod, creal_T R[576], emxArray_creal_T *Rraw, b_struct_T *b_estimate);
#endif
/* End of code generation (equalizeOFDM.h) */
