/*
 * TestSDRuCodegen_initialize.c
 *
 * Code generation for function 'TestSDRuCodegen_initialize'
 *
 * C source code generated on: Tue Oct  8 16:14:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TestSDRuCodegen.h"
#include "TestSDRuCodegen_initialize.h"
#include "TestSDRuCodegen_data.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;

/* Function Declarations */
static void TestSDRuCodegen_once(void);

/* Function Definitions */
static void TestSDRuCodegen_once(void)
{
  isSetupsdruCalled = FALSE;
}

void TestSDRuCodegen_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    TestSDRuCodegen_once();
  }
}

/* End of code generation (TestSDRuCodegen_initialize.c) */
