/*
 * createOFDMDemods.c
 *
 * Code generation for function 'createOFDMDemods'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "createOFDMDemods.h"
#include "OFDMDemodulator.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo rb_emlrtRSI = { 5, "createOFDMDemods",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/createOFDMDemods.m" };

static emlrtRSInfo sb_emlrtRSI = { 13, "createOFDMDemods",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/createOFDMDemods.m" };

/* Function Definitions */
void createOFDMDemods(OFDMDemodulator *iobj_0, OFDMDemodulator_1 *iobj_1,
                      OFDMDemodulator_1 **b_hPreambleDemod, OFDMDemodulator
                      **b_hDataDemod)
{
  OFDMDemodulator_1 *object;
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  *b_hDataDemod = OFDMDemodulator_OFDMDemodulator(iobj_0);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
  object = iobj_1;
  *b_hPreambleDemod = object;
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  object = *b_hPreambleDemod;
  emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (createOFDMDemods.c) */
