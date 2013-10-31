/*
 * receiveOFDM80211a_sdru_initialize.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru_initialize'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "receiveOFDM80211a_sdru_initialize.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static boolean_T ScopehArrayPilot_not_empty;
static boolean_T ScopehArrayPreamble_not_empty;
static boolean_T ScopehSpect_not_empty;
static boolean_T ScopehConstPre_not_empty;
static boolean_T ScopehConstPost_not_empty;
static boolean_T ScopehTimePeaks_not_empty;
static boolean_T ScopehTimeFreqEst_not_empty;

/* Function Declarations */
static void receiveOFDM80211a_sdru_once(void);

/* Function Definitions */
static void receiveOFDM80211a_sdru_once(void)
{
  ScopehTimeFreqEst_not_empty = FALSE;
  ScopehTimePeaks_not_empty = FALSE;
  ScopehConstPost_not_empty = FALSE;
  ScopehConstPre_not_empty = FALSE;
  ScopehSpect_not_empty = FALSE;
  ScopehArrayPreamble_not_empty = FALSE;
  ScopehArrayPilot_not_empty = FALSE;
  isSetupsdruCalled = FALSE;
}

void receiveOFDM80211a_sdru_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "communication_toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Signal_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    receiveOFDM80211a_sdru_once();
  }
}

/* End of code generation (receiveOFDM80211a_sdru_initialize.c) */
