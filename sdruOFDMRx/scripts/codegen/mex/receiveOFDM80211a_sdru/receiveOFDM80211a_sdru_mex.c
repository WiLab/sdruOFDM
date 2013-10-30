/*
 * receiveOFDM80211a_sdru_mex.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru'
 *
 * C source code generated on: Mon Oct 28 14:02:52 2013
 *
 */

/* Include files */
#include "mex.h"
#include "receiveOFDM80211a_sdru_api.h"
#include "receiveOFDM80211a_sdru_initialize.h"
#include "receiveOFDM80211a_sdru_terminate.h"

/* Function Declarations */
static void receiveOFDM80211a_sdru_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "receiveOFDM80211a_sdru", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void receiveOFDM80211a_sdru_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *outputs[2];
  mxArray *inputs[5];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  receiveOFDM80211a_sdruStackData* b_receiveOFDM80211a_sdruStackDa = (receiveOFDM80211a_sdruStackData*)mxCalloc(1,sizeof(receiveOFDM80211a_sdruStackData));
  /* Module initialization. */
  receiveOFDM80211a_sdru_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs < 5) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooFewInputsConstants", 9, mxCHAR_CLASS, (int)strlen(mexFunctionName()), mexFunctionName(), mxCHAR_CLASS, 22, "receiveOFDM80211a_sdru", mxCHAR_CLASS, 22, "receiveOFDM80211a_sdru");
  }
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 5, mxCHAR_CLASS, 22, "receiveOFDM80211a_sdru");
  } else if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 22, "receiveOFDM80211a_sdru");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  receiveOFDM80211a_sdru_api(b_receiveOFDM80211a_sdruStackDa, (const mxArray**)inputs, (const mxArray**)outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  receiveOFDM80211a_sdru_terminate();
  mxFree(b_receiveOFDM80211a_sdruStackDa);
}

void receiveOFDM80211a_sdru_atexit_wrapper(void)
{
   receiveOFDM80211a_sdru_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(receiveOFDM80211a_sdru_atexit_wrapper);
  /* Dispatch the entry-point. */
  receiveOFDM80211a_sdru_mexFunction(nlhs, plhs, nrhs, prhs);
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
  xInputs = mxCreateLogicalMatrix(1, 5);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("receiveOFDM80211a_sdru"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(2));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(2));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (receiveOFDM80211a_sdru_mex.c) */
