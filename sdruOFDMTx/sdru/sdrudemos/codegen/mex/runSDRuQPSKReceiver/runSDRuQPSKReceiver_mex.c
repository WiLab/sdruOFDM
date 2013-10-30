/*
 * runSDRuQPSKReceiver_mex.c
 *
 * Code generation for function 'runSDRuQPSKReceiver'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "mex.h"
#include "runSDRuQPSKReceiver_api.h"
#include "runSDRuQPSKReceiver_initialize.h"
#include "runSDRuQPSKReceiver_terminate.h"

/* Function Declarations */
static void runSDRuQPSKReceiver_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "runSDRuQPSKReceiver", NULL, false, {1216595376U,2926997685U,3579123032U,337771816U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void runSDRuQPSKReceiver_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *outputs[1];
  mxArray *inputs[1];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  runSDRuQPSKReceiverStackData* c_runSDRuQPSKReceiverStackDataL = (runSDRuQPSKReceiverStackData*)mxCalloc(1,sizeof(runSDRuQPSKReceiverStackData));
  /* Module initialization. */
  runSDRuQPSKReceiver_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooFewInputsConstants", 9, mxCHAR_CLASS, (int)strlen(mexFunctionName()), mexFunctionName(), mxCHAR_CLASS, 19, "runSDRuQPSKReceiver", mxCHAR_CLASS, 19, "runSDRuQPSKReceiver");
  }
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 1, mxCHAR_CLASS, 19, "runSDRuQPSKReceiver");
  } else if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 19, "runSDRuQPSKReceiver");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  runSDRuQPSKReceiver_api(c_runSDRuQPSKReceiverStackDataL, (const mxArray**)inputs, (const mxArray**)outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  runSDRuQPSKReceiver_terminate();
  mxFree(c_runSDRuQPSKReceiverStackDataL);
}

void runSDRuQPSKReceiver_atexit_wrapper(void)
{
   runSDRuQPSKReceiver_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(runSDRuQPSKReceiver_atexit_wrapper);
  /* Dispatch the entry-point. */
  runSDRuQPSKReceiver_mexFunction(nlhs, plhs, nrhs, prhs);
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
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("runSDRuQPSKReceiver"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(1));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (runSDRuQPSKReceiver_mex.c) */
