/*
 * exp.c
 *
 * Code generation for function 'exp'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "exp.h"

/* Function Definitions */
void b_exp(creal_T *x)
{
  real_T r;
  real_T x_im;
  real_T b_x_im;
  r = muDoubleScalarExp(x->re / 2.0);
  x_im = x->im;
  b_x_im = x->im;
  x->re = r * (r * muDoubleScalarCos(x_im));
  x->im = r * (r * muDoubleScalarSin(b_x_im));
}

/* End of code generation (exp.c) */
