/*
 * runSDRuQPSKTransmitter_api.c
 *
 * Code generation for function 'runSDRuQPSKTransmitter_api'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "runSDRuQPSKTransmitter_api.h"

/* Function Declarations */
static void b_info_helper(ResolvedFunctionInfo info[271]);
static void c_info_helper(ResolvedFunctionInfo info[271]);
static void d_info_helper(ResolvedFunctionInfo info[271]);
static void e_info_helper(ResolvedFunctionInfo info[271]);
static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[271]);
static void info_helper(ResolvedFunctionInfo info[271]);

/* Function Definitions */
static void b_info_helper(ResolvedFunctionInfo info[271])
{
  info[64].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[64].name = "eml_size_prod";
  info[64].dominantType = "logical";
  info[64].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[64].fileTimeLo = 1286840398U;
  info[64].fileTimeHi = 0U;
  info[64].mFileTimeLo = 0U;
  info[64].mFileTimeHi = 0U;
  info[65].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
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
  info[66].name = "eml_index_plus";
  info[66].dominantType = "coder.internal.indexInt";
  info[66].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[66].fileTimeLo = 1286840378U;
  info[66].fileTimeHi = 0U;
  info[66].mFileTimeLo = 0U;
  info[66].mFileTimeHi = 0U;
  info[67].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[67].name = "eml_index_plus";
  info[67].dominantType = "double";
  info[67].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[67].fileTimeLo = 1286840378U;
  info[67].fileTimeHi = 0U;
  info[67].mFileTimeLo = 0U;
  info[67].mFileTimeHi = 0U;
  info[68].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[68].name = "eml_int_forloop_overflow_check";
  info[68].dominantType = "";
  info[68].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[68].fileTimeLo = 1346531940U;
  info[68].fileTimeHi = 0U;
  info[68].mFileTimeLo = 0U;
  info[68].mFileTimeHi = 0U;
  info[69].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[69].name = "isnan";
  info[69].dominantType = "logical";
  info[69].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[69].fileTimeLo = 1286840360U;
  info[69].fileTimeHi = 0U;
  info[69].mFileTimeLo = 0U;
  info[69].mFileTimeHi = 0U;
  info[70].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m!checkNumeric";
  info[70].name = "coder.internal.errorIf";
  info[70].dominantType = "char";
  info[70].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[70].fileTimeLo = 1334093538U;
  info[70].fileTimeHi = 0U;
  info[70].mFileTimeLo = 0U;
  info[70].mFileTimeHi = 0U;
  info[71].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[71].name = "matlab.system.pvParse";
  info[71].dominantType = "comm.SDRuTransmitter";
  info[71].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[71].fileTimeLo = 1357962380U;
  info[71].fileTimeHi = 0U;
  info[71].mFileTimeLo = 0U;
  info[71].mFileTimeHi = 0U;
  info[72].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[72].name = "coder.internal.warning";
  info[72].dominantType = "char";
  info[72].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[72].fileTimeLo = 1311277408U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[73].name = "eml_warning";
  info[73].dominantType = "char";
  info[73].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  info[73].fileTimeLo = 1286840402U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[74].name = "matlab.System";
  info[74].dominantType = "unknown";
  info[74].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[74].fileTimeLo = 1357962380U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTransmitter.m";
  info[75].name = "QPSKBitsGenerator";
  info[75].dominantType = "char";
  info[75].resolved =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[75].fileTimeLo = 1336789788U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[76].name = "matlab.system.pvParse";
  info[76].dominantType = "QPSKBitsGenerator";
  info[76].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[76].fileTimeLo = 1357962380U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTransmitter.m";
  info[77].name = "mrdivide";
  info[77].dominantType = "double";
  info[77].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[77].fileTimeLo = 1357973148U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 1319751566U;
  info[77].mFileTimeHi = 0U;
  info[78].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[78].name = "rdivide";
  info[78].dominantType = "double";
  info[78].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[78].fileTimeLo = 1346531988U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[79].name = "eml_scalexp_compatible";
  info[79].dominantType = "double";
  info[79].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[79].fileTimeLo = 1286840396U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[80].name = "eml_div";
  info[80].dominantType = "double";
  info[80].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[80].fileTimeLo = 1313369410U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[81].name = "matlab.system.coder.System";
  info[81].dominantType = "unknown";
  info[81].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[81].fileTimeLo = 1357971318U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[82].name = "matlab.system.mixin.coder.Nondirect";
  info[82].dominantType = "unknown";
  info[82].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[82].fileTimeLo = 1357971320U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 0U;
  info[82].mFileTimeHi = 0U;
  info[83].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[83].name = "matlab.system.mixin.Nondirect";
  info[83].dominantType = "unknown";
  info[83].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Nondirect.p";
  info[83].fileTimeLo = 1357962382U;
  info[83].fileTimeHi = 0U;
  info[83].mFileTimeLo = 0U;
  info[83].mFileTimeHi = 0U;
  info[84].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTransmitter.m";
  info[84].name = "commcodegen.QPSKModulator";
  info[84].dominantType = "int32";
  info[84].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[84].fileTimeLo = 1358405064U;
  info[84].fileTimeHi = 0U;
  info[84].mFileTimeLo = 0U;
  info[84].mFileTimeHi = 0U;
  info[85].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[85].name = "createsystemobjectv2";
  info[85].dominantType = "";
  info[85].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[85].fileTimeLo = 1343851958U;
  info[85].fileTimeHi = 0U;
  info[85].mFileTimeLo = 0U;
  info[85].mFileTimeHi = 0U;
  info[86].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[86].name = "length";
  info[86].dominantType = "cell";
  info[86].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[86].fileTimeLo = 1303167806U;
  info[86].fileTimeHi = 0U;
  info[86].mFileTimeLo = 0U;
  info[86].mFileTimeHi = 0U;
  info[87].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[87].name = "matlab.system.pvParse";
  info[87].dominantType = "commcodegen.QPSKModulator";
  info[87].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[87].fileTimeLo = 1357962380U;
  info[87].fileTimeHi = 0U;
  info[87].mFileTimeLo = 0U;
  info[87].mFileTimeHi = 0U;
  info[88].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[88].name = "commcodegen.QPSKModulator";
  info[88].dominantType = "";
  info[88].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[88].fileTimeLo = 1358405064U;
  info[88].fileTimeHi = 0U;
  info[88].mFileTimeLo = 0U;
  info[88].mFileTimeHi = 0U;
  info[89].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[89].name = "matlab.system.coder.SystemProp";
  info[89].dominantType = "";
  info[89].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[89].fileTimeLo = 1357971320U;
  info[89].fileTimeHi = 0U;
  info[89].mFileTimeLo = 0U;
  info[89].mFileTimeHi = 0U;
  info[90].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[90].name = "get";
  info[90].dominantType = "comm.QPSKModulator";
  info[90].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[90].fileTimeLo = 1349900344U;
  info[90].fileTimeHi = 0U;
  info[90].mFileTimeLo = 0U;
  info[90].mFileTimeHi = 0U;
  info[91].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[91].name = "matlab.system.coder.System";
  info[91].dominantType = "unknown";
  info[91].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[91].fileTimeLo = 1357971318U;
  info[91].fileTimeHi = 0U;
  info[91].mFileTimeLo = 0U;
  info[91].mFileTimeHi = 0U;
  info[92].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[92].name = "matlab.system.mixin.coder.Nondirect";
  info[92].dominantType = "unknown";
  info[92].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[92].fileTimeLo = 1357971320U;
  info[92].fileTimeHi = 0U;
  info[92].mFileTimeLo = 0U;
  info[92].mFileTimeHi = 0U;
  info[93].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTransmitter.m";
  info[93].name = "dspcodegen.FIRInterpolator";
  info[93].dominantType = "int32";
  info[93].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[93].fileTimeLo = 1358403902U;
  info[93].fileTimeHi = 0U;
  info[93].mFileTimeLo = 0U;
  info[93].mFileTimeHi = 0U;
  info[94].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[94].name = "createsystemobjectv2";
  info[94].dominantType = "";
  info[94].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[94].fileTimeLo = 1343851958U;
  info[94].fileTimeHi = 0U;
  info[94].mFileTimeLo = 0U;
  info[94].mFileTimeHi = 0U;
  info[95].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[95].name = "matlab.system.isSystemObject";
  info[95].dominantType = "double";
  info[95].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[95].fileTimeLo = 1357962380U;
  info[95].fileTimeHi = 0U;
  info[95].mFileTimeLo = 0U;
  info[95].mFileTimeHi = 0U;
  info[96].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[96].name = "matlab.system.setProp";
  info[96].dominantType = "dspcodegen.FIRInterpolator";
  info[96].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[96].fileTimeLo = 1357962380U;
  info[96].fileTimeHi = 0U;
  info[96].mFileTimeLo = 0U;
  info[96].mFileTimeHi = 0U;
  info[97].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[97].name = "matlab.system.pvParse";
  info[97].dominantType = "dspcodegen.FIRInterpolator";
  info[97].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[97].fileTimeLo = 1357962380U;
  info[97].fileTimeHi = 0U;
  info[97].mFileTimeLo = 0U;
  info[97].mFileTimeHi = 0U;
  info[98].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[98].name = "dspcodegen.FIRInterpolator";
  info[98].dominantType = "";
  info[98].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[98].fileTimeLo = 1358403902U;
  info[98].fileTimeHi = 0U;
  info[98].mFileTimeLo = 0U;
  info[98].mFileTimeHi = 0U;
  info[99].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[99].name = "matlab.system.coder.SystemProp";
  info[99].dominantType = "";
  info[99].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[99].fileTimeLo = 1357971320U;
  info[99].fileTimeHi = 0U;
  info[99].mFileTimeLo = 0U;
  info[99].mFileTimeHi = 0U;
  info[100].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[100].name = "get";
  info[100].dominantType = "dsp.FIRInterpolator";
  info[100].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[100].fileTimeLo = 1349900344U;
  info[100].fileTimeHi = 0U;
  info[100].mFileTimeLo = 0U;
  info[100].mFileTimeHi = 0U;
  info[101].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[101].name = "matlab.system.coder.SystemCore";
  info[101].dominantType = "";
  info[101].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[101].fileTimeLo = 1357971318U;
  info[101].fileTimeHi = 0U;
  info[101].mFileTimeLo = 0U;
  info[101].mFileTimeHi = 0U;
  info[102].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[102].name = "length";
  info[102].dominantType = "logical";
  info[102].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[102].fileTimeLo = 1303167806U;
  info[102].fileTimeHi = 0U;
  info[102].mFileTimeLo = 0U;
  info[102].mFileTimeHi = 0U;
  info[103].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[103].name = "mrdivide";
  info[103].dominantType = "double";
  info[103].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[103].fileTimeLo = 1357973148U;
  info[103].fileTimeHi = 0U;
  info[103].mFileTimeLo = 1319751566U;
  info[103].mFileTimeHi = 0U;
  info[104].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[104].name = "repmat";
  info[104].dominantType = "double";
  info[104].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[104].fileTimeLo = 1352446460U;
  info[104].fileTimeHi = 0U;
  info[104].mFileTimeLo = 0U;
  info[104].mFileTimeHi = 0U;
  info[105].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[105].name = "eml_assert_valid_size_arg";
  info[105].dominantType = "double";
  info[105].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[105].fileTimeLo = 1286840294U;
  info[105].fileTimeHi = 0U;
  info[105].mFileTimeLo = 0U;
  info[105].mFileTimeHi = 0U;
  info[106].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[106].name = "eml_index_class";
  info[106].dominantType = "";
  info[106].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[106].fileTimeLo = 1323192178U;
  info[106].fileTimeHi = 0U;
  info[106].mFileTimeLo = 0U;
  info[106].mFileTimeHi = 0U;
  info[107].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[107].name = "eml_index_minus";
  info[107].dominantType = "coder.internal.indexInt";
  info[107].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[107].fileTimeLo = 1286840378U;
  info[107].fileTimeHi = 0U;
  info[107].mFileTimeLo = 0U;
  info[107].mFileTimeHi = 0U;
  info[108].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[108].name = "eml_scalar_eg";
  info[108].dominantType = "double";
  info[108].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[108].fileTimeLo = 1286840396U;
  info[108].fileTimeHi = 0U;
  info[108].mFileTimeLo = 0U;
  info[108].mFileTimeHi = 0U;
  info[109].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[109].name = "eml_index_prod";
  info[109].dominantType = "double";
  info[109].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[109].fileTimeLo = 1286840380U;
  info[109].fileTimeHi = 0U;
  info[109].mFileTimeLo = 0U;
  info[109].mFileTimeHi = 0U;
  info[110].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[110].name = "eml_index_class";
  info[110].dominantType = "";
  info[110].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[110].fileTimeLo = 1323192178U;
  info[110].fileTimeHi = 0U;
  info[110].mFileTimeLo = 0U;
  info[110].mFileTimeHi = 0U;
  info[111].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[111].name = "eml_index_times";
  info[111].dominantType = "coder.internal.indexInt";
  info[111].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[111].fileTimeLo = 1286840380U;
  info[111].fileTimeHi = 0U;
  info[111].mFileTimeLo = 0U;
  info[111].mFileTimeHi = 0U;
  info[112].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[112].name = "eml_int_forloop_overflow_check";
  info[112].dominantType = "";
  info[112].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[112].fileTimeLo = 1346531940U;
  info[112].fileTimeHi = 0U;
  info[112].mFileTimeLo = 0U;
  info[112].mFileTimeHi = 0U;
  info[113].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[113].name = "eml_index_plus";
  info[113].dominantType = "coder.internal.indexInt";
  info[113].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[113].fileTimeLo = 1286840378U;
  info[113].fileTimeHi = 0U;
  info[113].mFileTimeLo = 0U;
  info[113].mFileTimeHi = 0U;
  info[114].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[114].name = "matlab.system.coder.System";
  info[114].dominantType = "unknown";
  info[114].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[114].fileTimeLo = 1357971318U;
  info[114].fileTimeHi = 0U;
  info[114].mFileTimeLo = 0U;
  info[114].mFileTimeHi = 0U;
  info[115].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[115].name = "matlab.system.mixin.coder.Nondirect";
  info[115].dominantType = "unknown";
  info[115].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[115].fileTimeLo = 1357971320U;
  info[115].fileTimeHi = 0U;
  info[115].mFileTimeLo = 0U;
  info[115].mFileTimeHi = 0U;
  info[116].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[116].name = "commcodegen.Scrambler";
  info[116].dominantType = "int32";
  info[116].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[116].fileTimeLo = 1358405064U;
  info[116].fileTimeHi = 0U;
  info[116].mFileTimeLo = 0U;
  info[116].mFileTimeHi = 0U;
  info[117].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[117].name = "createsystemobjectv2";
  info[117].dominantType = "";
  info[117].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[117].fileTimeLo = 1343851958U;
  info[117].fileTimeHi = 0U;
  info[117].mFileTimeLo = 0U;
  info[117].mFileTimeHi = 0U;
  info[118].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[118].name = "matlab.system.setProp";
  info[118].dominantType = "commcodegen.Scrambler";
  info[118].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[118].fileTimeLo = 1357962380U;
  info[118].fileTimeHi = 0U;
  info[118].mFileTimeLo = 0U;
  info[118].mFileTimeHi = 0U;
  info[119].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[119].name = "matlab.system.pvParse";
  info[119].dominantType = "commcodegen.Scrambler";
  info[119].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[119].fileTimeLo = 1357962380U;
  info[119].fileTimeHi = 0U;
  info[119].mFileTimeLo = 0U;
  info[119].mFileTimeHi = 0U;
  info[120].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[120].name = "commcodegen.Scrambler";
  info[120].dominantType = "";
  info[120].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[120].fileTimeLo = 1358405064U;
  info[120].fileTimeHi = 0U;
  info[120].mFileTimeLo = 0U;
  info[120].mFileTimeHi = 0U;
  info[121].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[121].name = "matlab.system.coder.SystemProp";
  info[121].dominantType = "";
  info[121].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[121].fileTimeLo = 1357971320U;
  info[121].fileTimeHi = 0U;
  info[121].mFileTimeLo = 0U;
  info[121].mFileTimeHi = 0U;
  info[122].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[122].name = "mod";
  info[122].dominantType = "double";
  info[122].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[122].fileTimeLo = 1343851982U;
  info[122].fileTimeHi = 0U;
  info[122].mFileTimeLo = 0U;
  info[122].mFileTimeHi = 0U;
  info[123].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[123].name = "eml_scalar_eg";
  info[123].dominantType = "double";
  info[123].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[123].fileTimeLo = 1286840396U;
  info[123].fileTimeHi = 0U;
  info[123].mFileTimeLo = 0U;
  info[123].mFileTimeHi = 0U;
  info[124].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[124].name = "eml_scalexp_alloc";
  info[124].dominantType = "double";
  info[124].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[124].fileTimeLo = 1352446460U;
  info[124].fileTimeHi = 0U;
  info[124].mFileTimeLo = 0U;
  info[124].mFileTimeHi = 0U;
  info[125].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[125].name = "eml_scalar_eg";
  info[125].dominantType = "double";
  info[125].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[125].fileTimeLo = 1286840396U;
  info[125].fileTimeHi = 0U;
  info[125].mFileTimeLo = 0U;
  info[125].mFileTimeHi = 0U;
  info[126].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[126].name = "eml_scalar_floor";
  info[126].dominantType = "double";
  info[126].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[126].fileTimeLo = 1286840326U;
  info[126].fileTimeHi = 0U;
  info[126].mFileTimeLo = 0U;
  info[126].mFileTimeHi = 0U;
  info[127].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[127].name = "eml_scalar_round";
  info[127].dominantType = "double";
  info[127].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m";
  info[127].fileTimeLo = 1307672838U;
  info[127].fileTimeHi = 0U;
  info[127].mFileTimeLo = 0U;
  info[127].mFileTimeHi = 0U;
}

static void c_info_helper(ResolvedFunctionInfo info[271])
{
  info[128].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[128].name = "eml_scalar_abs";
  info[128].dominantType = "double";
  info[128].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[128].fileTimeLo = 1286840312U;
  info[128].fileTimeHi = 0U;
  info[128].mFileTimeLo = 0U;
  info[128].mFileTimeHi = 0U;
  info[129].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[129].name = "eps";
  info[129].dominantType = "char";
  info[129].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[129].fileTimeLo = 1326749596U;
  info[129].fileTimeHi = 0U;
  info[129].mFileTimeLo = 0U;
  info[129].mFileTimeHi = 0U;
  info[130].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[130].name = "eml_is_float_class";
  info[130].dominantType = "char";
  info[130].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[130].fileTimeLo = 1286840382U;
  info[130].fileTimeHi = 0U;
  info[130].mFileTimeLo = 0U;
  info[130].mFileTimeHi = 0U;
  info[131].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[131].name = "eml_eps";
  info[131].dominantType = "char";
  info[131].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[131].fileTimeLo = 1326749596U;
  info[131].fileTimeHi = 0U;
  info[131].mFileTimeLo = 0U;
  info[131].mFileTimeHi = 0U;
  info[132].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[132].name = "eml_float_model";
  info[132].dominantType = "char";
  info[132].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[132].fileTimeLo = 1326749596U;
  info[132].fileTimeHi = 0U;
  info[132].mFileTimeLo = 0U;
  info[132].mFileTimeHi = 0U;
  info[133].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[133].name = "mtimes";
  info[133].dominantType = "double";
  info[133].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[133].fileTimeLo = 1289541292U;
  info[133].fileTimeHi = 0U;
  info[133].mFileTimeLo = 0U;
  info[133].mFileTimeHi = 0U;
  info[134].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[134].name = "de2bi";
  info[134].dominantType = "int8";
  info[134].resolved = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[134].fileTimeLo = 1289991806U;
  info[134].fileTimeHi = 0U;
  info[134].mFileTimeLo = 0U;
  info[134].mFileTimeHi = 0U;
  info[135].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!IS_FINITE_INTEGER_NONNEGATIVE";
  info[135].name = "isfinite";
  info[135].dominantType = "int8";
  info[135].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[135].fileTimeLo = 1286840358U;
  info[135].fileTimeHi = 0U;
  info[135].mFileTimeLo = 0U;
  info[135].mFileTimeHi = 0U;
  info[136].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[136].name = "isinf";
  info[136].dominantType = "int8";
  info[136].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[136].fileTimeLo = 1286840360U;
  info[136].fileTimeHi = 0U;
  info[136].mFileTimeLo = 0U;
  info[136].mFileTimeHi = 0U;
  info[137].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[137].name = "isnan";
  info[137].dominantType = "int8";
  info[137].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[137].fileTimeLo = 1286840360U;
  info[137].fileTimeHi = 0U;
  info[137].mFileTimeLo = 0U;
  info[137].mFileTimeHi = 0U;
  info[138].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[138].name = "max";
  info[138].dominantType = "int8";
  info[138].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[138].fileTimeLo = 1311276916U;
  info[138].fileTimeHi = 0U;
  info[138].mFileTimeLo = 0U;
  info[138].mFileTimeHi = 0U;
  info[139].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[139].name = "eml_min_or_max";
  info[139].dominantType = "int8";
  info[139].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[139].fileTimeLo = 1334093090U;
  info[139].fileTimeHi = 0U;
  info[139].mFileTimeLo = 0U;
  info[139].mFileTimeHi = 0U;
  info[140].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[140].name = "eml_const_nonsingleton_dim";
  info[140].dominantType = "int8";
  info[140].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[140].fileTimeLo = 1286840296U;
  info[140].fileTimeHi = 0U;
  info[140].mFileTimeLo = 0U;
  info[140].mFileTimeHi = 0U;
  info[141].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[141].name = "eml_scalar_eg";
  info[141].dominantType = "int8";
  info[141].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[141].fileTimeLo = 1286840396U;
  info[141].fileTimeHi = 0U;
  info[141].mFileTimeLo = 0U;
  info[141].mFileTimeHi = 0U;
  info[142].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[142].name = "eml_index_class";
  info[142].dominantType = "";
  info[142].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[142].fileTimeLo = 1323192178U;
  info[142].fileTimeHi = 0U;
  info[142].mFileTimeLo = 0U;
  info[142].mFileTimeHi = 0U;
  info[143].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[143].name = "eml_index_class";
  info[143].dominantType = "";
  info[143].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[143].fileTimeLo = 1323192178U;
  info[143].fileTimeHi = 0U;
  info[143].mFileTimeLo = 0U;
  info[143].mFileTimeHi = 0U;
  info[144].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[144].name = "isnan";
  info[144].dominantType = "int8";
  info[144].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[144].fileTimeLo = 1286840360U;
  info[144].fileTimeHi = 0U;
  info[144].mFileTimeLo = 0U;
  info[144].mFileTimeHi = 0U;
  info[145].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[145].name = "eml_index_plus";
  info[145].dominantType = "coder.internal.indexInt";
  info[145].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[145].fileTimeLo = 1286840378U;
  info[145].fileTimeHi = 0U;
  info[145].mFileTimeLo = 0U;
  info[145].mFileTimeHi = 0U;
  info[146].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[146].name = "eml_int_forloop_overflow_check";
  info[146].dominantType = "";
  info[146].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[146].fileTimeLo = 1346531940U;
  info[146].fileTimeHi = 0U;
  info[146].mFileTimeLo = 0U;
  info[146].mFileTimeHi = 0U;
  info[147].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[147].name = "eml_relop";
  info[147].dominantType = "function_handle";
  info[147].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[147].fileTimeLo = 1342472782U;
  info[147].fileTimeHi = 0U;
  info[147].mFileTimeLo = 0U;
  info[147].mFileTimeHi = 0U;
  info[148].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[148].name = "log";
  info[148].dominantType = "double";
  info[148].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log.m";
  info[148].fileTimeLo = 1343851980U;
  info[148].fileTimeHi = 0U;
  info[148].mFileTimeLo = 0U;
  info[148].mFileTimeHi = 0U;
  info[149].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log.m";
  info[149].name = "eml_error";
  info[149].dominantType = "char";
  info[149].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[149].fileTimeLo = 1343851958U;
  info[149].fileTimeHi = 0U;
  info[149].mFileTimeLo = 0U;
  info[149].mFileTimeHi = 0U;
  info[150].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log.m";
  info[150].name = "eml_scalar_log";
  info[150].dominantType = "double";
  info[150].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[150].fileTimeLo = 1286840328U;
  info[150].fileTimeHi = 0U;
  info[150].mFileTimeLo = 0U;
  info[150].mFileTimeHi = 0U;
  info[151].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[151].name = "realmax";
  info[151].dominantType = "char";
  info[151].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[151].fileTimeLo = 1307672842U;
  info[151].fileTimeHi = 0U;
  info[151].mFileTimeLo = 0U;
  info[151].mFileTimeHi = 0U;
  info[152].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[152].name = "eml_realmax";
  info[152].dominantType = "char";
  info[152].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[152].fileTimeLo = 1326749596U;
  info[152].fileTimeHi = 0U;
  info[152].mFileTimeLo = 0U;
  info[152].mFileTimeHi = 0U;
  info[153].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[153].name = "eml_float_model";
  info[153].dominantType = "char";
  info[153].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[153].fileTimeLo = 1326749596U;
  info[153].fileTimeHi = 0U;
  info[153].mFileTimeLo = 0U;
  info[153].mFileTimeHi = 0U;
  info[154].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[154].name = "mtimes";
  info[154].dominantType = "double";
  info[154].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[154].fileTimeLo = 1289541292U;
  info[154].fileTimeHi = 0U;
  info[154].mFileTimeLo = 0U;
  info[154].mFileTimeHi = 0U;
  info[155].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_log.m";
  info[155].name = "mrdivide";
  info[155].dominantType = "double";
  info[155].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[155].fileTimeLo = 1357973148U;
  info[155].fileTimeHi = 0U;
  info[155].mFileTimeLo = 1319751566U;
  info[155].mFileTimeHi = 0U;
  info[156].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[156].name = "mrdivide";
  info[156].dominantType = "double";
  info[156].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[156].fileTimeLo = 1357973148U;
  info[156].fileTimeHi = 0U;
  info[156].mFileTimeLo = 1319751566U;
  info[156].mFileTimeHi = 0U;
  info[157].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[157].name = "floor";
  info[157].dominantType = "double";
  info[157].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[157].fileTimeLo = 1343851980U;
  info[157].fileTimeHi = 0U;
  info[157].mFileTimeLo = 0U;
  info[157].mFileTimeHi = 0U;
  info[158].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!GET_N";
  info[158].name = "mpower";
  info[158].dominantType = "double";
  info[158].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[158].fileTimeLo = 1286840442U;
  info[158].fileTimeHi = 0U;
  info[158].mFileTimeLo = 0U;
  info[158].mFileTimeHi = 0U;
  info[159].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[159].name = "power";
  info[159].dominantType = "double";
  info[159].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[159].fileTimeLo = 1348213530U;
  info[159].fileTimeHi = 0U;
  info[159].mFileTimeLo = 0U;
  info[159].mFileTimeHi = 0U;
  info[160].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[160].name = "eml_scalar_eg";
  info[160].dominantType = "double";
  info[160].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[160].fileTimeLo = 1286840396U;
  info[160].fileTimeHi = 0U;
  info[160].mFileTimeLo = 0U;
  info[160].mFileTimeHi = 0U;
  info[161].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[161].name = "eml_scalexp_alloc";
  info[161].dominantType = "double";
  info[161].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[161].fileTimeLo = 1352446460U;
  info[161].fileTimeHi = 0U;
  info[161].mFileTimeLo = 0U;
  info[161].mFileTimeHi = 0U;
  info[162].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[162].name = "floor";
  info[162].dominantType = "double";
  info[162].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[162].fileTimeLo = 1343851980U;
  info[162].fileTimeHi = 0U;
  info[162].mFileTimeLo = 0U;
  info[162].mFileTimeHi = 0U;
  info[163].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[163].name = "eml_error";
  info[163].dominantType = "char";
  info[163].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[163].fileTimeLo = 1343851958U;
  info[163].fileTimeHi = 0U;
  info[163].mFileTimeLo = 0U;
  info[163].mFileTimeHi = 0U;
  info[164].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[164].name = "eml_scalar_eg";
  info[164].dominantType = "double";
  info[164].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[164].fileTimeLo = 1286840396U;
  info[164].fileTimeHi = 0U;
  info[164].mFileTimeLo = 0U;
  info[164].mFileTimeHi = 0U;
  info[165].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!IS_FINITE_INTEGER_NONNEGATIVE";
  info[165].name = "isfinite";
  info[165].dominantType = "double";
  info[165].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[165].fileTimeLo = 1286840358U;
  info[165].fileTimeHi = 0U;
  info[165].mFileTimeLo = 0U;
  info[165].mFileTimeHi = 0U;
  info[166].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[166].name = "isinf";
  info[166].dominantType = "double";
  info[166].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[166].fileTimeLo = 1286840360U;
  info[166].fileTimeHi = 0U;
  info[166].mFileTimeLo = 0U;
  info[166].mFileTimeHi = 0U;
  info[167].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[167].name = "isnan";
  info[167].dominantType = "double";
  info[167].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[167].fileTimeLo = 1286840360U;
  info[167].fileTimeHi = 0U;
  info[167].mFileTimeLo = 0U;
  info[167].mFileTimeHi = 0U;
  info[168].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m!IS_FINITE_INTEGER_NONNEGATIVE";
  info[168].name = "floor";
  info[168].dominantType = "double";
  info[168].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[168].fileTimeLo = 1343851980U;
  info[168].fileTimeHi = 0U;
  info[168].mFileTimeLo = 0U;
  info[168].mFileTimeHi = 0U;
  info[169].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[169].name = "rem";
  info[169].dominantType = "double";
  info[169].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[169].fileTimeLo = 1343851984U;
  info[169].fileTimeHi = 0U;
  info[169].mFileTimeLo = 0U;
  info[169].mFileTimeHi = 0U;
  info[170].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[170].name = "mrdivide";
  info[170].dominantType = "double";
  info[170].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[170].fileTimeLo = 1357973148U;
  info[170].fileTimeHi = 0U;
  info[170].mFileTimeLo = 1319751566U;
  info[170].mFileTimeHi = 0U;
  info[171].context = "[IXE]$matlabroot$/toolbox/comm/comm/eml/de2bi.m";
  info[171].name = "floor";
  info[171].dominantType = "double";
  info[171].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[171].fileTimeLo = 1343851980U;
  info[171].fileTimeHi = 0U;
  info[171].mFileTimeLo = 0U;
  info[171].mFileTimeHi = 0U;
  info[172].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[172].name = "reshape";
  info[172].dominantType = "double";
  info[172].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[172].fileTimeLo = 1286840368U;
  info[172].fileTimeHi = 0U;
  info[172].mFileTimeLo = 0U;
  info[172].mFileTimeHi = 0U;
  info[173].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[173].name = "eml_index_class";
  info[173].dominantType = "";
  info[173].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[173].fileTimeLo = 1323192178U;
  info[173].fileTimeHi = 0U;
  info[173].mFileTimeLo = 0U;
  info[173].mFileTimeHi = 0U;
  info[174].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!varargin_nempty";
  info[174].name = "eml_index_class";
  info[174].dominantType = "";
  info[174].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[174].fileTimeLo = 1323192178U;
  info[174].fileTimeHi = 0U;
  info[174].mFileTimeLo = 0U;
  info[174].mFileTimeHi = 0U;
  info[175].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[175].name = "eml_assert_valid_size_arg";
  info[175].dominantType = "double";
  info[175].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[175].fileTimeLo = 1286840294U;
  info[175].fileTimeHi = 0U;
  info[175].mFileTimeLo = 0U;
  info[175].mFileTimeHi = 0U;
  info[176].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[176].name = "eml_index_prod";
  info[176].dominantType = "coder.internal.indexInt";
  info[176].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[176].fileTimeLo = 1286840380U;
  info[176].fileTimeHi = 0U;
  info[176].mFileTimeLo = 0U;
  info[176].mFileTimeHi = 0U;
  info[177].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[177].name = "eml_int_forloop_overflow_check";
  info[177].dominantType = "";
  info[177].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[177].fileTimeLo = 1346531940U;
  info[177].fileTimeHi = 0U;
  info[177].mFileTimeLo = 0U;
  info[177].mFileTimeHi = 0U;
  info[178].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[178].name = "max";
  info[178].dominantType = "double";
  info[178].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[178].fileTimeLo = 1311276916U;
  info[178].fileTimeHi = 0U;
  info[178].mFileTimeLo = 0U;
  info[178].mFileTimeHi = 0U;
  info[179].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[179].name = "eml_min_or_max";
  info[179].dominantType = "char";
  info[179].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[179].fileTimeLo = 1334093090U;
  info[179].fileTimeHi = 0U;
  info[179].mFileTimeLo = 0U;
  info[179].mFileTimeHi = 0U;
  info[180].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[180].name = "eml_const_nonsingleton_dim";
  info[180].dominantType = "double";
  info[180].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[180].fileTimeLo = 1286840296U;
  info[180].fileTimeHi = 0U;
  info[180].mFileTimeLo = 0U;
  info[180].mFileTimeHi = 0U;
  info[181].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[181].name = "eml_scalar_eg";
  info[181].dominantType = "double";
  info[181].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[181].fileTimeLo = 1286840396U;
  info[181].fileTimeHi = 0U;
  info[181].mFileTimeLo = 0U;
  info[181].mFileTimeHi = 0U;
  info[182].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[182].name = "isnan";
  info[182].dominantType = "double";
  info[182].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[182].fileTimeLo = 1286840360U;
  info[182].fileTimeHi = 0U;
  info[182].mFileTimeLo = 0U;
  info[182].mFileTimeHi = 0U;
  info[183].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[183].name = "eml_scalar_eg";
  info[183].dominantType = "double";
  info[183].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[183].fileTimeLo = 1286840396U;
  info[183].fileTimeHi = 0U;
  info[183].mFileTimeLo = 0U;
  info[183].mFileTimeHi = 0U;
  info[184].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[184].name = "eml_scalexp_alloc";
  info[184].dominantType = "double";
  info[184].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[184].fileTimeLo = 1352446460U;
  info[184].fileTimeHi = 0U;
  info[184].mFileTimeLo = 0U;
  info[184].mFileTimeHi = 0U;
  info[185].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[185].name = "eml_index_class";
  info[185].dominantType = "";
  info[185].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[185].fileTimeLo = 1323192178U;
  info[185].fileTimeHi = 0U;
  info[185].mFileTimeLo = 0U;
  info[185].mFileTimeHi = 0U;
  info[186].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[186].name = "eml_scalar_eg";
  info[186].dominantType = "double";
  info[186].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[186].fileTimeLo = 1286840396U;
  info[186].fileTimeHi = 0U;
  info[186].mFileTimeLo = 0U;
  info[186].mFileTimeHi = 0U;
  info[187].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[187].name = "eml_relop";
  info[187].dominantType = "function_handle";
  info[187].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[187].fileTimeLo = 1342472782U;
  info[187].fileTimeHi = 0U;
  info[187].mFileTimeLo = 0U;
  info[187].mFileTimeHi = 0U;
  info[188].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[188].name = "coder.internal.indexIntRelop";
  info[188].dominantType = "";
  info[188].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[188].fileTimeLo = 1326749922U;
  info[188].fileTimeHi = 0U;
  info[188].mFileTimeLo = 0U;
  info[188].mFileTimeHi = 0U;
  info[189].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass";
  info[189].name = "eml_float_model";
  info[189].dominantType = "char";
  info[189].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[189].fileTimeLo = 1326749596U;
  info[189].fileTimeHi = 0U;
  info[189].mFileTimeLo = 0U;
  info[189].mFileTimeHi = 0U;
  info[190].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass";
  info[190].name = "intmin";
  info[190].dominantType = "char";
  info[190].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[190].fileTimeLo = 1311276918U;
  info[190].fileTimeHi = 0U;
  info[190].mFileTimeLo = 0U;
  info[190].mFileTimeHi = 0U;
  info[191].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[191].name = "isnan";
  info[191].dominantType = "coder.internal.indexInt";
  info[191].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[191].fileTimeLo = 1286840360U;
  info[191].fileTimeHi = 0U;
  info[191].mFileTimeLo = 0U;
  info[191].mFileTimeHi = 0U;
}

static void d_info_helper(ResolvedFunctionInfo info[271])
{
  info[192].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[192].name = "eml_error";
  info[192].dominantType = "char";
  info[192].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[192].fileTimeLo = 1343851958U;
  info[192].fileTimeHi = 0U;
  info[192].mFileTimeLo = 0U;
  info[192].mFileTimeHi = 0U;
  info[193].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[193].name = "eml_scalar_eg";
  info[193].dominantType = "double";
  info[193].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[193].fileTimeLo = 1286840396U;
  info[193].fileTimeHi = 0U;
  info[193].mFileTimeLo = 0U;
  info[193].mFileTimeHi = 0U;
  info[194].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[194].name = "eml_int_forloop_overflow_check";
  info[194].dominantType = "";
  info[194].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[194].fileTimeLo = 1346531940U;
  info[194].fileTimeHi = 0U;
  info[194].mFileTimeLo = 0U;
  info[194].mFileTimeHi = 0U;
  info[195].context =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKBitsGenerator.m";
  info[195].name = "randi";
  info[195].dominantType = "double";
  info[195].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[195].fileTimeLo = 1320911042U;
  info[195].fileTimeHi = 0U;
  info[195].mFileTimeLo = 0U;
  info[195].mFileTimeHi = 0U;
  info[196].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[196].name = "getNumInputs";
  info[196].dominantType = "comm.Scrambler";
  info[196].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[196].fileTimeLo = 1349900348U;
  info[196].fileTimeHi = 0U;
  info[196].mFileTimeLo = 0U;
  info[196].mFileTimeHi = 0U;
  info[197].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[197].name = "checkSystemObjectInput";
  info[197].dominantType = "comm.Scrambler";
  info[197].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[197].fileTimeLo = 1349900346U;
  info[197].fileTimeHi = 0U;
  info[197].mFileTimeLo = 0U;
  info[197].mFileTimeHi = 0U;
  info[198].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[198].name = "setup";
  info[198].dominantType = "comm.Scrambler";
  info[198].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[198].fileTimeLo = 1349900350U;
  info[198].fileTimeHi = 0U;
  info[198].mFileTimeLo = 0U;
  info[198].mFileTimeHi = 0U;
  info[199].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[199].name = "checkSystemObjectInput";
  info[199].dominantType = "comm.Scrambler";
  info[199].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[199].fileTimeLo = 1349900346U;
  info[199].fileTimeHi = 0U;
  info[199].mFileTimeLo = 0U;
  info[199].mFileTimeHi = 0U;
  info[200].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[200].name = "reset";
  info[200].dominantType = "comm.Scrambler";
  info[200].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[200].fileTimeLo = 1349900350U;
  info[200].fileTimeHi = 0U;
  info[200].mFileTimeLo = 0U;
  info[200].mFileTimeHi = 0U;
  info[201].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[201].name = "checkSystemObjectInput";
  info[201].dominantType = "comm.Scrambler";
  info[201].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[201].fileTimeLo = 1349900346U;
  info[201].fileTimeHi = 0U;
  info[201].mFileTimeLo = 0U;
  info[201].mFileTimeHi = 0U;
  info[202].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[202].name = "getNumOutputs";
  info[202].dominantType = "comm.Scrambler";
  info[202].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[202].fileTimeLo = 1349900348U;
  info[202].fileTimeHi = 0U;
  info[202].mFileTimeLo = 0U;
  info[202].mFileTimeHi = 0U;
  info[203].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[203].name = "checkSystemObjectInput";
  info[203].dominantType = "comm.Scrambler";
  info[203].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[203].fileTimeLo = 1349900346U;
  info[203].fileTimeHi = 0U;
  info[203].mFileTimeLo = 0U;
  info[203].mFileTimeHi = 0U;
  info[204].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[204].name = "output";
  info[204].dominantType = "comm.Scrambler";
  info[204].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[204].fileTimeLo = 1349900348U;
  info[204].fileTimeHi = 0U;
  info[204].mFileTimeLo = 0U;
  info[204].mFileTimeHi = 0U;
  info[205].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[205].name = "checkSystemObjectInput";
  info[205].dominantType = "comm.Scrambler";
  info[205].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[205].fileTimeLo = 1349900346U;
  info[205].fileTimeHi = 0U;
  info[205].mFileTimeLo = 0U;
  info[205].mFileTimeHi = 0U;
  info[206].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/Scrambler.p";
  info[206].name = "update";
  info[206].dominantType = "comm.Scrambler";
  info[206].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[206].fileTimeLo = 1349900352U;
  info[206].fileTimeHi = 0U;
  info[206].mFileTimeLo = 0U;
  info[206].mFileTimeHi = 0U;
  info[207].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[207].name = "checkSystemObjectInput";
  info[207].dominantType = "comm.Scrambler";
  info[207].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[207].fileTimeLo = 1349900346U;
  info[207].fileTimeHi = 0U;
  info[207].mFileTimeLo = 0U;
  info[207].mFileTimeHi = 0U;
  info[208].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[208].name = "getNumInputs";
  info[208].dominantType = "comm.QPSKModulator";
  info[208].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[208].fileTimeLo = 1349900348U;
  info[208].fileTimeHi = 0U;
  info[208].mFileTimeLo = 0U;
  info[208].mFileTimeHi = 0U;
  info[209].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[209].name = "checkSystemObjectInput";
  info[209].dominantType = "comm.QPSKModulator";
  info[209].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[209].fileTimeLo = 1349900346U;
  info[209].fileTimeHi = 0U;
  info[209].mFileTimeLo = 0U;
  info[209].mFileTimeHi = 0U;
  info[210].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[210].name = "setup";
  info[210].dominantType = "comm.QPSKModulator";
  info[210].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[210].fileTimeLo = 1349900350U;
  info[210].fileTimeHi = 0U;
  info[210].mFileTimeLo = 0U;
  info[210].mFileTimeHi = 0U;
  info[211].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[211].name = "checkSystemObjectInput";
  info[211].dominantType = "comm.QPSKModulator";
  info[211].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[211].fileTimeLo = 1349900346U;
  info[211].fileTimeHi = 0U;
  info[211].mFileTimeLo = 0U;
  info[211].mFileTimeHi = 0U;
  info[212].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[212].name = "reset";
  info[212].dominantType = "comm.QPSKModulator";
  info[212].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[212].fileTimeLo = 1349900350U;
  info[212].fileTimeHi = 0U;
  info[212].mFileTimeLo = 0U;
  info[212].mFileTimeHi = 0U;
  info[213].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[213].name = "checkSystemObjectInput";
  info[213].dominantType = "comm.QPSKModulator";
  info[213].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[213].fileTimeLo = 1349900346U;
  info[213].fileTimeHi = 0U;
  info[213].mFileTimeLo = 0U;
  info[213].mFileTimeHi = 0U;
  info[214].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[214].name = "getNumOutputs";
  info[214].dominantType = "comm.QPSKModulator";
  info[214].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[214].fileTimeLo = 1349900348U;
  info[214].fileTimeHi = 0U;
  info[214].mFileTimeLo = 0U;
  info[214].mFileTimeHi = 0U;
  info[215].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[215].name = "checkSystemObjectInput";
  info[215].dominantType = "comm.QPSKModulator";
  info[215].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[215].fileTimeLo = 1349900346U;
  info[215].fileTimeHi = 0U;
  info[215].mFileTimeLo = 0U;
  info[215].mFileTimeHi = 0U;
  info[216].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[216].name = "output";
  info[216].dominantType = "comm.QPSKModulator";
  info[216].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[216].fileTimeLo = 1349900348U;
  info[216].fileTimeHi = 0U;
  info[216].mFileTimeLo = 0U;
  info[216].mFileTimeHi = 0U;
  info[217].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[217].name = "checkSystemObjectInput";
  info[217].dominantType = "comm.QPSKModulator";
  info[217].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[217].fileTimeLo = 1349900346U;
  info[217].fileTimeHi = 0U;
  info[217].mFileTimeLo = 0U;
  info[217].mFileTimeHi = 0U;
  info[218].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/QPSKModulator.p";
  info[218].name = "update";
  info[218].dominantType = "comm.QPSKModulator";
  info[218].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[218].fileTimeLo = 1349900352U;
  info[218].fileTimeHi = 0U;
  info[218].mFileTimeLo = 0U;
  info[218].mFileTimeHi = 0U;
  info[219].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[219].name = "checkSystemObjectInput";
  info[219].dominantType = "comm.QPSKModulator";
  info[219].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[219].fileTimeLo = 1349900346U;
  info[219].fileTimeHi = 0U;
  info[219].mFileTimeLo = 0U;
  info[219].mFileTimeHi = 0U;
  info[220].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[220].name = "getNumInputs";
  info[220].dominantType = "dsp.FIRInterpolator";
  info[220].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[220].fileTimeLo = 1349900348U;
  info[220].fileTimeHi = 0U;
  info[220].mFileTimeLo = 0U;
  info[220].mFileTimeHi = 0U;
  info[221].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[221].name = "checkSystemObjectInput";
  info[221].dominantType = "dsp.FIRInterpolator";
  info[221].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[221].fileTimeLo = 1349900346U;
  info[221].fileTimeHi = 0U;
  info[221].mFileTimeLo = 0U;
  info[221].mFileTimeHi = 0U;
  info[222].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[222].name = "setup";
  info[222].dominantType = "dsp.FIRInterpolator";
  info[222].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[222].fileTimeLo = 1349900350U;
  info[222].fileTimeHi = 0U;
  info[222].mFileTimeLo = 0U;
  info[222].mFileTimeHi = 0U;
  info[223].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[223].name = "checkSystemObjectInput";
  info[223].dominantType = "dsp.FIRInterpolator";
  info[223].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[223].fileTimeLo = 1349900346U;
  info[223].fileTimeHi = 0U;
  info[223].mFileTimeLo = 0U;
  info[223].mFileTimeHi = 0U;
  info[224].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[224].name = "reset";
  info[224].dominantType = "dsp.FIRInterpolator";
  info[224].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[224].fileTimeLo = 1349900350U;
  info[224].fileTimeHi = 0U;
  info[224].mFileTimeLo = 0U;
  info[224].mFileTimeHi = 0U;
  info[225].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[225].name = "checkSystemObjectInput";
  info[225].dominantType = "dsp.FIRInterpolator";
  info[225].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[225].fileTimeLo = 1349900346U;
  info[225].fileTimeHi = 0U;
  info[225].mFileTimeLo = 0U;
  info[225].mFileTimeHi = 0U;
  info[226].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[226].name = "getNumOutputs";
  info[226].dominantType = "dsp.FIRInterpolator";
  info[226].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[226].fileTimeLo = 1349900348U;
  info[226].fileTimeHi = 0U;
  info[226].mFileTimeLo = 0U;
  info[226].mFileTimeHi = 0U;
  info[227].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[227].name = "checkSystemObjectInput";
  info[227].dominantType = "dsp.FIRInterpolator";
  info[227].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[227].fileTimeLo = 1349900346U;
  info[227].fileTimeHi = 0U;
  info[227].mFileTimeLo = 0U;
  info[227].mFileTimeHi = 0U;
  info[228].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[228].name = "output";
  info[228].dominantType = "dsp.FIRInterpolator";
  info[228].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[228].fileTimeLo = 1349900348U;
  info[228].fileTimeHi = 0U;
  info[228].mFileTimeLo = 0U;
  info[228].mFileTimeHi = 0U;
  info[229].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[229].name = "checkSystemObjectInput";
  info[229].dominantType = "dsp.FIRInterpolator";
  info[229].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[229].fileTimeLo = 1349900346U;
  info[229].fileTimeHi = 0U;
  info[229].mFileTimeLo = 0U;
  info[229].mFileTimeHi = 0U;
  info[230].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRInterpolator.p";
  info[230].name = "update";
  info[230].dominantType = "dsp.FIRInterpolator";
  info[230].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[230].fileTimeLo = 1349900352U;
  info[230].fileTimeHi = 0U;
  info[230].mFileTimeLo = 0U;
  info[230].mFileTimeHi = 0U;
  info[231].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[231].name = "checkSystemObjectInput";
  info[231].dominantType = "dsp.FIRInterpolator";
  info[231].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[231].fileTimeLo = 1349900346U;
  info[231].fileTimeHi = 0U;
  info[231].mFileTimeLo = 0U;
  info[231].mFileTimeHi = 0U;
  info[232].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[232].name = "coder.internal.assert";
  info[232].dominantType = "char";
  info[232].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[232].fileTimeLo = 1334093538U;
  info[232].fileTimeHi = 0U;
  info[232].mFileTimeLo = 0U;
  info[232].mFileTimeHi = 0U;
  info[233].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[233].name = "length";
  info[233].dominantType = "char";
  info[233].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[233].fileTimeLo = 1303167806U;
  info[233].fileTimeHi = 0U;
  info[233].mFileTimeLo = 0U;
  info[233].mFileTimeHi = 0U;
  info[234].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[234].name = "all";
  info[234].dominantType = "logical";
  info[234].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[234].fileTimeLo = 1286840434U;
  info[234].fileTimeHi = 0U;
  info[234].mFileTimeLo = 0U;
  info[234].mFileTimeHi = 0U;
  info[235].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[235].name = "eml_all_or_any";
  info[235].dominantType = "char";
  info[235].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[235].fileTimeLo = 1286840294U;
  info[235].fileTimeHi = 0U;
  info[235].mFileTimeLo = 0U;
  info[235].mFileTimeHi = 0U;
  info[236].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[236].name = "DataPortDataTypeCapiEnumT";
  info[236].dominantType = "";
  info[236].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m";
  info[236].fileTimeLo = 1345182480U;
  info[236].fileTimeHi = 0U;
  info[236].mFileTimeLo = 0U;
  info[236].mFileTimeHi = 0U;
  info[237].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[237].name = "length";
  info[237].dominantType = "double";
  info[237].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[237].fileTimeLo = 1303167806U;
  info[237].fileTimeHi = 0U;
  info[237].mFileTimeLo = 0U;
  info[237].mFileTimeHi = 0U;
  info[238].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[238].name = "openDataConnection";
  info[238].dominantType = "BoardIdCapiEnumT";
  info[238].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[238].fileTimeLo = 1345182488U;
  info[238].fileTimeHi = 0U;
  info[238].mFileTimeLo = 0U;
  info[238].mFileTimeHi = 0U;
  info[239].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[239].name = "mapiPrivate";
  info[239].dominantType = "BoardIdCapiEnumT";
  info[239].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[239].fileTimeLo = 1357947598U;
  info[239].fileTimeHi = 0U;
  info[239].mFileTimeLo = 0U;
  info[239].mFileTimeHi = 0U;
  info[240].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[240].name = "UsrpErrorCapiEnumT";
  info[240].dominantType = "double";
  info[240].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[240].fileTimeLo = 1345182482U;
  info[240].fileTimeHi = 0U;
  info[240].mFileTimeLo = 0U;
  info[240].mFileTimeHi = 0U;
  info[241].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[241].name = "char";
  info[241].dominantType = "double";
  info[241].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[241].fileTimeLo = 1319751568U;
  info[241].fileTimeHi = 0U;
  info[241].mFileTimeLo = 0U;
  info[241].mFileTimeHi = 0U;
  info[242].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[242].name = "UsrpReportMethodEnumT";
  info[242].dominantType = "";
  info[242].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[242].fileTimeLo = 1345182484U;
  info[242].fileTimeHi = 0U;
  info[242].mFileTimeLo = 0U;
  info[242].mFileTimeHi = 0U;
  info[243].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[243].name = "reportSDRuStatus";
  info[243].dominantType = "UsrpErrorCapiEnumT";
  info[243].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[243].fileTimeLo = 1351917316U;
  info[243].fileTimeHi = 0U;
  info[243].mFileTimeLo = 0U;
  info[243].mFileTimeHi = 0U;
  info[244].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[244].name = "coder.internal.errorIf";
  info[244].dominantType = "char";
  info[244].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[244].fileTimeLo = 1334093538U;
  info[244].fileTimeHi = 0U;
  info[244].mFileTimeLo = 0U;
  info[244].mFileTimeHi = 0U;
  info[245].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[245].name = "isrow";
  info[245].dominantType = "char";
  info[245].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[245].fileTimeLo = 1346531960U;
  info[245].fileTimeHi = 0U;
  info[245].mFileTimeLo = 0U;
  info[245].mFileTimeHi = 0U;
  info[246].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[246].name = "UsrpErrorCapiEnumT";
  info[246].dominantType = "";
  info[246].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[246].fileTimeLo = 1345182482U;
  info[246].fileTimeHi = 0U;
  info[246].mFileTimeLo = 0U;
  info[246].mFileTimeHi = 0U;
  info[247].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[247].name = "UsrpReportMethodEnumT";
  info[247].dominantType = "";
  info[247].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[247].fileTimeLo = 1345182484U;
  info[247].fileTimeHi = 0U;
  info[247].mFileTimeLo = 0U;
  info[247].mFileTimeHi = 0U;
  info[248].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[248].name = "coder.internal.warning";
  info[248].dominantType = "char";
  info[248].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[248].fileTimeLo = 1311277408U;
  info[248].fileTimeHi = 0U;
  info[248].mFileTimeLo = 0U;
  info[248].mFileTimeHi = 0U;
  info[249].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[249].name = "getSDRuDriverVersion";
  info[249].dominantType = "";
  info[249].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[249].fileTimeLo = 1345182486U;
  info[249].fileTimeHi = 0U;
  info[249].mFileTimeLo = 0U;
  info[249].mFileTimeHi = 0U;
  info[250].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[250].name = "mapiPrivate";
  info[250].dominantType = "char";
  info[250].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[250].fileTimeLo = 1357947598U;
  info[250].fileTimeHi = 0U;
  info[250].mFileTimeLo = 0U;
  info[250].mFileTimeHi = 0U;
  info[251].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[251].name = "UsrpErrorCapiEnumT";
  info[251].dominantType = "";
  info[251].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[251].fileTimeLo = 1345182482U;
  info[251].fileTimeHi = 0U;
  info[251].mFileTimeLo = 0U;
  info[251].mFileTimeHi = 0U;
  info[252].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[252].name = "sendInt16Data";
  info[252].dominantType = "DataPortDataTypeCapiEnumT";
  info[252].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendInt16Data.m";
  info[252].fileTimeLo = 1345182490U;
  info[252].fileTimeHi = 0U;
  info[252].mFileTimeLo = 0U;
  info[252].mFileTimeHi = 0U;
  info[253].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendInt16Data.m";
  info[253].name = "mapiPrivate";
  info[253].dominantType = "DataPortDataTypeCapiEnumT";
  info[253].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[253].fileTimeLo = 1357947598U;
  info[253].fileTimeHi = 0U;
  info[253].mFileTimeLo = 0U;
  info[253].mFileTimeHi = 0U;
  info[254].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[254].name = "sendComplexInt16Data";
  info[254].dominantType = "DataPortDataTypeCapiEnumT";
  info[254].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexInt16Data.m";
  info[254].fileTimeLo = 1345182488U;
  info[254].fileTimeHi = 0U;
  info[254].mFileTimeLo = 0U;
  info[254].mFileTimeHi = 0U;
  info[255].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexInt16Data.m";
  info[255].name = "mapiPrivate";
  info[255].dominantType = "DataPortDataTypeCapiEnumT";
  info[255].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[255].fileTimeLo = 1357947598U;
  info[255].fileTimeHi = 0U;
  info[255].mFileTimeLo = 0U;
  info[255].mFileTimeHi = 0U;
}

static void e_info_helper(ResolvedFunctionInfo info[271])
{
  info[256].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[256].name = "sendSingleData";
  info[256].dominantType = "DataPortDataTypeCapiEnumT";
  info[256].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendSingleData.m";
  info[256].fileTimeLo = 1345182490U;
  info[256].fileTimeHi = 0U;
  info[256].mFileTimeLo = 0U;
  info[256].mFileTimeHi = 0U;
  info[257].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendSingleData.m";
  info[257].name = "mapiPrivate";
  info[257].dominantType = "DataPortDataTypeCapiEnumT";
  info[257].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[257].fileTimeLo = 1357947598U;
  info[257].fileTimeHi = 0U;
  info[257].mFileTimeLo = 0U;
  info[257].mFileTimeHi = 0U;
  info[258].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[258].name = "sendComplexSingleData";
  info[258].dominantType = "DataPortDataTypeCapiEnumT";
  info[258].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexSingleData.m";
  info[258].fileTimeLo = 1345182488U;
  info[258].fileTimeHi = 0U;
  info[258].mFileTimeLo = 0U;
  info[258].mFileTimeHi = 0U;
  info[259].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexSingleData.m";
  info[259].name = "mapiPrivate";
  info[259].dominantType = "DataPortDataTypeCapiEnumT";
  info[259].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[259].fileTimeLo = 1357947598U;
  info[259].fileTimeHi = 0U;
  info[259].mFileTimeLo = 0U;
  info[259].mFileTimeHi = 0U;
  info[260].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[260].name = "sendDoubleData";
  info[260].dominantType = "DataPortDataTypeCapiEnumT";
  info[260].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendDoubleData.m";
  info[260].fileTimeLo = 1345182488U;
  info[260].fileTimeHi = 0U;
  info[260].mFileTimeLo = 0U;
  info[260].mFileTimeHi = 0U;
  info[261].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendDoubleData.m";
  info[261].name = "mapiPrivate";
  info[261].dominantType = "DataPortDataTypeCapiEnumT";
  info[261].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[261].fileTimeLo = 1357947598U;
  info[261].fileTimeHi = 0U;
  info[261].mFileTimeLo = 0U;
  info[261].mFileTimeHi = 0U;
  info[262].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[262].name = "sendComplexDoubleData";
  info[262].dominantType = "DataPortDataTypeCapiEnumT";
  info[262].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexDoubleData.m";
  info[262].fileTimeLo = 1345182488U;
  info[262].fileTimeHi = 0U;
  info[262].mFileTimeLo = 0U;
  info[262].mFileTimeHi = 0U;
  info[263].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/sendComplexDoubleData.m";
  info[263].name = "mapiPrivate";
  info[263].dominantType = "DataPortDataTypeCapiEnumT";
  info[263].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[263].fileTimeLo = 1357947598U;
  info[263].fileTimeHi = 0U;
  info[263].mFileTimeLo = 0U;
  info[263].mFileTimeHi = 0U;
  info[264].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[264].name = "UsrpErrorCapiEnumT";
  info[264].dominantType = "";
  info[264].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[264].fileTimeLo = 1345182482U;
  info[264].fileTimeHi = 0U;
  info[264].mFileTimeLo = 0U;
  info[264].mFileTimeHi = 0U;
  info[265].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[265].name = "error";
  info[265].dominantType = "char";
  info[265].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m";
  info[265].fileTimeLo = 1319751566U;
  info[265].fileTimeHi = 0U;
  info[265].mFileTimeLo = 0U;
  info[265].mFileTimeHi = 0U;
  info[266].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[266].name = "closeDataConnection";
  info[266].dominantType = "int32";
  info[266].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[266].fileTimeLo = 1345182484U;
  info[266].fileTimeHi = 0U;
  info[266].mFileTimeLo = 0U;
  info[266].mFileTimeHi = 0U;
  info[267].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[267].name = "mapiPrivate";
  info[267].dominantType = "int32";
  info[267].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[267].fileTimeLo = 1357947598U;
  info[267].fileTimeHi = 0U;
  info[267].mFileTimeLo = 0U;
  info[267].mFileTimeHi = 0U;
  info[268].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[268].name = "reportDrivers";
  info[268].dominantType = "";
  info[268].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[268].fileTimeLo = 1345182488U;
  info[268].fileTimeHi = 0U;
  info[268].mFileTimeLo = 0U;
  info[268].mFileTimeHi = 0U;
  info[269].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[269].name = "mapiPrivate";
  info[269].dominantType = "char";
  info[269].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[269].fileTimeLo = 1357947598U;
  info[269].fileTimeHi = 0U;
  info[269].mFileTimeLo = 0U;
  info[269].mFileTimeHi = 0U;
  info[270].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[270].name = "coder.internal.warning";
  info[270].dominantType = "char";
  info[270].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[270].fileTimeLo = 1311277408U;
  info[270].fileTimeHi = 0U;
  info[270].mFileTimeLo = 0U;
  info[270].mFileTimeHi = 0U;
}

static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[271])
{
  const mxArray *y;
  int32_T iv60[1];
  int32_T i13;
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m17;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  y = NULL;
  iv60[0] = 271;
  emlrtAssign(&y, mxCreateStructArray(1, iv60, 0, NULL));
  for (i13 = 0; i13 < 271; i13++) {
    r0 = &u[i13];
    b_u = r0->context;
    b_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&b_y, m17);
    emlrtAddField(y, b_y, "context", i13);
    b_u = r0->name;
    c_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&c_y, m17);
    emlrtAddField(y, c_y, "name", i13);
    b_u = r0->dominantType;
    d_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&d_y, m17);
    emlrtAddField(y, d_y, "dominantType", i13);
    b_u = r0->resolved;
    e_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&e_y, m17);
    emlrtAddField(y, e_y, "resolved", i13);
    c_u = r0->fileTimeLo;
    f_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&f_y, m17);
    emlrtAddField(y, f_y, "fileTimeLo", i13);
    c_u = r0->fileTimeHi;
    g_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&g_y, m17);
    emlrtAddField(y, g_y, "fileTimeHi", i13);
    c_u = r0->mFileTimeLo;
    h_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&h_y, m17);
    emlrtAddField(y, h_y, "mFileTimeLo", i13);
    c_u = r0->mFileTimeHi;
    i_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&i_y, m17);
    emlrtAddField(y, i_y, "mFileTimeHi", i13);
  }

  return y;
}

static void info_helper(ResolvedFunctionInfo info[271])
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
  info[4].context = "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTransmitter.m";
  info[4].name = "matlab.System";
  info[4].dominantType = "unknown";
  info[4].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[4].fileTimeLo = 1357962380U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m";
  info[5].name = "QPSKTransmitter";
  info[5].dominantType = "char";
  info[5].resolved =
    "[IXC]$matlabroot$/toolbox/comm/commdemos/QPSKTransmitter.m";
  info[5].fileTimeLo = 1336789790U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[6].name = "matlab.system.coder.SystemProp";
  info[6].dominantType = "";
  info[6].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[6].fileTimeLo = 1357971320U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[7].name = "matlab.system.isSystemObject";
  info[7].dominantType = "char";
  info[7].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[7].fileTimeLo = 1357962380U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[8].name = "length";
  info[8].dominantType = "cell";
  info[8].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[8].fileTimeLo = 1303167806U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[9].name = "matlab.system.pvParse";
  info[9].dominantType = "QPSKTransmitter";
  info[9].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[9].fileTimeLo = 1357962380U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[10].name = "length";
  info[10].dominantType = "cell";
  info[10].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[10].fileTimeLo = 1303167806U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 0U;
  info[10].mFileTimeHi = 0U;
  info[11].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[11].name = "rem";
  info[11].dominantType = "double";
  info[11].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[11].fileTimeLo = 1343851984U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[12].name = "eml_scalar_eg";
  info[12].dominantType = "double";
  info[12].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[12].fileTimeLo = 1286840396U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[13].name = "eml_scalexp_alloc";
  info[13].dominantType = "double";
  info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[13].fileTimeLo = 1352446460U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[14].name = "matlab.System";
  info[14].dominantType = "unknown";
  info[14].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[14].fileTimeLo = 1357962380U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[15].name = "comm.internal.SDRuBase";
  info[15].dominantType = "unknown";
  info[15].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[15].fileTimeLo = 1358405138U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m";
  info[16].name = "comm.SDRuTransmitter";
  info[16].dominantType = "char";
  info[16].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuTransmitter.p";
  info[16].fileTimeLo = 1358405138U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[17].name = "coder.internal.getHostName";
  info[17].dominantType = "char";
  info[17].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m";
  info[17].fileTimeLo = 1327440774U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[18].name = "randi";
  info[18].dominantType = "double";
  info[18].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[18].fileTimeLo = 1320911042U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[19].name = "eml_assert_valid_size_arg";
  info[19].dominantType = "double";
  info[19].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[19].fileTimeLo = 1286840294U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral";
  info[20].name = "isinf";
  info[20].dominantType = "double";
  info[20].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[20].fileTimeLo = 1286840360U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size";
  info[21].name = "mtimes";
  info[21].dominantType = "double";
  info[21].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[21].fileTimeLo = 1289541292U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[22].name = "eml_index_class";
  info[22].dominantType = "";
  info[22].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[22].fileTimeLo = 1323192178U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[23].name = "intmax";
  info[23].dominantType = "char";
  info[23].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[23].fileTimeLo = 1311276916U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 0U;
  info[23].mFileTimeHi = 0U;
  info[24].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[24].name = "rand";
  info[24].dominantType = "double";
  info[24].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[24].fileTimeLo = 1313369422U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[25].name = "eml_is_rand_extrinsic";
  info[25].dominantType = "";
  info[25].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/eml_is_rand_extrinsic.m";
  info[25].fileTimeLo = 1334093090U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[26].name = "mtimes";
  info[26].dominantType = "double";
  info[26].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[26].fileTimeLo = 1289541292U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[27].name = "floor";
  info[27].dominantType = "double";
  info[27].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[27].fileTimeLo = 1343851980U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[28].name = "eml_scalar_floor";
  info[28].dominantType = "double";
  info[28].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[28].fileTimeLo = 1286840326U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[29].name = "char";
  info[29].dominantType = "double";
  info[29].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[29].fileTimeLo = 1319751568U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[30].name = "matlab.system.coder.System";
  info[30].dominantType = "";
  info[30].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[30].fileTimeLo = 1357971318U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[31].name = "matlab.system.setProp";
  info[31].dominantType = "comm.SDRuTransmitter";
  info[31].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[31].fileTimeLo = 1357962380U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[32].name = "checkIPAddressFormat";
  info[32].dominantType = "char";
  info[32].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[32].fileTimeLo = 1351917316U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[33].name = "nargchk";
  info[33].dominantType = "double";
  info[33].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[33].fileTimeLo = 1286840418U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[34].name = "floor";
  info[34].dominantType = "double";
  info[34].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[34].fileTimeLo = 1343851980U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[35].name = "coder.internal.errorIf";
  info[35].dominantType = "char";
  info[35].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[35].fileTimeLo = 1334093538U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 0U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[36].name = "isrow";
  info[36].dominantType = "char";
  info[36].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[36].fileTimeLo = 1346531960U;
  info[36].fileTimeHi = 0U;
  info[36].mFileTimeLo = 0U;
  info[36].mFileTimeHi = 0U;
  info[37].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[37].name = "find";
  info[37].dominantType = "logical";
  info[37].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[37].fileTimeLo = 1303167806U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 0U;
  info[37].mFileTimeHi = 0U;
  info[38].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[38].name = "eml_index_class";
  info[38].dominantType = "";
  info[38].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[38].fileTimeLo = 1323192178U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[39].name = "eml_scalar_eg";
  info[39].dominantType = "logical";
  info[39].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[39].fileTimeLo = 1286840396U;
  info[39].fileTimeHi = 0U;
  info[39].mFileTimeLo = 0U;
  info[39].mFileTimeHi = 0U;
  info[40].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[40].name = "eml_int_forloop_overflow_check";
  info[40].dominantType = "";
  info[40].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[40].fileTimeLo = 1346531940U;
  info[40].fileTimeHi = 0U;
  info[40].mFileTimeLo = 0U;
  info[40].mFileTimeHi = 0U;
  info[41].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[41].name = "intmax";
  info[41].dominantType = "char";
  info[41].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[41].fileTimeLo = 1311276916U;
  info[41].fileTimeHi = 0U;
  info[41].mFileTimeLo = 0U;
  info[41].mFileTimeHi = 0U;
  info[42].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[42].name = "eml_index_plus";
  info[42].dominantType = "double";
  info[42].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[42].fileTimeLo = 1286840378U;
  info[42].fileTimeHi = 0U;
  info[42].mFileTimeLo = 0U;
  info[42].mFileTimeHi = 0U;
  info[43].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[43].name = "eml_index_class";
  info[43].dominantType = "";
  info[43].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[43].fileTimeLo = 1323192178U;
  info[43].fileTimeHi = 0U;
  info[43].mFileTimeLo = 0U;
  info[43].mFileTimeHi = 0U;
  info[44].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[44].name = "length";
  info[44].dominantType = "double";
  info[44].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[44].fileTimeLo = 1303167806U;
  info[44].fileTimeHi = 0U;
  info[44].mFileTimeLo = 0U;
  info[44].mFileTimeHi = 0U;
  info[45].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m";
  info[45].name = "length";
  info[45].dominantType = "char";
  info[45].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[45].fileTimeLo = 1303167806U;
  info[45].fileTimeHi = 0U;
  info[45].mFileTimeLo = 0U;
  info[45].mFileTimeHi = 0U;
  info[46].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m!checkNumeric";
  info[46].name = "any";
  info[46].dominantType = "logical";
  info[46].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[46].fileTimeLo = 1286840434U;
  info[46].fileTimeHi = 0U;
  info[46].mFileTimeLo = 0U;
  info[46].mFileTimeHi = 0U;
  info[47].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[47].name = "eml_all_or_any";
  info[47].dominantType = "char";
  info[47].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[47].fileTimeLo = 1286840294U;
  info[47].fileTimeHi = 0U;
  info[47].mFileTimeLo = 0U;
  info[47].mFileTimeHi = 0U;
  info[48].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[48].name = "isequal";
  info[48].dominantType = "double";
  info[48].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[48].fileTimeLo = 1286840358U;
  info[48].fileTimeHi = 0U;
  info[48].mFileTimeLo = 0U;
  info[48].mFileTimeHi = 0U;
  info[49].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[49].name = "eml_isequal_core";
  info[49].dominantType = "double";
  info[49].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[49].fileTimeLo = 1286840386U;
  info[49].fileTimeHi = 0U;
  info[49].mFileTimeLo = 0U;
  info[49].mFileTimeHi = 0U;
  info[50].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[50].name = "eml_const_nonsingleton_dim";
  info[50].dominantType = "logical";
  info[50].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[50].fileTimeLo = 1286840296U;
  info[50].fileTimeHi = 0U;
  info[50].mFileTimeLo = 0U;
  info[50].mFileTimeHi = 0U;
  info[51].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[51].name = "eml_matrix_vstride";
  info[51].dominantType = "double";
  info[51].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[51].fileTimeLo = 1286840388U;
  info[51].fileTimeHi = 0U;
  info[51].mFileTimeLo = 0U;
  info[51].mFileTimeHi = 0U;
  info[52].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[52].name = "eml_index_minus";
  info[52].dominantType = "double";
  info[52].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[52].fileTimeLo = 1286840378U;
  info[52].fileTimeHi = 0U;
  info[52].mFileTimeLo = 0U;
  info[52].mFileTimeHi = 0U;
  info[53].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[53].name = "eml_index_class";
  info[53].dominantType = "";
  info[53].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[53].fileTimeLo = 1323192178U;
  info[53].fileTimeHi = 0U;
  info[53].mFileTimeLo = 0U;
  info[53].mFileTimeHi = 0U;
  info[54].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[54].name = "eml_index_class";
  info[54].dominantType = "";
  info[54].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[54].fileTimeLo = 1323192178U;
  info[54].fileTimeHi = 0U;
  info[54].mFileTimeLo = 0U;
  info[54].mFileTimeHi = 0U;
  info[55].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[55].name = "eml_size_prod";
  info[55].dominantType = "logical";
  info[55].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[55].fileTimeLo = 1286840398U;
  info[55].fileTimeHi = 0U;
  info[55].mFileTimeLo = 0U;
  info[55].mFileTimeHi = 0U;
  info[56].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[56].name = "eml_index_class";
  info[56].dominantType = "";
  info[56].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[56].fileTimeLo = 1323192178U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[57].name = "eml_index_times";
  info[57].dominantType = "double";
  info[57].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[57].fileTimeLo = 1286840380U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
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
  info[59].name = "eml_index_minus";
  info[59].dominantType = "double";
  info[59].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[59].fileTimeLo = 1286840378U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[60].name = "eml_index_times";
  info[60].dominantType = "coder.internal.indexInt";
  info[60].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[60].fileTimeLo = 1286840380U;
  info[60].fileTimeHi = 0U;
  info[60].mFileTimeLo = 0U;
  info[60].mFileTimeHi = 0U;
  info[61].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[61].name = "eml_matrix_npages";
  info[61].dominantType = "double";
  info[61].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[61].fileTimeLo = 1286840386U;
  info[61].fileTimeHi = 0U;
  info[61].mFileTimeLo = 0U;
  info[61].mFileTimeHi = 0U;
  info[62].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[62].name = "eml_index_plus";
  info[62].dominantType = "double";
  info[62].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[62].fileTimeLo = 1286840378U;
  info[62].fileTimeHi = 0U;
  info[62].mFileTimeLo = 0U;
  info[62].mFileTimeHi = 0U;
  info[63].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
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
  ResolvedFunctionInfo info[271];
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info_helper(info);
  c_info_helper(info);
  d_info_helper(info);
  e_info_helper(info);
  emlrtAssign(&nameCaptureInfo, emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void runSDRuQPSKTransmitter_api(const mxArray * const prhs[1])
{
  static const uint32_T prmQPSKTransmitter[4] = { 345667907U, 1201174654U,
    1631329185U, 223165076U };

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2013a("prmQPSKTransmitter", prmQPSKTransmitter, prhs[0]);

  /* Invoke the target function */
  runSDRuQPSKTransmitter();
}

/* End of code generation (runSDRuQPSKTransmitter_api.c) */
