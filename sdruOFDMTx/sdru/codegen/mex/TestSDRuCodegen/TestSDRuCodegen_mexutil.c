/*
 * TestSDRuCodegen_mexutil.c
 *
 * Code generation for function 'TestSDRuCodegen_mexutil'
 *
 * C source code generated on: Tue Oct  8 16:14:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TestSDRuCodegen.h"
#include "TestSDRuCodegen_mexutil.h"

/* Function Definitions */
const mxArray *emlrt_marshallOut(real_T u)
{
  const mxArray *y;
  const mxArray *m5;
  y = NULL;
  m5 = mxCreateDoubleScalar(u);
  emlrtAssign(&y, m5);
  return y;
}

void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m8, 2, pArrays, "message",
    TRUE, location);
}

const mxArray *sdruroot(emlrtMCInfo *location)
{
  const mxArray *m9;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m9, 0, NULL, "sdruroot",
    TRUE, location);
}

void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "setupsdru",
                        TRUE, location);
}

/* End of code generation (TestSDRuCodegen_mexutil.c) */
