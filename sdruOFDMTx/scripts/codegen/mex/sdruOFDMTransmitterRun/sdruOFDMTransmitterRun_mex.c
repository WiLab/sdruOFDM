/*
 * sdruOFDMTransmitterRun_mex.c
 *
 * Code generation for function 'sdruOFDMTransmitterRun'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "mex.h"
#include "sdruOFDMTransmitterRun_api.h"
#include "sdruOFDMTransmitterRun_initialize.h"
#include "sdruOFDMTransmitterRun_terminate.h"

/* Function Declarations */
static void sdruOFDMTransmitterRun_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "sdruOFDMTransmitterRun", NULL, false, {3024490070U,1960474184U,2004393916U,2615046318U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void sdruOFDMTransmitterRun_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[2];
  int n = 0;
  int nInputs = nrhs;
  sdruOFDMTransmitterRunStackData* b_sdruOFDMTransmitterRunStackDa = (sdruOFDMTransmitterRunStackData*)mxCalloc(1,sizeof(sdruOFDMTransmitterRunStackData));
  /* Module initialization. */
  sdruOFDMTransmitterRun_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 2, mxCHAR_CLASS, 22, "sdruOFDMTransmitterRun");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 22, "sdruOFDMTransmitterRun");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  sdruOFDMTransmitterRun_api(b_sdruOFDMTransmitterRunStackDa, (const mxArray**)inputs);
  /* Module finalization. */
  sdruOFDMTransmitterRun_terminate();
  mxFree(b_sdruOFDMTransmitterRunStackDa);
}

void sdruOFDMTransmitterRun_atexit_wrapper(void)
{
   sdruOFDMTransmitterRun_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(sdruOFDMTransmitterRun_atexit_wrapper);
  /* Dispatch the entry-point. */
  sdruOFDMTransmitterRun_mexFunction(nlhs, plhs, nrhs, prhs);
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
  xInputs = mxCreateLogicalMatrix(1, 2);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("sdruOFDMTransmitterRun"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(2));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (sdruOFDMTransmitterRun_mex.c) */
