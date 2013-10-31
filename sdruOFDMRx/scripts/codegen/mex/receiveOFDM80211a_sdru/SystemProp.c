/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "SystemProp.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo u_emlrtRTEI = { 1, 13, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

/* Function Definitions */
void c_SystemProp_matlabCodegenSetAn(comm_AGC *obj, real_T value)
{
  obj->Gain = value;
}

void d_SystemProp_matlabCodegenSetAn(OFDMDemodulator *obj, const real_T
  value_data[768], const int32_T value_size[1])
{
  int32_T i17;
  int32_T loop_ub;
  i17 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity((emxArray__common *)obj->pDataLinearIndices, i17, (int32_T)
                    sizeof(real_T), &u_emlrtRTEI);
  loop_ub = value_size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    obj->pDataLinearIndices->data[i17] = value_data[i17];
  }
}

/* End of code generation (SystemProp.c) */
