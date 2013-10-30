/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "SystemCore.h"
#include "SDRuTransmitter.h"
#include "sendComplexDoubleData.h"
#include "sdruOFDMTransmitterRun_mexutil.h"
#include "sdruOFDMTransmitterRun_data.h"

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = { 73, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo nb_emlrtRSI = { 63, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo pb_emlrtRSI = { 53, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

static emlrtRSInfo rb_emlrtRSI = { 42, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

/* Function Declarations */
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m14;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m14, 3, pArrays,
    "message", TRUE, location);
}

void SystemCore_step(sdruOFDMTransmitterRunStackData *SD, comm_SDRuTransmitter
                     *obj, const creal_T varargin_1[25600])
{
  const mxArray *y;
  static const int32_T iv16[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv16[45];
  int32_T i;
  static const char_T cv17[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv17[2] = { 1, 4 };

  char_T cv18[4];
  static const char_T cv19[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv18[2] = { 1, 51 };

  char_T cv20[51];
  static const char_T cv21[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv19[2] = { 1, 5 };

  char_T cv22[5];
  static const char_T cv23[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i7;
  static const int16_T value[8] = { 25600, 1, 1, 1, 1, 1, 1, 1 };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv20[2] = { 1, 35 };

  char_T cv24[35];
  static const char_T cv25[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv21[2] = { 1, 12 };

  char_T cv26[12];
  static const char_T cv27[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv22[2] = { 1, 43 };

  char_T cv28[43];
  static const char_T cv29[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv23[2] = { 1, 35 };

  static const char_T cv30[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv24[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv25[2] = { 1, 26 };

  char_T cv31[26];
  static const char_T cv32[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv26[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv27[2] = { 1, 35 };

  static const char_T cv33[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T b_value[4];
  boolean_T exitg1;
  static const int16_T iv28[8] = { 25600, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m3 = mxCreateCharArray(2, iv16);
    for (i = 0; i < 45; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m3, cv16);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv17);
    for (i = 0; i < 4; i++) {
      cv18[i] = cv19[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m3, cv18);
    emlrtAssign(&b_y, m3);
    b_error(message(y, b_y, &l_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m3 = mxCreateCharArray(2, iv18);
      for (i = 0; i < 51; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m3, cv20);
      emlrtAssign(&c_y, m3);
      d_y = NULL;
      m3 = mxCreateCharArray(2, iv19);
      for (i = 0; i < 5; i++) {
        cv22[i] = cv23[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m3, cv22);
      emlrtAssign(&d_y, m3);
      b_error(message(c_y, d_y, &l_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    for (i7 = 0; i7 < 8; i7++) {
      b_obj->inputVarSize1[i7] = (uint32_T)value[i7];
    }

    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    SDRuTransmitter_setupImplLocal(b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);

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
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        e_y = NULL;
        m3 = mxCreateCharArray(2, iv20);
        for (i = 0; i < 35; i++) {
          cv24[i] = cv25[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m3, cv24);
        emlrtAssign(&e_y, m3);
        f_y = NULL;
        m3 = mxCreateCharArray(2, iv21);
        for (i = 0; i < 12; i++) {
          cv26[i] = cv27[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m3, cv26);
        emlrtAssign(&f_y, m3);
        g_y = NULL;
        m3 = mxCreateCharArray(2, iv22);
        for (i = 0; i < 43; i++) {
          cv28[i] = cv29[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m3, cv28);
        emlrtAssign(&g_y, m3);
        b_error(c_message(e_y, f_y, g_y, &c_emlrtMCI), &c_emlrtMCI);
        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverNotResponding:
      emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        h_y = NULL;
        m3 = mxCreateCharArray(2, iv23);
        for (i = 0; i < 35; i++) {
          cv24[i] = cv30[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m3, cv24);
        emlrtAssign(&h_y, m3);
        i_y = NULL;
        m3 = mxCreateCharArray(2, iv24);
        for (i = 0; i < 12; i++) {
          cv26[i] = cv27[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m3, cv26);
        emlrtAssign(&i_y, m3);
        b_error(message(h_y, i_y, &c_emlrtMCI), &c_emlrtMCI);
        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverBusy:
      emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        j_y = NULL;
        m3 = mxCreateCharArray(2, iv25);
        for (i = 0; i < 26; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m3, cv31);
        emlrtAssign(&j_y, m3);
        k_y = NULL;
        m3 = mxCreateCharArray(2, iv26);
        for (i = 0; i < 12; i++) {
          cv26[i] = cv27[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m3, cv26);
        emlrtAssign(&k_y, m3);
        b_error(message(j_y, k_y, &c_emlrtMCI), &c_emlrtMCI);
        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverError:
      emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        l_y = NULL;
        m3 = mxCreateCharArray(2, iv27);
        for (i = 0; i < 35; i++) {
          cv24[i] = cv33[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m3, cv24);
        emlrtAssign(&l_y, m3);
        b_error(b_message(l_y, &c_emlrtMCI), &c_emlrtMCI);
        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      break;
    }

    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    if (deviceStatus == UsrpDriverSuccess) {
      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pConnected = TRUE;
      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      b_obj->pConnected = FALSE;
      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 4; i++) {
      for (i7 = 0; i7 < 4; i7++) {
        b_value[i7] = b_obj->tunablePropertyChanged[i7];
      }

      b_value[i] = FALSE;
      emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
      for (i7 = 0; i7 < 4; i7++) {
        b_obj->tunablePropertyChanged[i7] = b_value[i7];
      }

      emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv28[i]) {
      emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
      for (i7 = 0; i7 < 8; i7++) {
        b_obj->inputVarSize1[i7] = (uint32_T)value[i7];
      }

      emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  SDRuTransmitter_stepImpl(SD, obj, varargin_1);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
