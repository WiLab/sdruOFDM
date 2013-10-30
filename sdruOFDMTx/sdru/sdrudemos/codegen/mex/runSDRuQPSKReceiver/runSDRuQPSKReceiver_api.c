/*
 * runSDRuQPSKReceiver_api.c
 *
 * Code generation for function 'runSDRuQPSKReceiver_api'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "runSDRuQPSKReceiver_api.h"

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(real_T u_data[3], int32_T u_size[1]);
static void b_info_helper(ResolvedFunctionInfo info[563]);
static void c_info_helper(ResolvedFunctionInfo info[563]);
static void d_info_helper(ResolvedFunctionInfo info[563]);
static void e_info_helper(ResolvedFunctionInfo info[563]);
static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[563]);
static void f_info_helper(ResolvedFunctionInfo info[563]);
static void g_info_helper(ResolvedFunctionInfo info[563]);
static void h_info_helper(ResolvedFunctionInfo info[563]);
static void i_info_helper(ResolvedFunctionInfo info[563]);
static void info_helper(ResolvedFunctionInfo info[563]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(real_T u_data[3], int32_T u_size[1])
{
  const mxArray *y;
  static const int32_T iv107[1] = { 0 };

  const mxArray *m27;
  y = NULL;
  m27 = mxCreateNumericArray(1, (int32_T *)&iv107, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m27, (void *)u_data);
  mxSetDimensions((mxArray *)m27, u_size, 1);
  emlrtAssign(&y, m27);
  return y;
}

static void b_info_helper(ResolvedFunctionInfo info[563])
{
  info[64].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[64].name = "eml_index_times";
  info[64].dominantType = "double";
  info[64].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[64].fileTimeLo = 1286840380U;
  info[64].fileTimeHi = 0U;
  info[64].mFileTimeLo = 0U;
  info[64].mFileTimeHi = 0U;
  info[65].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[65].name = "eml_index_class";
  info[65].dominantType = "";
  info[65].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[65].fileTimeLo = 1323192178U;
  info[65].fileTimeHi = 0U;
  info[65].mFileTimeLo = 0U;
  info[65].mFileTimeHi = 0U;
  info[66].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[66].name = "eml_index_minus";
  info[66].dominantType = "double";
  info[66].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[66].fileTimeLo = 1286840378U;
  info[66].fileTimeHi = 0U;
  info[66].mFileTimeLo = 0U;
  info[66].mFileTimeHi = 0U;
  info[67].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[67].name = "eml_index_times";
  info[67].dominantType = "coder.internal.indexInt";
  info[67].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[67].fileTimeLo = 1286840380U;
  info[67].fileTimeHi = 0U;
  info[67].mFileTimeLo = 0U;
  info[67].mFileTimeHi = 0U;
  info[68].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[68].name = "eml_matrix_npages";
  info[68].dominantType = "double";
  info[68].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[68].fileTimeLo = 1286840386U;
  info[68].fileTimeHi = 0U;
  info[68].mFileTimeLo = 0U;
  info[68].mFileTimeHi = 0U;
  info[69].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[69].name = "eml_index_plus";
  info[69].dominantType = "double";
  info[69].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[69].fileTimeLo = 1286840378U;
  info[69].fileTimeHi = 0U;
  info[69].mFileTimeLo = 0U;
  info[69].mFileTimeHi = 0U;
  info[70].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[70].name = "eml_index_class";
  info[70].dominantType = "";
  info[70].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[70].fileTimeLo = 1323192178U;
  info[70].fileTimeHi = 0U;
  info[70].mFileTimeLo = 0U;
  info[70].mFileTimeHi = 0U;
  info[71].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[71].name = "eml_size_prod";
  info[71].dominantType = "logical";
  info[71].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[71].fileTimeLo = 1286840398U;
  info[71].fileTimeHi = 0U;
  info[71].mFileTimeLo = 0U;
  info[71].mFileTimeHi = 0U;
  info[72].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[72].name = "eml_index_class";
  info[72].dominantType = "";
  info[72].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[72].fileTimeLo = 1323192178U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[73].name = "eml_index_plus";
  info[73].dominantType = "coder.internal.indexInt";
  info[73].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[73].fileTimeLo = 1286840378U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[74].name = "eml_index_plus";
  info[74].dominantType = "double";
  info[74].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[74].fileTimeLo = 1286840378U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[75].name = "eml_int_forloop_overflow_check";
  info[75].dominantType = "";
  info[75].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[75].fileTimeLo = 1346531940U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[76].name = "isnan";
  info[76].dominantType = "logical";
  info[76].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[76].fileTimeLo = 1286840360U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m!checkNumeric";
  info[77].name = "coder.internal.errorIf";
  info[77].dominantType = "char";
  info[77].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[77].fileTimeLo = 1334093538U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 0U;
  info[77].mFileTimeHi = 0U;
  info[78].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[78].name = "matlab.system.pvParse";
  info[78].dominantType = "comm.SDRuReceiver";
  info[78].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[78].fileTimeLo = 1357962380U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[79].name = "coder.internal.warning";
  info[79].dominantType = "char";
  info[79].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[79].fileTimeLo = 1311277408U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[80].name = "eml_warning";
  info[80].dominantType = "char";
  info[80].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  info[80].fileTimeLo = 1286840402U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[81].name = "repmat";
  info[81].dominantType = "char";
  info[81].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[81].fileTimeLo = 1352446460U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[82].name = "eml_assert_valid_size_arg";
  info[82].dominantType = "double";
  info[82].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[82].fileTimeLo = 1286840294U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 0U;
  info[82].mFileTimeHi = 0U;
  info[83].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[83].name = "eml_index_class";
  info[83].dominantType = "";
  info[83].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[83].fileTimeLo = 1323192178U;
  info[83].fileTimeHi = 0U;
  info[83].mFileTimeLo = 0U;
  info[83].mFileTimeHi = 0U;
  info[84].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[84].name = "eml_index_minus";
  info[84].dominantType = "coder.internal.indexInt";
  info[84].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[84].fileTimeLo = 1286840378U;
  info[84].fileTimeHi = 0U;
  info[84].mFileTimeLo = 0U;
  info[84].mFileTimeHi = 0U;
  info[85].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[85].name = "coder.internal.assert";
  info[85].dominantType = "char";
  info[85].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[85].fileTimeLo = 1334093538U;
  info[85].fileTimeHi = 0U;
  info[85].mFileTimeLo = 0U;
  info[85].mFileTimeHi = 0U;
  info[86].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[86].name = "length";
  info[86].dominantType = "char";
  info[86].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[86].fileTimeLo = 1303167806U;
  info[86].fileTimeHi = 0U;
  info[86].mFileTimeLo = 0U;
  info[86].mFileTimeHi = 0U;
  info[87].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[87].name = "all";
  info[87].dominantType = "logical";
  info[87].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[87].fileTimeLo = 1286840434U;
  info[87].fileTimeHi = 0U;
  info[87].mFileTimeLo = 0U;
  info[87].mFileTimeHi = 0U;
  info[88].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[88].name = "eml_all_or_any";
  info[88].dominantType = "char";
  info[88].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[88].fileTimeLo = 1286840294U;
  info[88].fileTimeHi = 0U;
  info[88].mFileTimeLo = 0U;
  info[88].mFileTimeHi = 0U;
  info[89].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[89].name = "DataPortDataTypeCapiEnumT";
  info[89].dominantType = "";
  info[89].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m";
  info[89].fileTimeLo = 1345182480U;
  info[89].fileTimeHi = 0U;
  info[89].mFileTimeLo = 0U;
  info[89].mFileTimeHi = 0U;
  info[90].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[90].name = "openDataConnection";
  info[90].dominantType = "BoardIdCapiEnumT";
  info[90].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[90].fileTimeLo = 1345182488U;
  info[90].fileTimeHi = 0U;
  info[90].mFileTimeLo = 0U;
  info[90].mFileTimeHi = 0U;
  info[91].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[91].name = "mapiPrivate";
  info[91].dominantType = "BoardIdCapiEnumT";
  info[91].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[91].fileTimeLo = 1357947598U;
  info[91].fileTimeHi = 0U;
  info[91].mFileTimeLo = 0U;
  info[91].mFileTimeHi = 0U;
  info[92].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[92].name = "UsrpErrorCapiEnumT";
  info[92].dominantType = "double";
  info[92].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[92].fileTimeLo = 1345182482U;
  info[92].fileTimeHi = 0U;
  info[92].mFileTimeLo = 0U;
  info[92].mFileTimeHi = 0U;
  info[93].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[93].name = "char";
  info[93].dominantType = "double";
  info[93].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[93].fileTimeLo = 1319751568U;
  info[93].fileTimeHi = 0U;
  info[93].mFileTimeLo = 0U;
  info[93].mFileTimeHi = 0U;
  info[94].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[94].name = "mpower";
  info[94].dominantType = "double";
  info[94].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[94].fileTimeLo = 1286840442U;
  info[94].fileTimeHi = 0U;
  info[94].mFileTimeLo = 0U;
  info[94].mFileTimeHi = 0U;
  info[95].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[95].name = "power";
  info[95].dominantType = "double";
  info[95].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[95].fileTimeLo = 1348213530U;
  info[95].fileTimeHi = 0U;
  info[95].mFileTimeLo = 0U;
  info[95].mFileTimeHi = 0U;
  info[96].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[96].name = "eml_scalar_eg";
  info[96].dominantType = "double";
  info[96].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[96].fileTimeLo = 1286840396U;
  info[96].fileTimeHi = 0U;
  info[96].mFileTimeLo = 0U;
  info[96].mFileTimeHi = 0U;
  info[97].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[97].name = "eml_scalexp_alloc";
  info[97].dominantType = "double";
  info[97].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[97].fileTimeLo = 1352446460U;
  info[97].fileTimeHi = 0U;
  info[97].mFileTimeLo = 0U;
  info[97].mFileTimeHi = 0U;
  info[98].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[98].name = "floor";
  info[98].dominantType = "double";
  info[98].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[98].fileTimeLo = 1343851980U;
  info[98].fileTimeHi = 0U;
  info[98].mFileTimeLo = 0U;
  info[98].mFileTimeHi = 0U;
  info[99].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[99].name = "eml_scalar_eg";
  info[99].dominantType = "double";
  info[99].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[99].fileTimeLo = 1286840396U;
  info[99].fileTimeHi = 0U;
  info[99].mFileTimeLo = 0U;
  info[99].mFileTimeHi = 0U;
  info[100].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[100].name = "mrdivide";
  info[100].dominantType = "double";
  info[100].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[100].fileTimeLo = 1357973148U;
  info[100].fileTimeHi = 0U;
  info[100].mFileTimeLo = 1319751566U;
  info[100].mFileTimeHi = 0U;
  info[101].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[101].name = "UsrpReportMethodEnumT";
  info[101].dominantType = "";
  info[101].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[101].fileTimeLo = 1345182484U;
  info[101].fileTimeHi = 0U;
  info[101].mFileTimeLo = 0U;
  info[101].mFileTimeHi = 0U;
  info[102].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[102].name = "reportSDRuStatus";
  info[102].dominantType = "UsrpErrorCapiEnumT";
  info[102].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[102].fileTimeLo = 1351917316U;
  info[102].fileTimeHi = 0U;
  info[102].mFileTimeLo = 0U;
  info[102].mFileTimeHi = 0U;
  info[103].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[103].name = "coder.internal.errorIf";
  info[103].dominantType = "char";
  info[103].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[103].fileTimeLo = 1334093538U;
  info[103].fileTimeHi = 0U;
  info[103].mFileTimeLo = 0U;
  info[103].mFileTimeHi = 0U;
  info[104].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[104].name = "isrow";
  info[104].dominantType = "char";
  info[104].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[104].fileTimeLo = 1346531960U;
  info[104].fileTimeHi = 0U;
  info[104].mFileTimeLo = 0U;
  info[104].mFileTimeHi = 0U;
  info[105].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[105].name = "UsrpErrorCapiEnumT";
  info[105].dominantType = "";
  info[105].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[105].fileTimeLo = 1345182482U;
  info[105].fileTimeHi = 0U;
  info[105].mFileTimeLo = 0U;
  info[105].mFileTimeHi = 0U;
  info[106].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[106].name = "UsrpReportMethodEnumT";
  info[106].dominantType = "";
  info[106].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[106].fileTimeLo = 1345182484U;
  info[106].fileTimeHi = 0U;
  info[106].mFileTimeLo = 0U;
  info[106].mFileTimeHi = 0U;
  info[107].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[107].name = "coder.internal.warning";
  info[107].dominantType = "char";
  info[107].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[107].fileTimeLo = 1311277408U;
  info[107].fileTimeHi = 0U;
  info[107].mFileTimeLo = 0U;
  info[107].mFileTimeHi = 0U;
  info[108].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[108].name = "getSDRuDriverVersion";
  info[108].dominantType = "";
  info[108].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[108].fileTimeLo = 1345182486U;
  info[108].fileTimeHi = 0U;
  info[108].mFileTimeLo = 0U;
  info[108].mFileTimeHi = 0U;
  info[109].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[109].name = "mapiPrivate";
  info[109].dominantType = "char";
  info[109].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[109].fileTimeLo = 1357947598U;
  info[109].fileTimeHi = 0U;
  info[109].mFileTimeLo = 0U;
  info[109].mFileTimeHi = 0U;
  info[110].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[110].name = "UsrpErrorCapiEnumT";
  info[110].dominantType = "";
  info[110].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[110].fileTimeLo = 1345182482U;
  info[110].fileTimeHi = 0U;
  info[110].mFileTimeLo = 0U;
  info[110].mFileTimeHi = 0U;
  info[111].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[111].name = "matlab.system.coder.SystemCore";
  info[111].dominantType = "";
  info[111].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[111].fileTimeLo = 1357971318U;
  info[111].fileTimeHi = 0U;
  info[111].mFileTimeLo = 0U;
  info[111].mFileTimeHi = 0U;
  info[112].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[112].name = "length";
  info[112].dominantType = "logical";
  info[112].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[112].fileTimeLo = 1303167806U;
  info[112].fileTimeHi = 0U;
  info[112].mFileTimeLo = 0U;
  info[112].mFileTimeHi = 0U;
  info[113].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[113].name = "receiveData";
  info[113].dominantType = "DataPortDataTypeCapiEnumT";
  info[113].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m";
  info[113].fileTimeLo = 1345182488U;
  info[113].fileTimeHi = 0U;
  info[113].mFileTimeLo = 0U;
  info[113].mFileTimeHi = 0U;
  info[114].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m";
  info[114].name = "mapiPrivate";
  info[114].dominantType = "DataPortDataTypeCapiEnumT";
  info[114].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[114].fileTimeLo = 1357947598U;
  info[114].fileTimeHi = 0U;
  info[114].mFileTimeLo = 0U;
  info[114].mFileTimeHi = 0U;
  info[115].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[115].name = "UsrpErrorCapiEnumT";
  info[115].dominantType = "";
  info[115].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[115].fileTimeLo = 1345182482U;
  info[115].fileTimeHi = 0U;
  info[115].mFileTimeLo = 0U;
  info[115].mFileTimeHi = 0U;
  info[116].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[116].name = "error";
  info[116].dominantType = "char";
  info[116].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m";
  info[116].fileTimeLo = 1319751566U;
  info[116].fileTimeHi = 0U;
  info[116].mFileTimeLo = 0U;
  info[116].mFileTimeHi = 0U;
  info[117].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[117].name = "mtimes";
  info[117].dominantType = "double";
  info[117].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[117].fileTimeLo = 1289541292U;
  info[117].fileTimeHi = 0U;
  info[117].mFileTimeLo = 0U;
  info[117].mFileTimeHi = 0U;
  info[118].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[118].name = "matlab.System";
  info[118].dominantType = "unknown";
  info[118].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[118].fileTimeLo = 1357962380U;
  info[118].fileTimeHi = 0U;
  info[118].mFileTimeLo = 0U;
  info[118].mFileTimeHi = 0U;
  info[119].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[119].name = "comm.AGC";
  info[119].dominantType = "char";
  info[119].resolved = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[119].fileTimeLo = 1355611432U;
  info[119].fileTimeHi = 0U;
  info[119].mFileTimeLo = 0U;
  info[119].mFileTimeHi = 0U;
  info[120].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[120].name = "matlab.system.pvParse";
  info[120].dominantType = "comm.AGC";
  info[120].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[120].fileTimeLo = 1357962380U;
  info[120].fileTimeHi = 0U;
  info[120].mFileTimeLo = 0U;
  info[120].mFileTimeHi = 0U;
  info[121].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[121].name = "coder.internal.cell";
  info[121].dominantType = "char";
  info[121].resolved =
    "[IXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/cell.p";
  info[121].fileTimeLo = 1357973172U;
  info[121].fileTimeHi = 0U;
  info[121].mFileTimeLo = 0U;
  info[121].mFileTimeHi = 0U;
  info[122].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[122].name = "validateattributes";
  info[122].dominantType = "coder.internal.cell";
  info[122].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[122].fileTimeLo = 1352446462U;
  info[122].fileTimeHi = 0U;
  info[122].mFileTimeLo = 0U;
  info[122].mFileTimeHi = 0U;
  info[123].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[123].name = "char";
  info[123].dominantType = "char";
  info[123].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[123].fileTimeLo = 1319751568U;
  info[123].fileTimeHi = 0U;
  info[123].mFileTimeLo = 0U;
  info[123].mFileTimeHi = 0U;
  info[124].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[124].name = "isfinite";
  info[124].dominantType = "double";
  info[124].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[124].fileTimeLo = 1286840358U;
  info[124].fileTimeHi = 0U;
  info[124].mFileTimeLo = 0U;
  info[124].mFileTimeHi = 0U;
  info[125].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[125].name = "isinf";
  info[125].dominantType = "double";
  info[125].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[125].fileTimeLo = 1286840360U;
  info[125].fileTimeHi = 0U;
  info[125].mFileTimeLo = 0U;
  info[125].mFileTimeHi = 0U;
  info[126].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[126].name = "isnan";
  info[126].dominantType = "double";
  info[126].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[126].fileTimeLo = 1286840360U;
  info[126].fileTimeHi = 0U;
  info[126].mFileTimeLo = 0U;
  info[126].mFileTimeHi = 0U;
  info[127].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[127].name = "floor";
  info[127].dominantType = "double";
  info[127].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[127].fileTimeLo = 1343851980U;
  info[127].fileTimeHi = 0U;
  info[127].mFileTimeLo = 0U;
  info[127].mFileTimeHi = 0U;
}

static void c_info_helper(ResolvedFunctionInfo info[563])
{
  info[128].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[128].name = "isfinite";
  info[128].dominantType = "";
  info[128].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[128].fileTimeLo = 1286840358U;
  info[128].fileTimeHi = 0U;
  info[128].mFileTimeLo = 0U;
  info[128].mFileTimeHi = 0U;
  info[129].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all";
  info[129].name = "isfinite";
  info[129].dominantType = "double";
  info[129].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[129].fileTimeLo = 1286840358U;
  info[129].fileTimeHi = 0U;
  info[129].mFileTimeLo = 0U;
  info[129].mFileTimeHi = 0U;
  info[130].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!notisnan";
  info[130].name = "isnan";
  info[130].dominantType = "double";
  info[130].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[130].fileTimeLo = 1286840360U;
  info[130].fileTimeHi = 0U;
  info[130].mFileTimeLo = 0U;
  info[130].mFileTimeHi = 0U;
  info[131].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[131].name = "matlab.system.coder.System";
  info[131].dominantType = "unknown";
  info[131].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[131].fileTimeLo = 1357971318U;
  info[131].fileTimeHi = 0U;
  info[131].mFileTimeLo = 0U;
  info[131].mFileTimeHi = 0U;
  info[132].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[132].name = "matlab.system.mixin.coder.Nondirect";
  info[132].dominantType = "unknown";
  info[132].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[132].fileTimeLo = 1357971320U;
  info[132].fileTimeHi = 0U;
  info[132].mFileTimeLo = 0U;
  info[132].mFileTimeHi = 0U;
  info[133].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[133].name = "matlab.system.mixin.Nondirect";
  info[133].dominantType = "unknown";
  info[133].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Nondirect.p";
  info[133].fileTimeLo = 1357962382U;
  info[133].fileTimeHi = 0U;
  info[133].mFileTimeLo = 0U;
  info[133].mFileTimeHi = 0U;
  info[134].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[134].name = "dspcodegen.FIRDecimator";
  info[134].dominantType = "int32";
  info[134].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[134].fileTimeLo = 1358403900U;
  info[134].fileTimeHi = 0U;
  info[134].mFileTimeLo = 0U;
  info[134].mFileTimeHi = 0U;
  info[135].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[135].name = "createsystemobjectv2";
  info[135].dominantType = "";
  info[135].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[135].fileTimeLo = 1343851958U;
  info[135].fileTimeHi = 0U;
  info[135].mFileTimeLo = 0U;
  info[135].mFileTimeHi = 0U;
  info[136].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[136].name = "length";
  info[136].dominantType = "cell";
  info[136].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[136].fileTimeLo = 1303167806U;
  info[136].fileTimeHi = 0U;
  info[136].mFileTimeLo = 0U;
  info[136].mFileTimeHi = 0U;
  info[137].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[137].name = "matlab.system.isSystemObject";
  info[137].dominantType = "double";
  info[137].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[137].fileTimeLo = 1357962380U;
  info[137].fileTimeHi = 0U;
  info[137].mFileTimeLo = 0U;
  info[137].mFileTimeHi = 0U;
  info[138].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[138].name = "matlab.system.setProp";
  info[138].dominantType = "dspcodegen.FIRDecimator";
  info[138].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[138].fileTimeLo = 1357962380U;
  info[138].fileTimeHi = 0U;
  info[138].mFileTimeLo = 0U;
  info[138].mFileTimeHi = 0U;
  info[139].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[139].name = "matlab.system.pvParse";
  info[139].dominantType = "dspcodegen.FIRDecimator";
  info[139].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[139].fileTimeLo = 1357962380U;
  info[139].fileTimeHi = 0U;
  info[139].mFileTimeLo = 0U;
  info[139].mFileTimeHi = 0U;
  info[140].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[140].name = "dspcodegen.FIRDecimator";
  info[140].dominantType = "";
  info[140].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[140].fileTimeLo = 1358403900U;
  info[140].fileTimeHi = 0U;
  info[140].mFileTimeLo = 0U;
  info[140].mFileTimeHi = 0U;
  info[141].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[141].name = "matlab.system.coder.SystemProp";
  info[141].dominantType = "";
  info[141].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[141].fileTimeLo = 1357971320U;
  info[141].fileTimeHi = 0U;
  info[141].mFileTimeLo = 0U;
  info[141].mFileTimeHi = 0U;
  info[142].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[142].name = "get";
  info[142].dominantType = "dsp.FIRDecimator";
  info[142].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[142].fileTimeLo = 1349900344U;
  info[142].fileTimeHi = 0U;
  info[142].mFileTimeLo = 0U;
  info[142].mFileTimeHi = 0U;
  info[143].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[143].name = "matlab.System";
  info[143].dominantType = "unknown";
  info[143].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[143].fileTimeLo = 1357962380U;
  info[143].fileTimeHi = 0U;
  info[143].mFileTimeLo = 0U;
  info[143].mFileTimeHi = 0U;
  info[144].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[144].name = "QPSKCoarseFrequencyCompensator";
  info[144].dominantType = "char";
  info[144].resolved =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[144].fileTimeLo = 1336789788U;
  info[144].fileTimeHi = 0U;
  info[144].mFileTimeLo = 0U;
  info[144].mFileTimeHi = 0U;
  info[145].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[145].name = "matlab.system.pvParse";
  info[145].dominantType = "QPSKCoarseFrequencyCompensator";
  info[145].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[145].fileTimeLo = 1357962380U;
  info[145].fileTimeHi = 0U;
  info[145].mFileTimeLo = 0U;
  info[145].mFileTimeHi = 0U;
  info[146].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[146].name = "mrdivide";
  info[146].dominantType = "double";
  info[146].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[146].fileTimeLo = 1357973148U;
  info[146].fileTimeHi = 0U;
  info[146].mFileTimeLo = 1319751566U;
  info[146].mFileTimeHi = 0U;
  info[147].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[147].name = "mtimes";
  info[147].dominantType = "double";
  info[147].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[147].fileTimeLo = 1289541292U;
  info[147].fileTimeHi = 0U;
  info[147].mFileTimeLo = 0U;
  info[147].mFileTimeHi = 0U;
  info[148].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m";
  info[148].name = "matlab.System";
  info[148].dominantType = "unknown";
  info[148].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[148].fileTimeLo = 1357962380U;
  info[148].fileTimeHi = 0U;
  info[148].mFileTimeLo = 0U;
  info[148].mFileTimeHi = 0U;
  info[149].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[149].name = "QPSKFineFrequencyCompensator";
  info[149].dominantType = "char";
  info[149].resolved =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m";
  info[149].fileTimeLo = 1336789790U;
  info[149].fileTimeHi = 0U;
  info[149].mFileTimeLo = 0U;
  info[149].mFileTimeHi = 0U;
  info[150].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[150].name = "matlab.system.pvParse";
  info[150].dominantType = "QPSKFineFrequencyCompensator";
  info[150].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[150].fileTimeLo = 1357962380U;
  info[150].fileTimeHi = 0U;
  info[150].mFileTimeLo = 0U;
  info[150].mFileTimeHi = 0U;
  info[151].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[151].name = "matlab.System";
  info[151].dominantType = "unknown";
  info[151].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[151].fileTimeLo = 1357962380U;
  info[151].fileTimeHi = 0U;
  info[151].mFileTimeLo = 0U;
  info[151].mFileTimeHi = 0U;
  info[152].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[152].name = "QPSKTimingRecovery";
  info[152].dominantType = "char";
  info[152].resolved =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[152].fileTimeLo = 1336789790U;
  info[152].fileTimeHi = 0U;
  info[152].mFileTimeLo = 0U;
  info[152].mFileTimeHi = 0U;
  info[153].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[153].name = "matlab.system.pvParse";
  info[153].dominantType = "QPSKTimingRecovery";
  info[153].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[153].fileTimeLo = 1357962380U;
  info[153].fileTimeHi = 0U;
  info[153].mFileTimeLo = 0U;
  info[153].mFileTimeHi = 0U;
  info[154].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[154].name = "matlab.System";
  info[154].dominantType = "unknown";
  info[154].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[154].fileTimeLo = 1357962380U;
  info[154].fileTimeHi = 0U;
  info[154].mFileTimeLo = 0U;
  info[154].mFileTimeHi = 0U;
  info[155].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[155].name = "sdruQPSKDataDecoder";
  info[155].dominantType = "char";
  info[155].resolved =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[155].fileTimeLo = 1381255251U;
  info[155].fileTimeHi = 0U;
  info[155].mFileTimeLo = 0U;
  info[155].mFileTimeHi = 0U;
  info[156].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[156].name = "matlab.system.pvParse";
  info[156].dominantType = "sdruQPSKDataDecoder";
  info[156].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[156].fileTimeLo = 1357962380U;
  info[156].fileTimeHi = 0U;
  info[156].mFileTimeLo = 0U;
  info[156].mFileTimeHi = 0U;
  info[157].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[157].name = "iscolumn";
  info[157].dominantType = "double";
  info[157].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/iscolumn.m";
  info[157].fileTimeLo = 1346531958U;
  info[157].fileTimeHi = 0U;
  info[157].mFileTimeLo = 0U;
  info[157].mFileTimeHi = 0U;
  info[158].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[158].name = "eml_is_positive_integer_scalar";
  info[158].dominantType = "double";
  info[158].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[158].fileTimeLo = 1309472796U;
  info[158].fileTimeHi = 0U;
  info[158].mFileTimeLo = 0U;
  info[158].mFileTimeHi = 0U;
  info[159].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[159].name = "floor";
  info[159].dominantType = "double";
  info[159].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[159].fileTimeLo = 1343851980U;
  info[159].fileTimeHi = 0U;
  info[159].mFileTimeLo = 0U;
  info[159].mFileTimeHi = 0U;
  info[160].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[160].name = "isinf";
  info[160].dominantType = "double";
  info[160].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[160].fileTimeLo = 1286840360U;
  info[160].fileTimeHi = 0U;
  info[160].mFileTimeLo = 0U;
  info[160].mFileTimeHi = 0U;
  info[161].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[161].name = "mrdivide";
  info[161].dominantType = "double";
  info[161].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[161].fileTimeLo = 1357973148U;
  info[161].fileTimeHi = 0U;
  info[161].mFileTimeLo = 1319751566U;
  info[161].mFileTimeHi = 0U;
  info[162].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[162].name = "mpower";
  info[162].dominantType = "double";
  info[162].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[162].fileTimeLo = 1286840442U;
  info[162].fileTimeHi = 0U;
  info[162].mFileTimeLo = 0U;
  info[162].mFileTimeHi = 0U;
  info[163].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[163].name = "eps";
  info[163].dominantType = "";
  info[163].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[163].fileTimeLo = 1326749596U;
  info[163].fileTimeHi = 0U;
  info[163].mFileTimeLo = 0U;
  info[163].mFileTimeHi = 0U;
  info[164].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[164].name = "eml_eps";
  info[164].dominantType = "char";
  info[164].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[164].fileTimeLo = 1326749596U;
  info[164].fileTimeHi = 0U;
  info[164].mFileTimeLo = 0U;
  info[164].mFileTimeHi = 0U;
  info[165].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[165].name = "eml_float_model";
  info[165].dominantType = "char";
  info[165].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[165].fileTimeLo = 1326749596U;
  info[165].fileTimeHi = 0U;
  info[165].mFileTimeLo = 0U;
  info[165].mFileTimeHi = 0U;
  info[166].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[166].name = "sqrt";
  info[166].dominantType = "double";
  info[166].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[166].fileTimeLo = 1343851986U;
  info[166].fileTimeHi = 0U;
  info[166].mFileTimeLo = 0U;
  info[166].mFileTimeHi = 0U;
  info[167].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[167].name = "strncmp";
  info[167].dominantType = "char";
  info[167].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strncmp.m";
  info[167].fileTimeLo = 1328879522U;
  info[167].fileTimeHi = 0U;
  info[167].mFileTimeLo = 0U;
  info[167].mFileTimeHi = 0U;
  info[168].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strncmp.m";
  info[168].name = "min";
  info[168].dominantType = "double";
  info[168].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[168].fileTimeLo = 1311276918U;
  info[168].fileTimeHi = 0U;
  info[168].mFileTimeLo = 0U;
  info[168].mFileTimeHi = 0U;
  info[169].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[169].name = "eml_min_or_max";
  info[169].dominantType = "char";
  info[169].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[169].fileTimeLo = 1334093090U;
  info[169].fileTimeHi = 0U;
  info[169].mFileTimeLo = 0U;
  info[169].mFileTimeHi = 0U;
  info[170].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[170].name = "eml_scalar_eg";
  info[170].dominantType = "double";
  info[170].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[170].fileTimeLo = 1286840396U;
  info[170].fileTimeHi = 0U;
  info[170].mFileTimeLo = 0U;
  info[170].mFileTimeHi = 0U;
  info[171].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[171].name = "eml_scalexp_alloc";
  info[171].dominantType = "double";
  info[171].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[171].fileTimeLo = 1352446460U;
  info[171].fileTimeHi = 0U;
  info[171].mFileTimeLo = 0U;
  info[171].mFileTimeHi = 0U;
  info[172].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[172].name = "eml_index_class";
  info[172].dominantType = "";
  info[172].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[172].fileTimeLo = 1323192178U;
  info[172].fileTimeHi = 0U;
  info[172].mFileTimeLo = 0U;
  info[172].mFileTimeHi = 0U;
  info[173].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[173].name = "eml_scalar_eg";
  info[173].dominantType = "double";
  info[173].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[173].fileTimeLo = 1286840396U;
  info[173].fileTimeHi = 0U;
  info[173].mFileTimeLo = 0U;
  info[173].mFileTimeHi = 0U;
  info[174].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[174].name = "length";
  info[174].dominantType = "double";
  info[174].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[174].fileTimeLo = 1303167806U;
  info[174].fileTimeHi = 0U;
  info[174].mFileTimeLo = 0U;
  info[174].mFileTimeHi = 0U;
  info[175].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[175].name = "mod";
  info[175].dominantType = "double";
  info[175].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[175].fileTimeLo = 1343851982U;
  info[175].fileTimeHi = 0U;
  info[175].mFileTimeLo = 0U;
  info[175].mFileTimeHi = 0U;
  info[176].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[176].name = "eml_scalar_eg";
  info[176].dominantType = "double";
  info[176].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[176].fileTimeLo = 1286840396U;
  info[176].fileTimeHi = 0U;
  info[176].mFileTimeLo = 0U;
  info[176].mFileTimeHi = 0U;
  info[177].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[177].name = "eml_scalexp_alloc";
  info[177].dominantType = "double";
  info[177].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[177].fileTimeLo = 1352446460U;
  info[177].fileTimeHi = 0U;
  info[177].mFileTimeLo = 0U;
  info[177].mFileTimeHi = 0U;
  info[178].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[178].name = "eml_scalar_eg";
  info[178].dominantType = "double";
  info[178].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[178].fileTimeLo = 1286840396U;
  info[178].fileTimeHi = 0U;
  info[178].mFileTimeLo = 0U;
  info[178].mFileTimeHi = 0U;
  info[179].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[179].name = "eml_scalar_floor";
  info[179].dominantType = "double";
  info[179].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[179].fileTimeLo = 1286840326U;
  info[179].fileTimeHi = 0U;
  info[179].mFileTimeLo = 0U;
  info[179].mFileTimeHi = 0U;
  info[180].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[180].name = "eml_scalar_round";
  info[180].dominantType = "double";
  info[180].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m";
  info[180].fileTimeLo = 1307672838U;
  info[180].fileTimeHi = 0U;
  info[180].mFileTimeLo = 0U;
  info[180].mFileTimeHi = 0U;
  info[181].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[181].name = "eml_scalar_abs";
  info[181].dominantType = "double";
  info[181].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[181].fileTimeLo = 1286840312U;
  info[181].fileTimeHi = 0U;
  info[181].mFileTimeLo = 0U;
  info[181].mFileTimeHi = 0U;
  info[182].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[182].name = "eps";
  info[182].dominantType = "char";
  info[182].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[182].fileTimeLo = 1326749596U;
  info[182].fileTimeHi = 0U;
  info[182].mFileTimeLo = 0U;
  info[182].mFileTimeHi = 0U;
  info[183].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[183].name = "eml_is_float_class";
  info[183].dominantType = "char";
  info[183].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[183].fileTimeLo = 1286840382U;
  info[183].fileTimeHi = 0U;
  info[183].mFileTimeLo = 0U;
  info[183].mFileTimeHi = 0U;
  info[184].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[184].name = "mtimes";
  info[184].dominantType = "double";
  info[184].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[184].fileTimeLo = 1289541292U;
  info[184].fileTimeHi = 0U;
  info[184].mFileTimeLo = 0U;
  info[184].mFileTimeHi = 0U;
  info[185].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[185].name = "coder.internal.errorIf";
  info[185].dominantType = "char";
  info[185].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[185].fileTimeLo = 1334093538U;
  info[185].fileTimeHi = 0U;
  info[185].mFileTimeLo = 0U;
  info[185].mFileTimeHi = 0U;
  info[186].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[186].name = "mtimes";
  info[186].dominantType = "double";
  info[186].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[186].fileTimeLo = 1289541292U;
  info[186].fileTimeHi = 0U;
  info[186].mFileTimeLo = 0U;
  info[186].mFileTimeHi = 0U;
  info[187].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[187].name = "colon";
  info[187].dominantType = "double";
  info[187].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[187].fileTimeLo = 1348213528U;
  info[187].fileTimeHi = 0U;
  info[187].mFileTimeLo = 0U;
  info[187].mFileTimeHi = 0U;
  info[188].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[188].name = "colon";
  info[188].dominantType = "double";
  info[188].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[188].fileTimeLo = 1348213528U;
  info[188].fileTimeHi = 0U;
  info[188].mFileTimeLo = 0U;
  info[188].mFileTimeHi = 0U;
  info[189].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[189].name = "isfinite";
  info[189].dominantType = "double";
  info[189].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[189].fileTimeLo = 1286840358U;
  info[189].fileTimeHi = 0U;
  info[189].mFileTimeLo = 0U;
  info[189].mFileTimeHi = 0U;
  info[190].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[190].name = "floor";
  info[190].dominantType = "double";
  info[190].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[190].fileTimeLo = 1343851980U;
  info[190].fileTimeHi = 0U;
  info[190].mFileTimeLo = 0U;
  info[190].mFileTimeHi = 0U;
  info[191].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!maxabs";
  info[191].name = "abs";
  info[191].dominantType = "double";
  info[191].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[191].fileTimeLo = 1343851966U;
  info[191].fileTimeHi = 0U;
  info[191].mFileTimeLo = 0U;
  info[191].mFileTimeHi = 0U;
}

static void d_info_helper(ResolvedFunctionInfo info[563])
{
  info[192].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[192].name = "eml_scalar_abs";
  info[192].dominantType = "double";
  info[192].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[192].fileTimeLo = 1286840312U;
  info[192].fileTimeHi = 0U;
  info[192].mFileTimeLo = 0U;
  info[192].mFileTimeHi = 0U;
  info[193].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[193].name = "eps";
  info[193].dominantType = "double";
  info[193].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[193].fileTimeLo = 1326749596U;
  info[193].fileTimeHi = 0U;
  info[193].mFileTimeLo = 0U;
  info[193].mFileTimeHi = 0U;
  info[194].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[194].name = "eml_mantissa_nbits";
  info[194].dominantType = "char";
  info[194].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[194].fileTimeLo = 1307672842U;
  info[194].fileTimeHi = 0U;
  info[194].mFileTimeLo = 0U;
  info[194].mFileTimeHi = 0U;
  info[195].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[195].name = "eml_float_model";
  info[195].dominantType = "char";
  info[195].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[195].fileTimeLo = 1326749596U;
  info[195].fileTimeHi = 0U;
  info[195].mFileTimeLo = 0U;
  info[195].mFileTimeHi = 0U;
  info[196].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[196].name = "eml_realmin";
  info[196].dominantType = "char";
  info[196].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[196].fileTimeLo = 1307672844U;
  info[196].fileTimeHi = 0U;
  info[196].mFileTimeLo = 0U;
  info[196].mFileTimeHi = 0U;
  info[197].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[197].name = "eml_float_model";
  info[197].dominantType = "char";
  info[197].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[197].fileTimeLo = 1326749596U;
  info[197].fileTimeHi = 0U;
  info[197].mFileTimeLo = 0U;
  info[197].mFileTimeHi = 0U;
  info[198].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[198].name = "eml_realmin_denormal";
  info[198].dominantType = "char";
  info[198].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[198].fileTimeLo = 1326749598U;
  info[198].fileTimeHi = 0U;
  info[198].mFileTimeLo = 0U;
  info[198].mFileTimeHi = 0U;
  info[199].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[199].name = "eml_float_model";
  info[199].dominantType = "char";
  info[199].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[199].fileTimeLo = 1326749596U;
  info[199].fileTimeHi = 0U;
  info[199].mFileTimeLo = 0U;
  info[199].mFileTimeHi = 0U;
  info[200].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[200].name = "abs";
  info[200].dominantType = "double";
  info[200].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[200].fileTimeLo = 1343851966U;
  info[200].fileTimeHi = 0U;
  info[200].mFileTimeLo = 0U;
  info[200].mFileTimeHi = 0U;
  info[201].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[201].name = "isfinite";
  info[201].dominantType = "double";
  info[201].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[201].fileTimeLo = 1286840358U;
  info[201].fileTimeHi = 0U;
  info[201].mFileTimeLo = 0U;
  info[201].mFileTimeHi = 0U;
  info[202].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[202].name = "realmax";
  info[202].dominantType = "char";
  info[202].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[202].fileTimeLo = 1307672842U;
  info[202].fileTimeHi = 0U;
  info[202].mFileTimeLo = 0U;
  info[202].mFileTimeHi = 0U;
  info[203].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[203].name = "eml_realmax";
  info[203].dominantType = "char";
  info[203].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[203].fileTimeLo = 1326749596U;
  info[203].fileTimeHi = 0U;
  info[203].mFileTimeLo = 0U;
  info[203].mFileTimeHi = 0U;
  info[204].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[204].name = "eml_float_model";
  info[204].dominantType = "char";
  info[204].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[204].fileTimeLo = 1326749596U;
  info[204].fileTimeHi = 0U;
  info[204].mFileTimeLo = 0U;
  info[204].mFileTimeHi = 0U;
  info[205].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[205].name = "mtimes";
  info[205].dominantType = "double";
  info[205].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[205].fileTimeLo = 1289541292U;
  info[205].fileTimeHi = 0U;
  info[205].mFileTimeLo = 0U;
  info[205].mFileTimeHi = 0U;
  info[206].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[206].name = "mrdivide";
  info[206].dominantType = "double";
  info[206].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[206].fileTimeLo = 1357973148U;
  info[206].fileTimeHi = 0U;
  info[206].mFileTimeLo = 1319751566U;
  info[206].mFileTimeHi = 0U;
  info[207].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[207].name = "floor";
  info[207].dominantType = "double";
  info[207].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[207].fileTimeLo = 1343851980U;
  info[207].fileTimeHi = 0U;
  info[207].mFileTimeLo = 0U;
  info[207].mFileTimeHi = 0U;
  info[208].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[208].name = "eml_index_class";
  info[208].dominantType = "";
  info[208].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[208].fileTimeLo = 1323192178U;
  info[208].fileTimeHi = 0U;
  info[208].mFileTimeLo = 0U;
  info[208].mFileTimeHi = 0U;
  info[209].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[209].name = "intmax";
  info[209].dominantType = "char";
  info[209].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[209].fileTimeLo = 1311276916U;
  info[209].fileTimeHi = 0U;
  info[209].mFileTimeLo = 0U;
  info[209].mFileTimeHi = 0U;
  info[210].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!rectifier";
  info[210].name = "abs";
  info[210].dominantType = "double";
  info[210].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[210].fileTimeLo = 1343851966U;
  info[210].fileTimeHi = 0U;
  info[210].mFileTimeLo = 0U;
  info[210].mFileTimeHi = 0U;
  info[211].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[211].name = "eml_dlapy2";
  info[211].dominantType = "double";
  info[211].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_dlapy2.m";
  info[211].fileTimeLo = 1350432254U;
  info[211].fileTimeHi = 0U;
  info[211].mFileTimeLo = 0U;
  info[211].mFileTimeHi = 0U;
  info[212].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!rectifier";
  info[212].name = "mean";
  info[212].dominantType = "double";
  info[212].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[212].fileTimeLo = 1286840294U;
  info[212].fileTimeHi = 0U;
  info[212].mFileTimeLo = 0U;
  info[212].mFileTimeHi = 0U;
  info[213].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[213].name = "isequal";
  info[213].dominantType = "double";
  info[213].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[213].fileTimeLo = 1286840358U;
  info[213].fileTimeHi = 0U;
  info[213].mFileTimeLo = 0U;
  info[213].mFileTimeHi = 0U;
  info[214].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[214].name = "eml_const_nonsingleton_dim";
  info[214].dominantType = "double";
  info[214].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[214].fileTimeLo = 1286840296U;
  info[214].fileTimeHi = 0U;
  info[214].mFileTimeLo = 0U;
  info[214].mFileTimeHi = 0U;
  info[215].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[215].name = "sum";
  info[215].dominantType = "double";
  info[215].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[215].fileTimeLo = 1314758212U;
  info[215].fileTimeHi = 0U;
  info[215].mFileTimeLo = 0U;
  info[215].mFileTimeHi = 0U;
  info[216].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[216].name = "eml_assert_valid_dim";
  info[216].dominantType = "double";
  info[216].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[216].fileTimeLo = 1286840294U;
  info[216].fileTimeHi = 0U;
  info[216].mFileTimeLo = 0U;
  info[216].mFileTimeHi = 0U;
  info[217].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[217].name = "eml_scalar_floor";
  info[217].dominantType = "double";
  info[217].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[217].fileTimeLo = 1286840326U;
  info[217].fileTimeHi = 0U;
  info[217].mFileTimeLo = 0U;
  info[217].mFileTimeHi = 0U;
  info[218].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[218].name = "eml_index_class";
  info[218].dominantType = "";
  info[218].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[218].fileTimeLo = 1323192178U;
  info[218].fileTimeHi = 0U;
  info[218].mFileTimeLo = 0U;
  info[218].mFileTimeHi = 0U;
  info[219].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[219].name = "intmax";
  info[219].dominantType = "char";
  info[219].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[219].fileTimeLo = 1311276916U;
  info[219].fileTimeHi = 0U;
  info[219].mFileTimeLo = 0U;
  info[219].mFileTimeHi = 0U;
  info[220].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[220].name = "eml_index_class";
  info[220].dominantType = "";
  info[220].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[220].fileTimeLo = 1323192178U;
  info[220].fileTimeHi = 0U;
  info[220].mFileTimeLo = 0U;
  info[220].mFileTimeHi = 0U;
  info[221].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[221].name = "eml_scalar_eg";
  info[221].dominantType = "double";
  info[221].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[221].fileTimeLo = 1286840396U;
  info[221].fileTimeHi = 0U;
  info[221].mFileTimeLo = 0U;
  info[221].mFileTimeHi = 0U;
  info[222].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[222].name = "eml_int_forloop_overflow_check";
  info[222].dominantType = "";
  info[222].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[222].fileTimeLo = 1346531940U;
  info[222].fileTimeHi = 0U;
  info[222].mFileTimeLo = 0U;
  info[222].mFileTimeHi = 0U;
  info[223].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[223].name = "rdivide";
  info[223].dominantType = "double";
  info[223].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[223].fileTimeLo = 1346531988U;
  info[223].fileTimeHi = 0U;
  info[223].mFileTimeLo = 0U;
  info[223].mFileTimeHi = 0U;
  info[224].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[224].name = "abs";
  info[224].dominantType = "double";
  info[224].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[224].fileTimeLo = 1343851966U;
  info[224].fileTimeHi = 0U;
  info[224].mFileTimeLo = 0U;
  info[224].mFileTimeHi = 0U;
  info[225].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[225].name = "power";
  info[225].dominantType = "double";
  info[225].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[225].fileTimeLo = 1348213530U;
  info[225].fileTimeHi = 0U;
  info[225].mFileTimeLo = 0U;
  info[225].mFileTimeHi = 0U;
  info[226].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[226].name = "mtimes";
  info[226].dominantType = "double";
  info[226].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[226].fileTimeLo = 1289541292U;
  info[226].fileTimeHi = 0U;
  info[226].mFileTimeLo = 0U;
  info[226].mFileTimeHi = 0U;
  info[227].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[227].name = "mean";
  info[227].dominantType = "double";
  info[227].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[227].fileTimeLo = 1286840294U;
  info[227].fileTimeHi = 0U;
  info[227].mFileTimeLo = 0U;
  info[227].mFileTimeHi = 0U;
  info[228].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[228].name = "getNumInputs";
  info[228].dominantType = "dsp.FIRDecimator";
  info[228].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[228].fileTimeLo = 1349900348U;
  info[228].fileTimeHi = 0U;
  info[228].mFileTimeLo = 0U;
  info[228].mFileTimeHi = 0U;
  info[229].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[229].name = "checkSystemObjectInput";
  info[229].dominantType = "dsp.FIRDecimator";
  info[229].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[229].fileTimeLo = 1349900346U;
  info[229].fileTimeHi = 0U;
  info[229].mFileTimeLo = 0U;
  info[229].mFileTimeHi = 0U;
  info[230].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[230].name = "setup";
  info[230].dominantType = "dsp.FIRDecimator";
  info[230].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[230].fileTimeLo = 1349900350U;
  info[230].fileTimeHi = 0U;
  info[230].mFileTimeLo = 0U;
  info[230].mFileTimeHi = 0U;
  info[231].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[231].name = "checkSystemObjectInput";
  info[231].dominantType = "dsp.FIRDecimator";
  info[231].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[231].fileTimeLo = 1349900346U;
  info[231].fileTimeHi = 0U;
  info[231].mFileTimeLo = 0U;
  info[231].mFileTimeHi = 0U;
  info[232].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[232].name = "reset";
  info[232].dominantType = "dsp.FIRDecimator";
  info[232].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[232].fileTimeLo = 1349900350U;
  info[232].fileTimeHi = 0U;
  info[232].mFileTimeLo = 0U;
  info[232].mFileTimeHi = 0U;
  info[233].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[233].name = "checkSystemObjectInput";
  info[233].dominantType = "dsp.FIRDecimator";
  info[233].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[233].fileTimeLo = 1349900346U;
  info[233].fileTimeHi = 0U;
  info[233].mFileTimeLo = 0U;
  info[233].mFileTimeHi = 0U;
  info[234].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[234].name = "getNumOutputs";
  info[234].dominantType = "dsp.FIRDecimator";
  info[234].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[234].fileTimeLo = 1349900348U;
  info[234].fileTimeHi = 0U;
  info[234].mFileTimeLo = 0U;
  info[234].mFileTimeHi = 0U;
  info[235].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[235].name = "checkSystemObjectInput";
  info[235].dominantType = "dsp.FIRDecimator";
  info[235].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[235].fileTimeLo = 1349900346U;
  info[235].fileTimeHi = 0U;
  info[235].mFileTimeLo = 0U;
  info[235].mFileTimeHi = 0U;
  info[236].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[236].name = "output";
  info[236].dominantType = "dsp.FIRDecimator";
  info[236].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[236].fileTimeLo = 1349900348U;
  info[236].fileTimeHi = 0U;
  info[236].mFileTimeLo = 0U;
  info[236].mFileTimeHi = 0U;
  info[237].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[237].name = "checkSystemObjectInput";
  info[237].dominantType = "dsp.FIRDecimator";
  info[237].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[237].fileTimeLo = 1349900346U;
  info[237].fileTimeHi = 0U;
  info[237].mFileTimeLo = 0U;
  info[237].mFileTimeHi = 0U;
  info[238].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRDecimator.p";
  info[238].name = "update";
  info[238].dominantType = "dsp.FIRDecimator";
  info[238].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[238].fileTimeLo = 1349900352U;
  info[238].fileTimeHi = 0U;
  info[238].mFileTimeLo = 0U;
  info[238].mFileTimeHi = 0U;
  info[239].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[239].name = "checkSystemObjectInput";
  info[239].dominantType = "dsp.FIRDecimator";
  info[239].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[239].fileTimeLo = 1349900346U;
  info[239].fileTimeHi = 0U;
  info[239].mFileTimeLo = 0U;
  info[239].mFileTimeHi = 0U;
  info[240].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[240].name = "mrdivide";
  info[240].dominantType = "double";
  info[240].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[240].fileTimeLo = 1357973148U;
  info[240].fileTimeHi = 0U;
  info[240].mFileTimeLo = 1319751566U;
  info[240].mFileTimeHi = 0U;
  info[241].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[241].name = "matlab.system.coder.System";
  info[241].dominantType = "unknown";
  info[241].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[241].fileTimeLo = 1357971318U;
  info[241].fileTimeHi = 0U;
  info[241].mFileTimeLo = 0U;
  info[241].mFileTimeHi = 0U;
  info[242].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[242].name = "matlab.system.mixin.coder.Nondirect";
  info[242].dominantType = "unknown";
  info[242].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[242].fileTimeLo = 1357971320U;
  info[242].fileTimeHi = 0U;
  info[242].mFileTimeLo = 0U;
  info[242].mFileTimeHi = 0U;
  info[243].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[243].name = "commcodegen.PhaseFrequencyOffset";
  info[243].dominantType = "int32";
  info[243].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[243].fileTimeLo = 1358405062U;
  info[243].fileTimeHi = 0U;
  info[243].mFileTimeLo = 0U;
  info[243].mFileTimeHi = 0U;
  info[244].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[244].name = "createsystemobjectv2";
  info[244].dominantType = "";
  info[244].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[244].fileTimeLo = 1343851958U;
  info[244].fileTimeHi = 0U;
  info[244].mFileTimeLo = 0U;
  info[244].mFileTimeHi = 0U;
  info[245].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[245].name = "matlab.system.pvParse";
  info[245].dominantType = "commcodegen.PhaseFrequencyOffset";
  info[245].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[245].fileTimeLo = 1357962380U;
  info[245].fileTimeHi = 0U;
  info[245].mFileTimeLo = 0U;
  info[245].mFileTimeHi = 0U;
  info[246].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[246].name = "commcodegen.PhaseFrequencyOffset";
  info[246].dominantType = "";
  info[246].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[246].fileTimeLo = 1358405062U;
  info[246].fileTimeHi = 0U;
  info[246].mFileTimeLo = 0U;
  info[246].mFileTimeHi = 0U;
  info[247].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[247].name = "get";
  info[247].dominantType = "comm.PhaseFrequencyOffset";
  info[247].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[247].fileTimeLo = 1349900344U;
  info[247].fileTimeHi = 0U;
  info[247].mFileTimeLo = 0U;
  info[247].mFileTimeHi = 0U;
  info[248].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[248].name = "coder.internal.assert";
  info[248].dominantType = "char";
  info[248].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[248].fileTimeLo = 1334093538U;
  info[248].fileTimeHi = 0U;
  info[248].mFileTimeLo = 0U;
  info[248].mFileTimeHi = 0U;
  info[249].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[249].name = "setSfunSystemObject";
  info[249].dominantType = "comm.PhaseFrequencyOffset";
  info[249].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setSfunSystemObject.m";
  info[249].fileTimeLo = 1349900350U;
  info[249].fileTimeHi = 0U;
  info[249].mFileTimeLo = 0U;
  info[249].mFileTimeHi = 0U;
  info[250].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setSfunSystemObject.m";
  info[250].name = "checkSystemObjectInput";
  info[250].dominantType = "comm.PhaseFrequencyOffset";
  info[250].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[250].fileTimeLo = 1349900346U;
  info[250].fileTimeHi = 0U;
  info[250].mFileTimeLo = 0U;
  info[250].mFileTimeHi = 0U;
  info[251].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setSfunSystemObject.m";
  info[251].name = "get";
  info[251].dominantType = "comm.PhaseFrequencyOffset";
  info[251].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[251].fileTimeLo = 1349900344U;
  info[251].fileTimeHi = 0U;
  info[251].mFileTimeLo = 0U;
  info[251].mFileTimeHi = 0U;
  info[252].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setSfunSystemObject.m";
  info[252].name = "isequal";
  info[252].dominantType = "double";
  info[252].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[252].fileTimeLo = 1286840358U;
  info[252].fileTimeHi = 0U;
  info[252].mFileTimeLo = 0U;
  info[252].mFileTimeHi = 0U;
  info[253].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar";
  info[253].name = "isnan";
  info[253].dominantType = "double";
  info[253].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[253].fileTimeLo = 1286840360U;
  info[253].fileTimeHi = 0U;
  info[253].mFileTimeLo = 0U;
  info[253].mFileTimeHi = 0U;
  info[254].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[254].name = "power";
  info[254].dominantType = "double";
  info[254].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[254].fileTimeLo = 1348213530U;
  info[254].fileTimeHi = 0U;
  info[254].mFileTimeLo = 0U;
  info[254].mFileTimeHi = 0U;
  info[255].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[255].name = "flintmax";
  info[255].dominantType = "char";
  info[255].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/flintmax.m";
  info[255].fileTimeLo = 1348213516U;
  info[255].fileTimeHi = 0U;
  info[255].mFileTimeLo = 0U;
  info[255].mFileTimeHi = 0U;
}

static void e_info_helper(ResolvedFunctionInfo info[563])
{
  info[256].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/flintmax.m";
  info[256].name = "eml_float_model";
  info[256].dominantType = "char";
  info[256].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[256].fileTimeLo = 1326749596U;
  info[256].fileTimeHi = 0U;
  info[256].mFileTimeLo = 0U;
  info[256].mFileTimeHi = 0U;
  info[257].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[257].name = "mod";
  info[257].dominantType = "double";
  info[257].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[257].fileTimeLo = 1343851982U;
  info[257].fileTimeHi = 0U;
  info[257].mFileTimeLo = 0U;
  info[257].mFileTimeHi = 0U;
  info[258].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[258].name = "log";
  info[258].dominantType = "double";
  info[258].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log.m";
  info[258].fileTimeLo = 1343851980U;
  info[258].fileTimeHi = 0U;
  info[258].mFileTimeLo = 0U;
  info[258].mFileTimeHi = 0U;
  info[259].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log.m";
  info[259].name = "eml_scalar_log";
  info[259].dominantType = "double";
  info[259].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[259].fileTimeLo = 1286840328U;
  info[259].fileTimeHi = 0U;
  info[259].mFileTimeLo = 0U;
  info[259].mFileTimeHi = 0U;
  info[260].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[260].name = "realmax";
  info[260].dominantType = "char";
  info[260].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[260].fileTimeLo = 1307672842U;
  info[260].fileTimeHi = 0U;
  info[260].mFileTimeLo = 0U;
  info[260].mFileTimeHi = 0U;
  info[261].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[261].name = "mrdivide";
  info[261].dominantType = "double";
  info[261].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[261].fileTimeLo = 1357973148U;
  info[261].fileTimeHi = 0U;
  info[261].mFileTimeLo = 1319751566U;
  info[261].mFileTimeHi = 0U;
  info[262].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[262].name = "isnan";
  info[262].dominantType = "double";
  info[262].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[262].fileTimeLo = 1286840360U;
  info[262].fileTimeHi = 0U;
  info[262].mFileTimeLo = 0U;
  info[262].mFileTimeHi = 0U;
  info[263].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[263].name = "eml_scalar_hypot";
  info[263].dominantType = "double";
  info[263].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_hypot.m";
  info[263].fileTimeLo = 1286840326U;
  info[263].fileTimeHi = 0U;
  info[263].mFileTimeLo = 0U;
  info[263].mFileTimeHi = 0U;
  info[264].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_hypot.m";
  info[264].name = "eml_scalar_eg";
  info[264].dominantType = "double";
  info[264].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[264].fileTimeLo = 1286840396U;
  info[264].fileTimeHi = 0U;
  info[264].mFileTimeLo = 0U;
  info[264].mFileTimeHi = 0U;
  info[265].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_hypot.m";
  info[265].name = "eml_dlapy2";
  info[265].dominantType = "double";
  info[265].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_dlapy2.m";
  info[265].fileTimeLo = 1350432254U;
  info[265].fileTimeHi = 0U;
  info[265].mFileTimeLo = 0U;
  info[265].mFileTimeHi = 0U;
  info[266].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[266].name = "eml_scalar_atan2";
  info[266].dominantType = "double";
  info[266].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_atan2.m";
  info[266].fileTimeLo = 1286840320U;
  info[266].fileTimeHi = 0U;
  info[266].mFileTimeLo = 0U;
  info[266].mFileTimeHi = 0U;
  info[267].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[267].name = "eml_scalar_abs";
  info[267].dominantType = "double";
  info[267].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[267].fileTimeLo = 1286840312U;
  info[267].fileTimeHi = 0U;
  info[267].mFileTimeLo = 0U;
  info[267].mFileTimeHi = 0U;
  info[268].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[268].name = "fft";
  info[268].dominantType = "double";
  info[268].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fft.m";
  info[268].fileTimeLo = 1286840288U;
  info[268].fileTimeHi = 0U;
  info[268].mFileTimeLo = 0U;
  info[268].mFileTimeHi = 0U;
  info[269].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fft.m";
  info[269].name = "eml_fft";
  info[269].dominantType = "char";
  info[269].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[269].fileTimeLo = 1286840374U;
  info[269].fileTimeHi = 0U;
  info[269].mFileTimeLo = 0U;
  info[269].mFileTimeHi = 0U;
  info[270].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[270].name = "eml_const_nonsingleton_dim";
  info[270].dominantType = "double";
  info[270].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[270].fileTimeLo = 1286840296U;
  info[270].fileTimeHi = 0U;
  info[270].mFileTimeLo = 0U;
  info[270].mFileTimeHi = 0U;
  info[271].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[271].name = "eml_size_ispow2";
  info[271].dominantType = "double";
  info[271].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[271].fileTimeLo = 1286840398U;
  info[271].fileTimeHi = 0U;
  info[271].mFileTimeLo = 0U;
  info[271].mFileTimeHi = 0U;
  info[272].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[272].name = "floor";
  info[272].dominantType = "double";
  info[272].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[272].fileTimeLo = 1343851980U;
  info[272].fileTimeHi = 0U;
  info[272].mFileTimeLo = 0U;
  info[272].mFileTimeHi = 0U;
  info[273].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[273].name = "eml_index_class";
  info[273].dominantType = "";
  info[273].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[273].fileTimeLo = 1323192178U;
  info[273].fileTimeHi = 0U;
  info[273].mFileTimeLo = 0U;
  info[273].mFileTimeHi = 0U;
  info[274].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[274].name = "eml_unsigned_class";
  info[274].dominantType = "char";
  info[274].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[274].fileTimeLo = 1323192180U;
  info[274].fileTimeHi = 0U;
  info[274].mFileTimeLo = 0U;
  info[274].mFileTimeHi = 0U;
  info[275].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[275].name = "eml_index_class";
  info[275].dominantType = "";
  info[275].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[275].fileTimeLo = 1323192178U;
  info[275].fileTimeHi = 0U;
  info[275].mFileTimeLo = 0U;
  info[275].mFileTimeHi = 0U;
  info[276].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[276].name = "eml_size_ispow2";
  info[276].dominantType = "coder.internal.indexInt";
  info[276].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[276].fileTimeLo = 1286840398U;
  info[276].fileTimeHi = 0U;
  info[276].mFileTimeLo = 0U;
  info[276].mFileTimeHi = 0U;
  info[277].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[277].name = "eml_index_class";
  info[277].dominantType = "";
  info[277].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[277].fileTimeLo = 1323192178U;
  info[277].fileTimeHi = 0U;
  info[277].mFileTimeLo = 0U;
  info[277].mFileTimeHi = 0U;
  info[278].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[278].name = "eml_unsigned_class";
  info[278].dominantType = "char";
  info[278].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[278].fileTimeLo = 1323192180U;
  info[278].fileTimeHi = 0U;
  info[278].mFileTimeLo = 0U;
  info[278].mFileTimeHi = 0U;
  info[279].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[279].name = "eml_scalar_eg";
  info[279].dominantType = "double";
  info[279].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[279].fileTimeLo = 1286840396U;
  info[279].fileTimeHi = 0U;
  info[279].mFileTimeLo = 0U;
  info[279].mFileTimeHi = 0U;
  info[280].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[280].name = "eml_index_class";
  info[280].dominantType = "";
  info[280].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[280].fileTimeLo = 1323192178U;
  info[280].fileTimeHi = 0U;
  info[280].mFileTimeLo = 0U;
  info[280].mFileTimeHi = 0U;
  info[281].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[281].name = "min";
  info[281].dominantType = "double";
  info[281].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[281].fileTimeLo = 1311276918U;
  info[281].fileTimeHi = 0U;
  info[281].mFileTimeLo = 0U;
  info[281].mFileTimeHi = 0U;
  info[282].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[282].name = "eml_relop";
  info[282].dominantType = "function_handle";
  info[282].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[282].fileTimeLo = 1342472782U;
  info[282].fileTimeHi = 0U;
  info[282].mFileTimeLo = 0U;
  info[282].mFileTimeHi = 0U;
  info[283].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[283].name = "coder.internal.indexIntRelop";
  info[283].dominantType = "";
  info[283].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[283].fileTimeLo = 1326749922U;
  info[283].fileTimeHi = 0U;
  info[283].mFileTimeLo = 0U;
  info[283].mFileTimeHi = 0U;
  info[284].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass";
  info[284].name = "eml_float_model";
  info[284].dominantType = "char";
  info[284].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[284].fileTimeLo = 1326749596U;
  info[284].fileTimeHi = 0U;
  info[284].mFileTimeLo = 0U;
  info[284].mFileTimeHi = 0U;
  info[285].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass";
  info[285].name = "intmin";
  info[285].dominantType = "char";
  info[285].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[285].fileTimeLo = 1311276918U;
  info[285].fileTimeHi = 0U;
  info[285].mFileTimeLo = 0U;
  info[285].mFileTimeHi = 0U;
  info[286].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[286].name = "isnan";
  info[286].dominantType = "double";
  info[286].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[286].fileTimeLo = 1286840360U;
  info[286].fileTimeHi = 0U;
  info[286].mFileTimeLo = 0U;
  info[286].mFileTimeHi = 0U;
  info[287].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[287].name = "eml_index_minus";
  info[287].dominantType = "double";
  info[287].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[287].fileTimeLo = 1286840378U;
  info[287].fileTimeHi = 0U;
  info[287].mFileTimeLo = 0U;
  info[287].mFileTimeHi = 0U;
  info[288].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[288].name = "max";
  info[288].dominantType = "coder.internal.indexInt";
  info[288].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[288].fileTimeLo = 1311276916U;
  info[288].fileTimeHi = 0U;
  info[288].mFileTimeLo = 0U;
  info[288].mFileTimeHi = 0U;
  info[289].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[289].name = "eml_min_or_max";
  info[289].dominantType = "char";
  info[289].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[289].fileTimeLo = 1334093090U;
  info[289].fileTimeHi = 0U;
  info[289].mFileTimeLo = 0U;
  info[289].mFileTimeHi = 0U;
  info[290].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[290].name = "eml_scalar_eg";
  info[290].dominantType = "coder.internal.indexInt";
  info[290].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[290].fileTimeLo = 1286840396U;
  info[290].fileTimeHi = 0U;
  info[290].mFileTimeLo = 0U;
  info[290].mFileTimeHi = 0U;
  info[291].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[291].name = "eml_scalexp_alloc";
  info[291].dominantType = "coder.internal.indexInt";
  info[291].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[291].fileTimeLo = 1352446460U;
  info[291].fileTimeHi = 0U;
  info[291].mFileTimeLo = 0U;
  info[291].mFileTimeHi = 0U;
  info[292].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[292].name = "eml_scalar_eg";
  info[292].dominantType = "coder.internal.indexInt";
  info[292].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[292].fileTimeLo = 1286840396U;
  info[292].fileTimeHi = 0U;
  info[292].mFileTimeLo = 0U;
  info[292].mFileTimeHi = 0U;
  info[293].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[293].name = "eml_index_minus";
  info[293].dominantType = "coder.internal.indexInt";
  info[293].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[293].fileTimeLo = 1286840378U;
  info[293].fileTimeHi = 0U;
  info[293].mFileTimeLo = 0U;
  info[293].mFileTimeHi = 0U;
  info[294].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[294].name = "eml_index_rdivide";
  info[294].dominantType = "coder.internal.indexInt";
  info[294].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[294].fileTimeLo = 1286840380U;
  info[294].fileTimeHi = 0U;
  info[294].mFileTimeLo = 0U;
  info[294].mFileTimeHi = 0U;
  info[295].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[295].name = "eml_index_class";
  info[295].dominantType = "";
  info[295].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[295].fileTimeLo = 1323192178U;
  info[295].fileTimeHi = 0U;
  info[295].mFileTimeLo = 0U;
  info[295].mFileTimeHi = 0U;
  info[296].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[296].name = "eml_index_rdivide";
  info[296].dominantType = "double";
  info[296].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[296].fileTimeLo = 1286840380U;
  info[296].fileTimeHi = 0U;
  info[296].mFileTimeLo = 0U;
  info[296].mFileTimeHi = 0U;
  info[297].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[297].name = "eml_index_times";
  info[297].dominantType = "coder.internal.indexInt";
  info[297].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[297].fileTimeLo = 1286840380U;
  info[297].fileTimeHi = 0U;
  info[297].mFileTimeLo = 0U;
  info[297].mFileTimeHi = 0U;
  info[298].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[298].name = "mtimes";
  info[298].dominantType = "double";
  info[298].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[298].fileTimeLo = 1289541292U;
  info[298].fileTimeHi = 0U;
  info[298].mFileTimeLo = 0U;
  info[298].mFileTimeHi = 0U;
  info[299].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[299].name = "mrdivide";
  info[299].dominantType = "double";
  info[299].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[299].fileTimeLo = 1357973148U;
  info[299].fileTimeHi = 0U;
  info[299].mFileTimeLo = 1319751566U;
  info[299].mFileTimeHi = 0U;
  info[300].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[300].name = "eml_index_plus";
  info[300].dominantType = "double";
  info[300].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[300].fileTimeLo = 1286840378U;
  info[300].fileTimeHi = 0U;
  info[300].mFileTimeLo = 0U;
  info[300].mFileTimeHi = 0U;
  info[301].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[301].name = "eml_index_rdivide";
  info[301].dominantType = "double";
  info[301].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[301].fileTimeLo = 1286840380U;
  info[301].fileTimeHi = 0U;
  info[301].mFileTimeLo = 0U;
  info[301].mFileTimeHi = 0U;
  info[302].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[302].name = "eml_int_forloop_overflow_check";
  info[302].dominantType = "";
  info[302].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[302].fileTimeLo = 1346531940U;
  info[302].fileTimeHi = 0U;
  info[302].mFileTimeLo = 0U;
  info[302].mFileTimeHi = 0U;
  info[303].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[303].name = "mtimes";
  info[303].dominantType = "double";
  info[303].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[303].fileTimeLo = 1289541292U;
  info[303].fileTimeHi = 0U;
  info[303].mFileTimeLo = 0U;
  info[303].mFileTimeHi = 0U;
  info[304].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[304].name = "cos";
  info[304].dominantType = "double";
  info[304].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[304].fileTimeLo = 1343851972U;
  info[304].fileTimeHi = 0U;
  info[304].mFileTimeLo = 0U;
  info[304].mFileTimeHi = 0U;
  info[305].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[305].name = "eml_scalar_cos";
  info[305].dominantType = "double";
  info[305].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m";
  info[305].fileTimeLo = 1286840322U;
  info[305].fileTimeHi = 0U;
  info[305].mFileTimeLo = 0U;
  info[305].mFileTimeHi = 0U;
  info[306].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[306].name = "eml_index_minus";
  info[306].dominantType = "double";
  info[306].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[306].fileTimeLo = 1286840378U;
  info[306].fileTimeHi = 0U;
  info[306].mFileTimeLo = 0U;
  info[306].mFileTimeHi = 0U;
  info[307].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[307].name = "eml_index_minus";
  info[307].dominantType = "coder.internal.indexInt";
  info[307].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[307].fileTimeLo = 1286840378U;
  info[307].fileTimeHi = 0U;
  info[307].mFileTimeLo = 0U;
  info[307].mFileTimeHi = 0U;
  info[308].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[308].name = "sin";
  info[308].dominantType = "double";
  info[308].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[308].fileTimeLo = 1343851986U;
  info[308].fileTimeHi = 0U;
  info[308].mFileTimeLo = 0U;
  info[308].mFileTimeHi = 0U;
  info[309].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[309].name = "eml_scalar_sin";
  info[309].dominantType = "double";
  info[309].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m";
  info[309].fileTimeLo = 1286840336U;
  info[309].fileTimeHi = 0U;
  info[309].mFileTimeLo = 0U;
  info[309].mFileTimeHi = 0U;
  info[310].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[310].name = "eml_index_class";
  info[310].dominantType = "";
  info[310].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[310].fileTimeLo = 1323192178U;
  info[310].fileTimeHi = 0U;
  info[310].mFileTimeLo = 0U;
  info[310].mFileTimeHi = 0U;
  info[311].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[311].name = "eml_index_times";
  info[311].dominantType = "double";
  info[311].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[311].fileTimeLo = 1286840380U;
  info[311].fileTimeHi = 0U;
  info[311].mFileTimeLo = 0U;
  info[311].mFileTimeHi = 0U;
  info[312].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[312].name = "eml_index_plus";
  info[312].dominantType = "double";
  info[312].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[312].fileTimeLo = 1286840378U;
  info[312].fileTimeHi = 0U;
  info[312].mFileTimeLo = 0U;
  info[312].mFileTimeHi = 0U;
  info[313].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[313].name = "eml_int_forloop_overflow_check";
  info[313].dominantType = "";
  info[313].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[313].fileTimeLo = 1346531940U;
  info[313].fileTimeHi = 0U;
  info[313].mFileTimeLo = 0U;
  info[313].mFileTimeHi = 0U;
  info[314].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[314].name = "eml_index_minus";
  info[314].dominantType = "coder.internal.indexInt";
  info[314].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[314].fileTimeLo = 1286840378U;
  info[314].fileTimeHi = 0U;
  info[314].mFileTimeLo = 0U;
  info[314].mFileTimeHi = 0U;
  info[315].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[315].name = "eml_index_class";
  info[315].dominantType = "";
  info[315].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[315].fileTimeLo = 1323192178U;
  info[315].fileTimeHi = 0U;
  info[315].mFileTimeLo = 0U;
  info[315].mFileTimeHi = 0U;
  info[316].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[316].name = "eml_unsigned_class";
  info[316].dominantType = "char";
  info[316].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[316].fileTimeLo = 1323192180U;
  info[316].fileTimeHi = 0U;
  info[316].mFileTimeLo = 0U;
  info[316].mFileTimeHi = 0U;
  info[317].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[317].name = "eml_int_forloop_overflow_check";
  info[317].dominantType = "";
  info[317].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[317].fileTimeLo = 1346531940U;
  info[317].fileTimeHi = 0U;
  info[317].mFileTimeLo = 0U;
  info[317].mFileTimeHi = 0U;
  info[318].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[318].name = "eml_index_plus";
  info[318].dominantType = "double";
  info[318].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[318].fileTimeLo = 1286840378U;
  info[318].fileTimeHi = 0U;
  info[318].mFileTimeLo = 0U;
  info[318].mFileTimeHi = 0U;
  info[319].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!eml_fft_bitrevidx";
  info[319].name = "eml_index_class";
  info[319].dominantType = "";
  info[319].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[319].fileTimeLo = 1323192178U;
  info[319].fileTimeHi = 0U;
  info[319].mFileTimeLo = 0U;
  info[319].mFileTimeHi = 0U;
}

static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[563])
{
  const mxArray *y;
  int32_T iv106[1];
  int32_T i13;
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m26;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  y = NULL;
  iv106[0] = 563;
  emlrtAssign(&y, mxCreateStructArray(1, iv106, 0, NULL));
  for (i13 = 0; i13 < 563; i13++) {
    r0 = &u[i13];
    b_u = r0->context;
    b_y = NULL;
    m26 = mxCreateString(b_u);
    emlrtAssign(&b_y, m26);
    emlrtAddField(y, b_y, "context", i13);
    b_u = r0->name;
    c_y = NULL;
    m26 = mxCreateString(b_u);
    emlrtAssign(&c_y, m26);
    emlrtAddField(y, c_y, "name", i13);
    b_u = r0->dominantType;
    d_y = NULL;
    m26 = mxCreateString(b_u);
    emlrtAssign(&d_y, m26);
    emlrtAddField(y, d_y, "dominantType", i13);
    b_u = r0->resolved;
    e_y = NULL;
    m26 = mxCreateString(b_u);
    emlrtAssign(&e_y, m26);
    emlrtAddField(y, e_y, "resolved", i13);
    c_u = r0->fileTimeLo;
    f_y = NULL;
    m26 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m26) = c_u;
    emlrtAssign(&f_y, m26);
    emlrtAddField(y, f_y, "fileTimeLo", i13);
    c_u = r0->fileTimeHi;
    g_y = NULL;
    m26 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m26) = c_u;
    emlrtAssign(&g_y, m26);
    emlrtAddField(y, g_y, "fileTimeHi", i13);
    c_u = r0->mFileTimeLo;
    h_y = NULL;
    m26 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m26) = c_u;
    emlrtAssign(&h_y, m26);
    emlrtAddField(y, h_y, "mFileTimeLo", i13);
    c_u = r0->mFileTimeHi;
    i_y = NULL;
    m26 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m26) = c_u;
    emlrtAssign(&i_y, m26);
    emlrtAddField(y, i_y, "mFileTimeHi", i13);
  }

  return y;
}

static void f_info_helper(ResolvedFunctionInfo info[563])
{
  info[320].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[320].name = "eml_index_plus";
  info[320].dominantType = "coder.internal.indexInt";
  info[320].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[320].fileTimeLo = 1286840378U;
  info[320].fileTimeHi = 0U;
  info[320].mFileTimeLo = 0U;
  info[320].mFileTimeHi = 0U;
  info[321].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[321].name = "eml_index_times";
  info[321].dominantType = "double";
  info[321].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[321].fileTimeLo = 1286840380U;
  info[321].fileTimeHi = 0U;
  info[321].mFileTimeLo = 0U;
  info[321].mFileTimeHi = 0U;
  info[322].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[322].name = "max";
  info[322].dominantType = "double";
  info[322].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[322].fileTimeLo = 1311276916U;
  info[322].fileTimeHi = 0U;
  info[322].mFileTimeLo = 0U;
  info[322].mFileTimeHi = 0U;
  info[323].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[323].name = "eml_const_nonsingleton_dim";
  info[323].dominantType = "double";
  info[323].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[323].fileTimeLo = 1286840296U;
  info[323].fileTimeHi = 0U;
  info[323].mFileTimeLo = 0U;
  info[323].mFileTimeHi = 0U;
  info[324].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[324].name = "eml_scalar_eg";
  info[324].dominantType = "double";
  info[324].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[324].fileTimeLo = 1286840396U;
  info[324].fileTimeHi = 0U;
  info[324].mFileTimeLo = 0U;
  info[324].mFileTimeHi = 0U;
  info[325].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[325].name = "eml_index_class";
  info[325].dominantType = "";
  info[325].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[325].fileTimeLo = 1323192178U;
  info[325].fileTimeHi = 0U;
  info[325].mFileTimeLo = 0U;
  info[325].mFileTimeHi = 0U;
  info[326].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[326].name = "eml_index_class";
  info[326].dominantType = "";
  info[326].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[326].fileTimeLo = 1323192178U;
  info[326].fileTimeHi = 0U;
  info[326].mFileTimeLo = 0U;
  info[326].mFileTimeHi = 0U;
  info[327].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[327].name = "isnan";
  info[327].dominantType = "double";
  info[327].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[327].fileTimeLo = 1286840360U;
  info[327].fileTimeHi = 0U;
  info[327].mFileTimeLo = 0U;
  info[327].mFileTimeHi = 0U;
  info[328].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[328].name = "eml_index_plus";
  info[328].dominantType = "coder.internal.indexInt";
  info[328].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[328].fileTimeLo = 1286840378U;
  info[328].fileTimeHi = 0U;
  info[328].mFileTimeLo = 0U;
  info[328].mFileTimeHi = 0U;
  info[329].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[329].name = "eml_int_forloop_overflow_check";
  info[329].dominantType = "";
  info[329].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[329].fileTimeLo = 1346531940U;
  info[329].fileTimeHi = 0U;
  info[329].mFileTimeLo = 0U;
  info[329].mFileTimeHi = 0U;
  info[330].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[330].name = "eml_relop";
  info[330].dominantType = "function_handle";
  info[330].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[330].fileTimeLo = 1342472782U;
  info[330].fileTimeHi = 0U;
  info[330].mFileTimeLo = 0U;
  info[330].mFileTimeHi = 0U;
  info[331].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m!map_to_real_proxies";
  info[331].name = "realmax";
  info[331].dominantType = "char";
  info[331].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[331].fileTimeLo = 1307672842U;
  info[331].fileTimeHi = 0U;
  info[331].mFileTimeLo = 0U;
  info[331].mFileTimeHi = 0U;
  info[332].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m!map_to_real_proxies";
  info[332].name = "mrdivide";
  info[332].dominantType = "double";
  info[332].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[332].fileTimeLo = 1357973148U;
  info[332].fileTimeHi = 0U;
  info[332].mFileTimeLo = 1319751566U;
  info[332].mFileTimeHi = 0U;
  info[333].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m!map_to_real_proxies";
  info[333].name = "abs";
  info[333].dominantType = "double";
  info[333].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[333].fileTimeLo = 1343851966U;
  info[333].fileTimeHi = 0U;
  info[333].mFileTimeLo = 0U;
  info[333].mFileTimeHi = 0U;
  info[334].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m!map_to_real_proxies";
  info[334].name = "hypot";
  info[334].dominantType = "double";
  info[334].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/hypot.m";
  info[334].fileTimeLo = 1343851980U;
  info[334].fileTimeHi = 0U;
  info[334].mFileTimeLo = 0U;
  info[334].mFileTimeHi = 0U;
  info[335].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/hypot.m";
  info[335].name = "eml_scalar_eg";
  info[335].dominantType = "double";
  info[335].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[335].fileTimeLo = 1286840396U;
  info[335].fileTimeHi = 0U;
  info[335].mFileTimeLo = 0U;
  info[335].mFileTimeHi = 0U;
  info[336].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/hypot.m";
  info[336].name = "eml_scalexp_alloc";
  info[336].dominantType = "double";
  info[336].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[336].fileTimeLo = 1352446460U;
  info[336].fileTimeHi = 0U;
  info[336].mFileTimeLo = 0U;
  info[336].mFileTimeHi = 0U;
  info[337].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/hypot.m";
  info[337].name = "eml_scalar_hypot";
  info[337].dominantType = "double";
  info[337].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_hypot.m";
  info[337].fileTimeLo = 1286840326U;
  info[337].fileTimeHi = 0U;
  info[337].mFileTimeLo = 0U;
  info[337].mFileTimeHi = 0U;
  info[338].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m!map_to_real_proxies";
  info[338].name = "eml_safe_eq";
  info[338].dominantType = "double";
  info[338].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[338].fileTimeLo = 1348213518U;
  info[338].fileTimeHi = 0U;
  info[338].mFileTimeLo = 0U;
  info[338].mFileTimeHi = 0U;
  info[339].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[339].name = "abs";
  info[339].dominantType = "double";
  info[339].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[339].fileTimeLo = 1343851966U;
  info[339].fileTimeHi = 0U;
  info[339].mFileTimeLo = 0U;
  info[339].mFileTimeHi = 0U;
  info[340].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[340].name = "mrdivide";
  info[340].dominantType = "double";
  info[340].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[340].fileTimeLo = 1357973148U;
  info[340].fileTimeHi = 0U;
  info[340].mFileTimeLo = 1319751566U;
  info[340].mFileTimeHi = 0U;
  info[341].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[341].name = "eps";
  info[341].dominantType = "double";
  info[341].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[341].fileTimeLo = 1326749596U;
  info[341].fileTimeHi = 0U;
  info[341].mFileTimeLo = 0U;
  info[341].mFileTimeHi = 0U;
  info[342].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[342].name = "eml_guarded_nan";
  info[342].dominantType = "";
  info[342].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[342].fileTimeLo = 1286840376U;
  info[342].fileTimeHi = 0U;
  info[342].mFileTimeLo = 0U;
  info[342].mFileTimeHi = 0U;
  info[343].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[343].name = "isinf";
  info[343].dominantType = "double";
  info[343].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[343].fileTimeLo = 1286840360U;
  info[343].fileTimeHi = 0U;
  info[343].mFileTimeLo = 0U;
  info[343].mFileTimeHi = 0U;
  info[344].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m!map_to_real_proxies";
  info[344].name = "mtimes";
  info[344].dominantType = "double";
  info[344].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[344].fileTimeLo = 1289541292U;
  info[344].fileTimeHi = 0U;
  info[344].mFileTimeLo = 0U;
  info[344].mFileTimeHi = 0U;
  info[345].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m!map_to_real_proxies";
  info[345].name = "angle";
  info[345].dominantType = "double";
  info[345].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/angle.m";
  info[345].fileTimeLo = 1343851970U;
  info[345].fileTimeHi = 0U;
  info[345].mFileTimeLo = 0U;
  info[345].mFileTimeHi = 0U;
  info[346].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/angle.m";
  info[346].name = "eml_scalar_angle";
  info[346].dominantType = "double";
  info[346].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_angle.m";
  info[346].fileTimeLo = 1286840316U;
  info[346].fileTimeHi = 0U;
  info[346].mFileTimeLo = 0U;
  info[346].mFileTimeHi = 0U;
  info[347].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_angle.m";
  info[347].name = "eml_scalar_atan2";
  info[347].dominantType = "double";
  info[347].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_atan2.m";
  info[347].fileTimeLo = 1286840320U;
  info[347].fileTimeHi = 0U;
  info[347].mFileTimeLo = 0U;
  info[347].mFileTimeHi = 0U;
  info[348].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[348].name = "floor";
  info[348].dominantType = "double";
  info[348].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[348].fileTimeLo = 1343851980U;
  info[348].fileTimeHi = 0U;
  info[348].mFileTimeLo = 0U;
  info[348].mFileTimeHi = 0U;
  info[349].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKCoarseFrequencyCompensator.m";
  info[349].name = "mtimes";
  info[349].dominantType = "double";
  info[349].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[349].fileTimeLo = 1289541292U;
  info[349].fileTimeHi = 0U;
  info[349].mFileTimeLo = 0U;
  info[349].mFileTimeHi = 0U;
  info[350].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[350].name = "getNumInputs";
  info[350].dominantType = "comm.PhaseFrequencyOffset";
  info[350].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[350].fileTimeLo = 1349900348U;
  info[350].fileTimeHi = 0U;
  info[350].mFileTimeLo = 0U;
  info[350].mFileTimeHi = 0U;
  info[351].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[351].name = "checkSystemObjectInput";
  info[351].dominantType = "comm.PhaseFrequencyOffset";
  info[351].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[351].fileTimeLo = 1349900346U;
  info[351].fileTimeHi = 0U;
  info[351].mFileTimeLo = 0U;
  info[351].mFileTimeHi = 0U;
  info[352].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[352].name = "setup";
  info[352].dominantType = "comm.PhaseFrequencyOffset";
  info[352].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[352].fileTimeLo = 1349900350U;
  info[352].fileTimeHi = 0U;
  info[352].mFileTimeLo = 0U;
  info[352].mFileTimeHi = 0U;
  info[353].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[353].name = "checkSystemObjectInput";
  info[353].dominantType = "comm.PhaseFrequencyOffset";
  info[353].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[353].fileTimeLo = 1349900346U;
  info[353].fileTimeHi = 0U;
  info[353].mFileTimeLo = 0U;
  info[353].mFileTimeHi = 0U;
  info[354].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[354].name = "reset";
  info[354].dominantType = "comm.PhaseFrequencyOffset";
  info[354].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[354].fileTimeLo = 1349900350U;
  info[354].fileTimeHi = 0U;
  info[354].mFileTimeLo = 0U;
  info[354].mFileTimeHi = 0U;
  info[355].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[355].name = "checkSystemObjectInput";
  info[355].dominantType = "comm.PhaseFrequencyOffset";
  info[355].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[355].fileTimeLo = 1349900346U;
  info[355].fileTimeHi = 0U;
  info[355].mFileTimeLo = 0U;
  info[355].mFileTimeHi = 0U;
  info[356].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[356].name = "getNumOutputs";
  info[356].dominantType = "comm.PhaseFrequencyOffset";
  info[356].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[356].fileTimeLo = 1349900348U;
  info[356].fileTimeHi = 0U;
  info[356].mFileTimeLo = 0U;
  info[356].mFileTimeHi = 0U;
  info[357].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[357].name = "checkSystemObjectInput";
  info[357].dominantType = "comm.PhaseFrequencyOffset";
  info[357].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[357].fileTimeLo = 1349900346U;
  info[357].fileTimeHi = 0U;
  info[357].mFileTimeLo = 0U;
  info[357].mFileTimeHi = 0U;
  info[358].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[358].name = "output";
  info[358].dominantType = "comm.PhaseFrequencyOffset";
  info[358].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[358].fileTimeLo = 1349900348U;
  info[358].fileTimeHi = 0U;
  info[358].mFileTimeLo = 0U;
  info[358].mFileTimeHi = 0U;
  info[359].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[359].name = "checkSystemObjectInput";
  info[359].dominantType = "comm.PhaseFrequencyOffset";
  info[359].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[359].fileTimeLo = 1349900346U;
  info[359].fileTimeHi = 0U;
  info[359].mFileTimeLo = 0U;
  info[359].mFileTimeHi = 0U;
  info[360].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/PhaseFrequencyOffset.p";
  info[360].name = "update";
  info[360].dominantType = "comm.PhaseFrequencyOffset";
  info[360].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[360].fileTimeLo = 1349900352U;
  info[360].fileTimeHi = 0U;
  info[360].mFileTimeLo = 0U;
  info[360].mFileTimeHi = 0U;
  info[361].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[361].name = "checkSystemObjectInput";
  info[361].dominantType = "comm.PhaseFrequencyOffset";
  info[361].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[361].fileTimeLo = 1349900346U;
  info[361].fileTimeHi = 0U;
  info[361].mFileTimeLo = 0U;
  info[361].mFileTimeHi = 0U;
  info[362].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[362].name = "length";
  info[362].dominantType = "double";
  info[362].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[362].fileTimeLo = 1303167806U;
  info[362].fileTimeHi = 0U;
  info[362].mFileTimeLo = 0U;
  info[362].mFileTimeHi = 0U;
  info[363].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m";
  info[363].name = "createsystemobjectv2";
  info[363].dominantType = "";
  info[363].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[363].fileTimeLo = 1343851958U;
  info[363].fileTimeHi = 0U;
  info[363].mFileTimeLo = 0U;
  info[363].mFileTimeHi = 0U;
  info[364].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m";
  info[364].name = "mtimes";
  info[364].dominantType = "double";
  info[364].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[364].fileTimeLo = 1289541292U;
  info[364].fileTimeHi = 0U;
  info[364].mFileTimeLo = 0U;
  info[364].mFileTimeHi = 0U;
  info[365].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m";
  info[365].name = "exp";
  info[365].dominantType = "double";
  info[365].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m";
  info[365].fileTimeLo = 1343851980U;
  info[365].fileTimeHi = 0U;
  info[365].mFileTimeLo = 0U;
  info[365].mFileTimeHi = 0U;
  info[366].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m";
  info[366].name = "eml_scalar_exp";
  info[366].dominantType = "double";
  info[366].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  info[366].fileTimeLo = 1301350064U;
  info[366].fileTimeHi = 0U;
  info[366].mFileTimeLo = 0U;
  info[366].mFileTimeHi = 0U;
  info[367].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  info[367].name = "mrdivide";
  info[367].dominantType = "double";
  info[367].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[367].fileTimeLo = 1357973148U;
  info[367].fileTimeHi = 0U;
  info[367].mFileTimeLo = 1319751566U;
  info[367].mFileTimeHi = 0U;
  info[368].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m";
  info[368].name = "sign";
  info[368].dominantType = "double";
  info[368].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m";
  info[368].fileTimeLo = 1354389664U;
  info[368].fileTimeHi = 0U;
  info[368].mFileTimeLo = 0U;
  info[368].mFileTimeHi = 0U;
  info[369].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m";
  info[369].name = "eml_scalar_sign";
  info[369].dominantType = "double";
  info[369].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sign.m";
  info[369].fileTimeLo = 1354389664U;
  info[369].fileTimeHi = 0U;
  info[369].mFileTimeLo = 0U;
  info[369].mFileTimeHi = 0U;
  info[370].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKFineFrequencyCompensator.m";
  info[370].name = "step";
  info[370].dominantType = "dsp.DigitalFilter";
  info[370].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[370].fileTimeLo = 1349900350U;
  info[370].fileTimeHi = 0U;
  info[370].mFileTimeLo = 0U;
  info[370].mFileTimeHi = 0U;
  info[371].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[371].name = "checkSystemObjectInput";
  info[371].dominantType = "dsp.DigitalFilter";
  info[371].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[371].fileTimeLo = 1349900346U;
  info[371].fileTimeHi = 0U;
  info[371].mFileTimeLo = 0U;
  info[371].mFileTimeHi = 0U;
  info[372].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[372].name = "deal";
  info[372].dominantType = "double";
  info[372].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datatypes/deal.m";
  info[372].fileTimeLo = 1299098366U;
  info[372].fileTimeHi = 0U;
  info[372].mFileTimeLo = 0U;
  info[372].mFileTimeHi = 0U;
  info[373].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[373].name = "createsystemobjectv2";
  info[373].dominantType = "";
  info[373].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[373].fileTimeLo = 1343851958U;
  info[373].fileTimeHi = 0U;
  info[373].mFileTimeLo = 0U;
  info[373].mFileTimeHi = 0U;
  info[374].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[374].name = "mtimes";
  info[374].dominantType = "double";
  info[374].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[374].fileTimeLo = 1289541292U;
  info[374].fileTimeHi = 0U;
  info[374].mFileTimeLo = 0U;
  info[374].mFileTimeHi = 0U;
  info[375].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[375].name = "mpower";
  info[375].dominantType = "double";
  info[375].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[375].fileTimeLo = 1286840442U;
  info[375].fileTimeHi = 0U;
  info[375].mFileTimeLo = 0U;
  info[375].mFileTimeHi = 0U;
  info[376].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[376].name = "sign";
  info[376].dominantType = "double";
  info[376].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m";
  info[376].fileTimeLo = 1354389664U;
  info[376].fileTimeHi = 0U;
  info[376].mFileTimeLo = 0U;
  info[376].mFileTimeHi = 0U;
  info[377].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[377].name = "step";
  info[377].dominantType = "dsp.DigitalFilter";
  info[377].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[377].fileTimeLo = 1349900350U;
  info[377].fileTimeHi = 0U;
  info[377].mFileTimeLo = 0U;
  info[377].mFileTimeHi = 0U;
  info[378].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[378].name = "mod";
  info[378].dominantType = "double";
  info[378].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[378].fileTimeLo = 1343851982U;
  info[378].fileTimeHi = 0U;
  info[378].mFileTimeLo = 0U;
  info[378].mFileTimeHi = 0U;
  info[379].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[379].name = "mrdivide";
  info[379].dominantType = "double";
  info[379].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[379].fileTimeLo = 1357973148U;
  info[379].fileTimeHi = 0U;
  info[379].mFileTimeLo = 1319751566U;
  info[379].mFileTimeHi = 0U;
  info[380].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTimingRecovery.m";
  info[380].name = "step";
  info[380].dominantType = "dsp.DelayLine";
  info[380].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[380].fileTimeLo = 1349900350U;
  info[380].fileTimeHi = 0U;
  info[380].mFileTimeLo = 0U;
  info[380].mFileTimeHi = 0U;
  info[381].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[381].name = "checkSystemObjectInput";
  info[381].dominantType = "dsp.DelayLine";
  info[381].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[381].fileTimeLo = 1349900346U;
  info[381].fileTimeHi = 0U;
  info[381].mFileTimeLo = 0U;
  info[381].mFileTimeHi = 0U;
  info[382].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[382].name = "deal";
  info[382].dominantType = "double";
  info[382].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datatypes/deal.m";
  info[382].fileTimeLo = 1299098366U;
  info[382].fileTimeHi = 0U;
  info[382].mFileTimeLo = 0U;
  info[382].mFileTimeHi = 0U;
  info[383].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[383].name = "mtimes";
  info[383].dominantType = "double";
  info[383].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[383].fileTimeLo = 1289541292U;
  info[383].fileTimeHi = 0U;
  info[383].mFileTimeLo = 0U;
  info[383].mFileTimeHi = 0U;
}

static void g_info_helper(ResolvedFunctionInfo info[563])
{
  info[384].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[384].name = "matlab.system.coder.System";
  info[384].dominantType = "unknown";
  info[384].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[384].fileTimeLo = 1357971318U;
  info[384].fileTimeHi = 0U;
  info[384].mFileTimeLo = 0U;
  info[384].mFileTimeHi = 0U;
  info[385].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[385].name = "matlab.system.mixin.coder.Nondirect";
  info[385].dominantType = "unknown";
  info[385].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[385].fileTimeLo = 1357971320U;
  info[385].fileTimeHi = 0U;
  info[385].mFileTimeLo = 0U;
  info[385].mFileTimeHi = 0U;
  info[386].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[386].name = "dspcodegen.Buffer";
  info[386].dominantType = "int32";
  info[386].resolved = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[386].fileTimeLo = 1358403900U;
  info[386].fileTimeHi = 0U;
  info[386].mFileTimeLo = 0U;
  info[386].mFileTimeHi = 0U;
  info[387].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[387].name = "createsystemobjectv2";
  info[387].dominantType = "";
  info[387].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[387].fileTimeLo = 1343851958U;
  info[387].fileTimeHi = 0U;
  info[387].mFileTimeLo = 0U;
  info[387].mFileTimeHi = 0U;
  info[388].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[388].name = "matlab.system.setProp";
  info[388].dominantType = "dspcodegen.Buffer";
  info[388].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[388].fileTimeLo = 1357962380U;
  info[388].fileTimeHi = 0U;
  info[388].mFileTimeLo = 0U;
  info[388].mFileTimeHi = 0U;
  info[389].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[389].name = "matlab.system.pvParse";
  info[389].dominantType = "dspcodegen.Buffer";
  info[389].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[389].fileTimeLo = 1357962380U;
  info[389].fileTimeHi = 0U;
  info[389].mFileTimeLo = 0U;
  info[389].mFileTimeHi = 0U;
  info[390].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[390].name = "dspcodegen.Buffer";
  info[390].dominantType = "";
  info[390].resolved = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[390].fileTimeLo = 1358403900U;
  info[390].fileTimeHi = 0U;
  info[390].mFileTimeLo = 0U;
  info[390].mFileTimeHi = 0U;
  info[391].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[391].name = "matlab.system.coder.SystemProp";
  info[391].dominantType = "";
  info[391].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[391].fileTimeLo = 1357971320U;
  info[391].fileTimeHi = 0U;
  info[391].mFileTimeLo = 0U;
  info[391].mFileTimeHi = 0U;
  info[392].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[392].name = "get";
  info[392].dominantType = "dsp.Buffer";
  info[392].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[392].fileTimeLo = 1349900344U;
  info[392].fileTimeHi = 0U;
  info[392].mFileTimeLo = 0U;
  info[392].mFileTimeHi = 0U;
  info[393].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[393].name = "mrdivide";
  info[393].dominantType = "double";
  info[393].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[393].fileTimeLo = 1357973148U;
  info[393].fileTimeHi = 0U;
  info[393].mFileTimeLo = 1319751566U;
  info[393].mFileTimeHi = 0U;
  info[394].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[394].name = "repmat";
  info[394].dominantType = "double";
  info[394].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[394].fileTimeLo = 1352446460U;
  info[394].fileTimeHi = 0U;
  info[394].mFileTimeLo = 0U;
  info[394].mFileTimeHi = 0U;
  info[395].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[395].name = "eml_scalar_eg";
  info[395].dominantType = "double";
  info[395].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[395].fileTimeLo = 1286840396U;
  info[395].fileTimeHi = 0U;
  info[395].mFileTimeLo = 0U;
  info[395].mFileTimeHi = 0U;
  info[396].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[396].name = "eml_index_prod";
  info[396].dominantType = "double";
  info[396].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[396].fileTimeLo = 1286840380U;
  info[396].fileTimeHi = 0U;
  info[396].mFileTimeLo = 0U;
  info[396].mFileTimeHi = 0U;
  info[397].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[397].name = "eml_index_class";
  info[397].dominantType = "";
  info[397].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[397].fileTimeLo = 1323192178U;
  info[397].fileTimeHi = 0U;
  info[397].mFileTimeLo = 0U;
  info[397].mFileTimeHi = 0U;
  info[398].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[398].name = "eml_index_times";
  info[398].dominantType = "coder.internal.indexInt";
  info[398].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[398].fileTimeLo = 1286840380U;
  info[398].fileTimeHi = 0U;
  info[398].mFileTimeLo = 0U;
  info[398].mFileTimeHi = 0U;
  info[399].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[399].name = "eml_int_forloop_overflow_check";
  info[399].dominantType = "";
  info[399].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[399].fileTimeLo = 1346531940U;
  info[399].fileTimeHi = 0U;
  info[399].mFileTimeLo = 0U;
  info[399].mFileTimeHi = 0U;
  info[400].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[400].name = "eml_index_plus";
  info[400].dominantType = "coder.internal.indexInt";
  info[400].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[400].fileTimeLo = 1286840378U;
  info[400].fileTimeHi = 0U;
  info[400].mFileTimeLo = 0U;
  info[400].mFileTimeHi = 0U;
  info[401].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[401].name = "matlab.system.coder.System";
  info[401].dominantType = "unknown";
  info[401].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[401].fileTimeLo = 1357971318U;
  info[401].fileTimeHi = 0U;
  info[401].mFileTimeLo = 0U;
  info[401].mFileTimeHi = 0U;
  info[402].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[402].name = "matlab.system.mixin.coder.Nondirect";
  info[402].dominantType = "unknown";
  info[402].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[402].fileTimeLo = 1357971320U;
  info[402].fileTimeHi = 0U;
  info[402].mFileTimeLo = 0U;
  info[402].mFileTimeHi = 0U;
  info[403].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[403].name = "commcodegen.QPSKModulator";
  info[403].dominantType = "int32";
  info[403].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[403].fileTimeLo = 1358405064U;
  info[403].fileTimeHi = 0U;
  info[403].mFileTimeLo = 0U;
  info[403].mFileTimeHi = 0U;
  info[404].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[404].name = "createsystemobjectv2";
  info[404].dominantType = "";
  info[404].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[404].fileTimeLo = 1343851958U;
  info[404].fileTimeHi = 0U;
  info[404].mFileTimeLo = 0U;
  info[404].mFileTimeHi = 0U;
  info[405].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[405].name = "matlab.system.pvParse";
  info[405].dominantType = "commcodegen.QPSKModulator";
  info[405].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[405].fileTimeLo = 1357962380U;
  info[405].fileTimeHi = 0U;
  info[405].mFileTimeLo = 0U;
  info[405].mFileTimeHi = 0U;
  info[406].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[406].name = "commcodegen.QPSKModulator";
  info[406].dominantType = "";
  info[406].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[406].fileTimeLo = 1358405064U;
  info[406].fileTimeHi = 0U;
  info[406].mFileTimeLo = 0U;
  info[406].mFileTimeHi = 0U;
  info[407].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[407].name = "matlab.system.coder.SystemProp";
  info[407].dominantType = "";
  info[407].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[407].fileTimeLo = 1357971320U;
  info[407].fileTimeHi = 0U;
  info[407].mFileTimeLo = 0U;
  info[407].mFileTimeHi = 0U;
  info[408].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[408].name = "get";
  info[408].dominantType = "comm.QPSKModulator";
  info[408].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[408].fileTimeLo = 1349900344U;
  info[408].fileTimeHi = 0U;
  info[408].mFileTimeLo = 0U;
  info[408].mFileTimeHi = 0U;
  info[409].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[409].name = "getNumInputs";
  info[409].dominantType = "comm.QPSKModulator";
  info[409].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[409].fileTimeLo = 1349900348U;
  info[409].fileTimeHi = 0U;
  info[409].mFileTimeLo = 0U;
  info[409].mFileTimeHi = 0U;
  info[410].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[410].name = "checkSystemObjectInput";
  info[410].dominantType = "comm.QPSKModulator";
  info[410].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[410].fileTimeLo = 1349900346U;
  info[410].fileTimeHi = 0U;
  info[410].mFileTimeLo = 0U;
  info[410].mFileTimeHi = 0U;
  info[411].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[411].name = "setup";
  info[411].dominantType = "comm.QPSKModulator";
  info[411].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[411].fileTimeLo = 1349900350U;
  info[411].fileTimeHi = 0U;
  info[411].mFileTimeLo = 0U;
  info[411].mFileTimeHi = 0U;
  info[412].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[412].name = "checkSystemObjectInput";
  info[412].dominantType = "comm.QPSKModulator";
  info[412].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[412].fileTimeLo = 1349900346U;
  info[412].fileTimeHi = 0U;
  info[412].mFileTimeLo = 0U;
  info[412].mFileTimeHi = 0U;
  info[413].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[413].name = "reset";
  info[413].dominantType = "comm.QPSKModulator";
  info[413].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[413].fileTimeLo = 1349900350U;
  info[413].fileTimeHi = 0U;
  info[413].mFileTimeLo = 0U;
  info[413].mFileTimeHi = 0U;
  info[414].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[414].name = "checkSystemObjectInput";
  info[414].dominantType = "comm.QPSKModulator";
  info[414].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[414].fileTimeLo = 1349900346U;
  info[414].fileTimeHi = 0U;
  info[414].mFileTimeLo = 0U;
  info[414].mFileTimeHi = 0U;
  info[415].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[415].name = "getNumOutputs";
  info[415].dominantType = "comm.QPSKModulator";
  info[415].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[415].fileTimeLo = 1349900348U;
  info[415].fileTimeHi = 0U;
  info[415].mFileTimeLo = 0U;
  info[415].mFileTimeHi = 0U;
  info[416].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[416].name = "checkSystemObjectInput";
  info[416].dominantType = "comm.QPSKModulator";
  info[416].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[416].fileTimeLo = 1349900346U;
  info[416].fileTimeHi = 0U;
  info[416].mFileTimeLo = 0U;
  info[416].mFileTimeHi = 0U;
  info[417].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[417].name = "output";
  info[417].dominantType = "comm.QPSKModulator";
  info[417].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[417].fileTimeLo = 1349900348U;
  info[417].fileTimeHi = 0U;
  info[417].mFileTimeLo = 0U;
  info[417].mFileTimeHi = 0U;
  info[418].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[418].name = "checkSystemObjectInput";
  info[418].dominantType = "comm.QPSKModulator";
  info[418].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[418].fileTimeLo = 1349900346U;
  info[418].fileTimeHi = 0U;
  info[418].mFileTimeLo = 0U;
  info[418].mFileTimeHi = 0U;
  info[419].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[419].name = "update";
  info[419].dominantType = "comm.QPSKModulator";
  info[419].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[419].fileTimeLo = 1349900352U;
  info[419].fileTimeHi = 0U;
  info[419].mFileTimeLo = 0U;
  info[419].mFileTimeHi = 0U;
  info[420].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[420].name = "checkSystemObjectInput";
  info[420].dominantType = "comm.QPSKModulator";
  info[420].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[420].fileTimeLo = 1349900346U;
  info[420].fileTimeHi = 0U;
  info[420].mFileTimeLo = 0U;
  info[420].mFileTimeHi = 0U;
  info[421].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[421].name = "matlab.system.coder.System";
  info[421].dominantType = "unknown";
  info[421].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[421].fileTimeLo = 1357971318U;
  info[421].fileTimeHi = 0U;
  info[421].mFileTimeLo = 0U;
  info[421].mFileTimeHi = 0U;
  info[422].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[422].name = "matlab.system.mixin.coder.Nondirect";
  info[422].dominantType = "unknown";
  info[422].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[422].fileTimeLo = 1357971320U;
  info[422].fileTimeHi = 0U;
  info[422].mFileTimeLo = 0U;
  info[422].mFileTimeHi = 0U;
  info[423].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[423].name = "dspcodegen.Crosscorrelator";
  info[423].dominantType = "int32";
  info[423].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[423].fileTimeLo = 1358403900U;
  info[423].fileTimeHi = 0U;
  info[423].mFileTimeLo = 0U;
  info[423].mFileTimeHi = 0U;
  info[424].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[424].name = "createsystemobjectv2";
  info[424].dominantType = "";
  info[424].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[424].fileTimeLo = 1343851958U;
  info[424].fileTimeHi = 0U;
  info[424].mFileTimeLo = 0U;
  info[424].mFileTimeHi = 0U;
  info[425].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[425].name = "dspcodegen.Crosscorrelator";
  info[425].dominantType = "";
  info[425].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[425].fileTimeLo = 1358403900U;
  info[425].fileTimeHi = 0U;
  info[425].mFileTimeLo = 0U;
  info[425].mFileTimeHi = 0U;
  info[426].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[426].name = "get";
  info[426].dominantType = "dsp.Crosscorrelator";
  info[426].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[426].fileTimeLo = 1349900344U;
  info[426].fileTimeHi = 0U;
  info[426].mFileTimeLo = 0U;
  info[426].mFileTimeHi = 0U;
  info[427].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[427].name = "createsystemobjectv2";
  info[427].dominantType = "";
  info[427].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[427].fileTimeLo = 1343851958U;
  info[427].fileTimeHi = 0U;
  info[427].mFileTimeLo = 0U;
  info[427].mFileTimeHi = 0U;
  info[428].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[428].name = "matlab.system.coder.System";
  info[428].dominantType = "unknown";
  info[428].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[428].fileTimeLo = 1357971318U;
  info[428].fileTimeHi = 0U;
  info[428].mFileTimeLo = 0U;
  info[428].mFileTimeHi = 0U;
  info[429].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[429].name = "matlab.system.mixin.coder.Nondirect";
  info[429].dominantType = "unknown";
  info[429].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[429].fileTimeLo = 1357971320U;
  info[429].fileTimeHi = 0U;
  info[429].mFileTimeLo = 0U;
  info[429].mFileTimeHi = 0U;
  info[430].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[430].name = "commcodegen.Descrambler";
  info[430].dominantType = "int32";
  info[430].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[430].fileTimeLo = 1358405062U;
  info[430].fileTimeHi = 0U;
  info[430].mFileTimeLo = 0U;
  info[430].mFileTimeHi = 0U;
  info[431].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[431].name = "createsystemobjectv2";
  info[431].dominantType = "";
  info[431].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[431].fileTimeLo = 1343851958U;
  info[431].fileTimeHi = 0U;
  info[431].mFileTimeLo = 0U;
  info[431].mFileTimeHi = 0U;
  info[432].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[432].name = "matlab.system.setProp";
  info[432].dominantType = "commcodegen.Descrambler";
  info[432].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[432].fileTimeLo = 1357962380U;
  info[432].fileTimeHi = 0U;
  info[432].mFileTimeLo = 0U;
  info[432].mFileTimeHi = 0U;
  info[433].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[433].name = "matlab.system.pvParse";
  info[433].dominantType = "commcodegen.Descrambler";
  info[433].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[433].fileTimeLo = 1357962380U;
  info[433].fileTimeHi = 0U;
  info[433].mFileTimeLo = 0U;
  info[433].mFileTimeHi = 0U;
  info[434].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[434].name = "commcodegen.Descrambler";
  info[434].dominantType = "";
  info[434].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[434].fileTimeLo = 1358405062U;
  info[434].fileTimeHi = 0U;
  info[434].mFileTimeLo = 0U;
  info[434].mFileTimeHi = 0U;
  info[435].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[435].name = "matlab.system.coder.SystemProp";
  info[435].dominantType = "";
  info[435].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[435].fileTimeLo = 1357971320U;
  info[435].fileTimeHi = 0U;
  info[435].mFileTimeLo = 0U;
  info[435].mFileTimeHi = 0U;
  info[436].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[436].name = "matlab.system.coder.System";
  info[436].dominantType = "unknown";
  info[436].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[436].fileTimeLo = 1357971318U;
  info[436].fileTimeHi = 0U;
  info[436].mFileTimeLo = 0U;
  info[436].mFileTimeHi = 0U;
  info[437].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[437].name = "matlab.system.mixin.coder.Nondirect";
  info[437].dominantType = "unknown";
  info[437].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[437].fileTimeLo = 1357971320U;
  info[437].fileTimeHi = 0U;
  info[437].mFileTimeLo = 0U;
  info[437].mFileTimeHi = 0U;
  info[438].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[438].name = "commcodegen.ErrorRate";
  info[438].dominantType = "int32";
  info[438].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[438].fileTimeLo = 1358405062U;
  info[438].fileTimeHi = 0U;
  info[438].mFileTimeLo = 0U;
  info[438].mFileTimeHi = 0U;
  info[439].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[439].name = "createsystemobjectv2";
  info[439].dominantType = "";
  info[439].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[439].fileTimeLo = 1343851958U;
  info[439].fileTimeHi = 0U;
  info[439].mFileTimeLo = 0U;
  info[439].mFileTimeHi = 0U;
  info[440].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[440].name = "commcodegen.ErrorRate";
  info[440].dominantType = "";
  info[440].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[440].fileTimeLo = 1358405062U;
  info[440].fileTimeHi = 0U;
  info[440].mFileTimeLo = 0U;
  info[440].mFileTimeHi = 0U;
  info[441].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[441].name = "get";
  info[441].dominantType = "comm.ErrorRate";
  info[441].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[441].fileTimeLo = 1349900344U;
  info[441].fileTimeHi = 0U;
  info[441].mFileTimeLo = 0U;
  info[441].mFileTimeHi = 0U;
  info[442].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[442].name = "getNumInputs";
  info[442].dominantType = "dsp.Buffer";
  info[442].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[442].fileTimeLo = 1349900348U;
  info[442].fileTimeHi = 0U;
  info[442].mFileTimeLo = 0U;
  info[442].mFileTimeHi = 0U;
  info[443].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[443].name = "checkSystemObjectInput";
  info[443].dominantType = "dsp.Buffer";
  info[443].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[443].fileTimeLo = 1349900346U;
  info[443].fileTimeHi = 0U;
  info[443].mFileTimeLo = 0U;
  info[443].mFileTimeHi = 0U;
  info[444].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[444].name = "setup";
  info[444].dominantType = "dsp.Buffer";
  info[444].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[444].fileTimeLo = 1349900350U;
  info[444].fileTimeHi = 0U;
  info[444].mFileTimeLo = 0U;
  info[444].mFileTimeHi = 0U;
  info[445].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[445].name = "checkSystemObjectInput";
  info[445].dominantType = "dsp.Buffer";
  info[445].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[445].fileTimeLo = 1349900346U;
  info[445].fileTimeHi = 0U;
  info[445].mFileTimeLo = 0U;
  info[445].mFileTimeHi = 0U;
  info[446].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[446].name = "reset";
  info[446].dominantType = "dsp.Buffer";
  info[446].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[446].fileTimeLo = 1349900350U;
  info[446].fileTimeHi = 0U;
  info[446].mFileTimeLo = 0U;
  info[446].mFileTimeHi = 0U;
  info[447].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[447].name = "checkSystemObjectInput";
  info[447].dominantType = "dsp.Buffer";
  info[447].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[447].fileTimeLo = 1349900346U;
  info[447].fileTimeHi = 0U;
  info[447].mFileTimeLo = 0U;
  info[447].mFileTimeHi = 0U;
}

static void h_info_helper(ResolvedFunctionInfo info[563])
{
  info[448].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[448].name = "getNumOutputs";
  info[448].dominantType = "dsp.Buffer";
  info[448].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[448].fileTimeLo = 1349900348U;
  info[448].fileTimeHi = 0U;
  info[448].mFileTimeLo = 0U;
  info[448].mFileTimeHi = 0U;
  info[449].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[449].name = "checkSystemObjectInput";
  info[449].dominantType = "dsp.Buffer";
  info[449].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[449].fileTimeLo = 1349900346U;
  info[449].fileTimeHi = 0U;
  info[449].mFileTimeLo = 0U;
  info[449].mFileTimeHi = 0U;
  info[450].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[450].name = "output";
  info[450].dominantType = "dsp.Buffer";
  info[450].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[450].fileTimeLo = 1349900348U;
  info[450].fileTimeHi = 0U;
  info[450].mFileTimeLo = 0U;
  info[450].mFileTimeHi = 0U;
  info[451].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[451].name = "checkSystemObjectInput";
  info[451].dominantType = "dsp.Buffer";
  info[451].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[451].fileTimeLo = 1349900346U;
  info[451].fileTimeHi = 0U;
  info[451].mFileTimeLo = 0U;
  info[451].mFileTimeHi = 0U;
  info[452].context = "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Buffer.p";
  info[452].name = "update";
  info[452].dominantType = "dsp.Buffer";
  info[452].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[452].fileTimeLo = 1349900352U;
  info[452].fileTimeHi = 0U;
  info[452].mFileTimeLo = 0U;
  info[452].mFileTimeHi = 0U;
  info[453].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[453].name = "checkSystemObjectInput";
  info[453].dominantType = "dsp.Buffer";
  info[453].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[453].fileTimeLo = 1349900346U;
  info[453].fileTimeHi = 0U;
  info[453].mFileTimeLo = 0U;
  info[453].mFileTimeHi = 0U;
  info[454].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[454].name = "length";
  info[454].dominantType = "double";
  info[454].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[454].fileTimeLo = 1303167806U;
  info[454].fileTimeHi = 0U;
  info[454].mFileTimeLo = 0U;
  info[454].mFileTimeHi = 0U;
  info[455].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[455].name = "mean";
  info[455].dominantType = "double";
  info[455].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[455].fileTimeLo = 1286840294U;
  info[455].fileTimeHi = 0U;
  info[455].mFileTimeLo = 0U;
  info[455].mFileTimeHi = 0U;
  info[456].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[456].name = "eml_scalar_eg";
  info[456].dominantType = "double";
  info[456].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[456].fileTimeLo = 1286840396U;
  info[456].fileTimeHi = 0U;
  info[456].mFileTimeLo = 0U;
  info[456].mFileTimeHi = 0U;
  info[457].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[457].name = "eml_scalexp_alloc";
  info[457].dominantType = "double";
  info[457].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[457].fileTimeLo = 1352446460U;
  info[457].fileTimeHi = 0U;
  info[457].mFileTimeLo = 0U;
  info[457].mFileTimeHi = 0U;
  info[458].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[458].name = "abs";
  info[458].dominantType = "double";
  info[458].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[458].fileTimeLo = 1343851966U;
  info[458].fileTimeHi = 0U;
  info[458].mFileTimeLo = 0U;
  info[458].mFileTimeHi = 0U;
  info[459].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[459].name = "mtimes";
  info[459].dominantType = "double";
  info[459].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[459].fileTimeLo = 1289541292U;
  info[459].fileTimeHi = 0U;
  info[459].mFileTimeLo = 0U;
  info[459].mFileTimeHi = 0U;
  info[460].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[460].name = "exp";
  info[460].dominantType = "double";
  info[460].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m";
  info[460].fileTimeLo = 1343851980U;
  info[460].fileTimeHi = 0U;
  info[460].mFileTimeLo = 0U;
  info[460].mFileTimeHi = 0U;
  info[461].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[461].name = "step";
  info[461].dominantType = "comm.QPSKDemodulator";
  info[461].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[461].fileTimeLo = 1349900350U;
  info[461].fileTimeHi = 0U;
  info[461].mFileTimeLo = 0U;
  info[461].mFileTimeHi = 0U;
  info[462].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[462].name = "checkSystemObjectInput";
  info[462].dominantType = "comm.QPSKDemodulator";
  info[462].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[462].fileTimeLo = 1349900346U;
  info[462].fileTimeHi = 0U;
  info[462].mFileTimeLo = 0U;
  info[462].mFileTimeHi = 0U;
  info[463].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[463].name = "log2";
  info[463].dominantType = "double";
  info[463].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m";
  info[463].fileTimeLo = 1343851982U;
  info[463].fileTimeHi = 0U;
  info[463].mFileTimeLo = 0U;
  info[463].mFileTimeHi = 0U;
  info[464].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[464].name = "realmax";
  info[464].dominantType = "char";
  info[464].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[464].fileTimeLo = 1307672842U;
  info[464].fileTimeHi = 0U;
  info[464].mFileTimeLo = 0U;
  info[464].mFileTimeHi = 0U;
  info[465].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[465].name = "mrdivide";
  info[465].dominantType = "double";
  info[465].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[465].fileTimeLo = 1357973148U;
  info[465].fileTimeHi = 0U;
  info[465].mFileTimeLo = 1319751566U;
  info[465].mFileTimeHi = 0U;
  info[466].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[466].name = "isfinite";
  info[466].dominantType = "double";
  info[466].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[466].fileTimeLo = 1286840358U;
  info[466].fileTimeHi = 0U;
  info[466].mFileTimeLo = 0U;
  info[466].mFileTimeHi = 0U;
  info[467].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_frexp";
  info[467].name = "isfinite";
  info[467].dominantType = "double";
  info[467].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[467].fileTimeLo = 1286840358U;
  info[467].fileTimeHi = 0U;
  info[467].mFileTimeLo = 0U;
  info[467].mFileTimeHi = 0U;
  info[468].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[468].name = "getNumInputs";
  info[468].dominantType = "comm.Descrambler";
  info[468].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[468].fileTimeLo = 1349900348U;
  info[468].fileTimeHi = 0U;
  info[468].mFileTimeLo = 0U;
  info[468].mFileTimeHi = 0U;
  info[469].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[469].name = "checkSystemObjectInput";
  info[469].dominantType = "comm.Descrambler";
  info[469].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[469].fileTimeLo = 1349900346U;
  info[469].fileTimeHi = 0U;
  info[469].mFileTimeLo = 0U;
  info[469].mFileTimeHi = 0U;
  info[470].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[470].name = "setup";
  info[470].dominantType = "comm.Descrambler";
  info[470].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[470].fileTimeLo = 1349900350U;
  info[470].fileTimeHi = 0U;
  info[470].mFileTimeLo = 0U;
  info[470].mFileTimeHi = 0U;
  info[471].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[471].name = "checkSystemObjectInput";
  info[471].dominantType = "comm.Descrambler";
  info[471].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[471].fileTimeLo = 1349900346U;
  info[471].fileTimeHi = 0U;
  info[471].mFileTimeLo = 0U;
  info[471].mFileTimeHi = 0U;
  info[472].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[472].name = "reset";
  info[472].dominantType = "comm.Descrambler";
  info[472].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[472].fileTimeLo = 1349900350U;
  info[472].fileTimeHi = 0U;
  info[472].mFileTimeLo = 0U;
  info[472].mFileTimeHi = 0U;
  info[473].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[473].name = "checkSystemObjectInput";
  info[473].dominantType = "comm.Descrambler";
  info[473].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[473].fileTimeLo = 1349900346U;
  info[473].fileTimeHi = 0U;
  info[473].mFileTimeLo = 0U;
  info[473].mFileTimeHi = 0U;
  info[474].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[474].name = "getNumOutputs";
  info[474].dominantType = "comm.Descrambler";
  info[474].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[474].fileTimeLo = 1349900348U;
  info[474].fileTimeHi = 0U;
  info[474].mFileTimeLo = 0U;
  info[474].mFileTimeHi = 0U;
  info[475].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[475].name = "checkSystemObjectInput";
  info[475].dominantType = "comm.Descrambler";
  info[475].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[475].fileTimeLo = 1349900346U;
  info[475].fileTimeHi = 0U;
  info[475].mFileTimeLo = 0U;
  info[475].mFileTimeHi = 0U;
  info[476].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[476].name = "output";
  info[476].dominantType = "comm.Descrambler";
  info[476].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[476].fileTimeLo = 1349900348U;
  info[476].fileTimeHi = 0U;
  info[476].mFileTimeLo = 0U;
  info[476].mFileTimeHi = 0U;
  info[477].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[477].name = "checkSystemObjectInput";
  info[477].dominantType = "comm.Descrambler";
  info[477].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[477].fileTimeLo = 1349900346U;
  info[477].fileTimeHi = 0U;
  info[477].mFileTimeLo = 0U;
  info[477].mFileTimeHi = 0U;
  info[478].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Descrambler.p";
  info[478].name = "update";
  info[478].dominantType = "comm.Descrambler";
  info[478].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[478].fileTimeLo = 1349900352U;
  info[478].fileTimeHi = 0U;
  info[478].mFileTimeLo = 0U;
  info[478].mFileTimeHi = 0U;
  info[479].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[479].name = "checkSystemObjectInput";
  info[479].dominantType = "comm.Descrambler";
  info[479].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[479].fileTimeLo = 1349900346U;
  info[479].fileTimeHi = 0U;
  info[479].mFileTimeLo = 0U;
  info[479].mFileTimeHi = 0U;
  info[480].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[480].name = "getNumInputs";
  info[480].dominantType = "dsp.Crosscorrelator";
  info[480].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[480].fileTimeLo = 1349900348U;
  info[480].fileTimeHi = 0U;
  info[480].mFileTimeLo = 0U;
  info[480].mFileTimeHi = 0U;
  info[481].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[481].name = "checkSystemObjectInput";
  info[481].dominantType = "dsp.Crosscorrelator";
  info[481].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[481].fileTimeLo = 1349900346U;
  info[481].fileTimeHi = 0U;
  info[481].mFileTimeLo = 0U;
  info[481].mFileTimeHi = 0U;
  info[482].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[482].name = "setup";
  info[482].dominantType = "dsp.Crosscorrelator";
  info[482].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[482].fileTimeLo = 1349900350U;
  info[482].fileTimeHi = 0U;
  info[482].mFileTimeLo = 0U;
  info[482].mFileTimeHi = 0U;
  info[483].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[483].name = "checkSystemObjectInput";
  info[483].dominantType = "dsp.Crosscorrelator";
  info[483].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[483].fileTimeLo = 1349900346U;
  info[483].fileTimeHi = 0U;
  info[483].mFileTimeLo = 0U;
  info[483].mFileTimeHi = 0U;
  info[484].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[484].name = "reset";
  info[484].dominantType = "dsp.Crosscorrelator";
  info[484].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[484].fileTimeLo = 1349900350U;
  info[484].fileTimeHi = 0U;
  info[484].mFileTimeLo = 0U;
  info[484].mFileTimeHi = 0U;
  info[485].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[485].name = "checkSystemObjectInput";
  info[485].dominantType = "dsp.Crosscorrelator";
  info[485].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[485].fileTimeLo = 1349900346U;
  info[485].fileTimeHi = 0U;
  info[485].mFileTimeLo = 0U;
  info[485].mFileTimeHi = 0U;
  info[486].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[486].name = "getNumOutputs";
  info[486].dominantType = "dsp.Crosscorrelator";
  info[486].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[486].fileTimeLo = 1349900348U;
  info[486].fileTimeHi = 0U;
  info[486].mFileTimeLo = 0U;
  info[486].mFileTimeHi = 0U;
  info[487].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[487].name = "checkSystemObjectInput";
  info[487].dominantType = "dsp.Crosscorrelator";
  info[487].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[487].fileTimeLo = 1349900346U;
  info[487].fileTimeHi = 0U;
  info[487].mFileTimeLo = 0U;
  info[487].mFileTimeHi = 0U;
  info[488].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[488].name = "output";
  info[488].dominantType = "dsp.Crosscorrelator";
  info[488].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[488].fileTimeLo = 1349900348U;
  info[488].fileTimeHi = 0U;
  info[488].mFileTimeLo = 0U;
  info[488].mFileTimeHi = 0U;
  info[489].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[489].name = "checkSystemObjectInput";
  info[489].dominantType = "dsp.Crosscorrelator";
  info[489].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[489].fileTimeLo = 1349900346U;
  info[489].fileTimeHi = 0U;
  info[489].mFileTimeLo = 0U;
  info[489].mFileTimeHi = 0U;
  info[490].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/Crosscorrelator.p";
  info[490].name = "update";
  info[490].dominantType = "dsp.Crosscorrelator";
  info[490].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[490].fileTimeLo = 1349900352U;
  info[490].fileTimeHi = 0U;
  info[490].mFileTimeLo = 0U;
  info[490].mFileTimeHi = 0U;
  info[491].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[491].name = "checkSystemObjectInput";
  info[491].dominantType = "dsp.Crosscorrelator";
  info[491].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[491].fileTimeLo = 1349900346U;
  info[491].fileTimeHi = 0U;
  info[491].mFileTimeLo = 0U;
  info[491].mFileTimeHi = 0U;
  info[492].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[492].name = "abs";
  info[492].dominantType = "double";
  info[492].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[492].fileTimeLo = 1343851966U;
  info[492].fileTimeHi = 0U;
  info[492].mFileTimeLo = 0U;
  info[492].mFileTimeHi = 0U;
  info[493].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[493].name = "max";
  info[493].dominantType = "double";
  info[493].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[493].fileTimeLo = 1311276916U;
  info[493].fileTimeHi = 0U;
  info[493].mFileTimeLo = 0U;
  info[493].mFileTimeHi = 0U;
  info[494].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[494].name = "mod";
  info[494].dominantType = "double";
  info[494].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[494].fileTimeLo = 1343851982U;
  info[494].fileTimeHi = 0U;
  info[494].mFileTimeLo = 0U;
  info[494].mFileTimeHi = 0U;
  info[495].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[495].name = "angle";
  info[495].dominantType = "double";
  info[495].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/angle.m";
  info[495].fileTimeLo = 1343851970U;
  info[495].fileTimeHi = 0U;
  info[495].mFileTimeLo = 0U;
  info[495].mFileTimeHi = 0U;
  info[496].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[496].name = "round";
  info[496].dominantType = "double";
  info[496].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/round.m";
  info[496].fileTimeLo = 1343851984U;
  info[496].fileTimeHi = 0U;
  info[496].mFileTimeLo = 0U;
  info[496].mFileTimeHi = 0U;
  info[497].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/round.m";
  info[497].name = "eml_scalar_round";
  info[497].dominantType = "double";
  info[497].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m";
  info[497].fileTimeLo = 1307672838U;
  info[497].fileTimeHi = 0U;
  info[497].mFileTimeLo = 0U;
  info[497].mFileTimeHi = 0U;
  info[498].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[498].name = "colon";
  info[498].dominantType = "double";
  info[498].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[498].fileTimeLo = 1348213528U;
  info[498].fileTimeHi = 0U;
  info[498].mFileTimeLo = 0U;
  info[498].mFileTimeHi = 0U;
  info[499].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[499].name = "eml_index_class";
  info[499].dominantType = "";
  info[499].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[499].fileTimeLo = 1323192178U;
  info[499].fileTimeHi = 0U;
  info[499].mFileTimeLo = 0U;
  info[499].mFileTimeHi = 0U;
  info[500].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[500].name = "eml_scalar_eg";
  info[500].dominantType = "double";
  info[500].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[500].fileTimeLo = 1286840396U;
  info[500].fileTimeHi = 0U;
  info[500].mFileTimeLo = 0U;
  info[500].mFileTimeHi = 0U;
  info[501].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[501].name = "eml_xdotu";
  info[501].dominantType = "double";
  info[501].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  info[501].fileTimeLo = 1299098372U;
  info[501].fileTimeHi = 0U;
  info[501].mFileTimeLo = 0U;
  info[501].mFileTimeHi = 0U;
  info[502].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  info[502].name = "eml_blas_inline";
  info[502].dominantType = "";
  info[502].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[502].fileTimeLo = 1299098368U;
  info[502].fileTimeHi = 0U;
  info[502].mFileTimeLo = 0U;
  info[502].mFileTimeHi = 0U;
  info[503].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  info[503].name = "eml_xdot";
  info[503].dominantType = "double";
  info[503].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m";
  info[503].fileTimeLo = 1299098372U;
  info[503].fileTimeHi = 0U;
  info[503].mFileTimeLo = 0U;
  info[503].mFileTimeHi = 0U;
  info[504].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m";
  info[504].name = "eml_blas_inline";
  info[504].dominantType = "";
  info[504].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[504].fileTimeLo = 1299098368U;
  info[504].fileTimeHi = 0U;
  info[504].mFileTimeLo = 0U;
  info[504].mFileTimeHi = 0U;
  info[505].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m";
  info[505].name = "eml_index_class";
  info[505].dominantType = "";
  info[505].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[505].fileTimeLo = 1323192178U;
  info[505].fileTimeHi = 0U;
  info[505].mFileTimeLo = 0U;
  info[505].mFileTimeHi = 0U;
  info[506].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m";
  info[506].name = "eml_refblas_xdot";
  info[506].dominantType = "double";
  info[506].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m";
  info[506].fileTimeLo = 1299098372U;
  info[506].fileTimeHi = 0U;
  info[506].mFileTimeLo = 0U;
  info[506].mFileTimeHi = 0U;
  info[507].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m";
  info[507].name = "eml_refblas_xdotx";
  info[507].dominantType = "char";
  info[507].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[507].fileTimeLo = 1299098374U;
  info[507].fileTimeHi = 0U;
  info[507].mFileTimeLo = 0U;
  info[507].mFileTimeHi = 0U;
  info[508].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[508].name = "eml_scalar_eg";
  info[508].dominantType = "double";
  info[508].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[508].fileTimeLo = 1286840396U;
  info[508].fileTimeHi = 0U;
  info[508].mFileTimeLo = 0U;
  info[508].mFileTimeHi = 0U;
  info[509].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[509].name = "eml_index_class";
  info[509].dominantType = "";
  info[509].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[509].fileTimeLo = 1323192178U;
  info[509].fileTimeHi = 0U;
  info[509].mFileTimeLo = 0U;
  info[509].mFileTimeHi = 0U;
  info[510].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[510].name = "eml_index_minus";
  info[510].dominantType = "double";
  info[510].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[510].fileTimeLo = 1286840378U;
  info[510].fileTimeHi = 0U;
  info[510].mFileTimeLo = 0U;
  info[510].mFileTimeHi = 0U;
  info[511].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[511].name = "eml_index_times";
  info[511].dominantType = "coder.internal.indexInt";
  info[511].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[511].fileTimeLo = 1286840380U;
  info[511].fileTimeHi = 0U;
  info[511].mFileTimeLo = 0U;
  info[511].mFileTimeHi = 0U;
}

static void i_info_helper(ResolvedFunctionInfo info[563])
{
  info[512].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[512].name = "eml_index_plus";
  info[512].dominantType = "coder.internal.indexInt";
  info[512].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[512].fileTimeLo = 1286840378U;
  info[512].fileTimeHi = 0U;
  info[512].mFileTimeLo = 0U;
  info[512].mFileTimeHi = 0U;
  info[513].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[513].name = "eml_int_forloop_overflow_check";
  info[513].dominantType = "";
  info[513].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[513].fileTimeLo = 1346531940U;
  info[513].fileTimeHi = 0U;
  info[513].mFileTimeLo = 0U;
  info[513].mFileTimeHi = 0U;
  info[514].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[514].name = "char";
  info[514].dominantType = "double";
  info[514].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[514].fileTimeLo = 1319751568U;
  info[514].fileTimeHi = 0U;
  info[514].mFileTimeLo = 0U;
  info[514].mFileTimeHi = 0U;
  info[515].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[515].name = "de2bi";
  info[515].dominantType = "int8";
  info[515].resolved = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[515].fileTimeLo = 1289991806U;
  info[515].fileTimeHi = 0U;
  info[515].mFileTimeLo = 0U;
  info[515].mFileTimeHi = 0U;
  info[516].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!IS_FINITE_INTEGER_NONNEGATIVE";
  info[516].name = "isfinite";
  info[516].dominantType = "int8";
  info[516].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[516].fileTimeLo = 1286840358U;
  info[516].fileTimeHi = 0U;
  info[516].mFileTimeLo = 0U;
  info[516].mFileTimeHi = 0U;
  info[517].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[517].name = "isinf";
  info[517].dominantType = "int8";
  info[517].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[517].fileTimeLo = 1286840360U;
  info[517].fileTimeHi = 0U;
  info[517].mFileTimeLo = 0U;
  info[517].mFileTimeHi = 0U;
  info[518].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[518].name = "isnan";
  info[518].dominantType = "int8";
  info[518].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[518].fileTimeLo = 1286840360U;
  info[518].fileTimeHi = 0U;
  info[518].mFileTimeLo = 0U;
  info[518].mFileTimeHi = 0U;
  info[519].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[519].name = "max";
  info[519].dominantType = "int8";
  info[519].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[519].fileTimeLo = 1311276916U;
  info[519].fileTimeHi = 0U;
  info[519].mFileTimeLo = 0U;
  info[519].mFileTimeHi = 0U;
  info[520].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[520].name = "eml_min_or_max";
  info[520].dominantType = "int8";
  info[520].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[520].fileTimeLo = 1334093090U;
  info[520].fileTimeHi = 0U;
  info[520].mFileTimeLo = 0U;
  info[520].mFileTimeHi = 0U;
  info[521].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[521].name = "eml_const_nonsingleton_dim";
  info[521].dominantType = "int8";
  info[521].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[521].fileTimeLo = 1286840296U;
  info[521].fileTimeHi = 0U;
  info[521].mFileTimeLo = 0U;
  info[521].mFileTimeHi = 0U;
  info[522].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[522].name = "eml_scalar_eg";
  info[522].dominantType = "int8";
  info[522].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[522].fileTimeLo = 1286840396U;
  info[522].fileTimeHi = 0U;
  info[522].mFileTimeLo = 0U;
  info[522].mFileTimeHi = 0U;
  info[523].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[523].name = "isnan";
  info[523].dominantType = "int8";
  info[523].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[523].fileTimeLo = 1286840360U;
  info[523].fileTimeHi = 0U;
  info[523].mFileTimeLo = 0U;
  info[523].mFileTimeHi = 0U;
  info[524].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[524].name = "log";
  info[524].dominantType = "double";
  info[524].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log.m";
  info[524].fileTimeLo = 1343851980U;
  info[524].fileTimeHi = 0U;
  info[524].mFileTimeLo = 0U;
  info[524].mFileTimeHi = 0U;
  info[525].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log.m";
  info[525].name = "eml_error";
  info[525].dominantType = "char";
  info[525].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[525].fileTimeLo = 1343851958U;
  info[525].fileTimeHi = 0U;
  info[525].mFileTimeLo = 0U;
  info[525].mFileTimeHi = 0U;
  info[526].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[526].name = "mrdivide";
  info[526].dominantType = "double";
  info[526].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[526].fileTimeLo = 1357973148U;
  info[526].fileTimeHi = 0U;
  info[526].mFileTimeLo = 1319751566U;
  info[526].mFileTimeHi = 0U;
  info[527].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[527].name = "floor";
  info[527].dominantType = "double";
  info[527].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[527].fileTimeLo = 1343851980U;
  info[527].fileTimeHi = 0U;
  info[527].mFileTimeLo = 0U;
  info[527].mFileTimeHi = 0U;
  info[528].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[528].name = "mpower";
  info[528].dominantType = "double";
  info[528].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[528].fileTimeLo = 1286840442U;
  info[528].fileTimeHi = 0U;
  info[528].mFileTimeLo = 0U;
  info[528].mFileTimeHi = 0U;
  info[529].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[529].name = "eml_error";
  info[529].dominantType = "char";
  info[529].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[529].fileTimeLo = 1343851958U;
  info[529].fileTimeHi = 0U;
  info[529].mFileTimeLo = 0U;
  info[529].mFileTimeHi = 0U;
  info[530].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!IS_FINITE_INTEGER_NONNEGATIVE";
  info[530].name = "isfinite";
  info[530].dominantType = "double";
  info[530].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[530].fileTimeLo = 1286840358U;
  info[530].fileTimeHi = 0U;
  info[530].mFileTimeLo = 0U;
  info[530].mFileTimeHi = 0U;
  info[531].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!IS_FINITE_INTEGER_NONNEGATIVE";
  info[531].name = "floor";
  info[531].dominantType = "double";
  info[531].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[531].fileTimeLo = 1343851980U;
  info[531].fileTimeHi = 0U;
  info[531].mFileTimeLo = 0U;
  info[531].mFileTimeHi = 0U;
  info[532].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[532].name = "rem";
  info[532].dominantType = "double";
  info[532].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[532].fileTimeLo = 1343851984U;
  info[532].fileTimeHi = 0U;
  info[532].mFileTimeLo = 0U;
  info[532].mFileTimeHi = 0U;
  info[533].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[533].name = "mrdivide";
  info[533].dominantType = "double";
  info[533].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[533].fileTimeLo = 1357973148U;
  info[533].fileTimeHi = 0U;
  info[533].mFileTimeLo = 1319751566U;
  info[533].mFileTimeHi = 0U;
  info[534].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[534].name = "floor";
  info[534].dominantType = "double";
  info[534].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[534].fileTimeLo = 1343851980U;
  info[534].fileTimeHi = 0U;
  info[534].mFileTimeLo = 0U;
  info[534].mFileTimeHi = 0U;
  info[535].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m";
  info[535].name = "reshape";
  info[535].dominantType = "double";
  info[535].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[535].fileTimeLo = 1286840368U;
  info[535].fileTimeHi = 0U;
  info[535].mFileTimeLo = 0U;
  info[535].mFileTimeHi = 0U;
  info[536].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[536].name = "eml_index_class";
  info[536].dominantType = "";
  info[536].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[536].fileTimeLo = 1323192178U;
  info[536].fileTimeHi = 0U;
  info[536].mFileTimeLo = 0U;
  info[536].mFileTimeHi = 0U;
  info[537].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!varargin_nempty";
  info[537].name = "eml_index_class";
  info[537].dominantType = "";
  info[537].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[537].fileTimeLo = 1323192178U;
  info[537].fileTimeHi = 0U;
  info[537].mFileTimeLo = 0U;
  info[537].mFileTimeHi = 0U;
  info[538].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[538].name = "eml_assert_valid_size_arg";
  info[538].dominantType = "double";
  info[538].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[538].fileTimeLo = 1286840294U;
  info[538].fileTimeHi = 0U;
  info[538].mFileTimeLo = 0U;
  info[538].mFileTimeHi = 0U;
  info[539].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[539].name = "eml_index_prod";
  info[539].dominantType = "coder.internal.indexInt";
  info[539].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[539].fileTimeLo = 1286840380U;
  info[539].fileTimeHi = 0U;
  info[539].mFileTimeLo = 0U;
  info[539].mFileTimeHi = 0U;
  info[540].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[540].name = "eml_int_forloop_overflow_check";
  info[540].dominantType = "";
  info[540].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[540].fileTimeLo = 1346531940U;
  info[540].fileTimeHi = 0U;
  info[540].mFileTimeLo = 0U;
  info[540].mFileTimeHi = 0U;
  info[541].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[541].name = "max";
  info[541].dominantType = "double";
  info[541].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[541].fileTimeLo = 1311276916U;
  info[541].fileTimeHi = 0U;
  info[541].mFileTimeLo = 0U;
  info[541].mFileTimeHi = 0U;
  info[542].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[542].name = "isnan";
  info[542].dominantType = "coder.internal.indexInt";
  info[542].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[542].fileTimeLo = 1286840360U;
  info[542].fileTimeHi = 0U;
  info[542].mFileTimeLo = 0U;
  info[542].mFileTimeHi = 0U;
  info[543].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[543].name = "eml_error";
  info[543].dominantType = "char";
  info[543].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[543].fileTimeLo = 1343851958U;
  info[543].fileTimeHi = 0U;
  info[543].mFileTimeLo = 0U;
  info[543].mFileTimeHi = 0U;
  info[544].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[544].name = "eml_scalar_eg";
  info[544].dominantType = "double";
  info[544].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[544].fileTimeLo = 1286840396U;
  info[544].fileTimeHi = 0U;
  info[544].mFileTimeLo = 0U;
  info[544].mFileTimeHi = 0U;
  info[545].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[545].name = "eml_int_forloop_overflow_check";
  info[545].dominantType = "";
  info[545].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[545].fileTimeLo = 1346531940U;
  info[545].fileTimeHi = 0U;
  info[545].mFileTimeLo = 0U;
  info[545].mFileTimeHi = 0U;
  info[546].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[546].name = "getNumInputs";
  info[546].dominantType = "comm.ErrorRate";
  info[546].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[546].fileTimeLo = 1349900348U;
  info[546].fileTimeHi = 0U;
  info[546].mFileTimeLo = 0U;
  info[546].mFileTimeHi = 0U;
  info[547].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[547].name = "checkSystemObjectInput";
  info[547].dominantType = "comm.ErrorRate";
  info[547].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[547].fileTimeLo = 1349900346U;
  info[547].fileTimeHi = 0U;
  info[547].mFileTimeLo = 0U;
  info[547].mFileTimeHi = 0U;
  info[548].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[548].name = "setup";
  info[548].dominantType = "comm.ErrorRate";
  info[548].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[548].fileTimeLo = 1349900350U;
  info[548].fileTimeHi = 0U;
  info[548].mFileTimeLo = 0U;
  info[548].mFileTimeHi = 0U;
  info[549].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[549].name = "checkSystemObjectInput";
  info[549].dominantType = "comm.ErrorRate";
  info[549].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[549].fileTimeLo = 1349900346U;
  info[549].fileTimeHi = 0U;
  info[549].mFileTimeLo = 0U;
  info[549].mFileTimeHi = 0U;
  info[550].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[550].name = "reset";
  info[550].dominantType = "comm.ErrorRate";
  info[550].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[550].fileTimeLo = 1349900350U;
  info[550].fileTimeHi = 0U;
  info[550].mFileTimeLo = 0U;
  info[550].mFileTimeHi = 0U;
  info[551].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[551].name = "checkSystemObjectInput";
  info[551].dominantType = "comm.ErrorRate";
  info[551].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[551].fileTimeLo = 1349900346U;
  info[551].fileTimeHi = 0U;
  info[551].mFileTimeLo = 0U;
  info[551].mFileTimeHi = 0U;
  info[552].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[552].name = "getNumOutputs";
  info[552].dominantType = "comm.ErrorRate";
  info[552].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[552].fileTimeLo = 1349900348U;
  info[552].fileTimeHi = 0U;
  info[552].mFileTimeLo = 0U;
  info[552].mFileTimeHi = 0U;
  info[553].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[553].name = "checkSystemObjectInput";
  info[553].dominantType = "comm.ErrorRate";
  info[553].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[553].fileTimeLo = 1349900346U;
  info[553].fileTimeHi = 0U;
  info[553].mFileTimeLo = 0U;
  info[553].mFileTimeHi = 0U;
  info[554].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[554].name = "output";
  info[554].dominantType = "comm.ErrorRate";
  info[554].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[554].fileTimeLo = 1349900348U;
  info[554].fileTimeHi = 0U;
  info[554].mFileTimeLo = 0U;
  info[554].mFileTimeHi = 0U;
  info[555].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[555].name = "checkSystemObjectInput";
  info[555].dominantType = "comm.ErrorRate";
  info[555].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[555].fileTimeLo = 1349900346U;
  info[555].fileTimeHi = 0U;
  info[555].mFileTimeLo = 0U;
  info[555].mFileTimeHi = 0U;
  info[556].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/ErrorRate.p";
  info[556].name = "update";
  info[556].dominantType = "comm.ErrorRate";
  info[556].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[556].fileTimeLo = 1349900352U;
  info[556].fileTimeHi = 0U;
  info[556].mFileTimeLo = 0U;
  info[556].mFileTimeHi = 0U;
  info[557].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[557].name = "checkSystemObjectInput";
  info[557].dominantType = "comm.ErrorRate";
  info[557].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[557].fileTimeLo = 1349900346U;
  info[557].fileTimeHi = 0U;
  info[557].mFileTimeLo = 0U;
  info[557].mFileTimeHi = 0U;
  info[558].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[558].name = "closeDataConnection";
  info[558].dominantType = "int32";
  info[558].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[558].fileTimeLo = 1345182484U;
  info[558].fileTimeHi = 0U;
  info[558].mFileTimeLo = 0U;
  info[558].mFileTimeHi = 0U;
  info[559].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[559].name = "mapiPrivate";
  info[559].dominantType = "int32";
  info[559].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[559].fileTimeLo = 1357947598U;
  info[559].fileTimeHi = 0U;
  info[559].mFileTimeLo = 0U;
  info[559].mFileTimeHi = 0U;
  info[560].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[560].name = "reportDrivers";
  info[560].dominantType = "";
  info[560].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[560].fileTimeLo = 1345182488U;
  info[560].fileTimeHi = 0U;
  info[560].mFileTimeLo = 0U;
  info[560].mFileTimeHi = 0U;
  info[561].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[561].name = "mapiPrivate";
  info[561].dominantType = "char";
  info[561].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[561].fileTimeLo = 1357947598U;
  info[561].fileTimeHi = 0U;
  info[561].mFileTimeLo = 0U;
  info[561].mFileTimeHi = 0U;
  info[562].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[562].name = "coder.internal.warning";
  info[562].dominantType = "char";
  info[562].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[562].fileTimeLo = 1311277408U;
  info[562].fileTimeHi = 0U;
  info[562].mFileTimeLo = 0U;
  info[562].mFileTimeHi = 0U;
}

static void info_helper(ResolvedFunctionInfo info[563])
{
  info[0].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m";
  info[0].name = "sqrt";
  info[0].dominantType = "double";
  info[0].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[0].fileTimeLo = 1343851986U;
  info[0].fileTimeHi = 0U;
  info[0].mFileTimeLo = 0U;
  info[0].mFileTimeHi = 0U;
  info[1].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[1].name = "eml_error";
  info[1].dominantType = "char";
  info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[1].fileTimeLo = 1343851958U;
  info[1].fileTimeHi = 0U;
  info[1].mFileTimeLo = 0U;
  info[1].mFileTimeHi = 0U;
  info[2].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[2].name = "eml_scalar_sqrt";
  info[2].dominantType = "double";
  info[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  info[2].fileTimeLo = 1286840338U;
  info[2].fileTimeHi = 0U;
  info[2].mFileTimeLo = 0U;
  info[2].mFileTimeHi = 0U;
  info[3].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m";
  info[3].name = "mrdivide";
  info[3].dominantType = "double";
  info[3].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[3].fileTimeLo = 1357973148U;
  info[3].fileTimeHi = 0U;
  info[3].mFileTimeLo = 1319751566U;
  info[3].mFileTimeHi = 0U;
  info[4].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[4].name = "rdivide";
  info[4].dominantType = "double";
  info[4].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[4].fileTimeLo = 1346531988U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[5].name = "eml_scalexp_compatible";
  info[5].dominantType = "double";
  info[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[5].fileTimeLo = 1286840396U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[6].name = "eml_div";
  info[6].dominantType = "double";
  info[6].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[6].fileTimeLo = 1313369410U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[7].name = "matlab.system.coder.SystemProp";
  info[7].dominantType = "unknown";
  info[7].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[7].fileTimeLo = 1357971320U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[8].name = "matlab.system.coder.SystemCore";
  info[8].dominantType = "unknown";
  info[8].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[8].fileTimeLo = 1357971318U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[9].name = "matlab.system.coder.System";
  info[9].dominantType = "unknown";
  info[9].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[9].fileTimeLo = 1357971318U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[10].name = "matlab.system.System";
  info[10].dominantType = "unknown";
  info[10].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/System.p";
  info[10].fileTimeLo = 1357962380U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 0U;
  info[10].mFileTimeHi = 0U;
  info[11].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[11].name = "matlab.System";
  info[11].dominantType = "unknown";
  info[11].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[11].fileTimeLo = 1357962380U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m";
  info[12].name = "sdruQPSKRx";
  info[12].dominantType = "char";
  info[12].resolved =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKRx.m";
  info[12].fileTimeLo = 1381255251U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[13].name = "matlab.system.coder.SystemProp";
  info[13].dominantType = "";
  info[13].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[13].fileTimeLo = 1357971320U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[14].name = "matlab.system.isSystemObject";
  info[14].dominantType = "char";
  info[14].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[14].fileTimeLo = 1357962380U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[15].name = "length";
  info[15].dominantType = "cell";
  info[15].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[15].fileTimeLo = 1303167806U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[16].name = "matlab.system.pvParse";
  info[16].dominantType = "sdruQPSKRx";
  info[16].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[16].fileTimeLo = 1357962380U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[17].name = "length";
  info[17].dominantType = "cell";
  info[17].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[17].fileTimeLo = 1303167806U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[18].name = "rem";
  info[18].dominantType = "double";
  info[18].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[18].fileTimeLo = 1343851984U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[19].name = "eml_scalar_eg";
  info[19].dominantType = "double";
  info[19].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[19].fileTimeLo = 1286840396U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[20].name = "eml_scalexp_alloc";
  info[20].dominantType = "double";
  info[20].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[20].fileTimeLo = 1352446460U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[21].name = "matlab.System";
  info[21].dominantType = "unknown";
  info[21].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[21].fileTimeLo = 1357962380U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[22].name = "comm.internal.SDRuBase";
  info[22].dominantType = "unknown";
  info[22].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[22].fileTimeLo = 1358405138U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m";
  info[23].name = "comm.SDRuReceiver";
  info[23].dominantType = "char";
  info[23].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[23].fileTimeLo = 1358405138U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 0U;
  info[23].mFileTimeHi = 0U;
  info[24].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[24].name = "coder.internal.getHostName";
  info[24].dominantType = "char";
  info[24].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m";
  info[24].fileTimeLo = 1327440774U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[25].name = "randi";
  info[25].dominantType = "double";
  info[25].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[25].fileTimeLo = 1320911042U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[26].name = "eml_assert_valid_size_arg";
  info[26].dominantType = "double";
  info[26].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[26].fileTimeLo = 1286840294U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral";
  info[27].name = "isinf";
  info[27].dominantType = "double";
  info[27].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[27].fileTimeLo = 1286840360U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size";
  info[28].name = "mtimes";
  info[28].dominantType = "double";
  info[28].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[28].fileTimeLo = 1289541292U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[29].name = "eml_index_class";
  info[29].dominantType = "";
  info[29].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[29].fileTimeLo = 1323192178U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[30].name = "intmax";
  info[30].dominantType = "char";
  info[30].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[30].fileTimeLo = 1311276916U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[31].name = "rand";
  info[31].dominantType = "double";
  info[31].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[31].fileTimeLo = 1313369422U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[32].name = "eml_is_rand_extrinsic";
  info[32].dominantType = "";
  info[32].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/eml_is_rand_extrinsic.m";
  info[32].fileTimeLo = 1334093090U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[33].name = "mtimes";
  info[33].dominantType = "double";
  info[33].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[33].fileTimeLo = 1289541292U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[34].name = "floor";
  info[34].dominantType = "double";
  info[34].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[34].fileTimeLo = 1343851980U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[35].name = "eml_scalar_floor";
  info[35].dominantType = "double";
  info[35].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[35].fileTimeLo = 1286840326U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 0U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[36].name = "char";
  info[36].dominantType = "double";
  info[36].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[36].fileTimeLo = 1319751568U;
  info[36].fileTimeHi = 0U;
  info[36].mFileTimeLo = 0U;
  info[36].mFileTimeHi = 0U;
  info[37].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[37].name = "matlab.system.coder.System";
  info[37].dominantType = "";
  info[37].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[37].fileTimeLo = 1357971318U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 0U;
  info[37].mFileTimeHi = 0U;
  info[38].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[38].name = "matlab.system.setProp";
  info[38].dominantType = "comm.SDRuReceiver";
  info[38].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[38].fileTimeLo = 1357962380U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[39].name = "checkIPAddressFormat";
  info[39].dominantType = "char";
  info[39].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[39].fileTimeLo = 1351917316U;
  info[39].fileTimeHi = 0U;
  info[39].mFileTimeLo = 0U;
  info[39].mFileTimeHi = 0U;
  info[40].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[40].name = "nargchk";
  info[40].dominantType = "double";
  info[40].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[40].fileTimeLo = 1286840418U;
  info[40].fileTimeHi = 0U;
  info[40].mFileTimeLo = 0U;
  info[40].mFileTimeHi = 0U;
  info[41].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[41].name = "floor";
  info[41].dominantType = "double";
  info[41].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[41].fileTimeLo = 1343851980U;
  info[41].fileTimeHi = 0U;
  info[41].mFileTimeLo = 0U;
  info[41].mFileTimeHi = 0U;
  info[42].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[42].name = "coder.internal.errorIf";
  info[42].dominantType = "char";
  info[42].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[42].fileTimeLo = 1334093538U;
  info[42].fileTimeHi = 0U;
  info[42].mFileTimeLo = 0U;
  info[42].mFileTimeHi = 0U;
  info[43].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[43].name = "isrow";
  info[43].dominantType = "char";
  info[43].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[43].fileTimeLo = 1346531960U;
  info[43].fileTimeHi = 0U;
  info[43].mFileTimeLo = 0U;
  info[43].mFileTimeHi = 0U;
  info[44].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[44].name = "find";
  info[44].dominantType = "logical";
  info[44].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[44].fileTimeLo = 1303167806U;
  info[44].fileTimeHi = 0U;
  info[44].mFileTimeLo = 0U;
  info[44].mFileTimeHi = 0U;
  info[45].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[45].name = "eml_index_class";
  info[45].dominantType = "";
  info[45].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[45].fileTimeLo = 1323192178U;
  info[45].fileTimeHi = 0U;
  info[45].mFileTimeLo = 0U;
  info[45].mFileTimeHi = 0U;
  info[46].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[46].name = "eml_scalar_eg";
  info[46].dominantType = "logical";
  info[46].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[46].fileTimeLo = 1286840396U;
  info[46].fileTimeHi = 0U;
  info[46].mFileTimeLo = 0U;
  info[46].mFileTimeHi = 0U;
  info[47].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[47].name = "eml_int_forloop_overflow_check";
  info[47].dominantType = "";
  info[47].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[47].fileTimeLo = 1346531940U;
  info[47].fileTimeHi = 0U;
  info[47].mFileTimeLo = 0U;
  info[47].mFileTimeHi = 0U;
  info[48].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[48].name = "intmax";
  info[48].dominantType = "char";
  info[48].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[48].fileTimeLo = 1311276916U;
  info[48].fileTimeHi = 0U;
  info[48].mFileTimeLo = 0U;
  info[48].mFileTimeHi = 0U;
  info[49].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[49].name = "eml_index_plus";
  info[49].dominantType = "double";
  info[49].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[49].fileTimeLo = 1286840378U;
  info[49].fileTimeHi = 0U;
  info[49].mFileTimeLo = 0U;
  info[49].mFileTimeHi = 0U;
  info[50].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[50].name = "eml_index_class";
  info[50].dominantType = "";
  info[50].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[50].fileTimeLo = 1323192178U;
  info[50].fileTimeHi = 0U;
  info[50].mFileTimeLo = 0U;
  info[50].mFileTimeHi = 0U;
  info[51].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[51].name = "length";
  info[51].dominantType = "double";
  info[51].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[51].fileTimeLo = 1303167806U;
  info[51].fileTimeHi = 0U;
  info[51].mFileTimeLo = 0U;
  info[51].mFileTimeHi = 0U;
  info[52].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[52].name = "length";
  info[52].dominantType = "char";
  info[52].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[52].fileTimeLo = 1303167806U;
  info[52].fileTimeHi = 0U;
  info[52].mFileTimeLo = 0U;
  info[52].mFileTimeHi = 0U;
  info[53].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m!checkNumeric";
  info[53].name = "any";
  info[53].dominantType = "logical";
  info[53].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[53].fileTimeLo = 1286840434U;
  info[53].fileTimeHi = 0U;
  info[53].mFileTimeLo = 0U;
  info[53].mFileTimeHi = 0U;
  info[54].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[54].name = "eml_all_or_any";
  info[54].dominantType = "char";
  info[54].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[54].fileTimeLo = 1286840294U;
  info[54].fileTimeHi = 0U;
  info[54].mFileTimeLo = 0U;
  info[54].mFileTimeHi = 0U;
  info[55].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[55].name = "isequal";
  info[55].dominantType = "double";
  info[55].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[55].fileTimeLo = 1286840358U;
  info[55].fileTimeHi = 0U;
  info[55].mFileTimeLo = 0U;
  info[55].mFileTimeHi = 0U;
  info[56].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[56].name = "eml_isequal_core";
  info[56].dominantType = "double";
  info[56].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[56].fileTimeLo = 1286840386U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[57].name = "eml_const_nonsingleton_dim";
  info[57].dominantType = "logical";
  info[57].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[57].fileTimeLo = 1286840296U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[58].name = "eml_matrix_vstride";
  info[58].dominantType = "double";
  info[58].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[58].fileTimeLo = 1286840388U;
  info[58].fileTimeHi = 0U;
  info[58].mFileTimeLo = 0U;
  info[58].mFileTimeHi = 0U;
  info[59].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[59].name = "eml_index_minus";
  info[59].dominantType = "double";
  info[59].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[59].fileTimeLo = 1286840378U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[60].name = "eml_index_class";
  info[60].dominantType = "";
  info[60].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[60].fileTimeLo = 1323192178U;
  info[60].fileTimeHi = 0U;
  info[60].mFileTimeLo = 0U;
  info[60].mFileTimeHi = 0U;
  info[61].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[61].name = "eml_index_class";
  info[61].dominantType = "";
  info[61].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[61].fileTimeLo = 1323192178U;
  info[61].fileTimeHi = 0U;
  info[61].mFileTimeLo = 0U;
  info[61].mFileTimeHi = 0U;
  info[62].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[62].name = "eml_size_prod";
  info[62].dominantType = "logical";
  info[62].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[62].fileTimeLo = 1286840398U;
  info[62].fileTimeHi = 0U;
  info[62].mFileTimeLo = 0U;
  info[62].mFileTimeHi = 0U;
  info[63].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[63].name = "eml_index_class";
  info[63].dominantType = "";
  info[63].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[63].fileTimeLo = 1323192178U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[563];
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info_helper(info);
  c_info_helper(info);
  d_info_helper(info);
  e_info_helper(info);
  f_info_helper(info);
  g_info_helper(info);
  h_info_helper(info);
  i_info_helper(info);
  emlrtAssign(&nameCaptureInfo, emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void runSDRuQPSKReceiver_api(runSDRuQPSKReceiverStackData *SD, const mxArray *
  const prhs[1], const mxArray *plhs[1])
{
  real_T (*BER_data)[3];
  static const uint32_T prmQPSKReceiver[4] = { 158961664U, 251855450U,
    1792917956U, 2198371256U };

  int32_T BER_size[1];
  BER_data = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2013a("prmQPSKReceiver", prmQPSKReceiver, prhs[0]);

  /* Invoke the target function */
  runSDRuQPSKReceiver(SD, *BER_data, BER_size);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*BER_data, BER_size);
}

/* End of code generation (runSDRuQPSKReceiver_api.c) */
