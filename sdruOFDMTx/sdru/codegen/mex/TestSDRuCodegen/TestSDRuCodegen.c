/*
 * TestSDRuCodegen.c
 *
 * Code generation for function 'TestSDRuCodegen'
 *
 * C source code generated on: Tue Oct  8 16:14:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TestSDRuCodegen.h"
#include "closeDataConnection.h"
#include "SystemProp.h"
#include "TestSDRuCodegen_mexutil.h"
#include "TestSDRuCodegen_data.h"

/* Type Definitions */
#ifndef typedef_comm_SDRuReceiver
#define typedef_comm_SDRuReceiver

typedef struct {
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T pConnected;
  int32_T pDriverHandle;
} comm_SDRuReceiver;

#endif                                 /*typedef_comm_SDRuReceiver*/

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 5, "TestSDRuCodegen",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/TestSDRuCodegen.m" };

static emlrtRSInfo b_emlrtRSI = { 13, "TestSDRuCodegen",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/TestSDRuCodegen.m" };

static emlrtRSInfo c_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

static emlrtRSInfo d_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

static emlrtRSInfo e_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRSInfo g_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

static emlrtRSInfo h_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtRSInfo x_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

static emlrtRSInfo y_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo fb_emlrtRSI = { 6, "reportDrivers",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m" };

static emlrtRSInfo gb_emlrtRSI = { 85, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo hb_emlrtRSI = { 86, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ib_emlrtRSI = { 87, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtMCInfo i_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo j_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo k_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtMCInfo o_emlrtMCI = { 87, 13, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 88, 32, "flatAddrList", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

static emlrtBCInfo c_emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10]);
static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);
static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2]);
static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[10]);
static void warning(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10])
{
  c_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m7;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m7, 2, pArrays, "rand",
    TRUE, location);
}

static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv11[2];
  int32_T i11;
  for (i11 = 0; i11 < 2; i11++) {
    iv11[i11] = 1 + 9 * i11;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv11);
  for (i11 = 0; i11 < 10; i11++) {
    ret[i11] = (*(real_T (*)[10])mxGetData(src))[i11];
  }

  emlrtDestroyArray(&src);
}

static void eml_warning(const char_T varargin_2_data[1024], const int32_T
  varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 31 };

  const mxArray *m4;
  char_T cv17[31];
  int32_T i;
  static const char_T cv18[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  int32_T u_size[2];
  int32_T i9;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m4 = mxCreateCharArray(2, iv9);
  for (i = 0; i < 31; i++) {
    cv17[i] = cv18[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m4, cv17);
  emlrtAssign(&y, m4);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i9 = 0; i9 < i; i9++) {
    u_data[i9] = varargin_2_data[i9];
  }

  b_y = NULL;
  m4 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m4, (char_T *)&u_data);
  emlrtAssign(&b_y, m4);
  warning(message(y, b_y, &i_emlrtMCI), &j_emlrtMCI);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
}

static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[10])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, y);
  emlrtDestroyArray(&c_rand);
}

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
}

real_T TestSDRuCodegen(void)
{
  real_T x;
  comm_SDRuReceiver hSDRu;
  comm_SDRuReceiver *obj;
  real_T r[10];
  int32_T i;
  int32_T i0;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  static const char_T cv1[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 7 };

  char_T cv2[7];
  static const char_T cv3[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  boolean_T disconnected;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 6 };

  char_T cv4[6];
  static const char_T cv5[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  char_T flatAddrList_data[128];
  const mxArray *d_y;
  const mxArray *e_y;
  x = 1.0;
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  obj = &hSDRu;
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  obj->pConnected = FALSE;
  obj->pDriverHandle = 0;
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrt_marshallIn(b_rand(emlrt_marshallOut(1.0), emlrt_marshallOut(10.0),
    &emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 10; i++) {
    r[i] = 48.0 + muDoubleScalarFloor(r[i] * 10.0);
  }

  for (i0 = 0; i0 < 10; i0++) {
    i = (int32_T)r[i0];
    emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &c_emlrtBCI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  SystemProp_setProperties();
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hSDRu;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    for (i = 0; i < 45; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv0);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 7; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m0, cv2);
    emlrtAssign(&b_y, m0);
    error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    obj->isReleased = TRUE;
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    disconnected = TRUE;
    if (obj->pConnected) {
      emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      closeDataConnection(obj->pDriverHandle, &errStat_i, errMsg_data,
                          errMsg_size);
      emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      if (errStat_i == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
        obj->pDriverHandle = 0;
        emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);

        /*    Copyright 2011-2012 The MathWorks, Inc. */
        emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);

        /*  */
        /*  This function unifies handling of interp vs. codegen call as well as */
        /*  errStat / errStr assignment. */
        /*  */
        /*    Copyright 2011-2012 The MathWorks, Inc. */
        if (!isSetupsdruCalled) {
          c_y = NULL;
          m0 = mxCreateCharArray(2, iv2);
          for (i = 0; i < 6; i++) {
            cv4[i] = cv5[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m0, cv4);
          emlrtAssign(&c_y, m0);
          setupsdru(sdruroot(&m_emlrtMCI), c_y, &n_emlrtMCI);
          isSetupsdruCalled = TRUE;
        }

        /*  These sizes must match those in C code. */
        /*  Arbitrary max imposed on ML/SL side */
        /*  function is being called in interpreted mode */
        /*  not being found:  */
        /*  eml_allow_enum_inputs; */
        /* errStat_i = int32(0); */
        for (i0 = 0; i0 < 1024; i0++) {
          errStr_data[i0] = '\x00';
        }

        for (i0 = 0; i0 < 128; i0++) {
          flatAddrList_data[i0] = '\x00';
        }

        emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
        reportDrivers_c(&flatAddrList_data[0], &errStat_i, &errStr_data[0]);
        emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&flatAddrList_data[0]);
        emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 128) {
        } else {
          emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
          d_y = NULL;
          m0 = mxCreateString("Assertion failed.");
          emlrtAssign(&d_y, m0);
          error(d_y, &o_emlrtMCI);
          emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
          i0 = 0;
        } else {
          i0 = emlrtDynamicBoundsCheckFastR2012b(i, 1, 128, &emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /* errStat = UsrpErrorCapiEnumT(errStat_i); */
        emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
        i = strlen(&errStr_data[0]);
        emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
        if (i <= 1024) {
        } else {
          emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
          e_y = NULL;
          m0 = mxCreateString("Assertion failed.");
          emlrtAssign(&e_y, m0);
          error(e_y, &l_emlrtMCI);
          emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
        }

        if (1 > i) {
        } else {
          emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &b_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
        if (!(i0 == 0)) {
          disconnected = FALSE;
          emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
          eml_warning(errMsg_data, errMsg_size);
          emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
        }
      }

      emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      obj->pConnected = !disconnected;
      emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  return x;
}

/* End of code generation (TestSDRuCodegen.c) */
