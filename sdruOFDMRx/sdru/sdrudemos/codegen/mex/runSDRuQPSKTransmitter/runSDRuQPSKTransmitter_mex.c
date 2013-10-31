/*
 * runSDRuQPSKTransmitter_mex.c
 *
 * Code generation for function 'runSDRuQPSKTransmitter'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "mex.h"
#include "runSDRuQPSKTransmitter_api.h"
#include "runSDRuQPSKTransmitter_initialize.h"
#include "runSDRuQPSKTransmitter_terminate.h"

/* Function Declarations */
static void runSDRuQPSKTransmitter_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "runSDRuQPSKTransmitter", NULL, false, {2241891196U,57585034U,1152014091U,3029887202U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void runSDRuQPSKTransmitter_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[1];
  int n = 0;
  int nInputs = nrhs;
  /* Module initialization. */
  runSDRuQPSKTransmitter_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooFewInputsConstants", 9, mxCHAR_CLASS, (int)strlen(mexFunctionName()), mexFunctionName(), mxCHAR_CLASS, 22, "runSDRuQPSKTransmitter", mxCHAR_CLASS, 22, "runSDRuQPSKTransmitter");
  }
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 1, mxCHAR_CLASS, 22, "runSDRuQPSKTransmitter");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 22, "runSDRuQPSKTransmitter");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  runSDRuQPSKTransmitter_api((const mxArray**)inputs);
  /* Module finalization. */
  runSDRuQPSKTransmitter_terminate();
}

void runSDRuQPSKTransmitter_atexit_wrapper(void)
{
   runSDRuQPSKTransmitter_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(runSDRuQPSKTransmitter_atexit_wrapper);
  /* Dispatch the entry-point. */
  runSDRuQPSKTransmitter_mexFunction(nlhs, plhs, nrhs, prhs);
}

mxArray *emlrtMexFcnProperties(void)
{
  const char *mexProperties[] = {
    "Version",
    "ResolvedFunctions",
    "EntryPoints"};
  const char *epProperties[] = {
    "Name",
    "NumberOfInputs",
    "NumberOfOutputs",
    "ConstantInputs"};
  mxArray *xResult = mxCreateStructMatrix(1,1,3,mexProperties);
  mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
  mxArray *xInputs = NULL;
  xInputs = mxCreateLogicalMatrix(1, 1);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("runSDRuQPSKTransmitter"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (runSDRuQPSKTransmitter_mex.c) */
