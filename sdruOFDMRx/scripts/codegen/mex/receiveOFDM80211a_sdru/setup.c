/*
 * setup.c
 *
 * Code generation for function 'setup'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "setup.h"
#include <stdio.h>

/* Function Definitions */
void Destructor(dsp_FIRRateConverter_1 *obj)
{
  /* System object Destructor function: dsp.FIRRateConverter */
  if (obj->S0_isInitialized) {
    obj->S0_isInitialized = FALSE;
    if (!obj->S1_isReleased) {
      obj->S1_isReleased = TRUE;
    }
  }
}

/* End of code generation (setup.c) */
