/*
 * receiveOFDM80211a_sdru_data.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru_data'
 *
 * C source code generated on: Tue Oct  8 14:08:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "receiveOFDM80211a_sdru_data.h"
#include <stdio.h>

/* Variable Definitions */
boolean_T isSetupsdruCalled;
emlrtRSInfo n_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo o_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo p_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo q_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo t_emlrtRSI = { 1, "SDRuReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/SDRuReceiver.p" };

emlrtRSInfo u_emlrtRSI = { 1, "SDRuBase",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p"
};

emlrtRSInfo cb_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo gb_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo hb_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo jb_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo nb_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo qb_emlrtRSI = { 1, "OFDMBase",
  "/home/sdruser/git/OFDMSync/OFDMBase.m" };

emlrtRSInfo tb_emlrtRSI = { 29, "log2",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo ub_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo vb_emlrtRSI = { 1, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

emlrtRSInfo wb_emlrtRSI = { 83, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

emlrtRSInfo xb_emlrtRSI = { 185, "eml_sort_idx",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo dc_emlrtRSI = { 207, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo fc_emlrtRSI = { 169, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo mc_emlrtRSI = { 248, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo nc_emlrtRSI = { 249, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo pc_emlrtRSI = { 71, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

emlrtRSInfo rc_emlrtRSI = { 61, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

emlrtRSInfo tc_emlrtRSI = { 51, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

emlrtRSInfo vc_emlrtRSI = { 35, "reportSDRuStatus",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/reportSDRuStatus.m" };

emlrtRSInfo wc_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo ld_emlrtRSI = { 14, "sqrt",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo ne_emlrtRSI = { 38, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo pe_emlrtRSI = { 192, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo se_emlrtRSI = { 20, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo te_emlrtRSI = { 17, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo af_emlrtRSI = { 104, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

emlrtRSInfo bf_emlrtRSI = { 163, "OFDMBase",
  "/home/sdruser/git/OFDMSync/OFDMBase.m" };

emlrtRSInfo cf_emlrtRSI = { 141, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

emlrtRSInfo lf_emlrtRSI = { 93, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo mf_emlrtRSI = { 1, "FIRRateConverter",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p" };

emlrtRSInfo xf_emlrtRSI = { 76, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

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

emlrtMCInfo l_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtMCInfo m_emlrtMCI = { 249, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo n_emlrtMCI = { 19, 15, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo o_emlrtMCI = { 19, 5, "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo v_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo w_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo x_emlrtMCI = { 18, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo y_emlrtMCI = { 17, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo ab_emlrtMCI = { 23, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo bb_emlrtMCI = { 20, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRTEInfo d_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo f_emlrtRTEI = { 51, 10, "checkIPAddressFormat",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo g_emlrtRTEI = { 159, 1, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo h_emlrtRTEI = { 70, 21, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

emlrtRTEInfo i_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo j_emlrtRTEI = { 1, 58, "receiveData",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo k_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo l_emlrtRTEI = { 127, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo m_emlrtRTEI = { 33, 50, "locateOFDMFrame_sdr",
  "/opt/MATLAB/R2013a/toolbox/comm/commdemos/private/locateOFDMFrame_sdr.m" };

emlrtRTEInfo n_emlrtRTEI = { 189, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo o_emlrtRTEI = { 190, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo p_emlrtRTEI = { 191, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo q_emlrtRTEI = { 129, 22, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo r_emlrtRTEI = { 20, 9, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

emlrtRTEInfo v_emlrtRTEI = { 113, 12, "OFDMDemodulator",
  "/home/sdruser/git/OFDMSync/OFDMDemodulator.m" };

emlrtRTEInfo w_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

emlrtRTEInfo x_emlrtRTEI = { 1, 10, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtBCInfo n_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

emlrtRTEInfo db_emlrtRTEI = { 20, 5, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

receiveOFDM80211a_sdruStackData *b_receiveOFDM80211a_sdruStackDa;

/* End of code generation (receiveOFDM80211a_sdru_data.c) */
