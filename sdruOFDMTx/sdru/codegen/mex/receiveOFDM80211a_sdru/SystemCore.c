/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "SystemCore.h"
#include "receiveData.h"
#include "OFDMDemodulator.h"
#include "receiveOFDM80211a_sdru_emxutil.h"
#include "AGC.h"
#include "closeDataConnection.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

static emlrtRSInfo mb_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo xc_emlrtRSI = { 85, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo yc_emlrtRSI = { 86, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ad_emlrtRSI = { 87, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ed_emlrtRSI = { 172, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo fd_emlrtRSI = { 173, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo gd_emlrtRSI = { 176, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo hd_emlrtRSI = { 183, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo id_emlrtRSI = { 184, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo jd_emlrtRSI = { 185, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo kd_emlrtRSI = { 189, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo md_emlrtRSI = { 282, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo sf_emlrtRSI = { 19, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRSInfo tf_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

static emlrtRSInfo uf_emlrtRSI = { 43, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRSInfo bg_emlrtRSI = { 6, "reportDrivers",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m" };

static emlrtMCInfo j_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo k_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo p_emlrtMCI = { 87, 13, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRTEInfo s_emlrtRTEI = { 1, 13, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRTEInfo eb_emlrtRTEI = { 41, 1, "update",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 43, 20, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 19, 1, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 43, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 88, 32, "flatAddrList", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

/* Function Declarations */
static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2]);
static void warning(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2])
{
  const mxArray *b_y;
  static const int32_T iv57[2] = { 1, 31 };

  const mxArray *m21;
  char_T cv94[31];
  int32_T i;
  static const char_T cv95[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  int32_T u_size[2];
  int32_T i23;
  char_T u_data[1024];
  const mxArray *c_y;
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  b_y = NULL;
  m21 = mxCreateCharArray(2, iv57);
  for (i = 0; i < 31; i++) {
    cv94[i] = cv95[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m21, cv94);
  emlrtAssign(&b_y, m21);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i23 = 0; i23 < i; i23++) {
    u_data[i23] = varargin_2_data[i23];
  }

  c_y = NULL;
  m21 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m21, (char_T *)&u_data);
  emlrtAssign(&c_y, m21);
  warning(message(b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
}

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
}

void SystemCore_release(comm_SDRuReceiver *obj)
{
  const mxArray *b_y;
  static const int32_T iv53[2] = { 1, 45 };

  const mxArray *m19;
  char_T cv86[45];
  int32_T i;
  static const char_T cv87[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv54[2] = { 1, 7 };

  char_T cv88[7];
  static const char_T cv89[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  comm_SDRuReceiver *b_obj;
  boolean_T disconnected;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  const mxArray *d_y;
  static const int32_T iv55[2] = { 1, 6 };

  char_T cv90[6];
  static const char_T cv91[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  char_T flatAddrList_data[128];
  const mxArray *e_y;
  int32_T errStrSize;
  const mxArray *f_y;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m19 = mxCreateCharArray(2, iv53);
    for (i = 0; i < 45; i++) {
      cv86[i] = cv87[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m19, cv86);
    emlrtAssign(&b_y, m19);
    c_y = NULL;
    m19 = mxCreateCharArray(2, iv54);
    for (i = 0; i < 7; i++) {
      cv88[i] = cv89[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m19, cv88);
    emlrtAssign(&c_y, m19);
    b_error(message(b_y, c_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
    disconnected = TRUE;
    if (b_obj->pConnected) {
      emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      closeDataConnection(b_obj->pDriverHandle, &errStat_i, errMsg_data,
                          errMsg_size);
      emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      if (errStat_i == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->pDriverHandle = 0;
        emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);

        /*    Copyright 2011-2012 The MathWorks, Inc. */
        emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);

        /*  */
        /*  This function unifies handling of interp vs. codegen call as well as */
        /*  errStat / errStr assignment. */
        /*  */
        /*    Copyright 2011-2012 The MathWorks, Inc. */
        if (!isSetupsdruCalled) {
          d_y = NULL;
          m19 = mxCreateCharArray(2, iv55);
          for (i = 0; i < 6; i++) {
            cv90[i] = cv91[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m19, cv90);
          emlrtAssign(&d_y, m19);
          setupsdru(sdruroot(&n_emlrtMCI), d_y, &o_emlrtMCI);
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

        emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
        reportDrivers_c(&flatAddrList_data[0], &errStat_i, &errStr_data[0]);
        emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&flatAddrList_data[0]);
        emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 128) {
        } else {
          emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
          e_y = NULL;
          m19 = mxCreateString("Assertion failed.");
          emlrtAssign(&e_y, m19);
          b_error(e_y, &p_emlrtMCI);
          emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
          i = 0;
        } else {
          i = emlrtDynamicBoundsCheckFastR2012b(i, 1, 128, &x_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /* errStat = UsrpErrorCapiEnumT(errStat_i); */
        emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
        errStrSize = strlen(&errStr_data[0]);
        emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
        if (errStrSize <= 1024) {
        } else {
          emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
          f_y = NULL;
          m19 = mxCreateString("Assertion failed.");
          emlrtAssign(&f_y, m19);
          b_error(f_y, &m_emlrtMCI);
          emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > errStrSize) {
        } else {
          emlrtDynamicBoundsCheckFastR2012b(errStrSize, 1, 1024, &n_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
        if (!(i == 0)) {
          disconnected = FALSE;
          emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
          eml_warning(errMsg_data, errMsg_size);
          emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
        }
      }

      emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pConnected = !disconnected;
      emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_reset(dspcodegen_FIRRateConverter_112 *obj)
{
  const mxArray *b_y;
  static const int32_T iv47[2] = { 1, 45 };

  const mxArray *m16;
  char_T cv74[45];
  int32_T i;
  static const char_T cv75[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv48[2] = { 1, 5 };

  char_T cv76[5];
  static const char_T cv77[5] = { 'r', 'e', 's', 'e', 't' };

  dspcodegen_FIRRateConverter_112 *b_obj;
  dsp_FIRRateConverter_1 *c_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m16 = mxCreateCharArray(2, iv47);
    for (i = 0; i < 45; i++) {
      cv74[i] = cv75[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m16, cv74);
    emlrtAssign(&b_y, m16);
    c_y = NULL;
    m16 = mxCreateCharArray(2, iv48);
    for (i = 0; i < 5; i++) {
      cv76[i] = cv77[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m16, cv76);
    emlrtAssign(&c_y, m16);
    b_error(message(b_y, c_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &gb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_step(comm_AGC *obj, const creal_T varargin_1[5120], creal_T
                     varargout_1[5120])
{
  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 45 };

  const mxArray *m8;
  char_T cv42[45];
  int32_T i;
  static const char_T cv43[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv26[2] = { 1, 4 };

  char_T cv44[4];
  static const char_T cv45[4] = { 's', 't', 'e', 'p' };

  comm_AGC *b_obj;
  const mxArray *d_y;
  static const int32_T iv27[2] = { 1, 51 };

  char_T cv46[51];
  static const char_T cv47[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv28[2] = { 1, 5 };

  char_T cv48[5];
  static const char_T cv49[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv29[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m8 = mxCreateCharArray(2, iv25);
    for (i = 0; i < 45; i++) {
      cv42[i] = cv43[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m8, cv42);
    emlrtAssign(&b_y, m8);
    c_y = NULL;
    m8 = mxCreateCharArray(2, iv26);
    for (i = 0; i < 4; i++) {
      cv44[i] = cv45[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m8, cv44);
    emlrtAssign(&c_y, m8);
    b_error(message(b_y, c_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m8 = mxCreateCharArray(2, iv27);
      for (i = 0; i < 51; i++) {
        cv46[i] = cv47[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m8, cv46);
      emlrtAssign(&d_y, m8);
      e_y = NULL;
      m8 = mxCreateCharArray(2, iv28);
      for (i = 0; i < 5; i++) {
        cv48[i] = cv49[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m8, cv48);
      emlrtAssign(&e_y, m8);
      b_error(message(d_y, e_y, &l_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->Gain = 1.0;
    emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pDetectorIsRectifier = TRUE;
    emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->Gain = 1.0;
    emlrtPopRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv29[i]) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  AGC_stepImpl(obj, varargin_1, varargout_1);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_step(OFDMDemodulator_1 *obj, const creal_T varargin_1[64],
  emxArray_creal_T *varargout_1)
{
  const mxArray *b_y;
  static const int32_T iv30[2] = { 1, 45 };

  const mxArray *m11;
  char_T cv50[45];
  int32_T i;
  static const char_T cv51[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv31[2] = { 1, 4 };

  char_T cv52[4];
  static const char_T cv53[4] = { 's', 't', 'e', 'p' };

  OFDMDemodulator_1 *b_obj;
  const mxArray *d_y;
  static const int32_T iv32[2] = { 1, 51 };

  char_T cv54[51];
  static const char_T cv55[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv33[2] = { 1, 5 };

  char_T cv56[5];
  static const char_T cv57[5] = { 's', 'e', 't', 'u', 'p' };

  int8_T fullGrid[64];
  static const int8_T iv34[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m11 = mxCreateCharArray(2, iv30);
    for (i = 0; i < 45; i++) {
      cv50[i] = cv51[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m11, cv50);
    emlrtAssign(&b_y, m11);
    c_y = NULL;
    m11 = mxCreateCharArray(2, iv31);
    for (i = 0; i < 4; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m11, cv52);
    emlrtAssign(&c_y, m11);
    b_error(message(b_y, c_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m11 = mxCreateCharArray(2, iv32);
      for (i = 0; i < 51; i++) {
        cv54[i] = cv55[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m11, cv54);
      emlrtAssign(&d_y, m11);
      e_y = NULL;
      m11 = mxCreateCharArray(2, iv33);
      for (i = 0; i < 5; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m11, cv56);
      emlrtAssign(&e_y, m11);
      b_error(message(d_y, e_y, &l_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
    for (i = 0; i < 11; i++) {
      fullGrid[iv34[i]] = 0;
    }

    emlrtPushRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
    i = 0;
    ii = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ii < 65)) {
      guard1 = FALSE;
      if (fullGrid[ii - 1] == 1) {
        i++;
        ii_data[i - 1] = (int8_T)ii;
        if (i >= 64) {
          exitg1 = TRUE;
        } else {
          guard1 = TRUE;
        }
      } else {
        guard1 = TRUE;
      }

      if (guard1 == TRUE) {
        ii++;
      }
    }

    if (1 > i) {
      ii = 0;
    } else {
      ii = i;
    }

    for (i = 0; i < ii; i++) {
      b_ii_data[i] = ii_data[i];
    }

    for (i = 0; i < ii; i++) {
      ii_data[i] = b_ii_data[i];
    }

    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity((emxArray__common *)b_obj->pDataLinearIndices, i, (int32_T)
                      sizeof(real_T), &s_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    emlrtPopRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  OFDMDemodulator_stepImpl(obj, varargin_1, varargout_1);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_step(dspcodegen_FIRRateConverter_112 *obj, const creal_T
  varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *b_y;
  static const int32_T iv42[2] = { 1, 45 };

  const mxArray *m15;
  char_T cv66[45];
  int32_T i;
  static const char_T cv67[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv43[2] = { 1, 4 };

  char_T cv68[4];
  static const char_T cv69[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter_112 *b_obj;
  const mxArray *d_y;
  static const int32_T iv44[2] = { 1, 51 };

  char_T cv70[51];
  static const char_T cv71[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *e_y;
  static const int32_T iv45[2] = { 1, 5 };

  char_T cv72[5];
  static const char_T cv73[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_1 *c_obj;
  boolean_T exitg1;
  static const int8_T iv46[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  int32_T outIdx;
  int32_T inIdx;
  int32_T m;
  int32_T inBufIdx;
  int32_T inputChannelOffset;
  int32_T n;
  int32_T outputStartIdx;
  int32_T outputStopIdx;
  real_T acc_re;
  real_T acc_im;
  int32_T coefPolyphaseOffset;
  real_T prod_re;
  real_T prod_im;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m15 = mxCreateCharArray(2, iv42);
    for (i = 0; i < 45; i++) {
      cv66[i] = cv67[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m15, cv66);
    emlrtAssign(&b_y, m15);
    c_y = NULL;
    m15 = mxCreateCharArray(2, iv43);
    for (i = 0; i < 4; i++) {
      cv68[i] = cv69[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m15, cv68);
    emlrtAssign(&c_y, m15);
    b_error(message(b_y, c_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m15 = mxCreateCharArray(2, iv44);
      for (i = 0; i < 51; i++) {
        cv70[i] = cv71[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m15, cv70);
      emlrtAssign(&d_y, m15);
      e_y = NULL;
      m15 = mxCreateCharArray(2, iv45);
      for (i = 0; i < 5; i++) {
        cv72[i] = cv73[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m15, cv72);
      emlrtAssign(&e_y, m15);
      b_error(message(d_y, e_y, &l_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &hb_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &hb_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &gb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv46[i]) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&uf_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;
  for (m = 0; m < 12; m++) {
    /* Update inBufIdx and inputChannelOffset for current channel */
    inBufIdx = c_obj->W1_InBufIdx;
    inputChannelOffset = m * 21;
    for (n = 0; n < 24; n++) {
      outputStartIdx = c_obj->P2_StartIdx;
      outputStopIdx = c_obj->P3_StopIdx;

      /* Read input into inBufArray */
      c_obj->W0_InBuf[inBufIdx + inputChannelOffset] = varargin_1[inIdx];
      inIdx++;

      /* Generate outputs (if any) for current input n */
      while (outputStartIdx < outputStopIdx) {
        acc_re = 0.0;
        acc_im = 0.0;
        coefPolyphaseOffset = c_obj->P1_PolyphaseSelector[outputStartIdx] * 21;
        for (i = inBufIdx; i < 21; i++) {
          prod_re = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
            c_obj->W0_InBuf[i + inputChannelOffset].re;
          prod_im = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
            c_obj->W0_InBuf[i + inputChannelOffset].im;
          acc_re += prod_re;
          acc_im += prod_im;
        }

        for (i = 0; i < inBufIdx; i++) {
          prod_re = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21]
            * c_obj->W0_InBuf[i + inputChannelOffset].re;
          prod_im = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21]
            * c_obj->W0_InBuf[i + inputChannelOffset].im;
          acc_re += prod_re;
          acc_im += prod_im;
        }

        varargout_1[outIdx].re = acc_re;
        varargout_1[outIdx].im = acc_im;
        outIdx++;
        outputStartIdx++;
      }

      /* Decrement inBufIdx, wrap if necessary */
      if (inBufIdx == 0) {
        inBufIdx = 20;
      } else {
        inBufIdx--;
      }
    }
  }

  /* Update inBufIdx */
  c_obj->W1_InBufIdx = inBufIdx;
  emlrtPopRtStackR2012b(&uf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &eb_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
