/*
 * SDRuTransmitter.h
 *
 * Code generation for function 'SDRuTransmitter'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

#ifndef __SDRUTRANSMITTER_H__
#define __SDRUTRANSMITTER_H__
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
#include "runSDRuQPSKTransmitter_types.h"

/* Type Definitions */
#include "usrp_uhd_capi.hpp"

/* Function Declarations */
extern comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(comm_SDRuTransmitter *obj);
extern void SDRuTransmitter_setupImplLocal(comm_SDRuTransmitter *obj, UsrpErrorCapiEnumT *errStatus, char_T errMsg_data[1024], int32_T errMsg_size[2]);
extern void SDRuTransmitter_stepImpl(const comm_SDRuTransmitter *obj, const creal_T x[400]);
#endif
/* End of code generation (SDRuTransmitter.h) */
