/*
 * sdruOFDMTransmitterRun_data.c
 *
 * Code generation for function 'sdruOFDMTransmitterRun_data'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "sdruOFDMTransmitterRun_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo g_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo h_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo k_emlrtRSI = { 1, "SDRuTransmitter",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p" };

emlrtRSInfo l_emlrtRSI = { 1, "SDRuBase",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo s_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo w_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo x_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo y_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo jb_emlrtRSI = { 248, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo kb_emlrtRSI = { 249, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo mb_emlrtRSI = { 71, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo ob_emlrtRSI = { 61, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo qb_emlrtRSI = { 51, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo sb_emlrtRSI = { 35, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo tb_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo xb_emlrtRSI = { 9, "sendInt16Data",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendInt16Data.m" };

emlrtRSInfo ac_emlrtRSI = { 9, "sendComplexInt16Data",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexInt16Data.m"
};

emlrtRSInfo bc_emlrtRSI = { 9, "sendSingleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendSingleData.m" };

emlrtRSInfo cc_emlrtRSI = { 9, "sendComplexSingleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexSingleData.m"
};

emlrtRSInfo dc_emlrtRSI = { 9, "sendDoubleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendDoubleData.m" };

emlrtMCInfo c_emlrtMCI = { 15, 19, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtMCInfo d_emlrtMCI = { 25, 9, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo e_emlrtMCI = { 24, 19, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo f_emlrtMCI = { 30, 9, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo g_emlrtMCI = { 27, 19, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo h_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtMCInfo i_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtMCInfo l_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtMCInfo m_emlrtMCI = { 249, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo n_emlrtMCI = { 19, 15, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo o_emlrtMCI = { 19, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRTEInfo emlrtRTEI = { 1, 10, "sdruOFDMTransmitterRun",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m"
};

emlrtRTEInfo b_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo c_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo d_emlrtRTEI = { 1, 13, "SDRuTransmitter",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p" };

emlrtRTEInfo e_emlrtRTEI = { 1, 41, "sendComplexDoubleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

emlrtRTEInfo f_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo g_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

emlrtRTEInfo h_emlrtRTEI = { 1, 10, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtBCInfo b_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

sdruOFDMTransmitterRunStackData *b_sdruOFDMTransmitterRunStackDa;

/* End of code generation (sdruOFDMTransmitterRun_data.c) */
