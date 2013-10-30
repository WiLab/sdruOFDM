/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "SystemCore.h"
#include "SDRuTransmitter.h"
#include "sendComplexDoubleData.h"
#include "QPSKBitsGenerator.h"
#include "QPSKTransmitter.h"
#include "closeDataConnection.h"
#include "runSDRuQPSKTransmitter_mexutil.h"
#include "runSDRuQPSKTransmitter_data.h"

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

static emlrtRSInfo ib_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo jb_emlrtRSI = { 29, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo kb_emlrtRSI = { 35, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo lb_emlrtRSI = { 37, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo mb_emlrtRSI = { 1, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo nb_emlrtRSI = { 22, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo ob_emlrtRSI = { 1, "QPSKModulator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/QPSKModulator.p" };

static emlrtRSInfo qb_emlrtRSI = { 53, "QPSKTransmitter",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTransmitter.m" };

static emlrtRSInfo ub_emlrtRSI = { 31, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo vb_emlrtRSI = { 32, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo wb_emlrtRSI = { 33, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo xb_emlrtRSI = { 35, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

static emlrtRSInfo yc_emlrtRSI = { 73, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo bd_emlrtRSI = { 63, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo dd_emlrtRSI = { 53, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo fd_emlrtRSI = { 42, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo id_emlrtRSI = { 85, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo jd_emlrtRSI = { 86, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo kd_emlrtRSI = { 87, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo vd_emlrtRSI = { 6, "reportDrivers",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m" };

static emlrtMCInfo i_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo j_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo r_emlrtMCI = { 87, 13, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 88, 32, "flatAddrList", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

/* Function Declarations */
static void SystemCore_setup(QPSKTransmitter_201 *obj);
static void b_SystemCore_setup(QPSKBitsGenerator_220 *obj);
static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2]);
static void warning(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void SystemCore_setup(QPSKTransmitter_201 *obj)
{
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 51 };

  const mxArray *m3;
  char_T cv10[51];
  int32_T i;
  static const char_T cv11[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 5 };

  char_T cv12[5];
  static const char_T cv13[5] = { 's', 'e', 't', 'u', 'p' };

  QPSKTransmitter_201 *b_obj;
  QPSKBitsGenerator_220 *c_obj;
  commcodegen_QPSKModulator *d_obj;
  comm_QPSKModulator_0 *e_obj;
  static const real_T dv0[8] = { 0.70710678118654757, 0.70710678118654746,
    -0.70710678118654746, 0.70710678118654757, -0.70710678118654768,
    -0.70710678118654746, 0.70710678118654735, -0.70710678118654768 };

  dspcodegen_FIRInterpolator *f_obj;
  dsp_FIRInterpolator_1 *g_obj;
  static const real_T dv1[44] = { -0.00032152513755937586,
    -0.0050525378759331855, 0.0015157613627799506, 0.021220659078919381,
    -0.053051647697298428, 0.56830988618379075, -0.053051647697298428,
    0.021220659078919381, 0.0015157613627799506, -0.0050525378759331855,
    -0.00032152513755937586, 0.0029481703141975117, -0.0019107752125577093,
    -0.00822601367387976, 0.0077340901460669293, 0.078421330357653737,
    0.48724767920221634, -0.0784213303576537, 0.0077340901460669388,
    0.0082260136738797583, -0.0019107752125577162, 0.0, 0.0025008786559919567,
    0.0053590256914113447, -0.0075026359679758728, -0.037513179839879431,
    0.28931623481627516, 0.28931623481627516, -0.037513179839879431,
    -0.0075026359679758728, 0.0053590256914113447, 0.0025008786559919567, 0.0,
    -0.0019107752125577162, 0.0082260136738797583, 0.0077340901460669388,
    -0.0784213303576537, 0.48724767920221634, 0.078421330357653737,
    0.0077340901460669293, -0.00822601367387976, -0.0019107752125577093,
    0.0029481703141975117, 0.0 };

  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 45 };

  char_T cv14[45];
  static const char_T cv15[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 5 };

  static const char_T cv16[5] = { 'r', 'e', 's', 'e', 't' };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m3 = mxCreateCharArray(2, iv13);
    for (i = 0; i < 51; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m3, cv10);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv14);
    for (i = 0; i < 5; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m3, cv12);
    emlrtAssign(&b_y, m3);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->pBitGenerator;
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &b_obj->pQPSKModulator;
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  d_obj->isInitialized = FALSE;
  d_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  d_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  e_obj = &d_obj->cSFunObject;

  /* System object Constructor function: comm.QPSKModulator */
  e_obj->S0_isInitialized = FALSE;
  e_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    e_obj->P0_modmap[i] = dv0[i];
  }

  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  f_obj = &b_obj->pTransmitterFilter;
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  f_obj->isInitialized = FALSE;
  f_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  f_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  g_obj = &f_obj->cSFunObject;

  /* System object Constructor function: dsp.FIRInterpolator */
  g_obj->S0_isInitialized = FALSE;
  g_obj->S1_isReleased = FALSE;
  for (i = 0; i < 44; i++) {
    g_obj->P0_FILTER_COEFF[i] = dv1[i];
  }

  g_obj->P1_IC.re = 0.0;
  g_obj->P1_IC.im = 0.0;
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  f_obj = &b_obj->pTransmitterFilter;
  if (!f_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m3 = mxCreateCharArray(2, iv15);
    for (i = 0; i < 45; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m3, cv14);
    emlrtAssign(&c_y, m3);
    d_y = NULL;
    m3 = mxCreateCharArray(2, iv16);
    for (i = 0; i < 5; i++) {
      cv12[i] = cv16[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m3, cv12);
    emlrtAssign(&d_y, m3);
    b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (f_obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    g_obj = &f_obj->cSFunObject;
    if (g_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &j_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRInterpolator */
    g_obj->W1_TapDelayIndex = 0;
    for (i = 0; i < 11; i++) {
      g_obj->W0_TapDelayBuff[i].re = 0.0;
      g_obj->W0_TapDelayBuff[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
}

static void b_SystemCore_setup(QPSKBitsGenerator_220 *obj)
{
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 51 };

  const mxArray *m6;
  char_T cv29[51];
  int32_T i;
  static const char_T cv30[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 5 };

  char_T cv31[5];
  static const char_T cv32[5] = { 's', 'e', 't', 'u', 'p' };

  QPSKBitsGenerator_220 *b_obj;
  static const int8_T value[26] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1,
    1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 };

  commcodegen_Scrambler *c_obj;
  comm_Scrambler_2 *d_obj;
  static const int8_T iv26[5] = { 1, 1, 1, 0, 1 };

  static const char_T b_value[1500] = { 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '1', '1',
    '1', '1', '1', '1', '1', '1', '1', '2', '2', '2', '2', '2', '2', '2', '2',
    '2', '2', '3', '3', '3', '3', '3', '3', '3', '3', '3', '3', '4', '4', '4',
    '4', '4', '4', '4', '4', '4', '4', '5', '5', '5', '5', '5', '5', '5', '5',
    '5', '5', '6', '6', '6', '6', '6', '6', '6', '6', '6', '6', '7', '7', '7',
    '7', '7', '7', '7', '7', '7', '7', '8', '8', '8', '8', '8', '8', '8', '8',
    '8', '8', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9' };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m6 = mxCreateCharArray(2, iv24);
    for (i = 0; i < 51; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m6, cv29);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = mxCreateCharArray(2, iv25);
    for (i = 0; i < 5; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m6, cv31);
    emlrtAssign(&b_y, m6);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 26; i++) {
    b_obj->pHeader[i] = value[i];
  }

  emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->pCount = 0.0;
  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->pScrambler;
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &c_obj->cSFunObject;

  /* System object Constructor function: comm.Scrambler */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 5; i++) {
    d_obj->P0_Polynomial[i] = (uint8_T)iv26[i];
  }

  for (i = 0; i < 4; i++) {
    d_obj->P1_IniState[i] = 0;
  }

  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 1500; i++) {
    b_obj->pMsgStrSet[i] = b_value[i];
  }

  emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
}

static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m20;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m20, 1, &pArray,
    "message", TRUE, location);
}

static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m22;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m22, 3, pArrays,
    "message", TRUE, location);
}

static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv59[2] = { 1, 31 };

  const mxArray *m16;
  char_T cv89[31];
  int32_T i;
  static const char_T cv90[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  int32_T u_size[2];
  int32_T i12;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m16 = mxCreateCharArray(2, iv59);
  for (i = 0; i < 31; i++) {
    cv89[i] = cv90[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m16, cv89);
  emlrtAssign(&y, m16);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i12 = 0; i12 < i; i12++) {
    u_data[i12] = varargin_2_data[i12];
  }

  b_y = NULL;
  m16 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m16, (char_T *)&u_data);
  emlrtAssign(&b_y, m16);
  warning(message(y, b_y, &i_emlrtMCI), &j_emlrtMCI);
  emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
}

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
}

void SystemCore_release(QPSKTransmitter_201 *obj)
{
  const mxArray *y;
  static const int32_T iv53[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv77[45];
  int32_T i;
  static const char_T cv78[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv54[2] = { 1, 7 };

  char_T cv79[7];
  static const char_T cv80[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  QPSKTransmitter_201 *b_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m13 = mxCreateCharArray(2, iv53);
    for (i = 0; i < 45; i++) {
      cv77[i] = cv78[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m13, cv77);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv54);
    for (i = 0; i < 7; i++) {
      cv79[i] = cv80[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m13, cv79);
    emlrtAssign(&b_y, m13);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_step(QPSKTransmitter_201 *obj, creal_T varargout_1[400])
{
  const mxArray *y;
  static const int32_T iv11[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv6[45];
  int32_T i;
  static const char_T cv7[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 4 };

  char_T cv8[4];
  static const char_T cv9[4] = { 's', 't', 'e', 'p' };

  QPSKTransmitter_201 *b_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m2 = mxCreateCharArray(2, iv11);
    for (i = 0; i < 45; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m2, cv6);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv12);
    for (i = 0; i < 4; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m2, cv8);
    emlrtAssign(&b_y, m2);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  QPSKTransmitter_stepImpl(obj, varargout_1);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_release(comm_SDRuTransmitter *obj)
{
  const mxArray *y;
  static const int32_T iv55[2] = { 1, 45 };

  const mxArray *m14;
  char_T cv81[45];
  int32_T i;
  static const char_T cv82[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv56[2] = { 1, 7 };

  char_T cv83[7];
  static const char_T cv84[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  comm_SDRuTransmitter *b_obj;
  boolean_T disconnected;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  const mxArray *c_y;
  static const int32_T iv57[2] = { 1, 6 };

  char_T cv85[6];
  static const char_T cv86[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  char_T flatAddrList_data[128];
  const mxArray *d_y;
  int32_T errStrSize;
  const mxArray *e_y;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m14 = mxCreateCharArray(2, iv55);
    for (i = 0; i < 45; i++) {
      cv81[i] = cv82[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m14, cv81);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = mxCreateCharArray(2, iv56);
    for (i = 0; i < 7; i++) {
      cv83[i] = cv84[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m14, cv83);
    emlrtAssign(&b_y, m14);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    disconnected = TRUE;
    if (b_obj->pConnected) {
      emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      closeDataConnection(b_obj->pDriverHandle, &errStat_i, errMsg_data,
                          errMsg_size);
      emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      if (errStat_i == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->pDriverHandle = 0;
        emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);

        /*    Copyright 2011-2012 The MathWorks, Inc. */
        emlrtPushRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);

        /*  */
        /*  This function unifies handling of interp vs. codegen call as well as */
        /*  errStat / errStr assignment. */
        /*  */
        /*    Copyright 2011-2012 The MathWorks, Inc. */
        if (!isSetupsdruCalled) {
          c_y = NULL;
          m14 = mxCreateCharArray(2, iv57);
          for (i = 0; i < 6; i++) {
            cv85[i] = cv86[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m14, cv85);
          emlrtAssign(&c_y, m14);
          setupsdru(sdruroot(&p_emlrtMCI), c_y, &q_emlrtMCI);
          isSetupsdruCalled = TRUE;
        }

        /*  These sizes must match those in C code. */
        /*  Arbitrary max imposed on ML/SL side */
        /*  function is being called in interpreted mode */
        /*  not being found:  */
        /*  eml_allow_enum_inputs; */
        /* errStat_i = int32(0); */
        for (i = 0; i < 1024; i++) {
          errStr_data[i] = '\x00';
        }

        for (i = 0; i < 128; i++) {
          flatAddrList_data[i] = '\x00';
        }

        emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
        reportDrivers_c(&flatAddrList_data[0], &errStat_i, &errStr_data[0]);
        emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&flatAddrList_data[0]);
        emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 128) {
        } else {
          emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
          d_y = NULL;
          m14 = mxCreateString("Assertion failed.");
          emlrtAssign(&d_y, m14);
          b_error(d_y, &r_emlrtMCI);
          emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
          i = 0;
        } else {
          i = emlrtDynamicBoundsCheckFastR2012b(i, 1, 128, &n_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /* errStat = UsrpErrorCapiEnumT(errStat_i); */
        emlrtPushRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
        errStrSize = strlen(&errStr_data[0]);
        emlrtPopRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
        if (errStrSize <= 1024) {
        } else {
          emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
          e_y = NULL;
          m14 = mxCreateString("Assertion failed.");
          emlrtAssign(&e_y, m14);
          b_error(e_y, &o_emlrtMCI);
          emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > errStrSize) {
        } else {
          emlrtDynamicBoundsCheckFastR2012b(errStrSize, 1, 1024, &m_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        if (!(i == 0)) {
          disconnected = FALSE;
          emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
          eml_warning(errMsg_data, errMsg_size);
          emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        }
      }

      emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pConnected = !disconnected;
      emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void b_SystemCore_step(QPSKBitsGenerator_220 *obj, real_T varargout_1[200],
  real_T varargout_2[105])
{
  const mxArray *y;
  static const int32_T iv22[2] = { 1, 45 };

  const mxArray *m5;
  char_T cv25[45];
  int32_T i;
  static const char_T cv26[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv23[2] = { 1, 4 };

  char_T cv27[4];
  static const char_T cv28[4] = { 's', 't', 'e', 'p' };

  QPSKBitsGenerator_220 *b_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m5 = mxCreateCharArray(2, iv22);
    for (i = 0; i < 45; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, cv25);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = mxCreateCharArray(2, iv23);
    for (i = 0; i < 4; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m5, cv27);
    emlrtAssign(&b_y, m5);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  QPSKBitsGenerator_stepImpl(obj, varargout_1, varargout_2);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_step(commcodegen_QPSKModulator *obj, const real_T varargin_1
  [200], creal_T varargout_1[100])
{
  const mxArray *y;
  static const int32_T iv33[2] = { 1, 45 };

  const mxArray *m8;
  char_T cv45[45];
  int32_T i;
  static const char_T cv46[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 4 };

  char_T cv47[4];
  static const char_T cv48[4] = { 's', 't', 'e', 'p' };

  commcodegen_QPSKModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv35[2] = { 1, 51 };

  char_T cv49[51];
  static const char_T cv50[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv36[2] = { 1, 5 };

  char_T cv51[5];
  static const char_T cv52[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const uint8_T value[8] = { 200U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  boolean_T exitg1;
  static const uint8_T uv1[8] = { 200U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  comm_QPSKModulator_0 *c_obj;
  int32_T inIdx;
  int32_T outIdx;
  int32_T symbolIndex;
  real_T u;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m8 = mxCreateCharArray(2, iv33);
    for (i = 0; i < 45; i++) {
      cv45[i] = cv46[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m8, cv45);
    emlrtAssign(&y, m8);
    b_y = NULL;
    m8 = mxCreateCharArray(2, iv34);
    for (i = 0; i < 4; i++) {
      cv47[i] = cv48[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m8, cv47);
    emlrtAssign(&b_y, m8);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m8 = mxCreateCharArray(2, iv35);
      for (i = 0; i < 51; i++) {
        cv49[i] = cv50[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m8, cv49);
      emlrtAssign(&c_y, m8);
      d_y = NULL;
      m8 = mxCreateCharArray(2, iv36);
      for (i = 0; i < 5; i++) {
        cv51[i] = cv52[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m8, cv51);
      emlrtAssign(&d_y, m8);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = value[k];
    }

    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != uv1[k]) {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = value[k];
      }

      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: comm.QPSKModulator */
  inIdx = 0;
  outIdx = 0;
  for (i = 0; i < 100; i++) {
    symbolIndex = 0;
    for (k = 0; k < 2; k++) {
      symbolIndex <<= 1;
      u = varargin_1[inIdx];
      inIdx++;
      symbolIndex += (int32_T)muDoubleScalarFloor(u);
    }

    if (symbolIndex >= 0) {
      k = (int32_T)((uint32_T)symbolIndex >> 1);
    } else {
      k = ~(int32_T)((uint32_T)~symbolIndex >> 1);
    }

    symbolIndex ^= k;
    varargout_1[outIdx].re = c_obj->P0_modmap[symbolIndex << 1];
    varargout_1[outIdx].im = c_obj->P0_modmap[(symbolIndex << 1) + 1];
    outIdx++;
  }

  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_step(comm_SDRuTransmitter *obj, const creal_T varargin_1[400])
{
  const mxArray *y;
  static const int32_T iv37[2] = { 1, 45 };

  const mxArray *m9;
  char_T cv53[45];
  int32_T i;
  static const char_T cv54[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 4 };

  char_T cv55[4];
  static const char_T cv56[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 51 };

  char_T cv57[51];
  static const char_T cv58[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv40[2] = { 1, 5 };

  char_T cv59[5];
  static const char_T cv60[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i7;
  static const int16_T value[8] = { 400, 1, 1, 1, 1, 1, 1, 1 };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv41[2] = { 1, 35 };

  char_T cv61[35];
  static const char_T cv62[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv42[2] = { 1, 12 };

  char_T cv63[12];
  static const char_T cv64[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv43[2] = { 1, 43 };

  char_T cv65[43];
  static const char_T cv66[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv44[2] = { 1, 35 };

  static const char_T cv67[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv45[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv46[2] = { 1, 26 };

  char_T cv68[26];
  static const char_T cv69[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv47[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv48[2] = { 1, 35 };

  static const char_T cv70[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T b_value[4];
  boolean_T exitg1;
  static const int16_T iv49[8] = { 400, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m9 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 45; i++) {
      cv53[i] = cv54[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m9, cv53);
    emlrtAssign(&y, m9);
    b_y = NULL;
    m9 = mxCreateCharArray(2, iv38);
    for (i = 0; i < 4; i++) {
      cv55[i] = cv56[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m9, cv55);
    emlrtAssign(&b_y, m9);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m9 = mxCreateCharArray(2, iv39);
      for (i = 0; i < 51; i++) {
        cv57[i] = cv58[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m9, cv57);
      emlrtAssign(&c_y, m9);
      d_y = NULL;
      m9 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 5; i++) {
        cv59[i] = cv60[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m9, cv59);
      emlrtAssign(&d_y, m9);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    for (i7 = 0; i7 < 8; i7++) {
      b_obj->inputVarSize1[i7] = (uint32_T)value[i7];
    }

    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    SDRuTransmitter_setupImplLocal(b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);

    /* reportSDRuStatus SDRu status reporter */
    /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
    /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
    /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
    /*    can be Warning, Error , or None. */
    /*  */
    /*    USRP(R) is a trademark of National Instruments Corp. */
    /*    Copyright 2012 The MathWorks, Inc. */
    switch (deviceStatus) {
     case UsrpDriverNotCompatible:
      emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
        e_y = NULL;
        m9 = mxCreateCharArray(2, iv41);
        for (i = 0; i < 35; i++) {
          cv61[i] = cv62[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m9, cv61);
        emlrtAssign(&e_y, m9);
        f_y = NULL;
        m9 = mxCreateCharArray(2, iv42);
        for (i = 0; i < 12; i++) {
          cv63[i] = cv64[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m9, cv63);
        emlrtAssign(&f_y, m9);
        g_y = NULL;
        m9 = mxCreateCharArray(2, iv43);
        for (i = 0; i < 43; i++) {
          cv65[i] = cv66[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m9, cv65);
        emlrtAssign(&g_y, m9);
        b_error(c_message(e_y, f_y, g_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverNotResponding:
      emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
        h_y = NULL;
        m9 = mxCreateCharArray(2, iv44);
        for (i = 0; i < 35; i++) {
          cv61[i] = cv67[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m9, cv61);
        emlrtAssign(&h_y, m9);
        i_y = NULL;
        m9 = mxCreateCharArray(2, iv45);
        for (i = 0; i < 12; i++) {
          cv63[i] = cv64[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m9, cv63);
        emlrtAssign(&i_y, m9);
        b_error(message(h_y, i_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverBusy:
      emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
        j_y = NULL;
        m9 = mxCreateCharArray(2, iv46);
        for (i = 0; i < 26; i++) {
          cv68[i] = cv69[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m9, cv68);
        emlrtAssign(&j_y, m9);
        k_y = NULL;
        m9 = mxCreateCharArray(2, iv47);
        for (i = 0; i < 12; i++) {
          cv63[i] = cv64[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m9, cv63);
        emlrtAssign(&k_y, m9);
        b_error(message(j_y, k_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverError:
      emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
        l_y = NULL;
        m9 = mxCreateCharArray(2, iv48);
        for (i = 0; i < 35; i++) {
          cv61[i] = cv70[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m9, cv61);
        emlrtAssign(&l_y, m9);
        b_error(b_message(l_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
      break;
    }

    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    if (deviceStatus == UsrpDriverSuccess) {
      emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pConnected = TRUE;
      emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pConnected = FALSE;
      emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 4; i++) {
      for (i7 = 0; i7 < 4; i7++) {
        b_value[i7] = b_obj->tunablePropertyChanged[i7];
      }

      b_value[i] = FALSE;
      emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      for (i7 = 0; i7 < 4; i7++) {
        b_obj->tunablePropertyChanged[i7] = b_value[i7];
      }

      emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv49[i]) {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      for (i7 = 0; i7 < 8; i7++) {
        b_obj->inputVarSize1[i7] = (uint32_T)value[i7];
      }

      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  SDRuTransmitter_stepImpl(obj, varargin_1);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
