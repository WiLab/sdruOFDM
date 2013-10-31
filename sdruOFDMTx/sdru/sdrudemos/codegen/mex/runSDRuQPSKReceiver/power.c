/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "power.h"

/* Function Definitions */
void power(const creal_T a[2000], creal_T y[2000])
{
  int32_T k;
  real_T t_re;
  real_T t_im;
  real_T tr;
  for (k = 0; k < 2000; k++) {
    if ((a[k].im == 0.0) && (a[k].re >= 0.0)) {
      t_re = muDoubleScalarPower(a[k].re, 4.0);
      t_im = 0.0;
    } else if (a[k].re == 0.0) {
      t_re = muDoubleScalarPower(a[k].im, 4.0);
      t_im = 0.0;
    } else {
      t_re = a[k].re;
      t_im = a[k].im;
      if ((a[k].im == 0.0) && muDoubleScalarIsNaN(a[k].re)) {
      } else if ((muDoubleScalarAbs(a[k].re) > 8.9884656743115785E+307) ||
                 (muDoubleScalarAbs(a[k].im) > 8.9884656743115785E+307)) {
        t_re = muDoubleScalarLog(muDoubleScalarHypot(a[k].re / 2.0, a[k].im /
          2.0)) + 0.69314718055994529;
        t_im = muDoubleScalarAtan2(a[k].im, a[k].re);
      } else {
        t_re = muDoubleScalarLog(muDoubleScalarHypot(a[k].re, a[k].im));
        t_im = muDoubleScalarAtan2(a[k].im, a[k].re);
      }

      t_re *= 4.0;
      t_im *= 4.0;
      tr = muDoubleScalarExp(t_re);
      t_re = tr * muDoubleScalarCos(t_im);
      t_im = tr * muDoubleScalarSin(t_im);
    }

    y[k].re = t_re;
    y[k].im = t_im;
  }
}

/* End of code generation (power.c) */
