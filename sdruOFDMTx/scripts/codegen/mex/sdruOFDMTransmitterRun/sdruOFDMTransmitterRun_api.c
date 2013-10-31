/*
 * sdruOFDMTransmitterRun_api.c
 *
 * Code generation for function 'sdruOFDMTransmitterRun_api'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "sdruOFDMTransmitterRun_api.h"

/* Function Declarations */
static void b_info_helper(ResolvedFunctionInfo info[113]);
static real_T c_emlrt_marshallIn(const mxArray *InterpolationFactor, const
  char_T *identifier);
static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void e_emlrt_marshallIn(const mxArray *txOrg, const char_T *identifier,
  creal_T y[25600]);
static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[113]);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[25600]);
static real_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[25600]);
static void info_helper(ResolvedFunctionInfo info[113]);

/* Function Definitions */
static void b_info_helper(ResolvedFunctionInfo info[113])
{
  info[64].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[64].name = "matlab.system.pvParse";
  info[64].dominantType = "comm.SDRuTransmitter";
  info[64].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[64].fileTimeLo = 1357962380U;
  info[64].fileTimeHi = 0U;
  info[64].mFileTimeLo = 0U;
  info[64].mFileTimeHi = 0U;
  info[65].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[65].name = "length";
  info[65].dominantType = "cell";
  info[65].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[65].fileTimeLo = 1303167806U;
  info[65].fileTimeHi = 0U;
  info[65].mFileTimeLo = 0U;
  info[65].mFileTimeHi = 0U;
  info[66].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[66].name = "rem";
  info[66].dominantType = "double";
  info[66].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[66].fileTimeLo = 1343851984U;
  info[66].fileTimeHi = 0U;
  info[66].mFileTimeLo = 0U;
  info[66].mFileTimeHi = 0U;
  info[67].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[67].name = "eml_scalar_eg";
  info[67].dominantType = "double";
  info[67].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[67].fileTimeLo = 1286840396U;
  info[67].fileTimeHi = 0U;
  info[67].mFileTimeLo = 0U;
  info[67].mFileTimeHi = 0U;
  info[68].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[68].name = "eml_scalexp_alloc";
  info[68].dominantType = "double";
  info[68].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[68].fileTimeLo = 1352446460U;
  info[68].fileTimeHi = 0U;
  info[68].mFileTimeLo = 0U;
  info[68].mFileTimeHi = 0U;
  info[69].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[69].name = "coder.internal.warning";
  info[69].dominantType = "char";
  info[69].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[69].fileTimeLo = 1311277408U;
  info[69].fileTimeHi = 0U;
  info[69].mFileTimeLo = 0U;
  info[69].mFileTimeHi = 0U;
  info[70].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[70].name = "eml_warning";
  info[70].dominantType = "char";
  info[70].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  info[70].fileTimeLo = 1286840402U;
  info[70].fileTimeHi = 0U;
  info[70].mFileTimeLo = 0U;
  info[70].mFileTimeHi = 0U;
  info[71].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m";
  info[71].name = "disp";
  info[71].dominantType = "char";
  info[71].resolved = "[IXMB]$matlabroot$/toolbox/matlab/lang/disp";
  info[71].fileTimeLo = MAX_uint32_T;
  info[71].fileTimeHi = MAX_uint32_T;
  info[71].mFileTimeLo = MAX_uint32_T;
  info[71].mFileTimeHi = MAX_uint32_T;
  info[72].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[72].name = "coder.internal.assert";
  info[72].dominantType = "char";
  info[72].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[72].fileTimeLo = 1334093538U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[73].name = "length";
  info[73].dominantType = "char";
  info[73].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[73].fileTimeLo = 1303167806U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[74].name = "all";
  info[74].dominantType = "logical";
  info[74].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[74].fileTimeLo = 1286840434U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[75].name = "eml_all_or_any";
  info[75].dominantType = "char";
  info[75].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[75].fileTimeLo = 1286840294U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[76].name = "DataPortDataTypeCapiEnumT";
  info[76].dominantType = "";
  info[76].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m";
  info[76].fileTimeLo = 1345182480U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[77].name = "length";
  info[77].dominantType = "double";
  info[77].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[77].fileTimeLo = 1303167806U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 0U;
  info[77].mFileTimeHi = 0U;
  info[78].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[78].name = "openDataConnection";
  info[78].dominantType = "BoardIdCapiEnumT";
  info[78].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[78].fileTimeLo = 1345182488U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[79].name = "mapiPrivate";
  info[79].dominantType = "BoardIdCapiEnumT";
  info[79].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[79].fileTimeLo = 1357947598U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[80].name = "UsrpErrorCapiEnumT";
  info[80].dominantType = "double";
  info[80].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[80].fileTimeLo = 1345182482U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[81].name = "char";
  info[81].dominantType = "double";
  info[81].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[81].fileTimeLo = 1319751568U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[82].name = "UsrpReportMethodEnumT";
  info[82].dominantType = "";
  info[82].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[82].fileTimeLo = 1345182484U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 0U;
  info[82].mFileTimeHi = 0U;
  info[83].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[83].name = "reportSDRuStatus";
  info[83].dominantType = "UsrpErrorCapiEnumT";
  info[83].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[83].fileTimeLo = 1351913716U;
  info[83].fileTimeHi = 0U;
  info[83].mFileTimeLo = 0U;
  info[83].mFileTimeHi = 0U;
  info[84].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[84].name = "coder.internal.errorIf";
  info[84].dominantType = "char";
  info[84].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[84].fileTimeLo = 1334093538U;
  info[84].fileTimeHi = 0U;
  info[84].mFileTimeLo = 0U;
  info[84].mFileTimeHi = 0U;
  info[85].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[85].name = "isrow";
  info[85].dominantType = "char";
  info[85].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[85].fileTimeLo = 1346531960U;
  info[85].fileTimeHi = 0U;
  info[85].mFileTimeLo = 0U;
  info[85].mFileTimeHi = 0U;
  info[86].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[86].name = "UsrpErrorCapiEnumT";
  info[86].dominantType = "";
  info[86].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[86].fileTimeLo = 1345182482U;
  info[86].fileTimeHi = 0U;
  info[86].mFileTimeLo = 0U;
  info[86].mFileTimeHi = 0U;
  info[87].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[87].name = "UsrpReportMethodEnumT";
  info[87].dominantType = "";
  info[87].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[87].fileTimeLo = 1345182484U;
  info[87].fileTimeHi = 0U;
  info[87].mFileTimeLo = 0U;
  info[87].mFileTimeHi = 0U;
  info[88].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[88].name = "coder.internal.warning";
  info[88].dominantType = "char";
  info[88].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[88].fileTimeLo = 1311277408U;
  info[88].fileTimeHi = 0U;
  info[88].mFileTimeLo = 0U;
  info[88].mFileTimeHi = 0U;
  info[89].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[89].name = "getSDRuDriverVersion";
  info[89].dominantType = "";
  info[89].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[89].fileTimeLo = 1345182486U;
  info[89].fileTimeHi = 0U;
  info[89].mFileTimeLo = 0U;
  info[89].mFileTimeHi = 0U;
  info[90].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[90].name = "mapiPrivate";
  info[90].dominantType = "char";
  info[90].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[90].fileTimeLo = 1357947598U;
  info[90].fileTimeHi = 0U;
  info[90].mFileTimeLo = 0U;
  info[90].mFileTimeHi = 0U;
  info[91].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[91].name = "UsrpErrorCapiEnumT";
  info[91].dominantType = "";
  info[91].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[91].fileTimeLo = 1345182482U;
  info[91].fileTimeHi = 0U;
  info[91].mFileTimeLo = 0U;
  info[91].mFileTimeHi = 0U;
  info[92].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[92].name = "matlab.system.coder.SystemCore";
  info[92].dominantType = "";
  info[92].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[92].fileTimeLo = 1357971318U;
  info[92].fileTimeHi = 0U;
  info[92].mFileTimeLo = 0U;
  info[92].mFileTimeHi = 0U;
  info[93].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[93].name = "length";
  info[93].dominantType = "logical";
  info[93].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[93].fileTimeLo = 1303167806U;
  info[93].fileTimeHi = 0U;
  info[93].mFileTimeLo = 0U;
  info[93].mFileTimeHi = 0U;
  info[94].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[94].name = "sendInt16Data";
  info[94].dominantType = "DataPortDataTypeCapiEnumT";
  info[94].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendInt16Data.m";
  info[94].fileTimeLo = 1345182490U;
  info[94].fileTimeHi = 0U;
  info[94].mFileTimeLo = 0U;
  info[94].mFileTimeHi = 0U;
  info[95].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendInt16Data.m";
  info[95].name = "mapiPrivate";
  info[95].dominantType = "DataPortDataTypeCapiEnumT";
  info[95].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[95].fileTimeLo = 1357947598U;
  info[95].fileTimeHi = 0U;
  info[95].mFileTimeLo = 0U;
  info[95].mFileTimeHi = 0U;
  info[96].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[96].name = "sendComplexInt16Data";
  info[96].dominantType = "DataPortDataTypeCapiEnumT";
  info[96].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexInt16Data.m";
  info[96].fileTimeLo = 1345182488U;
  info[96].fileTimeHi = 0U;
  info[96].mFileTimeLo = 0U;
  info[96].mFileTimeHi = 0U;
  info[97].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexInt16Data.m";
  info[97].name = "mapiPrivate";
  info[97].dominantType = "DataPortDataTypeCapiEnumT";
  info[97].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[97].fileTimeLo = 1357947598U;
  info[97].fileTimeHi = 0U;
  info[97].mFileTimeLo = 0U;
  info[97].mFileTimeHi = 0U;
  info[98].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[98].name = "sendSingleData";
  info[98].dominantType = "DataPortDataTypeCapiEnumT";
  info[98].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendSingleData.m";
  info[98].fileTimeLo = 1345182490U;
  info[98].fileTimeHi = 0U;
  info[98].mFileTimeLo = 0U;
  info[98].mFileTimeHi = 0U;
  info[99].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendSingleData.m";
  info[99].name = "mapiPrivate";
  info[99].dominantType = "DataPortDataTypeCapiEnumT";
  info[99].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[99].fileTimeLo = 1357947598U;
  info[99].fileTimeHi = 0U;
  info[99].mFileTimeLo = 0U;
  info[99].mFileTimeHi = 0U;
  info[100].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[100].name = "sendComplexSingleData";
  info[100].dominantType = "DataPortDataTypeCapiEnumT";
  info[100].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexSingleData.m";
  info[100].fileTimeLo = 1345182488U;
  info[100].fileTimeHi = 0U;
  info[100].mFileTimeLo = 0U;
  info[100].mFileTimeHi = 0U;
  info[101].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexSingleData.m";
  info[101].name = "mapiPrivate";
  info[101].dominantType = "DataPortDataTypeCapiEnumT";
  info[101].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[101].fileTimeLo = 1357947598U;
  info[101].fileTimeHi = 0U;
  info[101].mFileTimeLo = 0U;
  info[101].mFileTimeHi = 0U;
  info[102].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[102].name = "sendDoubleData";
  info[102].dominantType = "DataPortDataTypeCapiEnumT";
  info[102].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendDoubleData.m";
  info[102].fileTimeLo = 1345182488U;
  info[102].fileTimeHi = 0U;
  info[102].mFileTimeLo = 0U;
  info[102].mFileTimeHi = 0U;
  info[103].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendDoubleData.m";
  info[103].name = "mapiPrivate";
  info[103].dominantType = "DataPortDataTypeCapiEnumT";
  info[103].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[103].fileTimeLo = 1357947598U;
  info[103].fileTimeHi = 0U;
  info[103].mFileTimeLo = 0U;
  info[103].mFileTimeHi = 0U;
  info[104].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[104].name = "sendComplexDoubleData";
  info[104].dominantType = "DataPortDataTypeCapiEnumT";
  info[104].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexDoubleData.m";
  info[104].fileTimeLo = 1345182488U;
  info[104].fileTimeHi = 0U;
  info[104].mFileTimeLo = 0U;
  info[104].mFileTimeHi = 0U;
  info[105].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexDoubleData.m";
  info[105].name = "mapiPrivate";
  info[105].dominantType = "DataPortDataTypeCapiEnumT";
  info[105].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[105].fileTimeLo = 1357947598U;
  info[105].fileTimeHi = 0U;
  info[105].mFileTimeLo = 0U;
  info[105].mFileTimeHi = 0U;
  info[106].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[106].name = "UsrpErrorCapiEnumT";
  info[106].dominantType = "";
  info[106].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[106].fileTimeLo = 1345182482U;
  info[106].fileTimeHi = 0U;
  info[106].mFileTimeLo = 0U;
  info[106].mFileTimeHi = 0U;
  info[107].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[107].name = "error";
  info[107].dominantType = "char";
  info[107].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m";
  info[107].fileTimeLo = 1319751566U;
  info[107].fileTimeHi = 0U;
  info[107].mFileTimeLo = 0U;
  info[107].mFileTimeHi = 0U;
  info[108].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[108].name = "closeDataConnection";
  info[108].dominantType = "int32";
  info[108].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[108].fileTimeLo = 1345182484U;
  info[108].fileTimeHi = 0U;
  info[108].mFileTimeLo = 0U;
  info[108].mFileTimeHi = 0U;
  info[109].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[109].name = "mapiPrivate";
  info[109].dominantType = "int32";
  info[109].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[109].fileTimeLo = 1357947598U;
  info[109].fileTimeHi = 0U;
  info[109].mFileTimeLo = 0U;
  info[109].mFileTimeHi = 0U;
  info[110].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[110].name = "reportDrivers";
  info[110].dominantType = "";
  info[110].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[110].fileTimeLo = 1345182488U;
  info[110].fileTimeHi = 0U;
  info[110].mFileTimeLo = 0U;
  info[110].mFileTimeHi = 0U;
  info[111].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[111].name = "mapiPrivate";
  info[111].dominantType = "char";
  info[111].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[111].fileTimeLo = 1357947598U;
  info[111].fileTimeHi = 0U;
  info[111].mFileTimeLo = 0U;
  info[111].mFileTimeHi = 0U;
  info[112].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[112].name = "coder.internal.warning";
  info[112].dominantType = "char";
  info[112].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[112].fileTimeLo = 1311277408U;
  info[112].fileTimeHi = 0U;
  info[112].mFileTimeLo = 0U;
  info[112].mFileTimeHi = 0U;
}

static real_T c_emlrt_marshallIn(const mxArray *InterpolationFactor, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(InterpolationFactor), &thisId);
  emlrtDestroyArray(&InterpolationFactor);
  return y;
}

static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const mxArray *txOrg, const char_T *identifier,
  creal_T y[25600])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(txOrg), &thisId, y);
  emlrtDestroyArray(&txOrg);
}

static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[113])
{
  const mxArray *y;
  int32_T iv34[1];
  int32_T i13;
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m9;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  y = NULL;
  iv34[0] = 113;
  emlrtAssign(&y, mxCreateStructArray(1, iv34, 0, NULL));
  for (i13 = 0; i13 < 113; i13++) {
    r0 = &u[i13];
    b_u = r0->context;
    b_y = NULL;
    m9 = mxCreateString(b_u);
    emlrtAssign(&b_y, m9);
    emlrtAddField(y, b_y, "context", i13);
    b_u = r0->name;
    c_y = NULL;
    m9 = mxCreateString(b_u);
    emlrtAssign(&c_y, m9);
    emlrtAddField(y, c_y, "name", i13);
    b_u = r0->dominantType;
    d_y = NULL;
    m9 = mxCreateString(b_u);
    emlrtAssign(&d_y, m9);
    emlrtAddField(y, d_y, "dominantType", i13);
    b_u = r0->resolved;
    e_y = NULL;
    m9 = mxCreateString(b_u);
    emlrtAssign(&e_y, m9);
    emlrtAddField(y, e_y, "resolved", i13);
    c_u = r0->fileTimeLo;
    f_y = NULL;
    m9 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m9) = c_u;
    emlrtAssign(&f_y, m9);
    emlrtAddField(y, f_y, "fileTimeLo", i13);
    c_u = r0->fileTimeHi;
    g_y = NULL;
    m9 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m9) = c_u;
    emlrtAssign(&g_y, m9);
    emlrtAddField(y, g_y, "fileTimeHi", i13);
    c_u = r0->mFileTimeLo;
    h_y = NULL;
    m9 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m9) = c_u;
    emlrtAssign(&h_y, m9);
    emlrtAddField(y, h_y, "mFileTimeLo", i13);
    c_u = r0->mFileTimeHi;
    i_y = NULL;
    m9 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m9) = c_u;
    emlrtAssign(&i_y, m9);
    emlrtAddField(y, i_y, "mFileTimeHi", i13);
  }

  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[25600])
{
  i_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[25600])
{
  int32_T iv36[1];
  iv36[0] = 25600;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 1U,
    iv36);
  emlrtImportArrayR2011b(src, ret, 8, TRUE);
  emlrtDestroyArray(&src);
}

static void info_helper(ResolvedFunctionInfo info[113])
{
  info[0].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[0].name = "matlab.system.coder.SystemProp";
  info[0].dominantType = "unknown";
  info[0].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[0].fileTimeLo = 1357971320U;
  info[0].fileTimeHi = 0U;
  info[0].mFileTimeLo = 0U;
  info[0].mFileTimeHi = 0U;
  info[1].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[1].name = "matlab.system.coder.SystemCore";
  info[1].dominantType = "unknown";
  info[1].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[1].fileTimeLo = 1357971318U;
  info[1].fileTimeHi = 0U;
  info[1].mFileTimeLo = 0U;
  info[1].mFileTimeHi = 0U;
  info[2].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[2].name = "matlab.system.coder.System";
  info[2].dominantType = "unknown";
  info[2].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[2].fileTimeLo = 1357971318U;
  info[2].fileTimeHi = 0U;
  info[2].mFileTimeLo = 0U;
  info[2].mFileTimeHi = 0U;
  info[3].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[3].name = "matlab.system.System";
  info[3].dominantType = "unknown";
  info[3].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/System.p";
  info[3].fileTimeLo = 1357962380U;
  info[3].fileTimeHi = 0U;
  info[3].mFileTimeLo = 0U;
  info[3].mFileTimeHi = 0U;
  info[4].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[4].name = "matlab.System";
  info[4].dominantType = "unknown";
  info[4].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[4].fileTimeLo = 1357962380U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[5].name = "comm.internal.SDRuBase";
  info[5].dominantType = "unknown";
  info[5].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[5].fileTimeLo = 1358405138U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMTx/scripts/sdruOFDMTransmitterRun.m";
  info[6].name = "comm.SDRuTransmitter";
  info[6].dominantType = "char";
  info[6].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[6].fileTimeLo = 1358405138U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[7].name = "matlab.system.coder.SystemProp";
  info[7].dominantType = "";
  info[7].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[7].fileTimeLo = 1357971320U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[8].name = "coder.internal.getHostName";
  info[8].dominantType = "char";
  info[8].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m";
  info[8].fileTimeLo = 1327440774U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[9].name = "randi";
  info[9].dominantType = "double";
  info[9].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[9].fileTimeLo = 1320911042U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[10].name = "eml_assert_valid_size_arg";
  info[10].dominantType = "double";
  info[10].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[10].fileTimeLo = 1286840294U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 0U;
  info[10].mFileTimeHi = 0U;
  info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral";
  info[11].name = "isinf";
  info[11].dominantType = "double";
  info[11].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[11].fileTimeLo = 1286840360U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size";
  info[12].name = "mtimes";
  info[12].dominantType = "double";
  info[12].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[12].fileTimeLo = 1289541292U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[13].name = "eml_index_class";
  info[13].dominantType = "";
  info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[13].fileTimeLo = 1323192178U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[14].name = "intmax";
  info[14].dominantType = "char";
  info[14].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[14].fileTimeLo = 1311276916U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[15].name = "rand";
  info[15].dominantType = "double";
  info[15].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[15].fileTimeLo = 1313369422U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[16].name = "eml_is_rand_extrinsic";
  info[16].dominantType = "";
  info[16].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/eml_is_rand_extrinsic.m";
  info[16].fileTimeLo = 1334093090U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[17].name = "mtimes";
  info[17].dominantType = "double";
  info[17].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[17].fileTimeLo = 1289541292U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[18].name = "floor";
  info[18].dominantType = "double";
  info[18].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[18].fileTimeLo = 1343851980U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[19].name = "eml_scalar_floor";
  info[19].dominantType = "double";
  info[19].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[19].fileTimeLo = 1286840326U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[20].name = "char";
  info[20].dominantType = "double";
  info[20].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[20].fileTimeLo = 1319751568U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[21].name = "matlab.system.isSystemObject";
  info[21].dominantType = "char";
  info[21].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[21].fileTimeLo = 1357962380U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[22].name = "length";
  info[22].dominantType = "cell";
  info[22].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[22].fileTimeLo = 1303167806U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[23].name = "matlab.system.coder.System";
  info[23].dominantType = "";
  info[23].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[23].fileTimeLo = 1357971318U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 0U;
  info[23].mFileTimeHi = 0U;
  info[24].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[24].name = "matlab.system.setProp";
  info[24].dominantType = "comm.SDRuTransmitter";
  info[24].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[24].fileTimeLo = 1357962380U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[25].name = "checkIPAddressFormat";
  info[25].dominantType = "char";
  info[25].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[25].fileTimeLo = 1351913716U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[26].name = "nargchk";
  info[26].dominantType = "double";
  info[26].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[26].fileTimeLo = 1286840418U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[27].name = "floor";
  info[27].dominantType = "double";
  info[27].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[27].fileTimeLo = 1343851980U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[28].name = "coder.internal.errorIf";
  info[28].dominantType = "char";
  info[28].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[28].fileTimeLo = 1334093538U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[29].name = "isrow";
  info[29].dominantType = "char";
  info[29].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[29].fileTimeLo = 1346531960U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[30].name = "find";
  info[30].dominantType = "logical";
  info[30].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[30].fileTimeLo = 1303167806U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[31].name = "eml_index_class";
  info[31].dominantType = "";
  info[31].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[31].fileTimeLo = 1323192178U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[32].name = "eml_scalar_eg";
  info[32].dominantType = "logical";
  info[32].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[32].fileTimeLo = 1286840396U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[33].name = "eml_int_forloop_overflow_check";
  info[33].dominantType = "";
  info[33].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[33].fileTimeLo = 1346531940U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[34].name = "intmax";
  info[34].dominantType = "char";
  info[34].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[34].fileTimeLo = 1311276916U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[35].name = "eml_index_plus";
  info[35].dominantType = "double";
  info[35].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[35].fileTimeLo = 1286840378U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 0U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[36].name = "eml_index_class";
  info[36].dominantType = "";
  info[36].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[36].fileTimeLo = 1323192178U;
  info[36].fileTimeHi = 0U;
  info[36].mFileTimeLo = 0U;
  info[36].mFileTimeHi = 0U;
  info[37].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[37].name = "length";
  info[37].dominantType = "double";
  info[37].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[37].fileTimeLo = 1303167806U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 0U;
  info[37].mFileTimeHi = 0U;
  info[38].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[38].name = "length";
  info[38].dominantType = "char";
  info[38].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[38].fileTimeLo = 1303167806U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m!checkNumeric";
  info[39].name = "any";
  info[39].dominantType = "logical";
  info[39].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[39].fileTimeLo = 1286840434U;
  info[39].fileTimeHi = 0U;
  info[39].mFileTimeLo = 0U;
  info[39].mFileTimeHi = 0U;
  info[40].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[40].name = "eml_all_or_any";
  info[40].dominantType = "char";
  info[40].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[40].fileTimeLo = 1286840294U;
  info[40].fileTimeHi = 0U;
  info[40].mFileTimeLo = 0U;
  info[40].mFileTimeHi = 0U;
  info[41].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[41].name = "isequal";
  info[41].dominantType = "double";
  info[41].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[41].fileTimeLo = 1286840358U;
  info[41].fileTimeHi = 0U;
  info[41].mFileTimeLo = 0U;
  info[41].mFileTimeHi = 0U;
  info[42].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[42].name = "eml_isequal_core";
  info[42].dominantType = "double";
  info[42].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[42].fileTimeLo = 1286840386U;
  info[42].fileTimeHi = 0U;
  info[42].mFileTimeLo = 0U;
  info[42].mFileTimeHi = 0U;
  info[43].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[43].name = "eml_const_nonsingleton_dim";
  info[43].dominantType = "logical";
  info[43].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[43].fileTimeLo = 1286840296U;
  info[43].fileTimeHi = 0U;
  info[43].mFileTimeLo = 0U;
  info[43].mFileTimeHi = 0U;
  info[44].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[44].name = "eml_matrix_vstride";
  info[44].dominantType = "double";
  info[44].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[44].fileTimeLo = 1286840388U;
  info[44].fileTimeHi = 0U;
  info[44].mFileTimeLo = 0U;
  info[44].mFileTimeHi = 0U;
  info[45].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[45].name = "eml_index_minus";
  info[45].dominantType = "double";
  info[45].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[45].fileTimeLo = 1286840378U;
  info[45].fileTimeHi = 0U;
  info[45].mFileTimeLo = 0U;
  info[45].mFileTimeHi = 0U;
  info[46].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[46].name = "eml_index_class";
  info[46].dominantType = "";
  info[46].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[46].fileTimeLo = 1323192178U;
  info[46].fileTimeHi = 0U;
  info[46].mFileTimeLo = 0U;
  info[46].mFileTimeHi = 0U;
  info[47].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[47].name = "eml_index_class";
  info[47].dominantType = "";
  info[47].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[47].fileTimeLo = 1323192178U;
  info[47].fileTimeHi = 0U;
  info[47].mFileTimeLo = 0U;
  info[47].mFileTimeHi = 0U;
  info[48].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[48].name = "eml_size_prod";
  info[48].dominantType = "logical";
  info[48].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[48].fileTimeLo = 1286840398U;
  info[48].fileTimeHi = 0U;
  info[48].mFileTimeLo = 0U;
  info[48].mFileTimeHi = 0U;
  info[49].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[49].name = "eml_index_class";
  info[49].dominantType = "";
  info[49].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[49].fileTimeLo = 1323192178U;
  info[49].fileTimeHi = 0U;
  info[49].mFileTimeLo = 0U;
  info[49].mFileTimeHi = 0U;
  info[50].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[50].name = "eml_index_times";
  info[50].dominantType = "double";
  info[50].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[50].fileTimeLo = 1286840380U;
  info[50].fileTimeHi = 0U;
  info[50].mFileTimeLo = 0U;
  info[50].mFileTimeHi = 0U;
  info[51].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[51].name = "eml_index_class";
  info[51].dominantType = "";
  info[51].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[51].fileTimeLo = 1323192178U;
  info[51].fileTimeHi = 0U;
  info[51].mFileTimeLo = 0U;
  info[51].mFileTimeHi = 0U;
  info[52].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[52].name = "eml_index_minus";
  info[52].dominantType = "double";
  info[52].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[52].fileTimeLo = 1286840378U;
  info[52].fileTimeHi = 0U;
  info[52].mFileTimeLo = 0U;
  info[52].mFileTimeHi = 0U;
  info[53].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[53].name = "eml_index_times";
  info[53].dominantType = "coder.internal.indexInt";
  info[53].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[53].fileTimeLo = 1286840380U;
  info[53].fileTimeHi = 0U;
  info[53].mFileTimeLo = 0U;
  info[53].mFileTimeHi = 0U;
  info[54].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[54].name = "eml_matrix_npages";
  info[54].dominantType = "double";
  info[54].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[54].fileTimeLo = 1286840386U;
  info[54].fileTimeHi = 0U;
  info[54].mFileTimeLo = 0U;
  info[54].mFileTimeHi = 0U;
  info[55].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[55].name = "eml_index_plus";
  info[55].dominantType = "double";
  info[55].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[55].fileTimeLo = 1286840378U;
  info[55].fileTimeHi = 0U;
  info[55].mFileTimeLo = 0U;
  info[55].mFileTimeHi = 0U;
  info[56].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[56].name = "eml_index_class";
  info[56].dominantType = "";
  info[56].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[56].fileTimeLo = 1323192178U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[57].name = "eml_size_prod";
  info[57].dominantType = "logical";
  info[57].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[57].fileTimeLo = 1286840398U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[58].name = "eml_index_class";
  info[58].dominantType = "";
  info[58].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[58].fileTimeLo = 1323192178U;
  info[58].fileTimeHi = 0U;
  info[58].mFileTimeLo = 0U;
  info[58].mFileTimeHi = 0U;
  info[59].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[59].name = "eml_index_plus";
  info[59].dominantType = "coder.internal.indexInt";
  info[59].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[59].fileTimeLo = 1286840378U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[60].name = "eml_index_plus";
  info[60].dominantType = "double";
  info[60].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[60].fileTimeLo = 1286840378U;
  info[60].fileTimeHi = 0U;
  info[60].mFileTimeLo = 0U;
  info[60].mFileTimeHi = 0U;
  info[61].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[61].name = "eml_int_forloop_overflow_check";
  info[61].dominantType = "";
  info[61].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[61].fileTimeLo = 1346531940U;
  info[61].fileTimeHi = 0U;
  info[61].mFileTimeLo = 0U;
  info[61].mFileTimeHi = 0U;
  info[62].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[62].name = "isnan";
  info[62].dominantType = "logical";
  info[62].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[62].fileTimeLo = 1286840360U;
  info[62].fileTimeHi = 0U;
  info[62].mFileTimeLo = 0U;
  info[62].mFileTimeHi = 0U;
  info[63].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m!checkNumeric";
  info[63].name = "coder.internal.errorIf";
  info[63].dominantType = "char";
  info[63].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[63].fileTimeLo = 1334093538U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[113];
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info_helper(info);
  emlrtAssign(&nameCaptureInfo, emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void sdruOFDMTransmitterRun_api(sdruOFDMTransmitterRunStackData *SD, const
  mxArray * const prhs[2])
{
  real_T InterpolationFactor;

  /* Marshall function inputs */
  InterpolationFactor = c_emlrt_marshallIn(emlrtAliasP(prhs[0]),
    "InterpolationFactor");
  e_emlrt_marshallIn(emlrtAliasP(prhs[1]), "txOrg", SD->f1.txOrg);

  /* Invoke the target function */
  sdruOFDMTransmitterRun(SD, InterpolationFactor, SD->f1.txOrg);
}

/* End of code generation (sdruOFDMTransmitterRun_api.c) */
