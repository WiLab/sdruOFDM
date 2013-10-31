/*
 * runSDRuQPSKTransmitter_initialize.c
 *
 * Code generation for function 'runSDRuQPSKTransmitter_initialize'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "runSDRuQPSKTransmitter_initialize.h"
#include "runSDRuQPSKTransmitter_data.h"

/* Function Declarations */
static void runSDRuQPSKTransmitter_once(void);

/* Function Definitions */
static void runSDRuQPSKTransmitter_once(void)
{
  hTx_not_empty = FALSE;
  isSetupsdruCalled = FALSE;
}

void runSDRuQPSKTransmitter_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "communication_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    runSDRuQPSKTransmitter_once();
  }
}

/* End of code generation (runSDRuQPSKTransmitter_initialize.c) */
