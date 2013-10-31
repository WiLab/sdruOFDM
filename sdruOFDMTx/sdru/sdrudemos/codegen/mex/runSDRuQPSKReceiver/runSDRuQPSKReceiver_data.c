/*
 * runSDRuQPSKReceiver_data.c
 *
 * Code generation for function 'runSDRuQPSKReceiver_data'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
sdruQPSKRx_283 hRx;
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T hRx_not_empty;
boolean_T isSetupsdruCalled;
emlrtRSInfo g_emlrtRSI = { 14, "sqrt",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo h_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo i_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo j_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo k_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo l_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo o_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo s_emlrtRSI = { 1, "SDRuBase",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo t_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

emlrtRSInfo ab_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo eb_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo fb_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo hb_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo ib_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo rb_emlrtRSI = { 248, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo sb_emlrtRSI = { 249, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo ub_emlrtRSI = { 71, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo wb_emlrtRSI = { 61, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo yb_emlrtRSI = { 51, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo bc_emlrtRSI = { 35, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo cc_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo tc_emlrtRSI = { 1, "FIRDecimator",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p" };

emlrtRSInfo ud_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo he_emlrtRSI = { 52, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtRSInfo ag_emlrtRSI = { 1, "Buffer",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/Buffer.p" };

emlrtRSInfo cg_emlrtRSI = { 1, "Crosscorrelator",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p" };

emlrtRSInfo dg_emlrtRSI = { 1, "Descrambler",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/Descrambler.p" };

emlrtRSInfo eg_emlrtRSI = { 1, "ErrorRate",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/ErrorRate.p" };

emlrtRSInfo yg_emlrtRSI = { 151, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtRSInfo ah_emlrtRSI = { 127, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtRSInfo ch_emlrtRSI = { 61, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

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

emlrtMCInfo l_emlrtMCI = { 249, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo m_emlrtMCI = { 19, 15, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo n_emlrtMCI = { 19, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo s_emlrtMCI = { 127, 1, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtMCInfo t_emlrtMCI = { 151, 1, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

emlrtRTEInfo emlrtRTEI = { 1, 16, "runSDRuQPSKReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m"
};

emlrtRTEInfo b_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo c_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo d_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo e_emlrtRTEI = { 1, 58, "receiveData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo f_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo g_emlrtRTEI = { 191, 24, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

emlrtRTEInfo h_emlrtRTEI = { 1, 13, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRTEInfo i_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

emlrtRTEInfo j_emlrtRTEI = { 1, 10, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtBCInfo emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtBCInfo l_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

emlrtRTEInfo o_emlrtRTEI = { 52, 20, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

runSDRuQPSKReceiverStackData *c_runSDRuQPSKReceiverStackDataL;

/* End of code generation (runSDRuQPSKReceiver_data.c) */
