/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "SystemProp.h"

/* Function Definitions */
void c_SystemProp_matlabCodegenSetAn(sdruQPSKRx_283 *obj, const creal_T value)
{
  obj->pOldOutput = value;
}

void d_SystemProp_matlabCodegenSetAn(sdruQPSKDataDecoder_264 *obj, real_T value)
{
  obj->pCount = value;
}

void e_SystemProp_matlabCodegenSetAn(sdruQPSKDataDecoder_264 *obj, real_T value)
{
  obj->pDelay = value;
}

void f_SystemProp_matlabCodegenSetAn(sdruQPSKDataDecoder_264 *obj, real_T value)
{
  obj->pPhase = value;
}

void g_SystemProp_matlabCodegenSetAn(sdruQPSKDataDecoder_264 *obj, real_T value)
{
  obj->pFrameIndex = value;
}

void h_SystemProp_matlabCodegenSetAn(sdruQPSKDataDecoder_264 *obj, real_T value)
{
  obj->pSyncIndex = value;
}

void i_SystemProp_matlabCodegenSetAn(sdruQPSKDataDecoder_264 *obj, boolean_T
  value)
{
  obj->pSyncFlag = value;
}

/* End of code generation (SystemProp.c) */
