/*
 * runSDRuQPSKTransmitter_data.c
 *
 * Code generation for function 'runSDRuQPSKTransmitter_data'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "runSDRuQPSKTransmitter_data.h"

/* Variable Definitions */
QPSKTransmitter_201 hTx;
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T hTx_not_empty;
boolean_T isSetupsdruCalled;
emlrtRSInfo g_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo h_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo i_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo j_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo m_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo n_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo o_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtRSInfo q_emlrtRSI = { 1, "SDRuBase",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo r_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

emlrtRSInfo x_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo cb_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo db_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo fb_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo gb_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo pb_emlrtRSI = { 1, "FIRInterpolator",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p" };

emlrtRSInfo yb_emlrtRSI = { 1, "Scrambler",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/Scrambler.p" };

emlrtRSInfo gc_emlrtRSI = { 151, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtRSInfo ic_emlrtRSI = { 127, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtRSInfo jc_emlrtRSI = { 14, "log",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log.m" };

emlrtRSInfo kc_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo mc_emlrtRSI = { 61, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo nc_emlrtRSI = { 19, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

emlrtRSInfo oc_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo pc_emlrtRSI = { 43, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

emlrtRSInfo wc_emlrtRSI = { 248, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo xc_emlrtRSI = { 249, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo ad_emlrtRSI = { 71, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo cd_emlrtRSI = { 61, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo ed_emlrtRSI = { 51, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo gd_emlrtRSI = { 35, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo hd_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo ld_emlrtRSI = { 9, "sendInt16Data",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendInt16Data.m" };

emlrtRSInfo nd_emlrtRSI = { 9, "sendComplexInt16Data",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexInt16Data.m"
};

emlrtRSInfo od_emlrtRSI = { 9, "sendSingleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendSingleData.m" };

emlrtRSInfo pd_emlrtRSI = { 9, "sendComplexSingleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexSingleData.m"
};

emlrtRSInfo qd_emlrtRSI = { 9, "sendDoubleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendDoubleData.m" };

emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtMCInfo b_emlrtMCI = { 15, 19, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtMCInfo c_emlrtMCI = { 25, 9, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo d_emlrtMCI = { 24, 19, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo e_emlrtMCI = { 30, 9, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo f_emlrtMCI = { 27, 19, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo g_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtMCInfo h_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtMCInfo k_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtMCInfo l_emlrtMCI = { 127, 1, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtMCInfo m_emlrtMCI = { 151, 1, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtMCInfo o_emlrtMCI = { 249, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo p_emlrtMCI = { 19, 15, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo q_emlrtMCI = { 19, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRTEInfo emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo b_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo c_emlrtRTEI = { 137, 28, "QPSKBitsGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/QPSKBitsGenerator.m" };

emlrtRTEInfo d_emlrtRTEI = { 1, 13, "SDRuTransmitter",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p" };

emlrtRTEInfo e_emlrtRTEI = { 1, 41, "sendComplexDoubleData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

emlrtRTEInfo f_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo g_emlrtRTEI = { 1, 13, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRTEInfo h_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

emlrtRTEInfo i_emlrtRTEI = { 1, 10, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtRTEInfo j_emlrtRTEI = { 19, 1, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

emlrtRTEInfo k_emlrtRTEI = { 41, 1, "update",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/update.m" };

emlrtRTEInfo l_emlrtRTEI = { 43, 20, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

emlrtRTEInfo m_emlrtRTEI = { 43, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo n_emlrtRTEI = { 20, 5, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtBCInfo m_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

/* End of code generation (runSDRuQPSKTransmitter_data.c) */
