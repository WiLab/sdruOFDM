/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "SystemCore.h"
#include "sdruQPSKDataDecoder.h"
#include "QPSKTimingRecovery.h"
#include "QPSKCoarseFrequencyCompensator.h"
#include "sdruQPSKRx.h"
#include "SDRuReceiver.h"
#include "receiveData.h"
#include "closeDataConnection.h"
#include "runSDRuQPSKReceiver_mexutil.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

static emlrtRSInfo kb_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo tb_emlrtRSI = { 73, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo vb_emlrtRSI = { 63, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo xb_emlrtRSI = { 53, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo ac_emlrtRSI = { 42, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo dc_emlrtRSI = { 85, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ec_emlrtRSI = { 86, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo fc_emlrtRSI = { 87, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo kd_emlrtRSI = { 172, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ld_emlrtRSI = { 173, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo md_emlrtRSI = { 176, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo nd_emlrtRSI = { 183, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo od_emlrtRSI = { 184, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pd_emlrtRSI = { 185, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo qd_emlrtRSI = { 189, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo rd_emlrtRSI = { 282, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo sd_emlrtRSI = { 271, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo td_emlrtRSI = { 19, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRSInfo vd_emlrtRSI = { 43, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRSInfo wd_emlrtRSI = { 22, "QPSKCoarseFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m" };

static emlrtRSInfo xd_emlrtRSI = { 1, "PhaseFrequencyOffset",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p" };

static emlrtRSInfo yd_emlrtRSI = { 15, "assert",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/assert.m" };

static emlrtRSInfo be_emlrtRSI = { 23, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo ce_emlrtRSI = { 24, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo de_emlrtRSI = { 27, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo ee_emlrtRSI = { 41, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo fe_emlrtRSI = { 44, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo ge_emlrtRSI = { 46, "QPSKFineFrequencyCompensator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m" };

static emlrtRSInfo ie_emlrtRSI = { 41, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo je_emlrtRSI = { 43, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo ke_emlrtRSI = { 44, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo le_emlrtRSI = { 45, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo me_emlrtRSI = { 46, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo ne_emlrtRSI = { 47, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo oe_emlrtRSI = { 48, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo pe_emlrtRSI = { 49, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo qe_emlrtRSI = { 50, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo re_emlrtRSI = { 51, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo se_emlrtRSI = { 52, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo te_emlrtRSI = { 55, "QPSKTimingRecovery",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKTimingRecovery.m" };

static emlrtRSInfo fg_emlrtRSI = { 124, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo fh_emlrtRSI = { 6, "reportDrivers",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m" };

static emlrtMCInfo i_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo j_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo o_emlrtMCI = { 87, 13, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtMCInfo q_emlrtMCI = { 15, 19, "assert",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/assert.m" };

static emlrtRTEInfo k_emlrtRTEI = { 41, 1, "update",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo l_emlrtRTEI = { 43, 20, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo m_emlrtRTEI = { 19, 1, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo n_emlrtRTEI = { 43, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 88, 32, "flatAddrList", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

/* Function Declarations */
static void SystemCore_checkTunableProps(comm_SDRuReceiver *obj);
static void SystemCore_setup(comm_SDRuReceiver *obj);
static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2]);
static void warning(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void SystemCore_checkTunableProps(comm_SDRuReceiver *obj)
{
  comm_SDRuReceiver *b_obj;
  int32_T i;
  boolean_T value[4];
  int32_T i8;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    for (i = 0; i < 4; i++) {
      for (i8 = 0; i8 < 4; i8++) {
        value[i8] = b_obj->tunablePropertyChanged[i8];
      }

      value[i] = FALSE;
      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      for (i8 = 0; i8 < 4; i8++) {
        b_obj->tunablePropertyChanged[i8] = value[i8];
      }

      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }
}

static void SystemCore_setup(comm_SDRuReceiver *obj)
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

  comm_SDRuReceiver *b_obj;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 35 };

  char_T cv14[35];
  static const char_T cv15[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 12 };

  char_T cv16[12];
  static const char_T cv17[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *e_y;
  static const int32_T iv17[2] = { 1, 43 };

  char_T cv18[43];
  static const char_T cv19[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *f_y;
  static const int32_T iv18[2] = { 1, 35 };

  static const char_T cv20[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *g_y;
  static const int32_T iv19[2] = { 1, 12 };

  const mxArray *h_y;
  static const int32_T iv20[2] = { 1, 26 };

  char_T cv21[26];
  static const char_T cv22[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *i_y;
  static const int32_T iv21[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv22[2] = { 1, 35 };

  static const char_T cv23[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  SDRuReceiver_setupImplLocal(b_obj, &deviceStatus, errMsg_data, errMsg_size);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);

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
    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    if (!(deviceStatus == UsrpDriverNotCompatible)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m3 = mxCreateCharArray(2, iv15);
      for (i = 0; i < 35; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m3, cv14);
      emlrtAssign(&c_y, m3);
      d_y = NULL;
      m3 = mxCreateCharArray(2, iv16);
      for (i = 0; i < 12; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m3, cv16);
      emlrtAssign(&d_y, m3);
      e_y = NULL;
      m3 = mxCreateCharArray(2, iv17);
      for (i = 0; i < 43; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m3, cv18);
      emlrtAssign(&e_y, m3);
      b_error(c_message(c_y, d_y, e_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    break;

   case UsrpDriverNotResponding:
    emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
    if (!(deviceStatus == UsrpDriverNotResponding)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      f_y = NULL;
      m3 = mxCreateCharArray(2, iv18);
      for (i = 0; i < 35; i++) {
        cv14[i] = cv20[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m3, cv14);
      emlrtAssign(&f_y, m3);
      g_y = NULL;
      m3 = mxCreateCharArray(2, iv19);
      for (i = 0; i < 12; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m3, cv16);
      emlrtAssign(&g_y, m3);
      b_error(message(f_y, g_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
    break;

   case UsrpDriverBusy:
    emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
    if (!(deviceStatus == UsrpDriverBusy)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      h_y = NULL;
      m3 = mxCreateCharArray(2, iv20);
      for (i = 0; i < 26; i++) {
        cv21[i] = cv22[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m3, cv21);
      emlrtAssign(&h_y, m3);
      i_y = NULL;
      m3 = mxCreateCharArray(2, iv21);
      for (i = 0; i < 12; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m3, cv16);
      emlrtAssign(&i_y, m3);
      b_error(message(h_y, i_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
    break;

   case UsrpDriverError:
    emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
    if (!(deviceStatus == UsrpDriverError)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      j_y = NULL;
      m3 = mxCreateCharArray(2, iv22);
      for (i = 0; i < 35; i++) {
        cv14[i] = cv23[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m3, cv14);
      emlrtAssign(&j_y, m3);
      b_error(b_message(j_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
    break;
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  if (deviceStatus == UsrpDriverSuccess) {
    emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pConnected = TRUE;
    emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  } else {
    emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pConnected = FALSE;
    emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m30;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m30, 1, &pArray,
    "message", TRUE, location);
}

static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m32;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m32, 3, pArrays,
    "message", TRUE, location);
}

static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv105[2] = { 1, 31 };

  const mxArray *m25;
  char_T cv153[31];
  int32_T i;
  static const char_T cv154[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  int32_T u_size[2];
  int32_T i12;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m25 = mxCreateCharArray(2, iv105);
  for (i = 0; i < 31; i++) {
    cv153[i] = cv154[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m25, cv153);
  emlrtAssign(&y, m25);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i12 = 0; i12 < i; i12++) {
    u_data[i12] = varargin_2_data[i12];
  }

  b_y = NULL;
  m25 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m25, (char_T *)&u_data);
  emlrtAssign(&b_y, m25);
  warning(message(y, b_y, &i_emlrtMCI), &j_emlrtMCI);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
}

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
}

void SystemCore_release(sdruQPSKRx_283 *obj)
{
  const mxArray *y;
  static const int32_T iv99[2] = { 1, 45 };

  const mxArray *m22;
  char_T cv141[45];
  int32_T i;
  static const char_T cv142[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv100[2] = { 1, 7 };

  char_T cv143[7];
  static const char_T cv144[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  sdruQPSKRx_283 *b_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m22 = mxCreateCharArray(2, iv99);
    for (i = 0; i < 45; i++) {
      cv141[i] = cv142[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m22, cv141);
    emlrtAssign(&y, m22);
    b_y = NULL;
    m22 = mxCreateCharArray(2, iv100);
    for (i = 0; i < 7; i++) {
      cv143[i] = cv144[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m22, cv143);
    emlrtAssign(&b_y, m22);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_step(comm_SDRuReceiver *obj, creal_T varargout_1[4000], uint32_T
                     *varargout_2)
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

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  SDRuReceiver_stepImpl(obj, varargout_1, varargout_2);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_release(comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv101[2] = { 1, 45 };

  const mxArray *m23;
  char_T cv145[45];
  int32_T i;
  static const char_T cv146[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv102[2] = { 1, 7 };

  char_T cv147[7];
  static const char_T cv148[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  comm_SDRuReceiver *b_obj;
  boolean_T disconnected;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  const mxArray *c_y;
  static const int32_T iv103[2] = { 1, 6 };

  char_T cv149[6];
  static const char_T cv150[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  char_T flatAddrList_data[128];
  const mxArray *d_y;
  int32_T errStrSize;
  const mxArray *e_y;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m23 = mxCreateCharArray(2, iv101);
    for (i = 0; i < 45; i++) {
      cv145[i] = cv146[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m23, cv145);
    emlrtAssign(&y, m23);
    b_y = NULL;
    m23 = mxCreateCharArray(2, iv102);
    for (i = 0; i < 7; i++) {
      cv147[i] = cv148[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m23, cv147);
    emlrtAssign(&b_y, m23);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
    disconnected = TRUE;
    if (b_obj->pConnected) {
      emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      closeDataConnection(b_obj->pDriverHandle, &errStat_i, errMsg_data,
                          errMsg_size);
      emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      if (errStat_i == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->pDriverHandle = 0;
        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);

        /*    Copyright 2011-2012 The MathWorks, Inc. */
        emlrtPushRtStackR2012b(&fh_emlrtRSI, emlrtRootTLSGlobal);

        /*  */
        /*  This function unifies handling of interp vs. codegen call as well as */
        /*  errStat / errStr assignment. */
        /*  */
        /*    Copyright 2011-2012 The MathWorks, Inc. */
        if (!isSetupsdruCalled) {
          c_y = NULL;
          m23 = mxCreateCharArray(2, iv103);
          for (i = 0; i < 6; i++) {
            cv149[i] = cv150[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m23, cv149);
          emlrtAssign(&c_y, m23);
          setupsdru(sdruroot(&m_emlrtMCI), c_y, &n_emlrtMCI);
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

        emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
        reportDrivers_c(&flatAddrList_data[0], &errStat_i, &errStr_data[0]);
        emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&flatAddrList_data[0]);
        emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 128) {
        } else {
          emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
          d_y = NULL;
          m23 = mxCreateString("Assertion failed.");
          emlrtAssign(&d_y, m23);
          b_error(d_y, &o_emlrtMCI);
          emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
          i = 0;
        } else {
          i = emlrtDynamicBoundsCheckFastR2012b(i, 1, 128, &o_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /* errStat = UsrpErrorCapiEnumT(errStat_i); */
        emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
        errStrSize = strlen(&errStr_data[0]);
        emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
        if (errStrSize <= 1024) {
        } else {
          emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
          e_y = NULL;
          m23 = mxCreateString("Assertion failed.");
          emlrtAssign(&e_y, m23);
          b_error(e_y, &l_emlrtMCI);
          emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > errStrSize) {
        } else {
          emlrtDynamicBoundsCheckFastR2012b(errStrSize, 1, 1024, &l_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&fh_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        if (!(i == 0)) {
          disconnected = FALSE;
          emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
          eml_warning(errMsg_data, errMsg_size);
          emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        }
      }

      emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pConnected = !disconnected;
      emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void b_SystemCore_step(runSDRuQPSKReceiverStackData *SD, sdruQPSKRx_283 *obj,
  const creal_T varargin_1[4000], real_T varargout_1[3])
{
  const mxArray *y;
  static const int32_T iv26[2] = { 1, 45 };

  const mxArray *m7;
  char_T cv30[45];
  int32_T i;
  static const char_T cv31[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv27[2] = { 1, 4 };

  char_T cv32[4];
  static const char_T cv33[4] = { 's', 't', 'e', 'p' };

  sdruQPSKRx_283 *b_obj;
  const mxArray *c_y;
  static const int32_T iv28[2] = { 1, 51 };

  char_T cv34[51];
  static const char_T cv35[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv29[2] = { 1, 5 };

  char_T cv36[5];
  static const char_T cv37[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 4000, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv30[8] = { 4000, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m7 = mxCreateCharArray(2, iv26);
    for (i = 0; i < 45; i++) {
      cv30[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m7, cv30);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = mxCreateCharArray(2, iv27);
    for (i = 0; i < 4; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m7, cv32);
    emlrtAssign(&b_y, m7);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m7 = mxCreateCharArray(2, iv28);
      for (i = 0; i < 51; i++) {
        cv34[i] = cv35[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m7, cv34);
      emlrtAssign(&c_y, m7);
      d_y = NULL;
      m7 = mxCreateCharArray(2, iv29);
      for (i = 0; i < 5; i++) {
        cv36[i] = cv37[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m7, cv36);
      emlrtAssign(&d_y, m7);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    sdruQPSKRx_setupImpl(b_obj);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv30[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  sdruQPSKRx_stepImpl(SD, obj, varargin_1, varargout_1);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_step(comm_AGC *obj, const creal_T varargin_1[4000], creal_T
  varargout_1[4000])
{
  const mxArray *y;
  static const int32_T iv31[2] = { 1, 45 };

  const mxArray *m8;
  char_T cv38[45];
  int32_T i;
  static const char_T cv39[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv32[2] = { 1, 4 };

  char_T cv40[4];
  static const char_T cv41[4] = { 's', 't', 'e', 'p' };

  comm_AGC *b_obj;
  const mxArray *c_y;
  static const int32_T iv33[2] = { 1, 51 };

  char_T cv42[51];
  static const char_T cv43[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv34[2] = { 1, 5 };

  char_T cv44[5];
  static const char_T cv45[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 4000, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv35[8] = { 4000, 1, 1, 1, 1, 1, 1, 1 };

  real_T g;
  int32_T p;
  int32_T e_y;
  int16_T indices[4];
  real_T f_y[4];
  real_T g_y;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m8 = mxCreateCharArray(2, iv31);
    for (i = 0; i < 45; i++) {
      cv38[i] = cv39[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m8, cv38);
    emlrtAssign(&y, m8);
    b_y = NULL;
    m8 = mxCreateCharArray(2, iv32);
    for (i = 0; i < 4; i++) {
      cv40[i] = cv41[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m8, cv40);
    emlrtAssign(&b_y, m8);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m8 = mxCreateCharArray(2, iv33);
      for (i = 0; i < 51; i++) {
        cv42[i] = cv43[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m8, cv42);
      emlrtAssign(&c_y, m8);
      d_y = NULL;
      m8 = mxCreateCharArray(2, iv34);
      for (i = 0; i < 5; i++) {
        cv44[i] = cv45[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m8, cv44);
      emlrtAssign(&d_y, m8);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->Gain = 1.0;
    emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pDetectorIsRectifier = TRUE;
    emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->Gain = 1.0;
    emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv35[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  g = b_obj->Gain;
  for (i = 0; i < 4000; i++) {
    varargout_1[i].re = 0.0;
    varargout_1[i].im = 0.0;
  }

  if (b_obj->pDetectorIsRectifier) {
    for (p = 0; p < 1000; p++) {
      e_y = p << 2;
      for (i = 0; i < 4; i++) {
        indices[i] = (int16_T)((i + e_y) + 1);
      }

      for (i = 0; i < 4; i++) {
        varargout_1[indices[i] - 1].re = g * varargin_1[indices[i] - 1].re;
        varargout_1[indices[i] - 1].im = g * varargin_1[indices[i] - 1].im;
      }

      for (i = 0; i < 4; i++) {
        f_y[i] = muDoubleScalarHypot(varargout_1[indices[i] - 1].re,
          varargout_1[indices[i] - 1].im);
      }

      g_y = f_y[0];
      for (i = 0; i < 3; i++) {
        g_y += f_y[i + 1];
      }

      g += 0.1 * (1.0 - g_y / 4.0);
      if (g < 1.4901161193847656E-8) {
        g = 1.4901161193847656E-8;
      } else {
        if (g > 1000.0) {
          g = 1000.0;
        }
      }
    }
  } else {
    for (p = 0; p < 1000; p++) {
      e_y = p << 2;
      for (i = 0; i < 4; i++) {
        indices[i] = (int16_T)((i + e_y) + 1);
      }

      for (i = 0; i < 4; i++) {
        varargout_1[indices[i] - 1].re = g * varargin_1[indices[i] - 1].re;
        varargout_1[indices[i] - 1].im = g * varargin_1[indices[i] - 1].im;
      }

      for (i = 0; i < 4; i++) {
        g_y = muDoubleScalarHypot(varargout_1[indices[i] - 1].re,
          varargout_1[indices[i] - 1].im);
        f_y[i] = g_y * g_y;
      }

      g_y = f_y[0];
      for (i = 0; i < 3; i++) {
        g_y += f_y[i + 1];
      }

      g += 0.1 * (1.0 - g_y / 4.0);
      if (g < 1.4901161193847656E-8) {
        g = 1.4901161193847656E-8;
      } else {
        if (g > 1000.0) {
          g = 1000.0;
        }
      }
    }
  }

  emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->Gain = g;
  emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_step(dspcodegen_FIRDecimator *obj, const creal_T varargin_1
  [4000], creal_T varargout_1[2000])
{
  const mxArray *y;
  static const int32_T iv36[2] = { 1, 45 };

  const mxArray *m9;
  char_T cv46[45];
  int32_T i;
  static const char_T cv47[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv37[2] = { 1, 4 };

  char_T cv48[4];
  static const char_T cv49[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRDecimator *b_obj;
  const mxArray *c_y;
  static const int32_T iv38[2] = { 1, 51 };

  char_T cv50[51];
  static const char_T cv51[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv39[2] = { 1, 5 };

  char_T cv52[5];
  static const char_T cv53[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T phaseIdx;
  static const int16_T value[8] = { 4000, 1, 1, 1, 1, 1, 1, 1 };

  dsp_FIRDecimator_0 *c_obj;
  boolean_T exitg1;
  static const int16_T iv40[8] = { 4000, 1, 1, 1, 1, 1, 1, 1 };

  int32_T inputIdx;
  int32_T curBuf;
  int32_T curTapIdx;
  int32_T outIdx;
  int32_T cffIdx;
  int32_T tapIdx;
  int32_T j;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m9 = mxCreateCharArray(2, iv36);
    for (i = 0; i < 45; i++) {
      cv46[i] = cv47[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m9, cv46);
    emlrtAssign(&y, m9);
    b_y = NULL;
    m9 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 4; i++) {
      cv48[i] = cv49[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m9, cv48);
    emlrtAssign(&b_y, m9);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m9 = mxCreateCharArray(2, iv38);
      for (i = 0; i < 51; i++) {
        cv50[i] = cv51[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m9, cv50);
      emlrtAssign(&c_y, m9);
      d_y = NULL;
      m9 = mxCreateCharArray(2, iv39);
      for (i = 0; i < 5; i++) {
        cv52[i] = cv53[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m9, cv52);
      emlrtAssign(&d_y, m9);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (phaseIdx = 0; phaseIdx < 8; phaseIdx++) {
      b_obj->inputVarSize1[phaseIdx] = (uint32_T)value[phaseIdx];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRDecimator */
      c_obj->W6_TapDelayIndex = 0;
      c_obj->W0_PhaseIdx = 1;
      c_obj->W4_CoeffIdx = 21;
      c_obj->W1_OutIdx = 0;
      for (i = 0; i < 8000; i++) {
        c_obj->W2_OutBuff[i].re = 0.0;
        c_obj->W2_OutBuff[i].im = 0.0;
      }

      c_obj->W3_Sums.re = 0.0;
      c_obj->W3_Sums.im = 0.0;
      for (i = 0; i < 42; i++) {
        c_obj->W5_StatesBuff[i].re = 0.0;
        c_obj->W5_StatesBuff[i].im = 0.0;
      }

      c_obj->W8_readBufIdx = TRUE;
      c_obj->W7_wrtBufIdx = TRUE;
      for (phaseIdx = 0; phaseIdx < 2000; phaseIdx++) {
        c_obj->W2_OutBuff[2000 + phaseIdx] = c_obj->P1_IC;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRDecimator */
    c_obj->W6_TapDelayIndex = 0;
    c_obj->W0_PhaseIdx = 1;
    c_obj->W4_CoeffIdx = 21;
    c_obj->W1_OutIdx = 0;
    for (i = 0; i < 8000; i++) {
      c_obj->W2_OutBuff[i].re = 0.0;
      c_obj->W2_OutBuff[i].im = 0.0;
    }

    c_obj->W3_Sums.re = 0.0;
    c_obj->W3_Sums.im = 0.0;
    for (i = 0; i < 42; i++) {
      c_obj->W5_StatesBuff[i].re = 0.0;
      c_obj->W5_StatesBuff[i].im = 0.0;
    }

    c_obj->W8_readBufIdx = TRUE;
    c_obj->W7_wrtBufIdx = TRUE;
    for (phaseIdx = 0; phaseIdx < 2000; phaseIdx++) {
      c_obj->W2_OutBuff[2000 + phaseIdx] = c_obj->P1_IC;
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  phaseIdx = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (phaseIdx < 8)) {
    if (b_obj->inputVarSize1[phaseIdx] != (uint32_T)iv40[phaseIdx]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (phaseIdx = 0; phaseIdx < 8; phaseIdx++) {
        b_obj->inputVarSize1[phaseIdx] = (uint32_T)value[phaseIdx];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      phaseIdx++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &l_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRDecimator */
    c_obj->W6_TapDelayIndex = 0;
    c_obj->W0_PhaseIdx = 1;
    c_obj->W4_CoeffIdx = 21;
    c_obj->W1_OutIdx = 0;
    for (i = 0; i < 8000; i++) {
      c_obj->W2_OutBuff[i].re = 0.0;
      c_obj->W2_OutBuff[i].im = 0.0;
    }

    c_obj->W3_Sums.re = 0.0;
    c_obj->W3_Sums.im = 0.0;
    for (i = 0; i < 42; i++) {
      c_obj->W5_StatesBuff[i].re = 0.0;
      c_obj->W5_StatesBuff[i].im = 0.0;
    }

    c_obj->W8_readBufIdx = TRUE;
    c_obj->W7_wrtBufIdx = TRUE;
    for (phaseIdx = 0; phaseIdx < 2000; phaseIdx++) {
      c_obj->W2_OutBuff[2000 + phaseIdx] = c_obj->P1_IC;
    }
  }

  emlrtPushRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.FIRDecimator */
  inputIdx = 0;
  curBuf = c_obj->W7_wrtBufIdx;
  phaseIdx = c_obj->W0_PhaseIdx;
  curTapIdx = c_obj->W6_TapDelayIndex;
  outIdx = c_obj->W1_OutIdx;
  cffIdx = c_obj->W4_CoeffIdx;
  for (i = 0; i < 4000; i++) {
    tapIdx = curTapIdx;
    c_obj->W5_StatesBuff[curTapIdx] = varargin_1[inputIdx];
    inputIdx++;
    for (j = 0; j < 21; j++) {
      c_obj->W3_Sums.re += c_obj->W5_StatesBuff[tapIdx].re * c_obj->
        P0_FILT[cffIdx];
      c_obj->W3_Sums.im += c_obj->W5_StatesBuff[tapIdx].im * c_obj->
        P0_FILT[cffIdx];
      cffIdx++;
      tapIdx -= 2;
      if (tapIdx < 0) {
        tapIdx += 42;
      }
    }

    curTapIdx++;
    if (curTapIdx >= 42) {
      curTapIdx = 0;
    }

    phaseIdx++;
    if (phaseIdx >= 2) {
      phaseIdx = outIdx;
      if (curBuf > 0) {
        phaseIdx = outIdx + 2000;
      }

      c_obj->W2_OutBuff[phaseIdx] = c_obj->W3_Sums;
      c_obj->W3_Sums.re = 0.0;
      c_obj->W3_Sums.im = 0.0;
      outIdx++;
      if (outIdx >= 2000) {
        outIdx = 0;
        curBuf = !(curBuf != 0);
      }

      phaseIdx = 0;
      cffIdx = 0;
    }
  }

  c_obj->W4_CoeffIdx = cffIdx;
  c_obj->W0_PhaseIdx = phaseIdx;
  c_obj->W6_TapDelayIndex = curTapIdx;
  c_obj->W1_OutIdx = outIdx;
  c_obj->W7_wrtBufIdx = (curBuf != 0);
  if (c_obj->W8_readBufIdx == 1) {
    for (phaseIdx = 0; phaseIdx < 2000; phaseIdx++) {
      c_obj->O0_Y0[phaseIdx] = c_obj->W2_OutBuff[2000 + phaseIdx];
    }
  } else {
    for (phaseIdx = 0; phaseIdx < 2000; phaseIdx++) {
      c_obj->O0_Y0[phaseIdx] = c_obj->W2_OutBuff[phaseIdx];
    }
  }

  c_obj->W8_readBufIdx = !c_obj->W8_readBufIdx;
  for (i = 0; i < 2000; i++) {
    varargout_1[i] = c_obj->O0_Y0[i];
  }

  emlrtPopRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &k_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void e_SystemCore_step(d_QPSKCoarseFrequencyCompensato *obj, const creal_T
  varargin_1[2000], creal_T varargout_1[2000])
{
  const mxArray *y;
  static const int32_T iv41[2] = { 1, 45 };

  const mxArray *m10;
  char_T cv54[45];
  int32_T i;
  static const char_T cv55[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv42[2] = { 1, 4 };

  char_T cv56[4];
  static const char_T cv57[4] = { 's', 't', 'e', 'p' };

  d_QPSKCoarseFrequencyCompensato *b_obj;
  const mxArray *c_y;
  static const int32_T iv43[2] = { 1, 51 };

  char_T cv58[51];
  static const char_T cv59[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv44[2] = { 1, 5 };

  char_T cv60[5];
  static const char_T cv61[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 2000, 1, 1, 1, 1, 1, 1, 1 };

  c_commcodegen_PhaseFrequencyOff *c_obj;
  comm_PhaseFrequencyOffset_1 *d_obj;
  boolean_T cond;
  const mxArray *e_y;
  static const int32_T iv45[2] = { 1, 42 };

  char_T cv62[42];
  static const char_T cv63[42] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'n', 'o', 'T', 'u', 'n', 'i', 'n', 'g', 'B', 'e',
    'f', 'o', 'r', 'e', 'L', 'o', 'c', 'k', 'i', 'n', 'g', 'C', 'o', 'd', 'e',
    'G', 'e', 'n' };

  boolean_T exitg1;
  static const int16_T iv46[8] = { 2000, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m10 = mxCreateCharArray(2, iv41);
    for (i = 0; i < 45; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m10, cv54);
    emlrtAssign(&y, m10);
    b_y = NULL;
    m10 = mxCreateCharArray(2, iv42);
    for (i = 0; i < 4; i++) {
      cv56[i] = cv57[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m10, cv56);
    emlrtAssign(&b_y, m10);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m10 = mxCreateCharArray(2, iv43);
      for (i = 0; i < 51; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m10, cv58);
      emlrtAssign(&c_y, m10);
      d_y = NULL;
      m10 = mxCreateCharArray(2, iv44);
      for (i = 0; i < 5; i++) {
        cv60[i] = cv61[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m10, cv60);
      emlrtAssign(&d_y, m10);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->pPhaseFreqOffset;
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->isInitialized = FALSE;
    c_obj->isReleased = FALSE;
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->inputDirectFeedthrough1 = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->inputDirectFeedthrough2 = FALSE;
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
    c_obj->tunablePropertyChanged = FALSE;
    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->c_NoTuningBeforeLockingCodeGenE = TRUE;
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    d_obj = &c_obj->cSFunObject;

    /* System object Constructor function: comm.PhaseFrequencyOffset */
    d_obj->S0_isInitialized = FALSE;
    d_obj->S1_isReleased = FALSE;
    d_obj->P0_Phase = 0.0;
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    cond = c_obj->c_NoTuningBeforeLockingCodeGenE;
    if (cond) {
    } else {
      emlrtPushRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
      e_y = NULL;
      m10 = mxCreateCharArray(2, iv45);
      for (i = 0; i < 42; i++) {
        cv62[i] = cv63[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m10, cv62);
      emlrtAssign(&e_y, m10);
      b_error(b_message(e_y, &q_emlrtMCI), &q_emlrtMCI);
      emlrtPopRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    if (c_obj->isInitialized && (!c_obj->isReleased)) {
      cond = TRUE;
    } else {
      cond = FALSE;
    }

    if (cond) {
      c_obj->TunablePropsChanged = TRUE;
      c_obj->tunablePropertyChanged = TRUE;
    }

    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->c_NoTuningBeforeLockingCodeGenE = FALSE;
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv46[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  c_QPSKCoarseFrequencyCompensato(obj, varargin_1, varargout_1);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void f_SystemCore_step(c_commcodegen_PhaseFrequencyOff *obj, const creal_T
  varargin_1[2000], real_T varargin_2, creal_T varargout_1[2000])
{
  const mxArray *y;
  static const int32_T iv47[2] = { 1, 45 };

  const mxArray *m11;
  char_T cv64[45];
  int32_T i;
  static const char_T cv65[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv48[2] = { 1, 4 };

  char_T cv66[4];
  static const char_T cv67[4] = { 's', 't', 'e', 'p' };

  c_commcodegen_PhaseFrequencyOff *b_obj;
  const mxArray *c_y;
  static const int32_T iv49[2] = { 1, 51 };

  char_T cv68[51];
  static const char_T cv69[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv50[2] = { 1, 5 };

  char_T cv70[5];
  static const char_T cv71[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 2000, 1, 1, 1, 1, 1, 1, 1 };

  comm_PhaseFrequencyOffset_1 *c_obj;
  boolean_T exitg2;
  static const int16_T iv51[8] = { 2000, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  real_T omegaT_plus_phi;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m11 = mxCreateCharArray(2, iv47);
    for (i = 0; i < 45; i++) {
      cv64[i] = cv65[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m11, cv64);
    emlrtAssign(&y, m11);
    b_y = NULL;
    m11 = mxCreateCharArray(2, iv48);
    for (i = 0; i < 4; i++) {
      cv66[i] = cv67[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m11, cv66);
    emlrtAssign(&b_y, m11);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m11 = mxCreateCharArray(2, iv49);
      for (i = 0; i < 51; i++) {
        cv68[i] = cv69[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m11, cv68);
      emlrtAssign(&c_y, m11);
      d_y = NULL;
      m11 = mxCreateCharArray(2, iv50);
      for (i = 0; i < 5; i++) {
        cv70[i] = cv71[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m11, cv70);
      emlrtAssign(&d_y, m11);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize2[i] = 1U;
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: comm.PhaseFrequencyOffset */
      c_obj->W0_omegatTnow = 0.0;
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->c_NoTuningBeforeLockingCodeGenE = TRUE;
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: comm.PhaseFrequencyOffset */
    c_obj->W0_omegatTnow = 0.0;
    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->tunablePropertyChanged = FALSE;
    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv51[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg2 = TRUE;
    } else {
      i++;
    }
  }

  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize2[i] != 1U) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize2[i] = 1U;
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &l_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.PhaseFrequencyOffset */
    c_obj->W0_omegatTnow = 0.0;
  }

  emlrtPushRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.PhaseFrequencyOffset */
  for (i = 0; i < 2000; i++) {
    /* Compute (w*t + phi) argument for calls to cos and sin below */
    omegaT_plus_phi = 6.2831853071795862 * c_obj->W0_omegatTnow +
      c_obj->P0_Phase;
    varargout_1[i].re = varargin_1[i].re * muDoubleScalarCos(omegaT_plus_phi) -
      varargin_1[i].im * muDoubleScalarSin(omegaT_plus_phi);
    varargout_1[i].im = varargin_1[i].re * muDoubleScalarSin(omegaT_plus_phi) +
      varargin_1[i].im * muDoubleScalarCos(omegaT_plus_phi);
    c_obj->W0_omegatTnow += varargin_2 * 1.0E-5;
  }

  emlrtPopRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &k_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

creal_T g_SystemCore_step(QPSKFineFrequencyCompensator *obj, const creal_T
  varargin_1[2])
{
  creal_T varargout_1;
  const mxArray *y;
  static const int32_T iv52[2] = { 1, 45 };

  const mxArray *m12;
  char_T cv72[45];
  int32_T i;
  static const char_T cv73[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv53[2] = { 1, 4 };

  char_T cv74[4];
  static const char_T cv75[4] = { 's', 't', 'e', 'p' };

  QPSKFineFrequencyCompensator *b_obj;
  const mxArray *c_y;
  static const int32_T iv54[2] = { 1, 51 };

  char_T cv76[51];
  static const char_T cv77[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv55[2] = { 1, 5 };

  char_T cv78[5];
  static const char_T cv79[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 1, 2, 1, 1, 1, 1, 1, 1 };

  dsp_DigitalFilter_2 *c_obj;
  dsp_DigitalFilter_3 *d_obj;
  boolean_T exitg1;
  static const int8_T iv56[8] = { 1, 2, 1, 1, 1, 1, 1, 1 };

  real_T r;
  real_T loopFiltOut;
  real_T phErr;
  real_T numAccum;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m12 = mxCreateCharArray(2, iv52);
    for (i = 0; i < 45; i++) {
      cv72[i] = cv73[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m12, cv72);
    emlrtAssign(&y, m12);
    b_y = NULL;
    m12 = mxCreateCharArray(2, iv53);
    for (i = 0; i < 4; i++) {
      cv74[i] = cv75[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m12, cv74);
    emlrtAssign(&b_y, m12);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m12 = mxCreateCharArray(2, iv54);
      for (i = 0; i < 51; i++) {
        cv76[i] = cv77[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m12, cv76);
      emlrtAssign(&c_y, m12);
      d_y = NULL;
      m12 = mxCreateCharArray(2, iv55);
      for (i = 0; i < 5; i++) {
        cv78[i] = cv79[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m12, cv78);
      emlrtAssign(&d_y, m12);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pPhase = 0.0;
    emlrtPopRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->pLoopFilter;

    /* System object Constructor function: dsp.DigitalFilter */
    c_obj->S0_isInitialized = FALSE;
    c_obj->S1_isReleased = FALSE;
    c_obj->P0_ICRTP = 0.0;
    for (i = 0; i < 2; i++) {
      c_obj->P1_RTP1COEFF[i] = 1.0 - (real_T)i;
      c_obj->P2_RTP2COEFF[i] = 1.0 + -2.0 * (real_T)i;
    }

    emlrtPopRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);
    d_obj = &b_obj->pIntegrator;

    /* System object Constructor function: dsp.DigitalFilter */
    d_obj->S0_isInitialized = FALSE;
    d_obj->S1_isReleased = FALSE;
    d_obj->P0_ICRTP = 0.0;
    for (i = 0; i < 2; i++) {
      d_obj->P1_RTP1COEFF[i] = i;
      d_obj->P2_RTP2COEFF[i] = 1.0 + -2.0 * (real_T)i;
    }

    emlrtPopRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv56[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  r = b_obj->pPhase;
  loopFiltOut = r;
  r = muDoubleScalarExp(r * 0.0 / 2.0);
  phErr = r * (r * muDoubleScalarCos(loopFiltOut));
  r *= r * muDoubleScalarSin(loopFiltOut);
  varargout_1.re = varargin_1[1].re * phErr - varargin_1[1].im * r;
  varargout_1.im = varargin_1[1].re * r + varargin_1[1].im * phErr;
  phErr = muDoubleScalarSign(varargin_1[0].re) * varargin_1[0].im -
    muDoubleScalarSign(varargin_1[0].im) * varargin_1[0].re;
  emlrtPushRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);
  r = phErr * 3.1745527848764313E-5;
  c_obj = &b_obj->pLoopFilter;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &o_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.DigitalFilter */
    c_obj->W0_FILT_STATES[0] = c_obj->P0_ICRTP;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    c_obj->W0_FILT_STATES[1] = 0.0;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.DigitalFilter */
  numAccum = c_obj->P1_RTP1COEFF[0U] * r;
  numAccum += c_obj->W0_FILT_STATES[0];
  loopFiltOut = numAccum;
  numAccum = c_obj->W0_FILT_STATES[1];
  numAccum += c_obj->P1_RTP1COEFF[1] * r;
  r = numAccum - c_obj->P2_RTP2COEFF[1] * loopFiltOut;
  c_obj->W0_FILT_STATES[0] = r;
  emlrtPopRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &b_obj->pIntegrator;
  r = phErr * 0.0079363819621910778 + loopFiltOut;
  if (!d_obj->S0_isInitialized) {
    d_obj->S0_isInitialized = TRUE;
    if (d_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &o_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.DigitalFilter */
    d_obj->W0_FILT_STATES[0] = d_obj->P0_ICRTP;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    d_obj->W0_FILT_STATES[1] = 0.0;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.DigitalFilter */
  numAccum = d_obj->P1_RTP1COEFF[0U] * r;
  numAccum += d_obj->W0_FILT_STATES[0];
  loopFiltOut = numAccum;
  numAccum = d_obj->W0_FILT_STATES[1];
  numAccum += d_obj->P1_RTP1COEFF[1] * r;
  r = numAccum - d_obj->P2_RTP2COEFF[1] * loopFiltOut;
  d_obj->W0_FILT_STATES[0] = r;
  emlrtPopRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);
  b_obj->pPhase = -loopFiltOut;
  emlrtPopRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  return varargout_1;
}

void h_SystemCore_step(QPSKTimingRecovery *obj, const creal_T varargin_1,
  creal_T varargout_1[100], boolean_T *varargout_2, real_T *varargout_3)
{
  const mxArray *y;
  static const int32_T iv57[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv80[45];
  int32_T i;
  static const char_T cv81[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv58[2] = { 1, 4 };

  char_T cv82[4];
  static const char_T cv83[4] = { 's', 't', 'e', 'p' };

  QPSKTimingRecovery *b_obj;
  const mxArray *c_y;
  static const int32_T iv59[2] = { 1, 51 };

  char_T cv84[51];
  static const char_T cv85[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv60[2] = { 1, 5 };

  char_T cv86[5];
  static const char_T cv87[5] = { 's', 'e', 't', 'u', 'p' };

  dsp_DigitalFilter_4 *c_obj;
  dsp_DelayLine_5 *d_obj;
  boolean_T exitg1;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m13 = mxCreateCharArray(2, iv57);
    for (i = 0; i < 45; i++) {
      cv80[i] = cv81[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m13, cv80);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv58);
    for (i = 0; i < 4; i++) {
      cv82[i] = cv83[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m13, cv82);
    emlrtAssign(&b_y, m13);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv59);
      for (i = 0; i < 51; i++) {
        cv84[i] = cv85[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m13, cv84);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv60);
      for (i = 0; i < 5; i++) {
        cv86[i] = cv87[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m13, cv86);
      emlrtAssign(&d_y, m13);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = 1U;
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pDelayBuffer1.re = 0.0;
    b_obj->pDelayBuffer1.im = 0.0;
    emlrtPopRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pDelayBuffer2.re = 0.0;
    b_obj->pDelayBuffer2.im = 0.0;
    emlrtPopRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pDelayBuffer3.re = 0.0;
    b_obj->pDelayBuffer3.im = 0.0;
    emlrtPopRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pAlpha = 0.5;
    emlrtPopRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pTEDDelay1.re = 0.0;
    b_obj->pTEDDelay1.im = 0.0;
    emlrtPopRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pTEDDelay2.re = 0.0;
    b_obj->pTEDDelay2.im = 0.0;
    emlrtPopRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pDelayStrobe = 0.0;
    emlrtPopRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pNCODelay = 0.0;
    emlrtPopRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pRegTemp = 0.0;
    emlrtPopRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pEnable = FALSE;
    emlrtPopRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pCount = 0.0;
    emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 100; i++) {
      b_obj->pOutput[i].re = 0.0;
      b_obj->pOutput[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pMU = 0.0;
    emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&re_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->pStrobe = 0.0;
    emlrtPopRtStackR2012b(&re_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->pLoopFilter;

    /* System object Constructor function: dsp.DigitalFilter */
    c_obj->S0_isInitialized = FALSE;
    c_obj->S1_isReleased = FALSE;
    c_obj->P0_ICRTP = 0.0;
    for (i = 0; i < 2; i++) {
      c_obj->P1_RTP1COEFF[i] = 1.0 - (real_T)i;
      c_obj->P2_RTP2COEFF[i] = 1.0 + -2.0 * (real_T)i;
    }

    emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
    d_obj = &b_obj->pDelayLine;

    /* System object Constructor function: dsp.DelayLine */
    d_obj->S0_isInitialized = FALSE;
    d_obj->S1_isReleased = FALSE;
    d_obj->P0_IC.re = 0.0;
    d_obj->P0_IC.im = 0.0;
    emlrtPopRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != 1U) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = 1U;
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  QPSKTimingRecovery_stepImpl(obj, varargin_1, varargout_1, varargout_2,
    varargout_3);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void i_SystemCore_step(sdruQPSKDataDecoder_264 *obj, const creal_T varargin_1
  [100], real_T varargout_1[3])
{
  const mxArray *y;
  static const int32_T iv61[2] = { 1, 45 };

  const mxArray *m14;
  char_T cv88[45];
  int32_T i;
  static const char_T cv89[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv62[2] = { 1, 4 };

  char_T cv90[4];
  static const char_T cv91[4] = { 's', 't', 'e', 'p' };

  sdruQPSKDataDecoder_264 *b_obj;
  const mxArray *c_y;
  static const int32_T iv63[2] = { 1, 51 };

  char_T cv92[51];
  static const char_T cv93[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv64[2] = { 1, 5 };

  char_T cv94[5];
  static const char_T cv95[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  dspcodegen_Buffer *c_obj;
  const mxArray *e_y;
  static const int32_T iv65[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv66[2] = { 1, 5 };

  static const char_T cv96[5] = { 'r', 'e', 's', 'e', 't' };

  dsp_Buffer_6 *d_obj;
  boolean_T exitg1;
  static const int8_T iv67[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m14 = mxCreateCharArray(2, iv61);
    for (i = 0; i < 45; i++) {
      cv88[i] = cv89[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m14, cv88);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = mxCreateCharArray(2, iv62);
    for (i = 0; i < 4; i++) {
      cv90[i] = cv91[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m14, cv90);
    emlrtAssign(&b_y, m14);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m14 = mxCreateCharArray(2, iv63);
      for (i = 0; i < 51; i++) {
        cv92[i] = cv93[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m14, cv92);
      emlrtAssign(&c_y, m14);
      d_y = NULL;
      m14 = mxCreateCharArray(2, iv64);
      for (i = 0; i < 5; i++) {
        cv94[i] = cv95[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m14, cv94);
      emlrtAssign(&d_y, m14);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    sdruQPSKDataDecoder_setupImpl(b_obj);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&fg_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->pBuffer;
    if (!c_obj->isReleased) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      e_y = NULL;
      m14 = mxCreateCharArray(2, iv65);
      for (i = 0; i < 45; i++) {
        cv88[i] = cv89[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m14, cv88);
      emlrtAssign(&e_y, m14);
      f_y = NULL;
      m14 = mxCreateCharArray(2, iv66);
      for (i = 0; i < 5; i++) {
        cv94[i] = cv96[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m14, cv94);
      emlrtAssign(&f_y, m14);
      b_error(message(e_y, f_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (c_obj->isInitialized) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
      d_obj = &c_obj->cSFunObject;
      if (d_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
          "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
      }

      emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);

      /* System object Initialization function: dsp.Buffer */
      for (i = 0; i < 100; i++) {
        d_obj->W0_CircBuff[i].re = d_obj->P0_ic;
        d_obj->W0_CircBuff[i].im = 0.0;
      }

      emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&fg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv67[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  sdruQPSKDataDecoder_stepImpl(obj, varargin_1, varargout_1);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void j_SystemCore_step(dspcodegen_Buffer *obj, const creal_T varargin_1[100],
  creal_T varargout_1[200])
{
  const mxArray *y;
  static const int32_T iv75[2] = { 1, 45 };

  const mxArray *m16;
  char_T cv105[45];
  int32_T i;
  static const char_T cv106[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv76[2] = { 1, 4 };

  char_T cv107[4];
  static const char_T cv108[4] = { 's', 't', 'e', 'p' };

  dspcodegen_Buffer *b_obj;
  const mxArray *c_y;
  static const int32_T iv77[2] = { 1, 51 };

  char_T cv109[51];
  static const char_T cv110[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv78[2] = { 1, 5 };

  char_T cv111[5];
  static const char_T cv112[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  dsp_Buffer_6 *c_obj;
  boolean_T exitg1;
  static const int8_T iv79[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m16 = mxCreateCharArray(2, iv75);
    for (i = 0; i < 45; i++) {
      cv105[i] = cv106[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m16, cv105);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m16 = mxCreateCharArray(2, iv76);
    for (i = 0; i < 4; i++) {
      cv107[i] = cv108[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m16, cv107);
    emlrtAssign(&b_y, m16);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m16 = mxCreateCharArray(2, iv77);
      for (i = 0; i < 51; i++) {
        cv109[i] = cv110[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m16, cv109);
      emlrtAssign(&c_y, m16);
      d_y = NULL;
      m16 = mxCreateCharArray(2, iv78);
      for (i = 0; i < 5; i++) {
        cv111[i] = cv112[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m16, cv111);
      emlrtAssign(&d_y, m16);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.Buffer */
      for (i = 0; i < 100; i++) {
        c_obj->W0_CircBuff[i].re = c_obj->P0_ic;
        c_obj->W0_CircBuff[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.Buffer */
    for (i = 0; i < 100; i++) {
      c_obj->W0_CircBuff[i].re = c_obj->P0_ic;
      c_obj->W0_CircBuff[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv79[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &l_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.Buffer */
    for (i = 0; i < 100; i++) {
      c_obj->W0_CircBuff[i].re = c_obj->P0_ic;
      c_obj->W0_CircBuff[i].im = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.Buffer */
  for (i = 0; i < 100; i++) {
    c_obj->O0_Y0[i] = c_obj->W0_CircBuff[i];
  }

  for (i = 0; i < 100; i++) {
    c_obj->O0_Y0[i + 100] = varargin_1[i];
  }

  for (i = 0; i < 100; i++) {
    c_obj->W0_CircBuff[i] = varargin_1[i];
  }

  for (i = 0; i < 200; i++) {
    varargout_1[i] = c_obj->O0_Y0[i];
  }

  emlrtPopRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &k_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void k_SystemCore_step(commcodegen_Descrambler *obj, const real_T varargin_1[174],
  real_T varargout_1[174])
{
  const mxArray *y;
  static const int32_T iv80[2] = { 1, 45 };

  const mxArray *m17;
  char_T cv113[45];
  int32_T i;
  static const char_T cv114[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv81[2] = { 1, 4 };

  char_T cv115[4];
  static const char_T cv116[4] = { 's', 't', 'e', 'p' };

  commcodegen_Descrambler *b_obj;
  const mxArray *c_y;
  static const int32_T iv82[2] = { 1, 51 };

  char_T cv117[51];
  static const char_T cv118[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv83[2] = { 1, 5 };

  char_T cv119[5];
  static const char_T cv120[5] = { 's', 'e', 't', 'u', 'p' };

  static const uint8_T value[8] = { 174U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  comm_Descrambler_10 *c_obj;
  boolean_T exitg1;
  static const uint8_T uv0[8] = { 174U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T j;
  int32_T tmp;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m17 = mxCreateCharArray(2, iv80);
    for (i = 0; i < 45; i++) {
      cv113[i] = cv114[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m17, cv113);
    emlrtAssign(&y, m17);
    b_y = NULL;
    m17 = mxCreateCharArray(2, iv81);
    for (i = 0; i < 4; i++) {
      cv115[i] = cv116[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m17, cv115);
    emlrtAssign(&b_y, m17);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m17 = mxCreateCharArray(2, iv82);
      for (i = 0; i < 51; i++) {
        cv117[i] = cv118[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m17, cv117);
      emlrtAssign(&c_y, m17);
      d_y = NULL;
      m17 = mxCreateCharArray(2, iv83);
      for (i = 0; i < 5; i++) {
        cv119[i] = cv120[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m17, cv119);
      emlrtAssign(&d_y, m17);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: comm.Descrambler */
      for (i = 0; i < 4; i++) {
        c_obj->W0_shiftReg[i] = c_obj->P1_IniState[i];
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: comm.Descrambler */
    for (i = 0; i < 4; i++) {
      c_obj->W0_shiftReg[i] = c_obj->P1_IniState[i];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != uv0[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &l_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.Descrambler */
    for (i = 0; i < 4; i++) {
      c_obj->W0_shiftReg[i] = c_obj->P1_IniState[i];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.Descrambler */
  for (j = 0; j < 174; j++) {
    tmp = (int32_T)muDoubleScalarFloor(varargin_1[j]);
    for (i = 0; i < 4; i++) {
      tmp -= (uint8_T)(c_obj->P0_Polynomial[i + 1] * c_obj->W0_shiftReg[i]);
    }

    while (tmp < 0) {
      tmp += 2;
    }

    tmp %= 2;
    varargout_1[j] = tmp;
    for (i = 2; i > -1; i += -1) {
      c_obj->W0_shiftReg[i + 1] = c_obj->W0_shiftReg[i];
    }

    c_obj->W0_shiftReg[0U] = (int32_T)muDoubleScalarFloor(varargin_1[j]);
  }

  emlrtPopRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &k_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void l_SystemCore_step(dspcodegen_Crosscorrelator *obj, const creal_T
  varargin_1[13], const creal_T varargin_2[100], creal_T varargout_1[112])
{
  const mxArray *y;
  static const int32_T iv84[2] = { 1, 45 };

  const mxArray *m18;
  char_T cv121[45];
  int32_T i;
  static const char_T cv122[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv85[2] = { 1, 4 };

  char_T cv123[4];
  static const char_T cv124[4] = { 's', 't', 'e', 'p' };

  dspcodegen_Crosscorrelator *b_obj;
  const mxArray *c_y;
  static const int32_T iv86[2] = { 1, 51 };

  char_T cv125[51];
  static const char_T cv126[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv87[2] = { 1, 5 };

  char_T cv127[5];
  static const char_T cv128[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  static const int8_T b_value[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg2;
  static const int8_T iv88[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int8_T iv89[8] = { 100, 1, 1, 1, 1, 1, 1, 1 };

  int32_T out;
  int32_T b_i;
  int32_T j;
  int32_T jEnd;
  real_T acc_re;
  real_T acc_im;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m18 = mxCreateCharArray(2, iv84);
    for (i = 0; i < 45; i++) {
      cv121[i] = cv122[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m18, cv121);
    emlrtAssign(&y, m18);
    b_y = NULL;
    m18 = mxCreateCharArray(2, iv85);
    for (i = 0; i < 4; i++) {
      cv123[i] = cv124[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m18, cv123);
    emlrtAssign(&b_y, m18);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m18 = mxCreateCharArray(2, iv86);
      for (i = 0; i < 51; i++) {
        cv125[i] = cv126[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m18, cv125);
      emlrtAssign(&c_y, m18);
      d_y = NULL;
      m18 = mxCreateCharArray(2, iv87);
      for (i = 0; i < 5; i++) {
        cv127[i] = cv128[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m18, cv127);
      emlrtAssign(&d_y, m18);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize2[i] = (uint32_T)b_value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv88[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg2 = TRUE;
    } else {
      i++;
    }
  }

  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize2[i] != (uint32_T)iv89[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize2[i] = (uint32_T)b_value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: dsp.Crosscorrelator */
  out = 0;
  for (i = 0; i < 112; i++) {
    if (i - 99 > 0) {
      b_i = i - 99;
    } else {
      b_i = 0;
    }

    j = b_i + 99;
    if (i < 12) {
      jEnd = i;
    } else {
      jEnd = 12;
    }

    acc_re = varargin_1[j - 99].re * varargin_2[j - i].re - varargin_1[j - 99].
      im * -varargin_2[j - i].im;
    acc_im = varargin_1[j - 99].re * -varargin_2[j - i].im + varargin_1[j - 99].
      im * varargin_2[j - i].re;
    for (j++; j - 99 <= jEnd; j++) {
      acc_re += varargin_1[j - 99].re * varargin_2[j - i].re - varargin_1[j - 99]
        .im * -varargin_2[j - i].im;
      acc_im += varargin_1[j - 99].re * -varargin_2[j - i].im + varargin_1[j -
        99].im * varargin_2[j - i].re;
    }

    varargout_1[out].re = acc_re;
    varargout_1[out].im = acc_im;
    out++;
  }

  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

void m_SystemCore_step(commcodegen_ErrorRate *obj, const real_T varargin_1[105],
  const real_T varargin_2[105], real_T varargout_1[3])
{
  const mxArray *y;
  static const int32_T iv94[2] = { 1, 45 };

  const mxArray *m21;
  char_T cv133[45];
  int32_T i;
  static const char_T cv134[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv95[2] = { 1, 4 };

  char_T cv135[4];
  static const char_T cv136[4] = { 's', 't', 'e', 'p' };

  commcodegen_ErrorRate *b_obj;
  const mxArray *c_y;
  static const int32_T iv96[2] = { 1, 51 };

  char_T cv137[51];
  static const char_T cv138[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv97[2] = { 1, 5 };

  char_T cv139[5];
  static const char_T cv140[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 105, 1, 1, 1, 1, 1, 1, 1 };

  comm_ErrorRate_11 *c_obj;
  boolean_T exitg2;
  static const int8_T iv98[8] = { 105, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  real_T err;
  real_T sym;
  real_T ratio;
  boolean_T cur_fr;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m21 = mxCreateCharArray(2, iv94);
    for (i = 0; i < 45; i++) {
      cv133[i] = cv134[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m21, cv133);
    emlrtAssign(&y, m21);
    b_y = NULL;
    m21 = mxCreateCharArray(2, iv95);
    for (i = 0; i < 4; i++) {
      cv135[i] = cv136[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m21, cv135);
    emlrtAssign(&b_y, m21);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m21 = mxCreateCharArray(2, iv96);
      for (i = 0; i < 51; i++) {
        cv137[i] = cv138[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m21, cv137);
      emlrtAssign(&c_y, m21);
      d_y = NULL;
      m21 = mxCreateCharArray(2, iv97);
      for (i = 0; i < 5; i++) {
        cv139[i] = cv140[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m21, cv139);
      emlrtAssign(&d_y, m21);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize2[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: comm.ErrorRate */
      c_obj->W0_errors = 0.0;
      c_obj->W1_symbols = 0.0;
      c_obj->W2_STDelay = 0;
      c_obj->W4_curTx = 0;
      for (i = 0; i < 105; i++) {
        c_obj->W5_useFrame[i] = TRUE;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &n_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &m_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: comm.ErrorRate */
    c_obj->W0_errors = 0.0;
    c_obj->W1_symbols = 0.0;
    c_obj->W2_STDelay = 0;
    c_obj->W4_curTx = 0;
    for (i = 0; i < 105; i++) {
      c_obj->W5_useFrame[i] = TRUE;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv98[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg2 = TRUE;
    } else {
      i++;
    }
  }

  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize2[i] != (uint32_T)iv98[i]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize2[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &l_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.ErrorRate */
    c_obj->W0_errors = 0.0;
    c_obj->W1_symbols = 0.0;
    c_obj->W2_STDelay = 0;
    c_obj->W4_curTx = 0;
    for (i = 0; i < 105; i++) {
      c_obj->W5_useFrame[i] = TRUE;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.ErrorRate */
  err = 0.0;
  sym = 0.0;
  ratio = 0.0;
  for (i = 0; i < 105; i++) {
    c_obj->W3_txBuff = varargin_1[i];
    cur_fr = c_obj->W5_useFrame[i];
    if (c_obj->W4_curTx == 0) {
      c_obj->W4_curTx = 0;
    } else {
      c_obj->W4_curTx++;
    }

    if (c_obj->W2_STDelay < 0) {
      c_obj->W2_STDelay++;
    } else {
      if (cur_fr) {
        sym++;
        if (c_obj->W3_txBuff != varargin_2[i]) {
          err++;
        }
      }
    }
  }

  c_obj->W1_symbols += sym;
  c_obj->W0_errors += err;
  if (c_obj->W1_symbols > 0.0) {
    ratio = c_obj->W0_errors / c_obj->W1_symbols;
  }

  varargout_1[0U] = ratio;
  varargout_1[1U] = c_obj->W0_errors;
  varargout_1[2U] = c_obj->W1_symbols;
  emlrtPopRtStackR2012b(&vd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &k_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
