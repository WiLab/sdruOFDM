/*
 * sdruOFDMTransmitterRun_initialize.c
 *
 * Code generation for function 'sdruOFDMTransmitterRun_initialize'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "sdruOFDMTransmitterRun_initialize.h"
#include "sdruOFDMTransmitterRun_data.h"

/* Function Declarations */
static void sdruOFDMTransmitterRun_once(void);

/* Function Definitions */
static void sdruOFDMTransmitterRun_once(void)
{
  isSetupsdruCalled = FALSE;
}

void sdruOFDMTransmitterRun_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "communication_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    sdruOFDMTransmitterRun_once();
  }
}

/* End of code generation (sdruOFDMTransmitterRun_initialize.c) */
