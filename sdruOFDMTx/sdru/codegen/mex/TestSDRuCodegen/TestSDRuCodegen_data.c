/*
 * TestSDRuCodegen_data.c
 *
 * Code generation for function 'TestSDRuCodegen_data'
 *
 * C source code generated on: Tue Oct  8 16:14:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TestSDRuCodegen.h"
#include "TestSDRuCodegen_data.h"

/* Variable Definitions */
boolean_T isSetupsdruCalled;
emlrtRSInfo f_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo i_emlrtRSI = { 1, "SDRuReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/SDRuReceiver.p" };

emlrtRSInfo j_emlrtRSI = { 1, "SDRuBase",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p"
};

emlrtRSInfo q_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo u_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo v_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo w_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo db_emlrtRSI = { 248, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo eb_emlrtRSI = { 249, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

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

emlrtMCInfo l_emlrtMCI = { 249, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo m_emlrtMCI = { 19, 15, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo n_emlrtMCI = { 19, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRTEInfo emlrtRTEI = { 1, 18, "TestSDRuCodegen",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/TestSDRuCodegen.m" };

emlrtRTEInfo b_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo c_emlrtRTEI = { 1, 13, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRTEInfo d_emlrtRTEI = { 51, 10, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo e_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

emlrtRTEInfo f_emlrtRTEI = { 1, 10, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtBCInfo b_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

/* End of code generation (TestSDRuCodegen_data.c) */
