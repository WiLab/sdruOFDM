/*
 * sdruQPSKRx.c
 *
 * Code generation for function 'sdruQPSKRx'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "sdruQPSKRx.h"
#include "SystemCore.h"
#include "SystemProp.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo m_emlrtRSI = { 1, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo n_emlrtRSI = { 48, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo jc_emlrtRSI = { 54, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo kc_emlrtRSI = { 55, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo lc_emlrtRSI = { 56, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo mc_emlrtRSI = { 58, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo nc_emlrtRSI = { 74, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo oc_emlrtRSI = { 75, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo pc_emlrtRSI = { 90, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo qc_emlrtRSI = { 94, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo rc_emlrtRSI = { 1, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo sc_emlrtRSI = { 134, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo uc_emlrtRSI = { 1, "QPSKCoarseFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m" };

static emlrtRSInfo vc_emlrtRSI = { 16, "QPSKCoarseFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m" };

static emlrtRSInfo wc_emlrtRSI = { 1, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo xc_emlrtRSI = { 17, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo yc_emlrtRSI = { 1, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo ad_emlrtRSI = { 35, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo bd_emlrtRSI = { 1, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo cd_emlrtRSI = { 39, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo dd_emlrtRSI = { 109, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo ed_emlrtRSI = { 113, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo fd_emlrtRSI = { 116, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo gd_emlrtRSI = { 129, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo hd_emlrtRSI = { 132, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo id_emlrtRSI = { 135, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

static emlrtRSInfo jd_emlrtRSI = { 140, "sdruQPSKRx",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m" };

/* Function Definitions */
sdruQPSKRx_283 *sdruQPSKRx_sdruQPSKRx(sdruQPSKRx_283 *obj)
{
  sdruQPSKRx_283 *b_obj;
  sdruQPSKRx_283 *c_obj;
  b_obj = obj;

  /*    Copyright 2012 The MathWorks, Inc.     */
  /*  Stores the previous output of fine frequency compensation which is used by the same System object for phase error detection */
  /*  Defines the size of vector that will pe processed in AGC System object */
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

void sdruQPSKRx_setupImpl(sdruQPSKRx_283 *obj)
{
  comm_AGC *b_obj;
  dspcodegen_FIRDecimator *c_obj;
  dsp_FIRDecimator_0 *d_obj;
  int32_T i;
  static const real_T dv1[42] = { 0.0014740851570987559, -0.0009553876062788581,
    -0.00095538760627885463, 0.0041130068369398792, -0.00411300683693988,
    0.0038670450730334694, 0.0038670450730334646, -0.039210665178826848,
    0.039210665178826869, 0.24362383960110817, 0.24362383960110817,
    0.039210665178826869, -0.039210665178826848, 0.0038670450730334646,
    0.0038670450730334694, -0.00411300683693988, 0.0041130068369398792,
    -0.00095538760627885463, -0.0009553876062788581, 0.0014740851570987559, 0.0,
    -0.00016076256877968793, 0.0012504393279959784, -0.0025262689379665928,
    0.0026795128457056724, 0.00075788068138997531, -0.0037513179839879364,
    0.01061032953945969, -0.018756589919939715, -0.026525823848649214,
    0.14465811740813758, 0.28415494309189537, 0.14465811740813758,
    -0.026525823848649214, -0.018756589919939715, 0.01061032953945969,
    -0.0037513179839879364, 0.00075788068138997531, 0.0026795128457056724,
    -0.0025262689379665928, 0.0012504393279959784, -0.00016076256877968793 };

  d_QPSKCoarseFrequencyCompensato *e_obj;
  sdruQPSKRx_283 *f_obj;
  QPSKFineFrequencyCompensator *g_obj;
  QPSKTimingRecovery *h_obj;
  sdruQPSKDataDecoder_264 *i_obj;
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->pAGC;
  emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->isInitialized = FALSE;
  b_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &obj->pRxFilter;
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &c_obj->cSFunObject;

  /* System object Constructor function: dsp.FIRDecimator */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 42; i++) {
    d_obj->P0_FILT[i] = dv1[i];
  }

  d_obj->P1_IC.re = 0.0;
  d_obj->P1_IC.im = 0.0;
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  e_obj = &obj->pCoarseFreqCompensator;
  emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  e_obj->isInitialized = FALSE;
  e_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  f_obj = obj;
  f_obj->pOldOutput.re = 0.0;
  f_obj->pOldOutput.im = 0.0;
  emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  g_obj = &obj->pFineFreqCompensator;
  emlrtPushRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  g_obj->isInitialized = FALSE;
  g_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  h_obj = &obj->pTimingRec;
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  h_obj->isInitialized = FALSE;
  h_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
  i_obj = &obj->pDataDecod;

  /*    Copyright 2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  i_obj->isInitialized = FALSE;
  i_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
}

void sdruQPSKRx_stepImpl(runSDRuQPSKReceiverStackData *SD, sdruQPSKRx_283 *obj,
  const creal_T bufferSignal[4000], real_T BER[3])
{
  creal_T dcv0[4000];
  int32_T i;
  creal_T RCRxSignal[2000];
  creal_T b_RCRxSignal[2000];
  creal_T b_obj[2];
  creal_T fineCompSignal;
  real_T d0;
  boolean_T isDataValid;
  creal_T dataOut[100];

  /*  Refer C.57 to C.61 in Michael Rice's "Digital Communications  */
  /*  - A Discrete-Time Approach" for K1 and K2 */
  /*  used to store past value */
  /*  Refer C.57 to C.61 in Michael Rice's "Digital Communications  */
  /*  - A Discrete-Time Approach" for K1 and K2 */
  /*  Apply automatic gain control to the signal */
  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_step(&obj->pAGC, bufferSignal, SD->f0.b);
  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pass the signal through square root raised cosine received */
  /*  filter */
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 4000; i++) {
    dcv0[i].re = 0.5 * SD->f0.b[i].re;
    dcv0[i].im = 0.5 * SD->f0.b[i].im;
  }

  d_SystemCore_step(&obj->pRxFilter, dcv0, RCRxSignal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);

  /*  Coarsely compensate for the frequency offset */
  emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&b_RCRxSignal[0], &RCRxSignal[0], 2000U * sizeof(creal_T));
  e_SystemCore_step(&obj->pCoarseFreqCompensator, b_RCRxSignal, RCRxSignal);
  emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);

  /*  Buffers to store values required for plotting */
  /*  Scalar processing for fine frequency compensation and timing */
  /*  recovery  */
  for (i = 0; i < 3; i++) {
    BER[i] = 0.0;
  }

  for (i = 0; i < 2000; i++) {
    /*  Fine frequency compensation */
    emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    b_obj[0] = obj->pOldOutput;
    b_obj[1] = RCRxSignal[i];
    fineCompSignal = g_SystemCore_step(&obj->pFineFreqCompensator, b_obj);
    emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    c_SystemProp_matlabCodegenSetAn(obj, fineCompSignal);
    emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);

    /*  Timing recovery of the received data */
    emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
    h_SystemCore_step(&obj->pTimingRec, fineCompSignal, dataOut, &isDataValid,
                      &d0);
    emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
    if (isDataValid) {
      /*  Decoding the received data */
      emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
      i_SystemCore_step(&obj->pDataDecod, dataOut, BER);
      emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

/* End of code generation (sdruQPSKRx.c) */
