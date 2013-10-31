/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "mod.h"

/* Function Definitions */
real_T b_mod(real_T x, real_T y)
{
  real_T r;
  if (y == muDoubleScalarFloor(y)) {
    r = x - muDoubleScalarFloor(x / y) * y;
  } else {
    r = x / y;
    if (muDoubleScalarAbs(r - muDoubleScalarRound(r)) <= 2.2204460492503131E-16 *
        muDoubleScalarAbs(r)) {
      r = 0.0;
    } else {
      r = (r - muDoubleScalarFloor(r)) * y;
    }
  }

  return r;
}

/* End of code generation (mod.c) */
