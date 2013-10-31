/*
 * QPSKCoarseFrequencyCompensator.c
 *
 * Code generation for function 'QPSKCoarseFrequencyCompensator'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "QPSKCoarseFrequencyCompensator.h"
#include "SystemCore.h"
#include "fft.h"
#include "power.h"

/* Variable Definitions */
static emlrtRSInfo ae_emlrtRSI = { 45, "QPSKCoarseFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m" };

/* Function Definitions */
void c_QPSKCoarseFrequencyCompensato(d_QPSKCoarseFrequencyCompensato *obj, const
  creal_T filteredSignal[2000], creal_T compensatedSignal[2000])
{
  creal_T dcv1[2000];
  creal_T FFTSig[2048];
  int32_T ixstart;
  real_T mtmp_re;
  real_T mtmp_im;
  int32_T itmp;
  int32_T ix;
  boolean_T exitg1;
  real_T absbi;
  real_T y;
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  real_T absar;
  real_T absbr;
  real_T Ma;
  int32_T b_exponent;
  int32_T c_exponent;
  int32_T d_exponent;
  power(filteredSignal, dcv1);
  fft(dcv1, FFTSig);
  ixstart = 1;
  mtmp_re = FFTSig[0].re;
  mtmp_im = FFTSig[0].im;
  itmp = 1;
  if (muDoubleScalarIsNaN(FFTSig[0].re) || muDoubleScalarIsNaN(FFTSig[0].im)) {
    ix = 2;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ix < 2049)) {
      ixstart = ix;
      if (!(muDoubleScalarIsNaN(FFTSig[ix - 1].re) || muDoubleScalarIsNaN
            (FFTSig[ix - 1].im))) {
        mtmp_re = FFTSig[ix - 1].re;
        mtmp_im = FFTSig[ix - 1].im;
        itmp = ix;
        exitg1 = TRUE;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 2048) {
    while (ixstart + 1 < 2049) {
      if ((muDoubleScalarAbs(FFTSig[ixstart].re) > 8.9884656743115785E+307) ||
          (muDoubleScalarAbs(FFTSig[ixstart].im) > 8.9884656743115785E+307) ||
          (muDoubleScalarAbs(mtmp_re) > 8.9884656743115785E+307) ||
          (muDoubleScalarAbs(mtmp_im) > 8.9884656743115785E+307)) {
        absbi = muDoubleScalarHypot(FFTSig[ixstart].re / 2.0, FFTSig[ixstart].im
          / 2.0);
        y = muDoubleScalarHypot(mtmp_re / 2.0, mtmp_im / 2.0);
      } else {
        absbi = muDoubleScalarHypot(FFTSig[ixstart].re, FFTSig[ixstart].im);
        y = muDoubleScalarHypot(mtmp_re, mtmp_im);
      }

      absxk = y / 2.0;
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &exponent);
          absxk = ldexp(1.0, exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf(absbi) &&
           muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0)))) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        absar = muDoubleScalarAbs(FFTSig[ixstart].re);
        absxk = muDoubleScalarAbs(FFTSig[ixstart].im);
        absbr = muDoubleScalarAbs(mtmp_re);
        absbi = muDoubleScalarAbs(mtmp_im);
        if (absar > absxk) {
          Ma = absar;
          absar = absxk;
        } else {
          Ma = absxk;
        }

        if (absbr > absbi) {
          absxk = absbr;
          absbr = absbi;
        } else {
          absxk = absbi;
        }

        if (Ma > absxk) {
          if (absar < absbr) {
            absbi = Ma - absxk;
            y = (absar / 2.0 + absbr / 2.0) / (Ma / 2.0 + absxk / 2.0) * (absbr
              - absar);
          } else {
            absbi = Ma;
            y = absxk;
          }
        } else if (Ma < absxk) {
          if (absar > absbr) {
            y = absxk - Ma;
            absbi = (absar / 2.0 + absbr / 2.0) / (Ma / 2.0 + absxk / 2.0) *
              (absar - absbr);
          } else {
            absbi = Ma;
            y = absxk;
          }
        } else {
          absbi = absar;
          y = absbr;
        }

        absxk = muDoubleScalarAbs(y / 2.0);
        if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &b_exponent);
            absxk = ldexp(1.0, b_exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf(absbi)
             && muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0)))) {
          p = TRUE;
        } else {
          p = FALSE;
        }

        if (p) {
          absbi = muDoubleScalarAtan2(FFTSig[ixstart].im, FFTSig[ixstart].re);
          y = muDoubleScalarAtan2(mtmp_im, mtmp_re);
          absxk = muDoubleScalarAbs(y / 2.0);
          if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
            if (absxk <= 2.2250738585072014E-308) {
              absxk = 4.94065645841247E-324;
            } else {
              frexp(absxk, &c_exponent);
              absxk = ldexp(1.0, c_exponent - 53);
            }
          } else {
            absxk = rtNaN;
          }

          if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf
               (absbi) && muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0))))
          {
            p = TRUE;
          } else {
            p = FALSE;
          }

          if (p) {
            if (absbi > 0.78539816339744828) {
              if (absbi > 2.3561944901923448) {
                absbi = -FFTSig[ixstart].im;
                y = -mtmp_im;
              } else {
                absbi = -FFTSig[ixstart].re;
                y = -mtmp_re;
              }
            } else if (absbi > -0.78539816339744828) {
              absbi = FFTSig[ixstart].im;
              y = mtmp_im;
            } else if (absbi > -2.3561944901923448) {
              absbi = FFTSig[ixstart].re;
              y = mtmp_re;
            } else {
              absbi = -FFTSig[ixstart].im;
              y = -mtmp_im;
            }

            absxk = muDoubleScalarAbs(y / 2.0);
            if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk)))
            {
              if (absxk <= 2.2250738585072014E-308) {
                absxk = 4.94065645841247E-324;
              } else {
                frexp(absxk, &d_exponent);
                absxk = ldexp(1.0, d_exponent - 53);
              }
            } else {
              absxk = rtNaN;
            }

            if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf
                 (absbi) && muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0))))
            {
              p = TRUE;
            } else {
              p = FALSE;
            }

            if (p) {
              absbi = 0.0;
              y = 0.0;
            }
          }
        }
      }

      if (absbi > y) {
        mtmp_re = FFTSig[ixstart].re;
        mtmp_im = FFTSig[ixstart].im;
        itmp = ixstart + 1;
      }

      ixstart++;
    }
  }

  emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
  f_SystemCore_step(&obj->pPhaseFreqOffset, filteredSignal, 97.65625 *
                    ((muDoubleScalarFloor((real_T)itmp / 1025.0) * 2048.0 + 1.0)
                     - (real_T)itmp) / 8.0, compensatedSignal);
  emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (QPSKCoarseFrequencyCompensator.c) */
