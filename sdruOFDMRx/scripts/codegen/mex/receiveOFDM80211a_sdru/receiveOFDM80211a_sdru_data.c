/*
 * receiveOFDM80211a_sdru_data.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru_data'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo m_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo n_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo o_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo p_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo s_emlrtRSI = { 1, "SDRuReceiver",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p" };

emlrtRSInfo bb_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo fb_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo gb_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo ib_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo mb_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo sb_emlrtRSI = { 29, "log2",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo tb_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo wb_emlrtRSI = { 185, "eml_sort_idx",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo cc_emlrtRSI = { 207, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ec_emlrtRSI = { 169, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo lc_emlrtRSI = { 248, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo mc_emlrtRSI = { 249, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo oc_emlrtRSI = { 71, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo qc_emlrtRSI = { 61, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo sc_emlrtRSI = { 51, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo uc_emlrtRSI = { 35, "reportSDRuStatus",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m" };

emlrtRSInfo vc_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo kd_emlrtRSI = { 14, "sqrt",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo me_emlrtRSI = { 38, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo oe_emlrtRSI = { 192, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo re_emlrtRSI = { 20, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo se_emlrtRSI = { 17, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo ye_emlrtRSI = { 104, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m" };

emlrtRSInfo af_emlrtRSI = { 163, "OFDMBase",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m" };

emlrtRSInfo bf_emlrtRSI = { 141, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m" };

emlrtRSInfo cf_emlrtRSI = { 171, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m" };

emlrtRSInfo df_emlrtRSI = { 68, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo ef_emlrtRSI = { 66, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo ff_emlrtRSI = { 61, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo gf_emlrtRSI = { 22, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo if_emlrtRSI = { 52, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo kf_emlrtRSI = { 93, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo lf_emlrtRSI = { 1, "FIRRateConverter",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p" };

emlrtRSInfo ag_emlrtRSI = { 76, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

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

emlrtMCInfo k_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtMCInfo l_emlrtMCI = { 249, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo m_emlrtMCI = { 19, 15, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo n_emlrtMCI = { 19, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo u_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo v_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo w_emlrtMCI = { 18, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo x_emlrtMCI = { 17, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo y_emlrtMCI = { 23, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo ab_emlrtMCI = { 20, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo bb_emlrtMCI = { 67, 5, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtMCInfo cb_emlrtMCI = { 66, 15, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtMCInfo fb_emlrtMCI = { 53, 5, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo gb_emlrtMCI = { 52, 15, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRTEInfo d_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo e_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo f_emlrtRTEI = { 159, 1, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo g_emlrtRTEI = { 1, 43, "createOFDMDemods",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/createOFDMDemods.m" };

emlrtRTEInfo h_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo i_emlrtRTEI = { 1, 58, "receiveData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo j_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo k_emlrtRTEI = { 127, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo l_emlrtRTEI = { 33, 50, "locateOFDMFrame_sdr",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m"
};

emlrtRTEInfo m_emlrtRTEI = { 189, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo n_emlrtRTEI = { 190, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo o_emlrtRTEI = { 191, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo p_emlrtRTEI = { 129, 22, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo q_emlrtRTEI = { 20, 9, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

emlrtRTEInfo s_emlrtRTEI = { 65, 1, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRTEInfo t_emlrtRTEI = { 113, 12, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m" };

emlrtRTEInfo v_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

emlrtRTEInfo w_emlrtRTEI = { 1, 10, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtBCInfo b_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

emlrtRTEInfo cb_emlrtRTEI = { 20, 5, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtDCInfo b_emlrtDCI = { 171, 28, "OFDMDemodulator",
  "/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m", 1
};

receiveOFDM80211a_sdruStackData *b_receiveOFDM80211a_sdruStackDa;

/* End of code generation (receiveOFDM80211a_sdru_data.c) */
