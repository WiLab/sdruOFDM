/*
 * receiveOFDM80211a_sdru_terminate.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru_terminate'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "receiveOFDM80211a_sdru_terminate.h"
#include <stdio.h>

/* Function Definitions */
void receiveOFDM80211a_sdru_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void receiveOFDM80211a_sdru_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (receiveOFDM80211a_sdru_terminate.c) */
