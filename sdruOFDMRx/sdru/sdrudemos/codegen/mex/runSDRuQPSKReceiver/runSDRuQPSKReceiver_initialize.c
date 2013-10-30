/*
 * runSDRuQPSKReceiver_initialize.c
 *
 * Code generation for function 'runSDRuQPSKReceiver_initialize'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "runSDRuQPSKReceiver_initialize.h"
#include "runSDRuQPSKReceiver_data.h"

/* Function Declarations */
static void runSDRuQPSKReceiver_once(void);

/* Function Definitions */
static void runSDRuQPSKReceiver_once(void)
{
  hRx_not_empty = FALSE;
  isSetupsdruCalled = FALSE;
}

void runSDRuQPSKReceiver_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "communication_toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Communication_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    runSDRuQPSKReceiver_once();
  }
}

/* End of code generation (runSDRuQPSKReceiver_initialize.c) */
