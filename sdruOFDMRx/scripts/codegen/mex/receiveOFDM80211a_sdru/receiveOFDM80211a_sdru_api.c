/*
 * receiveOFDM80211a_sdru_api.c
 *
 * Code generation for function 'receiveOFDM80211a_sdru_api'
 *
 * C source code generated on: Mon Oct 28 14:02:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "receiveOFDM80211a_sdru.h"
#include "receiveOFDM80211a_sdru_api.h"
#include "fprintf.h"
#include "receiveOFDM80211a_sdru_mexutil.h"
#include <stdio.h>

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(ResolvedFunctionInfo u[567]);
static void b_info_helper(ResolvedFunctionInfo info[567]);
static const mxArray *c_emlrt_marshallOut(const b_struct_T *u);
static void c_info_helper(ResolvedFunctionInfo info[567]);
static void d_info_helper(ResolvedFunctionInfo info[567]);
static void e_info_helper(ResolvedFunctionInfo info[567]);
static void f_info_helper(ResolvedFunctionInfo info[567]);
static void g_info_helper(ResolvedFunctionInfo info[567]);
static void h_info_helper(ResolvedFunctionInfo info[567]);
static void i_info_helper(ResolvedFunctionInfo info[567]);
static void info_helper(ResolvedFunctionInfo info[567]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(ResolvedFunctionInfo u[567])
{
  const mxArray *b_y;
  int32_T iv60[1];
  int32_T i22;
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *c_y;
  const mxArray *m17;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  uint32_T c_u;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  b_y = NULL;
  iv60[0] = 567;
  emlrtAssign(&b_y, mxCreateStructArray(1, iv60, 0, NULL));
  for (i22 = 0; i22 < 567; i22++) {
    r0 = &u[i22];
    b_u = r0->context;
    c_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&c_y, m17);
    emlrtAddField(b_y, c_y, "context", i22);
    b_u = r0->name;
    d_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&d_y, m17);
    emlrtAddField(b_y, d_y, "name", i22);
    b_u = r0->dominantType;
    e_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&e_y, m17);
    emlrtAddField(b_y, e_y, "dominantType", i22);
    b_u = r0->resolved;
    f_y = NULL;
    m17 = mxCreateString(b_u);
    emlrtAssign(&f_y, m17);
    emlrtAddField(b_y, f_y, "resolved", i22);
    c_u = r0->fileTimeLo;
    g_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&g_y, m17);
    emlrtAddField(b_y, g_y, "fileTimeLo", i22);
    c_u = r0->fileTimeHi;
    h_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&h_y, m17);
    emlrtAddField(b_y, h_y, "fileTimeHi", i22);
    c_u = r0->mFileTimeLo;
    i_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&i_y, m17);
    emlrtAddField(b_y, i_y, "mFileTimeLo", i22);
    c_u = r0->mFileTimeHi;
    j_y = NULL;
    m17 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m17) = c_u;
    emlrtAssign(&j_y, m17);
    emlrtAddField(b_y, j_y, "mFileTimeHi", i22);
  }

  return b_y;
}

static void b_info_helper(ResolvedFunctionInfo info[567])
{
  info[64].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[64].name = "eml_index_class";
  info[64].dominantType = "";
  info[64].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[64].fileTimeLo = 1323192178U;
  info[64].fileTimeHi = 0U;
  info[64].mFileTimeLo = 0U;
  info[64].mFileTimeHi = 0U;
  info[65].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[65].name = "eml_index_minus";
  info[65].dominantType = "double";
  info[65].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[65].fileTimeLo = 1286840378U;
  info[65].fileTimeHi = 0U;
  info[65].mFileTimeLo = 0U;
  info[65].mFileTimeHi = 0U;
  info[66].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[66].name = "eml_index_times";
  info[66].dominantType = "coder.internal.indexInt";
  info[66].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[66].fileTimeLo = 1286840380U;
  info[66].fileTimeHi = 0U;
  info[66].mFileTimeLo = 0U;
  info[66].mFileTimeHi = 0U;
  info[67].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[67].name = "eml_matrix_npages";
  info[67].dominantType = "double";
  info[67].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[67].fileTimeLo = 1286840386U;
  info[67].fileTimeHi = 0U;
  info[67].mFileTimeLo = 0U;
  info[67].mFileTimeHi = 0U;
  info[68].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[68].name = "eml_index_plus";
  info[68].dominantType = "double";
  info[68].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[68].fileTimeLo = 1286840378U;
  info[68].fileTimeHi = 0U;
  info[68].mFileTimeLo = 0U;
  info[68].mFileTimeHi = 0U;
  info[69].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[69].name = "eml_index_class";
  info[69].dominantType = "";
  info[69].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[69].fileTimeLo = 1323192178U;
  info[69].fileTimeHi = 0U;
  info[69].mFileTimeLo = 0U;
  info[69].mFileTimeHi = 0U;
  info[70].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[70].name = "eml_size_prod";
  info[70].dominantType = "logical";
  info[70].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[70].fileTimeLo = 1286840398U;
  info[70].fileTimeHi = 0U;
  info[70].mFileTimeLo = 0U;
  info[70].mFileTimeHi = 0U;
  info[71].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[71].name = "eml_index_class";
  info[71].dominantType = "";
  info[71].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[71].fileTimeLo = 1323192178U;
  info[71].fileTimeHi = 0U;
  info[71].mFileTimeLo = 0U;
  info[71].mFileTimeHi = 0U;
  info[72].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[72].name = "eml_index_plus";
  info[72].dominantType = "coder.internal.indexInt";
  info[72].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[72].fileTimeLo = 1286840378U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[73].name = "eml_index_plus";
  info[73].dominantType = "double";
  info[73].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[73].fileTimeLo = 1286840378U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[74].name = "eml_int_forloop_overflow_check";
  info[74].dominantType = "";
  info[74].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[74].fileTimeLo = 1346531940U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[75].name = "isnan";
  info[75].dominantType = "logical";
  info[75].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[75].fileTimeLo = 1286840360U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/checkIPAddressFormat.m!checkNumeric";
  info[76].name = "coder.internal.errorIf";
  info[76].dominantType = "char";
  info[76].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[76].fileTimeLo = 1334093538U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[77].name = "matlab.system.pvParse";
  info[77].dominantType = "comm.SDRuReceiver";
  info[77].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[77].fileTimeLo = 1357962380U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 0U;
  info[77].mFileTimeHi = 0U;
  info[78].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[78].name = "length";
  info[78].dominantType = "cell";
  info[78].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[78].fileTimeLo = 1303167806U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[79].name = "rem";
  info[79].dominantType = "double";
  info[79].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[79].fileTimeLo = 1343851984U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[80].name = "eml_scalar_eg";
  info[80].dominantType = "double";
  info[80].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[80].fileTimeLo = 1286840396U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[81].name = "eml_scalexp_alloc";
  info[81].dominantType = "double";
  info[81].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[81].fileTimeLo = 1352446460U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[82].name = "coder.internal.warning";
  info[82].dominantType = "char";
  info[82].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[82].fileTimeLo = 1311277408U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 0U;
  info[82].mFileTimeHi = 0U;
  info[83].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[83].name = "eml_warning";
  info[83].dominantType = "char";
  info[83].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  info[83].fileTimeLo = 1286840402U;
  info[83].fileTimeHi = 0U;
  info[83].mFileTimeLo = 0U;
  info[83].mFileTimeHi = 0U;
  info[84].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[84].name = "repmat";
  info[84].dominantType = "char";
  info[84].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[84].fileTimeLo = 1352446460U;
  info[84].fileTimeHi = 0U;
  info[84].mFileTimeLo = 0U;
  info[84].mFileTimeHi = 0U;
  info[85].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[85].name = "eml_assert_valid_size_arg";
  info[85].dominantType = "double";
  info[85].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[85].fileTimeLo = 1286840294U;
  info[85].fileTimeHi = 0U;
  info[85].mFileTimeLo = 0U;
  info[85].mFileTimeHi = 0U;
  info[86].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[86].name = "eml_index_class";
  info[86].dominantType = "";
  info[86].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[86].fileTimeLo = 1323192178U;
  info[86].fileTimeHi = 0U;
  info[86].mFileTimeLo = 0U;
  info[86].mFileTimeHi = 0U;
  info[87].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[87].name = "eml_index_minus";
  info[87].dominantType = "coder.internal.indexInt";
  info[87].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[87].fileTimeLo = 1286840378U;
  info[87].fileTimeHi = 0U;
  info[87].mFileTimeLo = 0U;
  info[87].mFileTimeHi = 0U;
  info[88].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[88].name = "matlab.System";
  info[88].dominantType = "unknown";
  info[88].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[88].fileTimeLo = 1357962380U;
  info[88].fileTimeHi = 0U;
  info[88].mFileTimeLo = 0U;
  info[88].mFileTimeHi = 0U;
  info[89].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[89].name = "comm.AGC";
  info[89].dominantType = "char";
  info[89].resolved = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[89].fileTimeLo = 1355611432U;
  info[89].fileTimeHi = 0U;
  info[89].mFileTimeLo = 0U;
  info[89].mFileTimeHi = 0U;
  info[90].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[90].name = "matlab.system.pvParse";
  info[90].dominantType = "comm.AGC";
  info[90].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[90].fileTimeLo = 1357962380U;
  info[90].fileTimeHi = 0U;
  info[90].mFileTimeLo = 0U;
  info[90].mFileTimeHi = 0U;
  info[91].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[91].name = "coder.internal.cell";
  info[91].dominantType = "char";
  info[91].resolved =
    "[IXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/cell.p";
  info[91].fileTimeLo = 1357973172U;
  info[91].fileTimeHi = 0U;
  info[91].mFileTimeLo = 0U;
  info[91].mFileTimeHi = 0U;
  info[92].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[92].name = "validateattributes";
  info[92].dominantType = "coder.internal.cell";
  info[92].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[92].fileTimeLo = 1352446462U;
  info[92].fileTimeHi = 0U;
  info[92].mFileTimeLo = 0U;
  info[92].mFileTimeHi = 0U;
  info[93].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[93].name = "char";
  info[93].dominantType = "char";
  info[93].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[93].fileTimeLo = 1319751568U;
  info[93].fileTimeHi = 0U;
  info[93].mFileTimeLo = 0U;
  info[93].mFileTimeHi = 0U;
  info[94].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[94].name = "isfinite";
  info[94].dominantType = "double";
  info[94].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[94].fileTimeLo = 1286840358U;
  info[94].fileTimeHi = 0U;
  info[94].mFileTimeLo = 0U;
  info[94].mFileTimeHi = 0U;
  info[95].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[95].name = "isinf";
  info[95].dominantType = "double";
  info[95].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[95].fileTimeLo = 1286840360U;
  info[95].fileTimeHi = 0U;
  info[95].mFileTimeLo = 0U;
  info[95].mFileTimeHi = 0U;
  info[96].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[96].name = "isnan";
  info[96].dominantType = "double";
  info[96].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[96].fileTimeLo = 1286840360U;
  info[96].fileTimeHi = 0U;
  info[96].mFileTimeLo = 0U;
  info[96].mFileTimeHi = 0U;
  info[97].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[97].name = "floor";
  info[97].dominantType = "double";
  info[97].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[97].fileTimeLo = 1343851980U;
  info[97].fileTimeHi = 0U;
  info[97].mFileTimeLo = 0U;
  info[97].mFileTimeHi = 0U;
  info[98].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[98].name = "isfinite";
  info[98].dominantType = "";
  info[98].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[98].fileTimeLo = 1286840358U;
  info[98].fileTimeHi = 0U;
  info[98].mFileTimeLo = 0U;
  info[98].mFileTimeHi = 0U;
  info[99].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all";
  info[99].name = "isfinite";
  info[99].dominantType = "double";
  info[99].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[99].fileTimeLo = 1286840358U;
  info[99].fileTimeHi = 0U;
  info[99].mFileTimeLo = 0U;
  info[99].mFileTimeHi = 0U;
  info[100].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!notisnan";
  info[100].name = "isnan";
  info[100].dominantType = "double";
  info[100].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[100].fileTimeLo = 1286840360U;
  info[100].fileTimeHi = 0U;
  info[100].mFileTimeLo = 0U;
  info[100].mFileTimeHi = 0U;
  info[101].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[101].name = "createOFDMDemods";
  info[101].dominantType = "struct";
  info[101].resolved =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/createOFDMDemods.m";
  info[101].fileTimeLo = 1382979880U;
  info[101].fileTimeHi = 0U;
  info[101].mFileTimeLo = 0U;
  info[101].mFileTimeHi = 0U;
  info[102].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[102].name = "matlab.System";
  info[102].dominantType = "unknown";
  info[102].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[102].fileTimeLo = 1357962380U;
  info[102].fileTimeHi = 0U;
  info[102].mFileTimeLo = 0U;
  info[102].mFileTimeHi = 0U;
  info[103].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[103].name = "matlab.system.mixin.coder.Propagates";
  info[103].dominantType = "unknown";
  info[103].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p";
  info[103].fileTimeLo = 1357971320U;
  info[103].fileTimeHi = 0U;
  info[103].mFileTimeLo = 0U;
  info[103].mFileTimeHi = 0U;
  info[104].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[104].name = "matlab.system.mixin.Propagates";
  info[104].dominantType = "unknown";
  info[104].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Propagates.p";
  info[104].fileTimeLo = 1357962382U;
  info[104].fileTimeHi = 0U;
  info[104].mFileTimeLo = 0U;
  info[104].mFileTimeHi = 0U;
  info[105].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[105].name = "OFDMBase";
  info[105].dominantType = "unknown";
  info[105].resolved =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[105].fileTimeLo = 1382979881U;
  info[105].fileTimeHi = 0U;
  info[105].mFileTimeLo = 0U;
  info[105].mFileTimeHi = 0U;
  info[106].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/createOFDMDemods.m";
  info[106].name = "OFDMDemodulator";
  info[106].dominantType = "char";
  info[106].resolved =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[106].fileTimeLo = 1382979881U;
  info[106].fileTimeHi = 0U;
  info[106].mFileTimeLo = 0U;
  info[106].mFileTimeHi = 0U;
  info[107].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[107].name = "matlab.system.pvParse";
  info[107].dominantType = "OFDMDemodulator";
  info[107].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[107].fileTimeLo = 1357962380U;
  info[107].fileTimeHi = 0U;
  info[107].mFileTimeLo = 0U;
  info[107].mFileTimeHi = 0U;
  info[108].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[108].name = "log2";
  info[108].dominantType = "double";
  info[108].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m";
  info[108].fileTimeLo = 1343851982U;
  info[108].fileTimeHi = 0U;
  info[108].mFileTimeLo = 0U;
  info[108].mFileTimeHi = 0U;
  info[109].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m";
  info[109].name = "eml_error";
  info[109].dominantType = "char";
  info[109].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[109].fileTimeLo = 1343851958U;
  info[109].fileTimeHi = 0U;
  info[109].mFileTimeLo = 0U;
  info[109].mFileTimeHi = 0U;
  info[110].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[110].name = "realmax";
  info[110].dominantType = "char";
  info[110].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[110].fileTimeLo = 1307672842U;
  info[110].fileTimeHi = 0U;
  info[110].mFileTimeLo = 0U;
  info[110].mFileTimeHi = 0U;
  info[111].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[111].name = "eml_realmax";
  info[111].dominantType = "char";
  info[111].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[111].fileTimeLo = 1326749596U;
  info[111].fileTimeHi = 0U;
  info[111].mFileTimeLo = 0U;
  info[111].mFileTimeHi = 0U;
  info[112].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[112].name = "eml_float_model";
  info[112].dominantType = "char";
  info[112].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[112].fileTimeLo = 1326749596U;
  info[112].fileTimeHi = 0U;
  info[112].mFileTimeLo = 0U;
  info[112].mFileTimeHi = 0U;
  info[113].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[113].name = "mtimes";
  info[113].dominantType = "double";
  info[113].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[113].fileTimeLo = 1289541292U;
  info[113].fileTimeHi = 0U;
  info[113].mFileTimeLo = 0U;
  info[113].mFileTimeHi = 0U;
  info[114].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[114].name = "mrdivide";
  info[114].dominantType = "double";
  info[114].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[114].fileTimeLo = 1357973148U;
  info[114].fileTimeHi = 0U;
  info[114].mFileTimeLo = 1319751566U;
  info[114].mFileTimeHi = 0U;
  info[115].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[115].name = "eml_guarded_inf";
  info[115].dominantType = "char";
  info[115].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m";
  info[115].fileTimeLo = 1286840376U;
  info[115].fileTimeHi = 0U;
  info[115].mFileTimeLo = 0U;
  info[115].mFileTimeHi = 0U;
  info[116].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m";
  info[116].name = "eml_is_float_class";
  info[116].dominantType = "char";
  info[116].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[116].fileTimeLo = 1286840382U;
  info[116].fileTimeHi = 0U;
  info[116].mFileTimeLo = 0U;
  info[116].mFileTimeHi = 0U;
  info[117].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[117].name = "eml_guarded_nan";
  info[117].dominantType = "char";
  info[117].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[117].fileTimeLo = 1286840376U;
  info[117].fileTimeHi = 0U;
  info[117].mFileTimeLo = 0U;
  info[117].mFileTimeHi = 0U;
  info[118].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[118].name = "eml_is_float_class";
  info[118].dominantType = "char";
  info[118].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[118].fileTimeLo = 1286840382U;
  info[118].fileTimeHi = 0U;
  info[118].mFileTimeLo = 0U;
  info[118].mFileTimeHi = 0U;
  info[119].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[119].name = "isfinite";
  info[119].dominantType = "double";
  info[119].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[119].fileTimeLo = 1286840358U;
  info[119].fileTimeHi = 0U;
  info[119].mFileTimeLo = 0U;
  info[119].mFileTimeHi = 0U;
  info[120].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_frexp";
  info[120].name = "isfinite";
  info[120].dominantType = "double";
  info[120].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[120].fileTimeLo = 1286840358U;
  info[120].fileTimeHi = 0U;
  info[120].mFileTimeLo = 0U;
  info[120].mFileTimeHi = 0U;
  info[121].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[121].name = "mrdivide";
  info[121].dominantType = "double";
  info[121].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[121].fileTimeLo = 1357973148U;
  info[121].fileTimeHi = 0U;
  info[121].mFileTimeLo = 1319751566U;
  info[121].mFileTimeHi = 0U;
  info[122].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[122].name = "floor";
  info[122].dominantType = "double";
  info[122].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[122].fileTimeLo = 1343851980U;
  info[122].fileTimeHi = 0U;
  info[122].mFileTimeLo = 0U;
  info[122].mFileTimeHi = 0U;
  info[123].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[123].name = "coder.internal.errorIf";
  info[123].dominantType = "char";
  info[123].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[123].fileTimeLo = 1334093538U;
  info[123].fileTimeHi = 0U;
  info[123].mFileTimeLo = 0U;
  info[123].mFileTimeHi = 0U;
  info[124].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[124].name = "isnan";
  info[124].dominantType = "logical";
  info[124].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[124].fileTimeLo = 1286840360U;
  info[124].fileTimeHi = 0U;
  info[124].mFileTimeLo = 0U;
  info[124].mFileTimeHi = 0U;
  info[125].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[125].name = "mrdivide";
  info[125].dominantType = "double";
  info[125].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[125].fileTimeLo = 1357973148U;
  info[125].fileTimeHi = 0U;
  info[125].mFileTimeLo = 1319751566U;
  info[125].mFileTimeHi = 0U;
  info[126].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[126].name = "unique";
  info[126].dominantType = "double";
  info[126].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m";
  info[126].fileTimeLo = 1344493640U;
  info[126].fileTimeHi = 0U;
  info[126].mFileTimeLo = 0U;
  info[126].mFileTimeHi = 0U;
  info[127].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[127].name = "eml_index_class";
  info[127].dominantType = "";
  info[127].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[127].fileTimeLo = 1323192178U;
  info[127].fileTimeHi = 0U;
  info[127].mFileTimeLo = 0U;
  info[127].mFileTimeHi = 0U;
}

static const mxArray *c_emlrt_marshallOut(const b_struct_T *u)
{
  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv61[1] = { 15 };

  const mxArray *m18;
  real_T (*pData)[];
  int32_T i;
  const mxArray *d_y;
  static const int32_T iv62[2] = { 48, 12 };

  creal_T b_u[576];
  const mxArray *e_y;
  static const int32_T iv63[1] = { 53 };

  creal_T c_u[53];
  const mxArray *f_y;
  static const int32_T iv64[1] = { 80 };

  const mxArray *g_y;
  b_y = NULL;
  emlrtAssign(&b_y, mxCreateStructMatrix(1, 1, 0, NULL));
  emlrtAddField(b_y, emlrt_marshallOut(u->phi), "phi", 0);
  emlrtAddField(b_y, emlrt_marshallOut(u->delay), "delay", 0);
  emlrtAddField(b_y, emlrt_marshallOut(u->numPeaks), "numPeaks", 0);
  c_y = NULL;
  m18 = mxCreateNumericArray(1, (int32_T *)&iv61, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m18);
  for (i = 0; i < 15; i++) {
    (*pData)[i] = u->frequency[i];
  }

  emlrtAssign(&c_y, m18);
  emlrtAddField(b_y, c_y, "frequency", 0);
  emlrtAddField(b_y, emlrt_marshallOut(u->phase), "phase", 0);
  emlrtAddField(b_y, emlrt_marshallOut(u->frequencyMA), "frequencyMA", 0);
  emlrtAddField(b_y, emlrt_marshallOut(u->numProcessed), "numProcessed", 0);
  emlrtAddField(b_y, emlrt_marshallOut(u->inputBufferLength),
                "inputBufferLength", 0);
  emlrtAddField(b_y, emlrt_marshallOut(u->numFreqToAverage), "numFreqToAverage",
                0);
  d_y = NULL;
  m18 = mxCreateNumericArray(2, (int32_T *)&iv62, mxDOUBLE_CLASS, mxCOMPLEX);
  for (i = 0; i < 576; i++) {
    b_u[i] = u->pilotEqGains[i];
  }

  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m18, b_u, 8);
  emlrtAssign(&d_y, m18);
  emlrtAddField(b_y, d_y, "pilotEqGains", 0);
  e_y = NULL;
  m18 = mxCreateNumericArray(1, (int32_T *)&iv63, mxDOUBLE_CLASS, mxCOMPLEX);
  for (i = 0; i < 53; i++) {
    c_u[i] = u->preambleEqGains[i];
  }

  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m18, c_u, 8);
  emlrtAssign(&e_y, m18);
  emlrtAddField(b_y, e_y, "preambleEqGains", 0);
  f_y = NULL;
  m18 = mxCreateNumericArray(1, (int32_T *)&iv64, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m18);
  for (i = 0; i < 80; i++) {
    (*pData)[i] = u->message[i];
  }

  emlrtAssign(&f_y, m18);
  emlrtAddField(b_y, f_y, "message", 0);
  g_y = NULL;
  m18 = mxCreateLogicalScalar(u->printReceivedData);
  emlrtAssign(&g_y, m18);
  emlrtAddField(b_y, g_y, "printReceivedData", 0);
  return b_y;
}

static void c_info_helper(ResolvedFunctionInfo info[567])
{
  info[128].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[128].name = "eml_sort_idx";
  info[128].dominantType = "double";
  info[128].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[128].fileTimeLo = 1305339604U;
  info[128].fileTimeHi = 0U;
  info[128].mFileTimeLo = 0U;
  info[128].mFileTimeHi = 0U;
  info[129].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[129].name = "eml_index_class";
  info[129].dominantType = "";
  info[129].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[129].fileTimeLo = 1323192178U;
  info[129].fileTimeHi = 0U;
  info[129].mFileTimeLo = 0U;
  info[129].mFileTimeHi = 0U;
  info[130].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[130].name = "eml_size_ispow2";
  info[130].dominantType = "coder.internal.indexInt";
  info[130].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[130].fileTimeLo = 1286840398U;
  info[130].fileTimeHi = 0U;
  info[130].mFileTimeLo = 0U;
  info[130].mFileTimeHi = 0U;
  info[131].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[131].name = "eml_unsigned_class";
  info[131].dominantType = "char";
  info[131].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[131].fileTimeLo = 1323192180U;
  info[131].fileTimeHi = 0U;
  info[131].mFileTimeLo = 0U;
  info[131].mFileTimeHi = 0U;
  info[132].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[132].name = "eml_index_class";
  info[132].dominantType = "";
  info[132].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[132].fileTimeLo = 1323192178U;
  info[132].fileTimeHi = 0U;
  info[132].mFileTimeLo = 0U;
  info[132].mFileTimeHi = 0U;
  info[133].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[133].name = "eml_index_plus";
  info[133].dominantType = "coder.internal.indexInt";
  info[133].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[133].fileTimeLo = 1286840378U;
  info[133].fileTimeHi = 0U;
  info[133].mFileTimeLo = 0U;
  info[133].mFileTimeHi = 0U;
  info[134].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[134].name = "eml_int_forloop_overflow_check";
  info[134].dominantType = "";
  info[134].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[134].fileTimeLo = 1346531940U;
  info[134].fileTimeHi = 0U;
  info[134].mFileTimeLo = 0U;
  info[134].mFileTimeHi = 0U;
  info[135].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[135].name = "eml_index_minus";
  info[135].dominantType = "double";
  info[135].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[135].fileTimeLo = 1286840378U;
  info[135].fileTimeHi = 0U;
  info[135].mFileTimeLo = 0U;
  info[135].mFileTimeHi = 0U;
  info[136].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[136].name = "eml_index_plus";
  info[136].dominantType = "double";
  info[136].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[136].fileTimeLo = 1286840378U;
  info[136].fileTimeHi = 0U;
  info[136].mFileTimeLo = 0U;
  info[136].mFileTimeHi = 0U;
  info[137].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[137].name = "eml_sort_le";
  info[137].dominantType = "double";
  info[137].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m";
  info[137].fileTimeLo = 1292212110U;
  info[137].fileTimeHi = 0U;
  info[137].mFileTimeLo = 0U;
  info[137].mFileTimeHi = 0U;
  info[138].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le";
  info[138].name = "eml_relop";
  info[138].dominantType = "function_handle";
  info[138].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[138].fileTimeLo = 1342472782U;
  info[138].fileTimeHi = 0U;
  info[138].mFileTimeLo = 0U;
  info[138].mFileTimeHi = 0U;
  info[139].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le";
  info[139].name = "isnan";
  info[139].dominantType = "double";
  info[139].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[139].fileTimeLo = 1286840360U;
  info[139].fileTimeHi = 0U;
  info[139].mFileTimeLo = 0U;
  info[139].mFileTimeHi = 0U;
  info[140].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[140].name = "eml_index_times";
  info[140].dominantType = "double";
  info[140].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[140].fileTimeLo = 1286840380U;
  info[140].fileTimeHi = 0U;
  info[140].mFileTimeLo = 0U;
  info[140].mFileTimeHi = 0U;
  info[141].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[141].name = "eml_index_minus";
  info[141].dominantType = "coder.internal.indexInt";
  info[141].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[141].fileTimeLo = 1286840378U;
  info[141].fileTimeHi = 0U;
  info[141].mFileTimeLo = 0U;
  info[141].mFileTimeHi = 0U;
  info[142].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[142].name = "eml_scalar_eg";
  info[142].dominantType = "double";
  info[142].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[142].fileTimeLo = 1286840396U;
  info[142].fileTimeHi = 0U;
  info[142].mFileTimeLo = 0U;
  info[142].mFileTimeHi = 0U;
  info[143].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[143].name = "eml_int_forloop_overflow_check";
  info[143].dominantType = "";
  info[143].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[143].fileTimeLo = 1346531940U;
  info[143].fileTimeHi = 0U;
  info[143].mFileTimeLo = 0U;
  info[143].mFileTimeHi = 0U;
  info[144].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[144].name = "eml_index_class";
  info[144].dominantType = "";
  info[144].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[144].fileTimeLo = 1323192178U;
  info[144].fileTimeHi = 0U;
  info[144].mFileTimeLo = 0U;
  info[144].mFileTimeHi = 0U;
  info[145].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[145].name = "isinf";
  info[145].dominantType = "double";
  info[145].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[145].fileTimeLo = 1286840360U;
  info[145].fileTimeHi = 0U;
  info[145].mFileTimeLo = 0U;
  info[145].mFileTimeHi = 0U;
  info[146].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[146].name = "eml_index_plus";
  info[146].dominantType = "double";
  info[146].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[146].fileTimeLo = 1286840378U;
  info[146].fileTimeHi = 0U;
  info[146].mFileTimeLo = 0U;
  info[146].mFileTimeHi = 0U;
  info[147].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[147].name = "eml_index_minus";
  info[147].dominantType = "double";
  info[147].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[147].fileTimeLo = 1286840378U;
  info[147].fileTimeHi = 0U;
  info[147].mFileTimeLo = 0U;
  info[147].mFileTimeHi = 0U;
  info[148].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[148].name = "isnan";
  info[148].dominantType = "double";
  info[148].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[148].fileTimeLo = 1286840360U;
  info[148].fileTimeHi = 0U;
  info[148].mFileTimeLo = 0U;
  info[148].mFileTimeHi = 0U;
  info[149].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[149].name = "eml_index_minus";
  info[149].dominantType = "coder.internal.indexInt";
  info[149].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[149].fileTimeLo = 1286840378U;
  info[149].fileTimeHi = 0U;
  info[149].mFileTimeLo = 0U;
  info[149].mFileTimeHi = 0U;
  info[150].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[150].name = "eml_index_plus";
  info[150].dominantType = "coder.internal.indexInt";
  info[150].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[150].fileTimeLo = 1286840378U;
  info[150].fileTimeHi = 0U;
  info[150].mFileTimeLo = 0U;
  info[150].mFileTimeHi = 0U;
  info[151].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[151].name = "eml_index_plus";
  info[151].dominantType = "double";
  info[151].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[151].fileTimeLo = 1286840378U;
  info[151].fileTimeHi = 0U;
  info[151].mFileTimeLo = 0U;
  info[151].mFileTimeHi = 0U;
  info[152].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[152].name = "eml_safe_eq";
  info[152].dominantType = "double";
  info[152].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[152].fileTimeLo = 1348213518U;
  info[152].fileTimeHi = 0U;
  info[152].mFileTimeLo = 0U;
  info[152].mFileTimeHi = 0U;
  info[153].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[153].name = "abs";
  info[153].dominantType = "double";
  info[153].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[153].fileTimeLo = 1343851966U;
  info[153].fileTimeHi = 0U;
  info[153].mFileTimeLo = 0U;
  info[153].mFileTimeHi = 0U;
  info[154].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[154].name = "eml_scalar_abs";
  info[154].dominantType = "double";
  info[154].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[154].fileTimeLo = 1286840312U;
  info[154].fileTimeHi = 0U;
  info[154].mFileTimeLo = 0U;
  info[154].mFileTimeHi = 0U;
  info[155].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[155].name = "mrdivide";
  info[155].dominantType = "double";
  info[155].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[155].fileTimeLo = 1357973148U;
  info[155].fileTimeHi = 0U;
  info[155].mFileTimeLo = 1319751566U;
  info[155].mFileTimeHi = 0U;
  info[156].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[156].name = "eps";
  info[156].dominantType = "double";
  info[156].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[156].fileTimeLo = 1326749596U;
  info[156].fileTimeHi = 0U;
  info[156].mFileTimeLo = 0U;
  info[156].mFileTimeHi = 0U;
  info[157].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[157].name = "eml_mantissa_nbits";
  info[157].dominantType = "char";
  info[157].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[157].fileTimeLo = 1307672842U;
  info[157].fileTimeHi = 0U;
  info[157].mFileTimeLo = 0U;
  info[157].mFileTimeHi = 0U;
  info[158].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[158].name = "eml_float_model";
  info[158].dominantType = "char";
  info[158].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[158].fileTimeLo = 1326749596U;
  info[158].fileTimeHi = 0U;
  info[158].mFileTimeLo = 0U;
  info[158].mFileTimeHi = 0U;
  info[159].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[159].name = "eml_realmin";
  info[159].dominantType = "char";
  info[159].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[159].fileTimeLo = 1307672844U;
  info[159].fileTimeHi = 0U;
  info[159].mFileTimeLo = 0U;
  info[159].mFileTimeHi = 0U;
  info[160].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[160].name = "eml_float_model";
  info[160].dominantType = "char";
  info[160].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[160].fileTimeLo = 1326749596U;
  info[160].fileTimeHi = 0U;
  info[160].mFileTimeLo = 0U;
  info[160].mFileTimeHi = 0U;
  info[161].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[161].name = "eml_realmin_denormal";
  info[161].dominantType = "char";
  info[161].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[161].fileTimeLo = 1326749598U;
  info[161].fileTimeHi = 0U;
  info[161].mFileTimeLo = 0U;
  info[161].mFileTimeHi = 0U;
  info[162].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[162].name = "eml_float_model";
  info[162].dominantType = "char";
  info[162].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[162].fileTimeLo = 1326749596U;
  info[162].fileTimeHi = 0U;
  info[162].mFileTimeLo = 0U;
  info[162].mFileTimeHi = 0U;
  info[163].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[163].name = "abs";
  info[163].dominantType = "double";
  info[163].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[163].fileTimeLo = 1343851966U;
  info[163].fileTimeHi = 0U;
  info[163].mFileTimeLo = 0U;
  info[163].mFileTimeHi = 0U;
  info[164].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[164].name = "isfinite";
  info[164].dominantType = "double";
  info[164].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[164].fileTimeLo = 1286840358U;
  info[164].fileTimeHi = 0U;
  info[164].mFileTimeLo = 0U;
  info[164].mFileTimeHi = 0U;
  info[165].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[165].name = "eml_guarded_nan";
  info[165].dominantType = "";
  info[165].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[165].fileTimeLo = 1286840376U;
  info[165].fileTimeHi = 0U;
  info[165].mFileTimeLo = 0U;
  info[165].mFileTimeHi = 0U;
  info[166].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[166].name = "isinf";
  info[166].dominantType = "double";
  info[166].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[166].fileTimeLo = 1286840360U;
  info[166].fileTimeHi = 0U;
  info[166].mFileTimeLo = 0U;
  info[166].mFileTimeHi = 0U;
  info[167].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[167].name = "eml_index_minus";
  info[167].dominantType = "double";
  info[167].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[167].fileTimeLo = 1286840378U;
  info[167].fileTimeHi = 0U;
  info[167].mFileTimeLo = 0U;
  info[167].mFileTimeHi = 0U;
  info[168].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[168].name = "length";
  info[168].dominantType = "double";
  info[168].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[168].fileTimeLo = 1303167806U;
  info[168].fileTimeHi = 0U;
  info[168].mFileTimeLo = 0U;
  info[168].mFileTimeHi = 0U;
  info[169].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[169].name = "coder.internal.assert";
  info[169].dominantType = "char";
  info[169].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[169].fileTimeLo = 1334093538U;
  info[169].fileTimeHi = 0U;
  info[169].mFileTimeLo = 0U;
  info[169].mFileTimeHi = 0U;
  info[170].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[170].name = "length";
  info[170].dominantType = "char";
  info[170].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[170].fileTimeLo = 1303167806U;
  info[170].fileTimeHi = 0U;
  info[170].mFileTimeLo = 0U;
  info[170].mFileTimeHi = 0U;
  info[171].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[171].name = "all";
  info[171].dominantType = "logical";
  info[171].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[171].fileTimeLo = 1286840434U;
  info[171].fileTimeHi = 0U;
  info[171].mFileTimeLo = 0U;
  info[171].mFileTimeHi = 0U;
  info[172].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[172].name = "eml_all_or_any";
  info[172].dominantType = "char";
  info[172].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[172].fileTimeLo = 1286840294U;
  info[172].fileTimeHi = 0U;
  info[172].mFileTimeLo = 0U;
  info[172].mFileTimeHi = 0U;
  info[173].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[173].name = "DataPortDataTypeCapiEnumT";
  info[173].dominantType = "";
  info[173].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m";
  info[173].fileTimeLo = 1345182480U;
  info[173].fileTimeHi = 0U;
  info[173].mFileTimeLo = 0U;
  info[173].mFileTimeHi = 0U;
  info[174].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[174].name = "openDataConnection";
  info[174].dominantType = "BoardIdCapiEnumT";
  info[174].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[174].fileTimeLo = 1345182488U;
  info[174].fileTimeHi = 0U;
  info[174].mFileTimeLo = 0U;
  info[174].mFileTimeHi = 0U;
  info[175].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[175].name = "mapiPrivate";
  info[175].dominantType = "BoardIdCapiEnumT";
  info[175].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[175].fileTimeLo = 1357947598U;
  info[175].fileTimeHi = 0U;
  info[175].mFileTimeLo = 0U;
  info[175].mFileTimeHi = 0U;
  info[176].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[176].name = "UsrpErrorCapiEnumT";
  info[176].dominantType = "double";
  info[176].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[176].fileTimeLo = 1345182482U;
  info[176].fileTimeHi = 0U;
  info[176].mFileTimeLo = 0U;
  info[176].mFileTimeHi = 0U;
  info[177].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[177].name = "char";
  info[177].dominantType = "double";
  info[177].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[177].fileTimeLo = 1319751568U;
  info[177].fileTimeHi = 0U;
  info[177].mFileTimeLo = 0U;
  info[177].mFileTimeHi = 0U;
  info[178].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[178].name = "mpower";
  info[178].dominantType = "double";
  info[178].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[178].fileTimeLo = 1286840442U;
  info[178].fileTimeHi = 0U;
  info[178].mFileTimeLo = 0U;
  info[178].mFileTimeHi = 0U;
  info[179].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[179].name = "power";
  info[179].dominantType = "double";
  info[179].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[179].fileTimeLo = 1348213530U;
  info[179].fileTimeHi = 0U;
  info[179].mFileTimeLo = 0U;
  info[179].mFileTimeHi = 0U;
  info[180].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[180].name = "eml_scalar_eg";
  info[180].dominantType = "double";
  info[180].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[180].fileTimeLo = 1286840396U;
  info[180].fileTimeHi = 0U;
  info[180].mFileTimeLo = 0U;
  info[180].mFileTimeHi = 0U;
  info[181].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[181].name = "eml_scalexp_alloc";
  info[181].dominantType = "double";
  info[181].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[181].fileTimeLo = 1352446460U;
  info[181].fileTimeHi = 0U;
  info[181].mFileTimeLo = 0U;
  info[181].mFileTimeHi = 0U;
  info[182].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[182].name = "floor";
  info[182].dominantType = "double";
  info[182].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[182].fileTimeLo = 1343851980U;
  info[182].fileTimeHi = 0U;
  info[182].mFileTimeLo = 0U;
  info[182].mFileTimeHi = 0U;
  info[183].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[183].name = "eml_scalar_eg";
  info[183].dominantType = "double";
  info[183].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[183].fileTimeLo = 1286840396U;
  info[183].fileTimeHi = 0U;
  info[183].mFileTimeLo = 0U;
  info[183].mFileTimeHi = 0U;
  info[184].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[184].name = "mrdivide";
  info[184].dominantType = "double";
  info[184].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[184].fileTimeLo = 1357973148U;
  info[184].fileTimeHi = 0U;
  info[184].mFileTimeLo = 1319751566U;
  info[184].mFileTimeHi = 0U;
  info[185].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[185].name = "UsrpReportMethodEnumT";
  info[185].dominantType = "";
  info[185].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[185].fileTimeLo = 1345182484U;
  info[185].fileTimeHi = 0U;
  info[185].mFileTimeLo = 0U;
  info[185].mFileTimeHi = 0U;
  info[186].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[186].name = "reportSDRuStatus";
  info[186].dominantType = "UsrpErrorCapiEnumT";
  info[186].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[186].fileTimeLo = 1351913716U;
  info[186].fileTimeHi = 0U;
  info[186].mFileTimeLo = 0U;
  info[186].mFileTimeHi = 0U;
  info[187].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[187].name = "coder.internal.errorIf";
  info[187].dominantType = "char";
  info[187].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[187].fileTimeLo = 1334093538U;
  info[187].fileTimeHi = 0U;
  info[187].mFileTimeLo = 0U;
  info[187].mFileTimeHi = 0U;
  info[188].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[188].name = "isrow";
  info[188].dominantType = "char";
  info[188].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[188].fileTimeLo = 1346531960U;
  info[188].fileTimeHi = 0U;
  info[188].mFileTimeLo = 0U;
  info[188].mFileTimeHi = 0U;
  info[189].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[189].name = "UsrpErrorCapiEnumT";
  info[189].dominantType = "";
  info[189].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[189].fileTimeLo = 1345182482U;
  info[189].fileTimeHi = 0U;
  info[189].mFileTimeLo = 0U;
  info[189].mFileTimeHi = 0U;
  info[190].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[190].name = "UsrpReportMethodEnumT";
  info[190].dominantType = "";
  info[190].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[190].fileTimeLo = 1345182484U;
  info[190].fileTimeHi = 0U;
  info[190].mFileTimeLo = 0U;
  info[190].mFileTimeHi = 0U;
  info[191].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[191].name = "coder.internal.warning";
  info[191].dominantType = "char";
  info[191].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[191].fileTimeLo = 1311277408U;
  info[191].fileTimeHi = 0U;
  info[191].mFileTimeLo = 0U;
  info[191].mFileTimeHi = 0U;
}

static void d_info_helper(ResolvedFunctionInfo info[567])
{
  info[192].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/reportSDRuStatus.m";
  info[192].name = "getSDRuDriverVersion";
  info[192].dominantType = "";
  info[192].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[192].fileTimeLo = 1345182486U;
  info[192].fileTimeHi = 0U;
  info[192].mFileTimeLo = 0U;
  info[192].mFileTimeHi = 0U;
  info[193].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[193].name = "mapiPrivate";
  info[193].dominantType = "char";
  info[193].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[193].fileTimeLo = 1357947598U;
  info[193].fileTimeHi = 0U;
  info[193].mFileTimeLo = 0U;
  info[193].mFileTimeHi = 0U;
  info[194].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[194].name = "UsrpErrorCapiEnumT";
  info[194].dominantType = "";
  info[194].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[194].fileTimeLo = 1345182482U;
  info[194].fileTimeHi = 0U;
  info[194].mFileTimeLo = 0U;
  info[194].mFileTimeHi = 0U;
  info[195].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[195].name = "matlab.system.coder.SystemCore";
  info[195].dominantType = "";
  info[195].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[195].fileTimeLo = 1357971318U;
  info[195].fileTimeHi = 0U;
  info[195].mFileTimeLo = 0U;
  info[195].mFileTimeHi = 0U;
  info[196].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[196].name = "length";
  info[196].dominantType = "logical";
  info[196].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[196].fileTimeLo = 1303167806U;
  info[196].fileTimeHi = 0U;
  info[196].mFileTimeLo = 0U;
  info[196].mFileTimeHi = 0U;
  info[197].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[197].name = "receiveData";
  info[197].dominantType = "DataPortDataTypeCapiEnumT";
  info[197].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m";
  info[197].fileTimeLo = 1345182488U;
  info[197].fileTimeHi = 0U;
  info[197].mFileTimeLo = 0U;
  info[197].mFileTimeHi = 0U;
  info[198].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/receiveData.m";
  info[198].name = "mapiPrivate";
  info[198].dominantType = "DataPortDataTypeCapiEnumT";
  info[198].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[198].fileTimeLo = 1357947598U;
  info[198].fileTimeHi = 0U;
  info[198].mFileTimeLo = 0U;
  info[198].mFileTimeHi = 0U;
  info[199].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[199].name = "UsrpErrorCapiEnumT";
  info[199].dominantType = "";
  info[199].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[199].fileTimeLo = 1345182482U;
  info[199].fileTimeHi = 0U;
  info[199].mFileTimeLo = 0U;
  info[199].mFileTimeHi = 0U;
  info[200].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[200].name = "error";
  info[200].dominantType = "char";
  info[200].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m";
  info[200].fileTimeLo = 1319751566U;
  info[200].fileTimeHi = 0U;
  info[200].mFileTimeLo = 0U;
  info[200].mFileTimeHi = 0U;
  info[201].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[201].name = "mtimes";
  info[201].dominantType = "double";
  info[201].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[201].fileTimeLo = 1289541292U;
  info[201].fileTimeHi = 0U;
  info[201].mFileTimeLo = 0U;
  info[201].mFileTimeHi = 0U;
  info[202].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[202].name = "iscolumn";
  info[202].dominantType = "double";
  info[202].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/iscolumn.m";
  info[202].fileTimeLo = 1346531958U;
  info[202].fileTimeHi = 0U;
  info[202].mFileTimeLo = 0U;
  info[202].mFileTimeHi = 0U;
  info[203].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[203].name = "eml_is_positive_integer_scalar";
  info[203].dominantType = "double";
  info[203].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[203].fileTimeLo = 1309472796U;
  info[203].fileTimeHi = 0U;
  info[203].mFileTimeLo = 0U;
  info[203].mFileTimeHi = 0U;
  info[204].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[204].name = "floor";
  info[204].dominantType = "double";
  info[204].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[204].fileTimeLo = 1343851980U;
  info[204].fileTimeHi = 0U;
  info[204].mFileTimeLo = 0U;
  info[204].mFileTimeHi = 0U;
  info[205].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[205].name = "isinf";
  info[205].dominantType = "double";
  info[205].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[205].fileTimeLo = 1286840360U;
  info[205].fileTimeHi = 0U;
  info[205].mFileTimeLo = 0U;
  info[205].mFileTimeHi = 0U;
  info[206].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[206].name = "mrdivide";
  info[206].dominantType = "double";
  info[206].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[206].fileTimeLo = 1357973148U;
  info[206].fileTimeHi = 0U;
  info[206].mFileTimeLo = 1319751566U;
  info[206].mFileTimeHi = 0U;
  info[207].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[207].name = "mpower";
  info[207].dominantType = "double";
  info[207].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[207].fileTimeLo = 1286840442U;
  info[207].fileTimeHi = 0U;
  info[207].mFileTimeLo = 0U;
  info[207].mFileTimeHi = 0U;
  info[208].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[208].name = "eps";
  info[208].dominantType = "";
  info[208].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[208].fileTimeLo = 1326749596U;
  info[208].fileTimeHi = 0U;
  info[208].mFileTimeLo = 0U;
  info[208].mFileTimeHi = 0U;
  info[209].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[209].name = "eml_eps";
  info[209].dominantType = "char";
  info[209].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[209].fileTimeLo = 1326749596U;
  info[209].fileTimeHi = 0U;
  info[209].mFileTimeLo = 0U;
  info[209].mFileTimeHi = 0U;
  info[210].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[210].name = "eml_float_model";
  info[210].dominantType = "char";
  info[210].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[210].fileTimeLo = 1326749596U;
  info[210].fileTimeHi = 0U;
  info[210].mFileTimeLo = 0U;
  info[210].mFileTimeHi = 0U;
  info[211].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[211].name = "sqrt";
  info[211].dominantType = "double";
  info[211].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[211].fileTimeLo = 1343851986U;
  info[211].fileTimeHi = 0U;
  info[211].mFileTimeLo = 0U;
  info[211].mFileTimeHi = 0U;
  info[212].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[212].name = "eml_error";
  info[212].dominantType = "char";
  info[212].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[212].fileTimeLo = 1343851958U;
  info[212].fileTimeHi = 0U;
  info[212].mFileTimeLo = 0U;
  info[212].mFileTimeHi = 0U;
  info[213].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[213].name = "eml_scalar_sqrt";
  info[213].dominantType = "double";
  info[213].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  info[213].fileTimeLo = 1286840338U;
  info[213].fileTimeHi = 0U;
  info[213].mFileTimeLo = 0U;
  info[213].mFileTimeHi = 0U;
  info[214].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[214].name = "strncmp";
  info[214].dominantType = "char";
  info[214].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strncmp.m";
  info[214].fileTimeLo = 1328879522U;
  info[214].fileTimeHi = 0U;
  info[214].mFileTimeLo = 0U;
  info[214].mFileTimeHi = 0U;
  info[215].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strncmp.m";
  info[215].name = "min";
  info[215].dominantType = "double";
  info[215].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[215].fileTimeLo = 1311276918U;
  info[215].fileTimeHi = 0U;
  info[215].mFileTimeLo = 0U;
  info[215].mFileTimeHi = 0U;
  info[216].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[216].name = "eml_min_or_max";
  info[216].dominantType = "char";
  info[216].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[216].fileTimeLo = 1334093090U;
  info[216].fileTimeHi = 0U;
  info[216].mFileTimeLo = 0U;
  info[216].mFileTimeHi = 0U;
  info[217].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[217].name = "eml_scalar_eg";
  info[217].dominantType = "double";
  info[217].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[217].fileTimeLo = 1286840396U;
  info[217].fileTimeHi = 0U;
  info[217].mFileTimeLo = 0U;
  info[217].mFileTimeHi = 0U;
  info[218].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[218].name = "eml_scalexp_alloc";
  info[218].dominantType = "double";
  info[218].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[218].fileTimeLo = 1352446460U;
  info[218].fileTimeHi = 0U;
  info[218].mFileTimeLo = 0U;
  info[218].mFileTimeHi = 0U;
  info[219].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[219].name = "eml_index_class";
  info[219].dominantType = "";
  info[219].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[219].fileTimeLo = 1323192178U;
  info[219].fileTimeHi = 0U;
  info[219].mFileTimeLo = 0U;
  info[219].mFileTimeHi = 0U;
  info[220].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[220].name = "eml_scalar_eg";
  info[220].dominantType = "double";
  info[220].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[220].fileTimeLo = 1286840396U;
  info[220].fileTimeHi = 0U;
  info[220].mFileTimeLo = 0U;
  info[220].mFileTimeHi = 0U;
  info[221].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[221].name = "length";
  info[221].dominantType = "double";
  info[221].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[221].fileTimeLo = 1303167806U;
  info[221].fileTimeHi = 0U;
  info[221].mFileTimeLo = 0U;
  info[221].mFileTimeHi = 0U;
  info[222].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[222].name = "mod";
  info[222].dominantType = "double";
  info[222].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[222].fileTimeLo = 1343851982U;
  info[222].fileTimeHi = 0U;
  info[222].mFileTimeLo = 0U;
  info[222].mFileTimeHi = 0U;
  info[223].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[223].name = "eml_scalar_eg";
  info[223].dominantType = "double";
  info[223].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[223].fileTimeLo = 1286840396U;
  info[223].fileTimeHi = 0U;
  info[223].mFileTimeLo = 0U;
  info[223].mFileTimeHi = 0U;
  info[224].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[224].name = "eml_scalexp_alloc";
  info[224].dominantType = "double";
  info[224].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[224].fileTimeLo = 1352446460U;
  info[224].fileTimeHi = 0U;
  info[224].mFileTimeLo = 0U;
  info[224].mFileTimeHi = 0U;
  info[225].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[225].name = "eml_scalar_eg";
  info[225].dominantType = "double";
  info[225].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[225].fileTimeLo = 1286840396U;
  info[225].fileTimeHi = 0U;
  info[225].mFileTimeLo = 0U;
  info[225].mFileTimeHi = 0U;
  info[226].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[226].name = "eml_scalar_floor";
  info[226].dominantType = "double";
  info[226].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[226].fileTimeLo = 1286840326U;
  info[226].fileTimeHi = 0U;
  info[226].mFileTimeLo = 0U;
  info[226].mFileTimeHi = 0U;
  info[227].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[227].name = "eml_scalar_round";
  info[227].dominantType = "double";
  info[227].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m";
  info[227].fileTimeLo = 1307672838U;
  info[227].fileTimeHi = 0U;
  info[227].mFileTimeLo = 0U;
  info[227].mFileTimeHi = 0U;
  info[228].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[228].name = "eml_scalar_abs";
  info[228].dominantType = "double";
  info[228].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[228].fileTimeLo = 1286840312U;
  info[228].fileTimeHi = 0U;
  info[228].mFileTimeLo = 0U;
  info[228].mFileTimeHi = 0U;
  info[229].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[229].name = "eps";
  info[229].dominantType = "char";
  info[229].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[229].fileTimeLo = 1326749596U;
  info[229].fileTimeHi = 0U;
  info[229].mFileTimeLo = 0U;
  info[229].mFileTimeHi = 0U;
  info[230].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[230].name = "eml_is_float_class";
  info[230].dominantType = "char";
  info[230].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[230].fileTimeLo = 1286840382U;
  info[230].fileTimeHi = 0U;
  info[230].mFileTimeLo = 0U;
  info[230].mFileTimeHi = 0U;
  info[231].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[231].name = "mtimes";
  info[231].dominantType = "double";
  info[231].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[231].fileTimeLo = 1289541292U;
  info[231].fileTimeHi = 0U;
  info[231].mFileTimeLo = 0U;
  info[231].mFileTimeHi = 0U;
  info[232].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[232].name = "coder.internal.errorIf";
  info[232].dominantType = "char";
  info[232].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[232].fileTimeLo = 1334093538U;
  info[232].fileTimeHi = 0U;
  info[232].mFileTimeLo = 0U;
  info[232].mFileTimeHi = 0U;
  info[233].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[233].name = "mtimes";
  info[233].dominantType = "double";
  info[233].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[233].fileTimeLo = 1289541292U;
  info[233].fileTimeHi = 0U;
  info[233].mFileTimeLo = 0U;
  info[233].mFileTimeHi = 0U;
  info[234].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[234].name = "colon";
  info[234].dominantType = "double";
  info[234].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[234].fileTimeLo = 1348213528U;
  info[234].fileTimeHi = 0U;
  info[234].mFileTimeLo = 0U;
  info[234].mFileTimeHi = 0U;
  info[235].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[235].name = "colon";
  info[235].dominantType = "double";
  info[235].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[235].fileTimeLo = 1348213528U;
  info[235].fileTimeHi = 0U;
  info[235].mFileTimeLo = 0U;
  info[235].mFileTimeHi = 0U;
  info[236].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[236].name = "isfinite";
  info[236].dominantType = "double";
  info[236].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[236].fileTimeLo = 1286840358U;
  info[236].fileTimeHi = 0U;
  info[236].mFileTimeLo = 0U;
  info[236].mFileTimeHi = 0U;
  info[237].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[237].name = "floor";
  info[237].dominantType = "double";
  info[237].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[237].fileTimeLo = 1343851980U;
  info[237].fileTimeHi = 0U;
  info[237].mFileTimeLo = 0U;
  info[237].mFileTimeHi = 0U;
  info[238].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!maxabs";
  info[238].name = "abs";
  info[238].dominantType = "double";
  info[238].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[238].fileTimeLo = 1343851966U;
  info[238].fileTimeHi = 0U;
  info[238].mFileTimeLo = 0U;
  info[238].mFileTimeHi = 0U;
  info[239].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[239].name = "eps";
  info[239].dominantType = "double";
  info[239].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[239].fileTimeLo = 1326749596U;
  info[239].fileTimeHi = 0U;
  info[239].mFileTimeLo = 0U;
  info[239].mFileTimeHi = 0U;
  info[240].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[240].name = "realmax";
  info[240].dominantType = "char";
  info[240].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[240].fileTimeLo = 1307672842U;
  info[240].fileTimeHi = 0U;
  info[240].mFileTimeLo = 0U;
  info[240].mFileTimeHi = 0U;
  info[241].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[241].name = "mrdivide";
  info[241].dominantType = "double";
  info[241].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[241].fileTimeLo = 1357973148U;
  info[241].fileTimeHi = 0U;
  info[241].mFileTimeLo = 1319751566U;
  info[241].mFileTimeHi = 0U;
  info[242].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[242].name = "floor";
  info[242].dominantType = "double";
  info[242].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[242].fileTimeLo = 1343851980U;
  info[242].fileTimeHi = 0U;
  info[242].mFileTimeLo = 0U;
  info[242].mFileTimeHi = 0U;
  info[243].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[243].name = "eml_index_class";
  info[243].dominantType = "";
  info[243].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[243].fileTimeLo = 1323192178U;
  info[243].fileTimeHi = 0U;
  info[243].mFileTimeLo = 0U;
  info[243].mFileTimeHi = 0U;
  info[244].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[244].name = "intmax";
  info[244].dominantType = "char";
  info[244].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[244].fileTimeLo = 1311276916U;
  info[244].fileTimeHi = 0U;
  info[244].mFileTimeLo = 0U;
  info[244].mFileTimeHi = 0U;
  info[245].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!rectifier";
  info[245].name = "abs";
  info[245].dominantType = "double";
  info[245].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[245].fileTimeLo = 1343851966U;
  info[245].fileTimeHi = 0U;
  info[245].mFileTimeLo = 0U;
  info[245].mFileTimeHi = 0U;
  info[246].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[246].name = "eml_dlapy2";
  info[246].dominantType = "double";
  info[246].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_dlapy2.m";
  info[246].fileTimeLo = 1350432254U;
  info[246].fileTimeHi = 0U;
  info[246].mFileTimeLo = 0U;
  info[246].mFileTimeHi = 0U;
  info[247].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!rectifier";
  info[247].name = "mean";
  info[247].dominantType = "double";
  info[247].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[247].fileTimeLo = 1286840294U;
  info[247].fileTimeHi = 0U;
  info[247].mFileTimeLo = 0U;
  info[247].mFileTimeHi = 0U;
  info[248].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[248].name = "isequal";
  info[248].dominantType = "double";
  info[248].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[248].fileTimeLo = 1286840358U;
  info[248].fileTimeHi = 0U;
  info[248].mFileTimeLo = 0U;
  info[248].mFileTimeHi = 0U;
  info[249].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[249].name = "eml_const_nonsingleton_dim";
  info[249].dominantType = "double";
  info[249].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[249].fileTimeLo = 1286840296U;
  info[249].fileTimeHi = 0U;
  info[249].mFileTimeLo = 0U;
  info[249].mFileTimeHi = 0U;
  info[250].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[250].name = "sum";
  info[250].dominantType = "double";
  info[250].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[250].fileTimeLo = 1314758212U;
  info[250].fileTimeHi = 0U;
  info[250].mFileTimeLo = 0U;
  info[250].mFileTimeHi = 0U;
  info[251].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[251].name = "eml_assert_valid_dim";
  info[251].dominantType = "double";
  info[251].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[251].fileTimeLo = 1286840294U;
  info[251].fileTimeHi = 0U;
  info[251].mFileTimeLo = 0U;
  info[251].mFileTimeHi = 0U;
  info[252].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[252].name = "eml_scalar_floor";
  info[252].dominantType = "double";
  info[252].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[252].fileTimeLo = 1286840326U;
  info[252].fileTimeHi = 0U;
  info[252].mFileTimeLo = 0U;
  info[252].mFileTimeHi = 0U;
  info[253].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[253].name = "eml_index_class";
  info[253].dominantType = "";
  info[253].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[253].fileTimeLo = 1323192178U;
  info[253].fileTimeHi = 0U;
  info[253].mFileTimeLo = 0U;
  info[253].mFileTimeHi = 0U;
  info[254].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[254].name = "intmax";
  info[254].dominantType = "char";
  info[254].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[254].fileTimeLo = 1311276916U;
  info[254].fileTimeHi = 0U;
  info[254].mFileTimeLo = 0U;
  info[254].mFileTimeHi = 0U;
  info[255].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[255].name = "eml_int_forloop_overflow_check";
  info[255].dominantType = "";
  info[255].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[255].fileTimeLo = 1346531940U;
  info[255].fileTimeHi = 0U;
  info[255].mFileTimeLo = 0U;
  info[255].mFileTimeHi = 0U;
}

static void e_info_helper(ResolvedFunctionInfo info[567])
{
  info[256].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[256].name = "rdivide";
  info[256].dominantType = "double";
  info[256].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[256].fileTimeLo = 1346531988U;
  info[256].fileTimeHi = 0U;
  info[256].mFileTimeLo = 0U;
  info[256].mFileTimeHi = 0U;
  info[257].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[257].name = "abs";
  info[257].dominantType = "double";
  info[257].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[257].fileTimeLo = 1343851966U;
  info[257].fileTimeHi = 0U;
  info[257].mFileTimeLo = 0U;
  info[257].mFileTimeHi = 0U;
  info[258].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[258].name = "power";
  info[258].dominantType = "double";
  info[258].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[258].fileTimeLo = 1348213530U;
  info[258].fileTimeHi = 0U;
  info[258].mFileTimeLo = 0U;
  info[258].mFileTimeHi = 0U;
  info[259].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[259].name = "mtimes";
  info[259].dominantType = "double";
  info[259].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[259].fileTimeLo = 1289541292U;
  info[259].fileTimeHi = 0U;
  info[259].mFileTimeLo = 0U;
  info[259].mFileTimeHi = 0U;
  info[260].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[260].name = "mean";
  info[260].dominantType = "double";
  info[260].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[260].fileTimeLo = 1286840294U;
  info[260].fileTimeHi = 0U;
  info[260].mFileTimeLo = 0U;
  info[260].mFileTimeHi = 0U;
  info[261].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[261].name = "locateOFDMFrame_sdr";
  info[261].dominantType = "double";
  info[261].resolved =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[261].fileTimeLo = 1382979881U;
  info[261].fileTimeHi = 0U;
  info[261].mFileTimeLo = 0U;
  info[261].mFileTimeHi = 0U;
  info[262].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[262].name = "length";
  info[262].dominantType = "double";
  info[262].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[262].fileTimeLo = 1303167806U;
  info[262].fileTimeHi = 0U;
  info[262].mFileTimeLo = 0U;
  info[262].mFileTimeHi = 0U;
  info[263].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[263].name = "mrdivide";
  info[263].dominantType = "double";
  info[263].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[263].fileTimeLo = 1357973148U;
  info[263].fileTimeHi = 0U;
  info[263].mFileTimeLo = 1319751566U;
  info[263].mFileTimeHi = 0U;
  info[264].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[264].name = "ceil";
  info[264].dominantType = "double";
  info[264].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[264].fileTimeLo = 1343851972U;
  info[264].fileTimeHi = 0U;
  info[264].mFileTimeLo = 0U;
  info[264].mFileTimeHi = 0U;
  info[265].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[265].name = "xcorr";
  info[265].dominantType = "double";
  info[265].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m";
  info[265].fileTimeLo = 1286808770U;
  info[265].fileTimeHi = 0U;
  info[265].mFileTimeLo = 0U;
  info[265].mFileTimeHi = 0U;
  info[266].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m";
  info[266].name = "max";
  info[266].dominantType = "double";
  info[266].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[266].fileTimeLo = 1311276916U;
  info[266].fileTimeHi = 0U;
  info[266].mFileTimeLo = 0U;
  info[266].mFileTimeHi = 0U;
  info[267].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[267].name = "eml_min_or_max";
  info[267].dominantType = "char";
  info[267].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[267].fileTimeLo = 1334093090U;
  info[267].fileTimeHi = 0U;
  info[267].mFileTimeLo = 0U;
  info[267].mFileTimeHi = 0U;
  info[268].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!local_xcorr";
  info[268].name = "max";
  info[268].dominantType = "double";
  info[268].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[268].fileTimeLo = 1311276916U;
  info[268].fileTimeHi = 0U;
  info[268].mFileTimeLo = 0U;
  info[268].mFileTimeHi = 0U;
  info[269].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[269].name = "eml_scalar_eg";
  info[269].dominantType = "double";
  info[269].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[269].fileTimeLo = 1286840396U;
  info[269].fileTimeHi = 0U;
  info[269].mFileTimeLo = 0U;
  info[269].mFileTimeHi = 0U;
  info[270].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[270].name = "mtimes";
  info[270].dominantType = "double";
  info[270].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[270].fileTimeLo = 1289541292U;
  info[270].fileTimeHi = 0U;
  info[270].mFileTimeLo = 0U;
  info[270].mFileTimeHi = 0U;
  info[271].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[271].name = "min";
  info[271].dominantType = "double";
  info[271].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[271].fileTimeLo = 1311276918U;
  info[271].fileTimeHi = 0U;
  info[271].mFileTimeLo = 0U;
  info[271].mFileTimeHi = 0U;
  info[272].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[272].name = "eml_conjtimes";
  info[272].dominantType = "double";
  info[272].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_conjtimes.m";
  info[272].fileTimeLo = 1286840296U;
  info[272].fileTimeHi = 0U;
  info[272].mFileTimeLo = 0U;
  info[272].mFileTimeHi = 0U;
  info[273].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!local_xcorr";
  info[273].name = "colon";
  info[273].dominantType = "double";
  info[273].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[273].fileTimeLo = 1348213528U;
  info[273].fileTimeHi = 0U;
  info[273].mFileTimeLo = 0U;
  info[273].mFileTimeHi = 0U;
  info[274].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[274].name = "abs";
  info[274].dominantType = "double";
  info[274].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[274].fileTimeLo = 1343851966U;
  info[274].fileTimeHi = 0U;
  info[274].mFileTimeLo = 0U;
  info[274].mFileTimeHi = 0U;
  info[275].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[275].name = "power";
  info[275].dominantType = "double";
  info[275].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[275].fileTimeLo = 1348213530U;
  info[275].fileTimeHi = 0U;
  info[275].mFileTimeLo = 0U;
  info[275].mFileTimeHi = 0U;
  info[276].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m";
  info[276].name = "rdivide";
  info[276].dominantType = "double";
  info[276].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[276].fileTimeLo = 1346531988U;
  info[276].fileTimeHi = 0U;
  info[276].mFileTimeLo = 0U;
  info[276].mFileTimeHi = 0U;
  info[277].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[277].name = "isequal";
  info[277].dominantType = "double";
  info[277].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[277].fileTimeLo = 1286840358U;
  info[277].fileTimeHi = 0U;
  info[277].mFileTimeLo = 0U;
  info[277].mFileTimeHi = 0U;
  info[278].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar";
  info[278].name = "isnan";
  info[278].dominantType = "double";
  info[278].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[278].fileTimeLo = 1286840360U;
  info[278].fileTimeHi = 0U;
  info[278].mFileTimeLo = 0U;
  info[278].mFileTimeHi = 0U;
  info[279].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[279].name = "max";
  info[279].dominantType = "double";
  info[279].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[279].fileTimeLo = 1311276916U;
  info[279].fileTimeHi = 0U;
  info[279].mFileTimeLo = 0U;
  info[279].mFileTimeHi = 0U;
  info[280].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[280].name = "eml_const_nonsingleton_dim";
  info[280].dominantType = "double";
  info[280].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[280].fileTimeLo = 1286840296U;
  info[280].fileTimeHi = 0U;
  info[280].mFileTimeLo = 0U;
  info[280].mFileTimeHi = 0U;
  info[281].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[281].name = "eml_scalar_eg";
  info[281].dominantType = "double";
  info[281].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[281].fileTimeLo = 1286840396U;
  info[281].fileTimeHi = 0U;
  info[281].mFileTimeLo = 0U;
  info[281].mFileTimeHi = 0U;
  info[282].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[282].name = "eml_index_class";
  info[282].dominantType = "";
  info[282].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[282].fileTimeLo = 1323192178U;
  info[282].fileTimeHi = 0U;
  info[282].mFileTimeLo = 0U;
  info[282].mFileTimeHi = 0U;
  info[283].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[283].name = "eml_index_class";
  info[283].dominantType = "";
  info[283].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[283].fileTimeLo = 1323192178U;
  info[283].fileTimeHi = 0U;
  info[283].mFileTimeLo = 0U;
  info[283].mFileTimeHi = 0U;
  info[284].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[284].name = "isnan";
  info[284].dominantType = "double";
  info[284].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[284].fileTimeLo = 1286840360U;
  info[284].fileTimeHi = 0U;
  info[284].mFileTimeLo = 0U;
  info[284].mFileTimeHi = 0U;
  info[285].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[285].name = "eml_index_plus";
  info[285].dominantType = "coder.internal.indexInt";
  info[285].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[285].fileTimeLo = 1286840378U;
  info[285].fileTimeHi = 0U;
  info[285].mFileTimeLo = 0U;
  info[285].mFileTimeHi = 0U;
  info[286].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[286].name = "eml_int_forloop_overflow_check";
  info[286].dominantType = "";
  info[286].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[286].fileTimeLo = 1346531940U;
  info[286].fileTimeHi = 0U;
  info[286].mFileTimeLo = 0U;
  info[286].mFileTimeHi = 0U;
  info[287].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[287].name = "eml_relop";
  info[287].dominantType = "function_handle";
  info[287].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[287].fileTimeLo = 1342472782U;
  info[287].fileTimeHi = 0U;
  info[287].mFileTimeLo = 0U;
  info[287].mFileTimeHi = 0U;
  info[288].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[288].name = "mtimes";
  info[288].dominantType = "double";
  info[288].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[288].fileTimeLo = 1289541292U;
  info[288].fileTimeHi = 0U;
  info[288].mFileTimeLo = 0U;
  info[288].mFileTimeHi = 0U;
  info[289].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[289].name = "find";
  info[289].dominantType = "logical";
  info[289].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[289].fileTimeLo = 1303167806U;
  info[289].fileTimeHi = 0U;
  info[289].mFileTimeLo = 0U;
  info[289].mFileTimeHi = 0U;
  info[290].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[290].name = "mrdivide";
  info[290].dominantType = "double";
  info[290].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[290].fileTimeLo = 1357973148U;
  info[290].fileTimeHi = 0U;
  info[290].mFileTimeLo = 1319751566U;
  info[290].mFileTimeHi = 0U;
  info[291].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[291].name = "colon";
  info[291].dominantType = "double";
  info[291].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[291].fileTimeLo = 1348213528U;
  info[291].fileTimeHi = 0U;
  info[291].mFileTimeLo = 0U;
  info[291].mFileTimeHi = 0U;
  info[292].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[292].name = "length";
  info[292].dominantType = "double";
  info[292].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[292].fileTimeLo = 1303167806U;
  info[292].fileTimeHi = 0U;
  info[292].mFileTimeLo = 0U;
  info[292].mFileTimeHi = 0U;
  info[293].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[293].name = "intersect";
  info[293].dominantType = "double";
  info[293].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/intersect.m";
  info[293].fileTimeLo = 1344493638U;
  info[293].fileTimeHi = 0U;
  info[293].mFileTimeLo = 0U;
  info[293].mFileTimeHi = 0U;
  info[294].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/intersect.m";
  info[294].name = "eml_setop";
  info[294].dominantType = "char";
  info[294].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m";
  info[294].fileTimeLo = 1344493638U;
  info[294].fileTimeHi = 0U;
  info[294].mFileTimeLo = 0U;
  info[294].mFileTimeHi = 0U;
  info[295].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!parse_flags";
  info[295].name = "upper";
  info[295].dominantType = "char";
  info[295].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/upper.m";
  info[295].fileTimeLo = 1327440710U;
  info[295].fileTimeHi = 0U;
  info[295].mFileTimeLo = 0U;
  info[295].mFileTimeHi = 0U;
  info[296].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/upper.m";
  info[296].name = "eml_string_transform";
  info[296].dominantType = "char";
  info[296].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[296].fileTimeLo = 1327440710U;
  info[296].fileTimeHi = 0U;
  info[296].mFileTimeLo = 0U;
  info[296].mFileTimeHi = 0U;
  info[297].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[297].name = "eml_assert_supported_string";
  info[297].dominantType = "char";
  info[297].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m";
  info[297].fileTimeLo = 1327440710U;
  info[297].fileTimeHi = 0U;
  info[297].mFileTimeLo = 0U;
  info[297].mFileTimeHi = 0U;
  info[298].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m!inrange";
  info[298].name = "eml_charmax";
  info[298].dominantType = "";
  info[298].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m";
  info[298].fileTimeLo = 1327440710U;
  info[298].fileTimeHi = 0U;
  info[298].mFileTimeLo = 0U;
  info[298].mFileTimeHi = 0U;
  info[299].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m";
  info[299].name = "intmax";
  info[299].dominantType = "char";
  info[299].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[299].fileTimeLo = 1311276916U;
  info[299].fileTimeHi = 0U;
  info[299].mFileTimeLo = 0U;
  info[299].mFileTimeHi = 0U;
  info[300].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[300].name = "eml_charmax";
  info[300].dominantType = "";
  info[300].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m";
  info[300].fileTimeLo = 1327440710U;
  info[300].fileTimeHi = 0U;
  info[300].mFileTimeLo = 0U;
  info[300].mFileTimeHi = 0U;
  info[301].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[301].name = "colon";
  info[301].dominantType = "int8";
  info[301].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[301].fileTimeLo = 1348213528U;
  info[301].fileTimeHi = 0U;
  info[301].mFileTimeLo = 0U;
  info[301].mFileTimeHi = 0U;
  info[302].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[302].name = "colon";
  info[302].dominantType = "int8";
  info[302].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[302].fileTimeLo = 1348213528U;
  info[302].fileTimeHi = 0U;
  info[302].mFileTimeLo = 0U;
  info[302].mFileTimeHi = 0U;
  info[303].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[303].name = "floor";
  info[303].dominantType = "double";
  info[303].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[303].fileTimeLo = 1343851980U;
  info[303].fileTimeHi = 0U;
  info[303].mFileTimeLo = 0U;
  info[303].mFileTimeHi = 0U;
  info[304].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[304].name = "intmin";
  info[304].dominantType = "char";
  info[304].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[304].fileTimeLo = 1311276918U;
  info[304].fileTimeHi = 0U;
  info[304].mFileTimeLo = 0U;
  info[304].mFileTimeHi = 0U;
  info[305].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[305].name = "intmax";
  info[305].dominantType = "char";
  info[305].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[305].fileTimeLo = 1311276916U;
  info[305].fileTimeHi = 0U;
  info[305].mFileTimeLo = 0U;
  info[305].mFileTimeHi = 0U;
  info[306].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[306].name = "intmin";
  info[306].dominantType = "char";
  info[306].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[306].fileTimeLo = 1311276918U;
  info[306].fileTimeHi = 0U;
  info[306].mFileTimeLo = 0U;
  info[306].mFileTimeHi = 0U;
  info[307].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[307].name = "intmax";
  info[307].dominantType = "char";
  info[307].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[307].fileTimeLo = 1311276916U;
  info[307].fileTimeHi = 0U;
  info[307].mFileTimeLo = 0U;
  info[307].mFileTimeHi = 0U;
  info[308].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[308].name = "eml_isa_uint";
  info[308].dominantType = "int8";
  info[308].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  info[308].fileTimeLo = 1286840384U;
  info[308].fileTimeHi = 0U;
  info[308].mFileTimeLo = 0U;
  info[308].mFileTimeHi = 0U;
  info[309].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[309].name = "eml_unsigned_class";
  info[309].dominantType = "char";
  info[309].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[309].fileTimeLo = 1323192180U;
  info[309].fileTimeHi = 0U;
  info[309].mFileTimeLo = 0U;
  info[309].mFileTimeHi = 0U;
  info[310].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[310].name = "eml_index_class";
  info[310].dominantType = "";
  info[310].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[310].fileTimeLo = 1323192178U;
  info[310].fileTimeHi = 0U;
  info[310].mFileTimeLo = 0U;
  info[310].mFileTimeHi = 0U;
  info[311].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[311].name = "intmax";
  info[311].dominantType = "char";
  info[311].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[311].fileTimeLo = 1311276916U;
  info[311].fileTimeHi = 0U;
  info[311].mFileTimeLo = 0U;
  info[311].mFileTimeHi = 0U;
  info[312].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[312].name = "eml_isa_uint";
  info[312].dominantType = "int8";
  info[312].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  info[312].fileTimeLo = 1286840384U;
  info[312].fileTimeHi = 0U;
  info[312].mFileTimeLo = 0U;
  info[312].mFileTimeHi = 0U;
  info[313].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[313].name = "eml_index_plus";
  info[313].dominantType = "double";
  info[313].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[313].fileTimeLo = 1286840378U;
  info[313].fileTimeHi = 0U;
  info[313].mFileTimeLo = 0U;
  info[313].mFileTimeHi = 0U;
  info[314].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_signed_integer_colon";
  info[314].name = "eml_int_forloop_overflow_check";
  info[314].dominantType = "";
  info[314].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[314].fileTimeLo = 1346531940U;
  info[314].fileTimeHi = 0U;
  info[314].mFileTimeLo = 0U;
  info[314].mFileTimeHi = 0U;
  info[315].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[315].name = "char";
  info[315].dominantType = "int8";
  info[315].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[315].fileTimeLo = 1319751568U;
  info[315].fileTimeHi = 0U;
  info[315].mFileTimeLo = 0U;
  info[315].mFileTimeHi = 0U;
  info[316].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[316].name = "eml_index_class";
  info[316].dominantType = "";
  info[316].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[316].fileTimeLo = 1323192178U;
  info[316].fileTimeHi = 0U;
  info[316].mFileTimeLo = 0U;
  info[316].mFileTimeHi = 0U;
  info[317].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[317].name = "eml_scalar_eg";
  info[317].dominantType = "double";
  info[317].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[317].fileTimeLo = 1286840396U;
  info[317].fileTimeHi = 0U;
  info[317].mFileTimeLo = 0U;
  info[317].mFileTimeHi = 0U;
  info[318].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[318].name = "min";
  info[318].dominantType = "coder.internal.indexInt";
  info[318].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[318].fileTimeLo = 1311276918U;
  info[318].fileTimeHi = 0U;
  info[318].mFileTimeLo = 0U;
  info[318].mFileTimeHi = 0U;
  info[319].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[319].name = "eml_scalar_eg";
  info[319].dominantType = "coder.internal.indexInt";
  info[319].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[319].fileTimeLo = 1286840396U;
  info[319].fileTimeHi = 0U;
  info[319].mFileTimeLo = 0U;
  info[319].mFileTimeHi = 0U;
}

static void f_info_helper(ResolvedFunctionInfo info[567])
{
  info[320].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[320].name = "eml_scalexp_alloc";
  info[320].dominantType = "coder.internal.indexInt";
  info[320].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[320].fileTimeLo = 1352446460U;
  info[320].fileTimeHi = 0U;
  info[320].mFileTimeLo = 0U;
  info[320].mFileTimeHi = 0U;
  info[321].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[321].name = "eml_scalar_eg";
  info[321].dominantType = "coder.internal.indexInt";
  info[321].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[321].fileTimeLo = 1286840396U;
  info[321].fileTimeHi = 0U;
  info[321].mFileTimeLo = 0U;
  info[321].mFileTimeHi = 0U;
  info[322].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[322].name = "issorted";
  info[322].dominantType = "double";
  info[322].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[322].fileTimeLo = 1286840294U;
  info[322].fileTimeHi = 0U;
  info[322].mFileTimeLo = 0U;
  info[322].mFileTimeHi = 0U;
  info[323].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[323].name = "eml_index_minus";
  info[323].dominantType = "double";
  info[323].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[323].fileTimeLo = 1286840378U;
  info[323].fileTimeHi = 0U;
  info[323].mFileTimeLo = 0U;
  info[323].mFileTimeHi = 0U;
  info[324].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[324].name = "eml_int_forloop_overflow_check";
  info[324].dominantType = "";
  info[324].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[324].fileTimeLo = 1346531940U;
  info[324].fileTimeHi = 0U;
  info[324].mFileTimeLo = 0U;
  info[324].mFileTimeHi = 0U;
  info[325].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[325].name = "eml_index_plus";
  info[325].dominantType = "double";
  info[325].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[325].fileTimeLo = 1286840378U;
  info[325].fileTimeHi = 0U;
  info[325].mFileTimeLo = 0U;
  info[325].mFileTimeHi = 0U;
  info[326].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[326].name = "eml_sort_le";
  info[326].dominantType = "double";
  info[326].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m";
  info[326].fileTimeLo = 1292212110U;
  info[326].fileTimeHi = 0U;
  info[326].mFileTimeLo = 0U;
  info[326].mFileTimeHi = 0U;
  info[327].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[327].name = "eml_error";
  info[327].dominantType = "char";
  info[327].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[327].fileTimeLo = 1343851958U;
  info[327].fileTimeHi = 0U;
  info[327].mFileTimeLo = 0U;
  info[327].mFileTimeHi = 0U;
  info[328].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!skip_to_last_equal_value";
  info[328].name = "eml_index_class";
  info[328].dominantType = "";
  info[328].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[328].fileTimeLo = 1323192178U;
  info[328].fileTimeHi = 0U;
  info[328].mFileTimeLo = 0U;
  info[328].mFileTimeHi = 0U;
  info[329].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!skip_to_last_equal_value";
  info[329].name = "eml_index_plus";
  info[329].dominantType = "double";
  info[329].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[329].fileTimeLo = 1286840378U;
  info[329].fileTimeHi = 0U;
  info[329].mFileTimeLo = 0U;
  info[329].mFileTimeHi = 0U;
  info[330].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!skip_to_last_equal_value";
  info[330].name = "eml_safe_eq";
  info[330].dominantType = "double";
  info[330].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[330].fileTimeLo = 1348213518U;
  info[330].fileTimeHi = 0U;
  info[330].mFileTimeLo = 0U;
  info[330].mFileTimeHi = 0U;
  info[331].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[331].name = "eml_safe_eq";
  info[331].dominantType = "double";
  info[331].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[331].fileTimeLo = 1348213518U;
  info[331].fileTimeHi = 0U;
  info[331].mFileTimeLo = 0U;
  info[331].mFileTimeHi = 0U;
  info[332].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[332].name = "eml_index_plus";
  info[332].dominantType = "double";
  info[332].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[332].fileTimeLo = 1286840378U;
  info[332].fileTimeHi = 0U;
  info[332].mFileTimeLo = 0U;
  info[332].mFileTimeHi = 0U;
  info[333].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[333].name = "eml_sort_lt";
  info[333].dominantType = "double";
  info[333].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_lt.m";
  info[333].fileTimeLo = 1292212110U;
  info[333].fileTimeHi = 0U;
  info[333].mFileTimeLo = 0U;
  info[333].mFileTimeHi = 0U;
  info[334].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_lt.m";
  info[334].name = "eml_relop";
  info[334].dominantType = "function_handle";
  info[334].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[334].fileTimeLo = 1342472782U;
  info[334].fileTimeHi = 0U;
  info[334].mFileTimeLo = 0U;
  info[334].mFileTimeHi = 0U;
  info[335].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_lt.m";
  info[335].name = "isnan";
  info[335].dominantType = "double";
  info[335].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[335].fileTimeLo = 1286840360U;
  info[335].fileTimeHi = 0U;
  info[335].mFileTimeLo = 0U;
  info[335].mFileTimeHi = 0U;
  info[336].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[336].name = "eml_li_find";
  info[336].dominantType = "";
  info[336].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[336].fileTimeLo = 1286840386U;
  info[336].fileTimeHi = 0U;
  info[336].mFileTimeLo = 0U;
  info[336].mFileTimeHi = 0U;
  info[337].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[337].name = "eml_index_class";
  info[337].dominantType = "";
  info[337].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[337].fileTimeLo = 1323192178U;
  info[337].fileTimeHi = 0U;
  info[337].mFileTimeLo = 0U;
  info[337].mFileTimeHi = 0U;
  info[338].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m!compute_nones";
  info[338].name = "eml_index_class";
  info[338].dominantType = "";
  info[338].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[338].fileTimeLo = 1323192178U;
  info[338].fileTimeHi = 0U;
  info[338].mFileTimeLo = 0U;
  info[338].mFileTimeHi = 0U;
  info[339].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m!compute_nones";
  info[339].name = "eml_int_forloop_overflow_check";
  info[339].dominantType = "";
  info[339].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[339].fileTimeLo = 1346531940U;
  info[339].fileTimeHi = 0U;
  info[339].mFileTimeLo = 0U;
  info[339].mFileTimeHi = 0U;
  info[340].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m!compute_nones";
  info[340].name = "eml_index_plus";
  info[340].dominantType = "double";
  info[340].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[340].fileTimeLo = 1286840378U;
  info[340].fileTimeHi = 0U;
  info[340].mFileTimeLo = 0U;
  info[340].mFileTimeHi = 0U;
  info[341].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[341].name = "eml_int_forloop_overflow_check";
  info[341].dominantType = "";
  info[341].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[341].fileTimeLo = 1346531940U;
  info[341].fileTimeHi = 0U;
  info[341].mFileTimeLo = 0U;
  info[341].mFileTimeHi = 0U;
  info[342].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[342].name = "eml_index_plus";
  info[342].dominantType = "double";
  info[342].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[342].fileTimeLo = 1286840378U;
  info[342].fileTimeHi = 0U;
  info[342].mFileTimeLo = 0U;
  info[342].mFileTimeHi = 0U;
  info[343].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[343].name = "length";
  info[343].dominantType = "double";
  info[343].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[343].fileTimeLo = 1303167806U;
  info[343].fileTimeHi = 0U;
  info[343].mFileTimeLo = 0U;
  info[343].mFileTimeHi = 0U;
  info[344].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[344].name = "coarseOFDMFreqEst_sdr";
  info[344].dominantType = "struct";
  info[344].resolved =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m";
  info[344].fileTimeLo = 1382979881U;
  info[344].fileTimeHi = 0U;
  info[344].mFileTimeLo = 0U;
  info[344].mFileTimeHi = 0U;
  info[345].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m";
  info[345].name = "mrdivide";
  info[345].dominantType = "double";
  info[345].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[345].fileTimeLo = 1357973148U;
  info[345].fileTimeHi = 0U;
  info[345].mFileTimeLo = 1319751566U;
  info[345].mFileTimeHi = 0U;
  info[346].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m";
  info[346].name = "mtimes";
  info[346].dominantType = "double";
  info[346].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[346].fileTimeLo = 1289541292U;
  info[346].fileTimeHi = 0U;
  info[346].mFileTimeLo = 0U;
  info[346].mFileTimeHi = 0U;
  info[347].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m";
  info[347].name = "sum";
  info[347].dominantType = "double";
  info[347].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[347].fileTimeLo = 1314758212U;
  info[347].fileTimeHi = 0U;
  info[347].mFileTimeLo = 0U;
  info[347].mFileTimeHi = 0U;
  info[348].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m";
  info[348].name = "angle";
  info[348].dominantType = "double";
  info[348].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/angle.m";
  info[348].fileTimeLo = 1343851970U;
  info[348].fileTimeHi = 0U;
  info[348].mFileTimeLo = 0U;
  info[348].mFileTimeHi = 0U;
  info[349].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/angle.m";
  info[349].name = "eml_scalar_angle";
  info[349].dominantType = "double";
  info[349].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_angle.m";
  info[349].fileTimeLo = 1286840316U;
  info[349].fileTimeHi = 0U;
  info[349].mFileTimeLo = 0U;
  info[349].mFileTimeHi = 0U;
  info[350].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_angle.m";
  info[350].name = "eml_scalar_atan2";
  info[350].dominantType = "double";
  info[350].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_atan2.m";
  info[350].fileTimeLo = 1286840320U;
  info[350].fileTimeHi = 0U;
  info[350].mFileTimeLo = 0U;
  info[350].mFileTimeHi = 0U;
  info[351].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[351].name = "mean";
  info[351].dominantType = "double";
  info[351].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[351].fileTimeLo = 1286840294U;
  info[351].fileTimeHi = 0U;
  info[351].mFileTimeLo = 0U;
  info[351].mFileTimeHi = 0U;
  info[352].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[352].name = "mrdivide";
  info[352].dominantType = "double";
  info[352].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[352].fileTimeLo = 1357973148U;
  info[352].fileTimeHi = 0U;
  info[352].mFileTimeLo = 1319751566U;
  info[352].mFileTimeHi = 0U;
  info[353].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[353].name = "length";
  info[353].dominantType = "double";
  info[353].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[353].fileTimeLo = 1303167806U;
  info[353].fileTimeHi = 0U;
  info[353].mFileTimeLo = 0U;
  info[353].mFileTimeHi = 0U;
  info[354].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[354].name = "colon";
  info[354].dominantType = "double";
  info[354].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[354].fileTimeLo = 1348213528U;
  info[354].fileTimeHi = 0U;
  info[354].mFileTimeLo = 0U;
  info[354].mFileTimeHi = 0U;
  info[355].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[355].name = "isnan";
  info[355].dominantType = "double";
  info[355].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[355].fileTimeLo = 1286840360U;
  info[355].fileTimeHi = 0U;
  info[355].mFileTimeLo = 0U;
  info[355].mFileTimeHi = 0U;
  info[356].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[356].name = "isinf";
  info[356].dominantType = "double";
  info[356].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[356].fileTimeLo = 1286840360U;
  info[356].fileTimeHi = 0U;
  info[356].mFileTimeLo = 0U;
  info[356].mFileTimeHi = 0U;
  info[357].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[357].name = "floor";
  info[357].dominantType = "double";
  info[357].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[357].fileTimeLo = 1343851980U;
  info[357].fileTimeHi = 0U;
  info[357].mFileTimeLo = 0U;
  info[357].mFileTimeHi = 0U;
  info[358].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[358].name = "mtimes";
  info[358].dominantType = "double";
  info[358].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[358].fileTimeLo = 1289541292U;
  info[358].fileTimeHi = 0U;
  info[358].mFileTimeLo = 0U;
  info[358].mFileTimeHi = 0U;
  info[359].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[359].name = "abs";
  info[359].dominantType = "double";
  info[359].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[359].fileTimeLo = 1343851966U;
  info[359].fileTimeHi = 0U;
  info[359].mFileTimeLo = 0U;
  info[359].mFileTimeHi = 0U;
  info[360].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[360].name = "eps";
  info[360].dominantType = "char";
  info[360].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[360].fileTimeLo = 1326749596U;
  info[360].fileTimeHi = 0U;
  info[360].mFileTimeLo = 0U;
  info[360].mFileTimeHi = 0U;
  info[361].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[361].name = "eml_index_class";
  info[361].dominantType = "";
  info[361].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[361].fileTimeLo = 1323192178U;
  info[361].fileTimeHi = 0U;
  info[361].mFileTimeLo = 0U;
  info[361].mFileTimeHi = 0U;
  info[362].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[362].name = "intmax";
  info[362].dominantType = "char";
  info[362].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[362].fileTimeLo = 1311276916U;
  info[362].fileTimeHi = 0U;
  info[362].mFileTimeLo = 0U;
  info[362].mFileTimeHi = 0U;
  info[363].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[363].name = "coder.internal.indexIntRelop";
  info[363].dominantType = "";
  info[363].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[363].fileTimeLo = 1326749922U;
  info[363].fileTimeHi = 0U;
  info[363].mFileTimeLo = 0U;
  info[363].mFileTimeHi = 0U;
  info[364].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass";
  info[364].name = "eml_float_model";
  info[364].dominantType = "char";
  info[364].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[364].fileTimeLo = 1326749596U;
  info[364].fileTimeHi = 0U;
  info[364].mFileTimeLo = 0U;
  info[364].mFileTimeHi = 0U;
  info[365].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass";
  info[365].name = "intmin";
  info[365].dominantType = "char";
  info[365].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[365].fileTimeLo = 1311276918U;
  info[365].fileTimeHi = 0U;
  info[365].mFileTimeLo = 0U;
  info[365].mFileTimeHi = 0U;
  info[366].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[366].name = "eml_index_minus";
  info[366].dominantType = "double";
  info[366].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[366].fileTimeLo = 1286840378U;
  info[366].fileTimeHi = 0U;
  info[366].mFileTimeLo = 0U;
  info[366].mFileTimeHi = 0U;
  info[367].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[367].name = "eml_index_rdivide";
  info[367].dominantType = "double";
  info[367].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[367].fileTimeLo = 1286840380U;
  info[367].fileTimeHi = 0U;
  info[367].mFileTimeLo = 0U;
  info[367].mFileTimeHi = 0U;
  info[368].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[368].name = "eml_index_class";
  info[368].dominantType = "";
  info[368].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[368].fileTimeLo = 1323192178U;
  info[368].fileTimeHi = 0U;
  info[368].mFileTimeLo = 0U;
  info[368].mFileTimeHi = 0U;
  info[369].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[369].name = "eml_int_forloop_overflow_check";
  info[369].dominantType = "";
  info[369].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[369].fileTimeLo = 1346531940U;
  info[369].fileTimeHi = 0U;
  info[369].mFileTimeLo = 0U;
  info[369].mFileTimeHi = 0U;
  info[370].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[370].name = "mtimes";
  info[370].dominantType = "double";
  info[370].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[370].fileTimeLo = 1289541292U;
  info[370].fileTimeHi = 0U;
  info[370].mFileTimeLo = 0U;
  info[370].mFileTimeHi = 0U;
  info[371].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[371].name = "eml_index_times";
  info[371].dominantType = "double";
  info[371].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[371].fileTimeLo = 1286840380U;
  info[371].fileTimeHi = 0U;
  info[371].mFileTimeLo = 0U;
  info[371].mFileTimeHi = 0U;
  info[372].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[372].name = "eml_index_plus";
  info[372].dominantType = "double";
  info[372].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[372].fileTimeLo = 1286840378U;
  info[372].fileTimeHi = 0U;
  info[372].mFileTimeLo = 0U;
  info[372].mFileTimeHi = 0U;
  info[373].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[373].name = "eml_index_minus";
  info[373].dominantType = "coder.internal.indexInt";
  info[373].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[373].fileTimeLo = 1286840378U;
  info[373].fileTimeHi = 0U;
  info[373].mFileTimeLo = 0U;
  info[373].mFileTimeHi = 0U;
  info[374].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[374].name = "mtimes";
  info[374].dominantType = "double";
  info[374].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[374].fileTimeLo = 1289541292U;
  info[374].fileTimeHi = 0U;
  info[374].mFileTimeLo = 0U;
  info[374].mFileTimeHi = 0U;
  info[375].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[375].name = "exp";
  info[375].dominantType = "double";
  info[375].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m";
  info[375].fileTimeLo = 1343851980U;
  info[375].fileTimeHi = 0U;
  info[375].mFileTimeLo = 0U;
  info[375].mFileTimeHi = 0U;
  info[376].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m";
  info[376].name = "eml_scalar_exp";
  info[376].dominantType = "double";
  info[376].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  info[376].fileTimeLo = 1301350064U;
  info[376].fileTimeHi = 0U;
  info[376].mFileTimeLo = 0U;
  info[376].mFileTimeHi = 0U;
  info[377].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  info[377].name = "mrdivide";
  info[377].dominantType = "double";
  info[377].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[377].fileTimeLo = 1357973148U;
  info[377].fileTimeHi = 0U;
  info[377].mFileTimeLo = 1319751566U;
  info[377].mFileTimeHi = 0U;
  info[378].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[378].name = "equalizeOFDM";
  info[378].dominantType = "OFDMDemodulator";
  info[378].resolved =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m";
  info[378].fileTimeLo = 1382979881U;
  info[378].fileTimeHi = 0U;
  info[378].mFileTimeLo = 0U;
  info[378].mFileTimeHi = 0U;
  info[379].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m";
  info[379].name = "length";
  info[379].dominantType = "double";
  info[379].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[379].fileTimeLo = 1303167806U;
  info[379].fileTimeHi = 0U;
  info[379].mFileTimeLo = 0U;
  info[379].mFileTimeHi = 0U;
  info[380].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m";
  info[380].name = "mtimes";
  info[380].dominantType = "double";
  info[380].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[380].fileTimeLo = 1289541292U;
  info[380].fileTimeHi = 0U;
  info[380].mFileTimeLo = 0U;
  info[380].mFileTimeHi = 0U;
  info[381].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[381].name = "any";
  info[381].dominantType = "logical";
  info[381].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[381].fileTimeLo = 1286840434U;
  info[381].fileTimeHi = 0U;
  info[381].mFileTimeLo = 0U;
  info[381].mFileTimeHi = 0U;
  info[382].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[382].name = "sum";
  info[382].dominantType = "double";
  info[382].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[382].fileTimeLo = 1314758212U;
  info[382].fileTimeHi = 0U;
  info[382].mFileTimeLo = 0U;
  info[382].mFileTimeHi = 0U;
  info[383].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[383].name = "colon";
  info[383].dominantType = "double";
  info[383].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[383].fileTimeLo = 1348213528U;
  info[383].fileTimeHi = 0U;
  info[383].mFileTimeLo = 0U;
  info[383].mFileTimeHi = 0U;
}

static void g_info_helper(ResolvedFunctionInfo info[567])
{
  info[384].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[384].name = "find";
  info[384].dominantType = "logical";
  info[384].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[384].fileTimeLo = 1303167806U;
  info[384].fileTimeHi = 0U;
  info[384].mFileTimeLo = 0U;
  info[384].mFileTimeHi = 0U;
  info[385].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[385].name = "reshape";
  info[385].dominantType = "double";
  info[385].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[385].fileTimeLo = 1286840368U;
  info[385].fileTimeHi = 0U;
  info[385].mFileTimeLo = 0U;
  info[385].mFileTimeHi = 0U;
  info[386].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[386].name = "eml_index_class";
  info[386].dominantType = "";
  info[386].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[386].fileTimeLo = 1323192178U;
  info[386].fileTimeHi = 0U;
  info[386].mFileTimeLo = 0U;
  info[386].mFileTimeHi = 0U;
  info[387].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[387].name = "eml_index_class";
  info[387].dominantType = "";
  info[387].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[387].fileTimeLo = 1323192178U;
  info[387].fileTimeHi = 0U;
  info[387].mFileTimeLo = 0U;
  info[387].mFileTimeHi = 0U;
  info[388].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[388].name = "eml_assert_valid_size_arg";
  info[388].dominantType = "double";
  info[388].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[388].fileTimeLo = 1286840294U;
  info[388].fileTimeHi = 0U;
  info[388].mFileTimeLo = 0U;
  info[388].mFileTimeHi = 0U;
  info[389].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[389].name = "eml_scalar_eg";
  info[389].dominantType = "double";
  info[389].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[389].fileTimeLo = 1286840396U;
  info[389].fileTimeHi = 0U;
  info[389].mFileTimeLo = 0U;
  info[389].mFileTimeHi = 0U;
  info[390].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[390].name = "eml_int_forloop_overflow_check";
  info[390].dominantType = "";
  info[390].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[390].fileTimeLo = 1346531940U;
  info[390].fileTimeHi = 0U;
  info[390].mFileTimeLo = 0U;
  info[390].mFileTimeHi = 0U;
  info[391].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[391].name = "fft";
  info[391].dominantType = "double";
  info[391].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fft.m";
  info[391].fileTimeLo = 1286840288U;
  info[391].fileTimeHi = 0U;
  info[391].mFileTimeLo = 0U;
  info[391].mFileTimeHi = 0U;
  info[392].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fft.m";
  info[392].name = "eml_fft";
  info[392].dominantType = "char";
  info[392].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[392].fileTimeLo = 1286840374U;
  info[392].fileTimeHi = 0U;
  info[392].mFileTimeLo = 0U;
  info[392].mFileTimeHi = 0U;
  info[393].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[393].name = "eml_assert_valid_dim";
  info[393].dominantType = "double";
  info[393].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[393].fileTimeLo = 1286840294U;
  info[393].fileTimeHi = 0U;
  info[393].mFileTimeLo = 0U;
  info[393].mFileTimeHi = 0U;
  info[394].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[394].name = "eml_index_class";
  info[394].dominantType = "";
  info[394].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[394].fileTimeLo = 1323192178U;
  info[394].fileTimeHi = 0U;
  info[394].mFileTimeLo = 0U;
  info[394].mFileTimeHi = 0U;
  info[395].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[395].name = "eml_unsigned_class";
  info[395].dominantType = "char";
  info[395].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[395].fileTimeLo = 1323192180U;
  info[395].fileTimeHi = 0U;
  info[395].mFileTimeLo = 0U;
  info[395].mFileTimeHi = 0U;
  info[396].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[396].name = "eml_size_ispow2";
  info[396].dominantType = "coder.internal.indexInt";
  info[396].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[396].fileTimeLo = 1286840398U;
  info[396].fileTimeHi = 0U;
  info[396].mFileTimeLo = 0U;
  info[396].mFileTimeHi = 0U;
  info[397].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[397].name = "eml_scalar_eg";
  info[397].dominantType = "double";
  info[397].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[397].fileTimeLo = 1286840396U;
  info[397].fileTimeHi = 0U;
  info[397].mFileTimeLo = 0U;
  info[397].mFileTimeHi = 0U;
  info[398].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[398].name = "eml_index_class";
  info[398].dominantType = "";
  info[398].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[398].fileTimeLo = 1323192178U;
  info[398].fileTimeHi = 0U;
  info[398].mFileTimeLo = 0U;
  info[398].mFileTimeHi = 0U;
  info[399].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[399].name = "min";
  info[399].dominantType = "double";
  info[399].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[399].fileTimeLo = 1311276918U;
  info[399].fileTimeHi = 0U;
  info[399].mFileTimeLo = 0U;
  info[399].mFileTimeHi = 0U;
  info[400].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[400].name = "eml_relop";
  info[400].dominantType = "function_handle";
  info[400].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[400].fileTimeLo = 1342472782U;
  info[400].fileTimeHi = 0U;
  info[400].mFileTimeLo = 0U;
  info[400].mFileTimeHi = 0U;
  info[401].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[401].name = "coder.internal.indexIntRelop";
  info[401].dominantType = "";
  info[401].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[401].fileTimeLo = 1326749922U;
  info[401].fileTimeHi = 0U;
  info[401].mFileTimeLo = 0U;
  info[401].mFileTimeHi = 0U;
  info[402].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[402].name = "isnan";
  info[402].dominantType = "double";
  info[402].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[402].fileTimeLo = 1286840360U;
  info[402].fileTimeHi = 0U;
  info[402].mFileTimeLo = 0U;
  info[402].mFileTimeHi = 0U;
  info[403].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[403].name = "eml_index_minus";
  info[403].dominantType = "double";
  info[403].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[403].fileTimeLo = 1286840378U;
  info[403].fileTimeHi = 0U;
  info[403].mFileTimeLo = 0U;
  info[403].mFileTimeHi = 0U;
  info[404].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[404].name = "max";
  info[404].dominantType = "coder.internal.indexInt";
  info[404].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[404].fileTimeLo = 1311276916U;
  info[404].fileTimeHi = 0U;
  info[404].mFileTimeLo = 0U;
  info[404].mFileTimeHi = 0U;
  info[405].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[405].name = "eml_index_minus";
  info[405].dominantType = "coder.internal.indexInt";
  info[405].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[405].fileTimeLo = 1286840378U;
  info[405].fileTimeHi = 0U;
  info[405].mFileTimeLo = 0U;
  info[405].mFileTimeHi = 0U;
  info[406].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[406].name = "eml_index_rdivide";
  info[406].dominantType = "coder.internal.indexInt";
  info[406].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[406].fileTimeLo = 1286840380U;
  info[406].fileTimeHi = 0U;
  info[406].mFileTimeLo = 0U;
  info[406].mFileTimeHi = 0U;
  info[407].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[407].name = "eml_index_rdivide";
  info[407].dominantType = "double";
  info[407].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[407].fileTimeLo = 1286840380U;
  info[407].fileTimeHi = 0U;
  info[407].mFileTimeLo = 0U;
  info[407].mFileTimeHi = 0U;
  info[408].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[408].name = "eml_index_times";
  info[408].dominantType = "coder.internal.indexInt";
  info[408].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[408].fileTimeLo = 1286840380U;
  info[408].fileTimeHi = 0U;
  info[408].mFileTimeLo = 0U;
  info[408].mFileTimeHi = 0U;
  info[409].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[409].name = "mtimes";
  info[409].dominantType = "double";
  info[409].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[409].fileTimeLo = 1289541292U;
  info[409].fileTimeHi = 0U;
  info[409].mFileTimeLo = 0U;
  info[409].mFileTimeHi = 0U;
  info[410].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[410].name = "mrdivide";
  info[410].dominantType = "double";
  info[410].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[410].fileTimeLo = 1357973148U;
  info[410].fileTimeHi = 0U;
  info[410].mFileTimeLo = 1319751566U;
  info[410].mFileTimeHi = 0U;
  info[411].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[411].name = "eml_index_plus";
  info[411].dominantType = "double";
  info[411].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[411].fileTimeLo = 1286840378U;
  info[411].fileTimeHi = 0U;
  info[411].mFileTimeLo = 0U;
  info[411].mFileTimeHi = 0U;
  info[412].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[412].name = "eml_index_rdivide";
  info[412].dominantType = "double";
  info[412].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[412].fileTimeLo = 1286840380U;
  info[412].fileTimeHi = 0U;
  info[412].mFileTimeLo = 0U;
  info[412].mFileTimeHi = 0U;
  info[413].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[413].name = "eml_int_forloop_overflow_check";
  info[413].dominantType = "";
  info[413].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[413].fileTimeLo = 1346531940U;
  info[413].fileTimeHi = 0U;
  info[413].mFileTimeLo = 0U;
  info[413].mFileTimeHi = 0U;
  info[414].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[414].name = "mtimes";
  info[414].dominantType = "double";
  info[414].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[414].fileTimeLo = 1289541292U;
  info[414].fileTimeHi = 0U;
  info[414].mFileTimeLo = 0U;
  info[414].mFileTimeHi = 0U;
  info[415].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[415].name = "cos";
  info[415].dominantType = "double";
  info[415].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[415].fileTimeLo = 1343851972U;
  info[415].fileTimeHi = 0U;
  info[415].mFileTimeLo = 0U;
  info[415].mFileTimeHi = 0U;
  info[416].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[416].name = "eml_scalar_cos";
  info[416].dominantType = "double";
  info[416].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m";
  info[416].fileTimeLo = 1286840322U;
  info[416].fileTimeHi = 0U;
  info[416].mFileTimeLo = 0U;
  info[416].mFileTimeHi = 0U;
  info[417].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[417].name = "eml_index_minus";
  info[417].dominantType = "double";
  info[417].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[417].fileTimeLo = 1286840378U;
  info[417].fileTimeHi = 0U;
  info[417].mFileTimeLo = 0U;
  info[417].mFileTimeHi = 0U;
  info[418].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[418].name = "eml_index_minus";
  info[418].dominantType = "coder.internal.indexInt";
  info[418].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[418].fileTimeLo = 1286840378U;
  info[418].fileTimeHi = 0U;
  info[418].mFileTimeLo = 0U;
  info[418].mFileTimeHi = 0U;
  info[419].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[419].name = "sin";
  info[419].dominantType = "double";
  info[419].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[419].fileTimeLo = 1343851986U;
  info[419].fileTimeHi = 0U;
  info[419].mFileTimeLo = 0U;
  info[419].mFileTimeHi = 0U;
  info[420].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[420].name = "eml_scalar_sin";
  info[420].dominantType = "double";
  info[420].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m";
  info[420].fileTimeLo = 1286840336U;
  info[420].fileTimeHi = 0U;
  info[420].mFileTimeLo = 0U;
  info[420].mFileTimeHi = 0U;
  info[421].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[421].name = "eml_index_class";
  info[421].dominantType = "";
  info[421].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[421].fileTimeLo = 1323192178U;
  info[421].fileTimeHi = 0U;
  info[421].mFileTimeLo = 0U;
  info[421].mFileTimeHi = 0U;
  info[422].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[422].name = "eml_index_times";
  info[422].dominantType = "double";
  info[422].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[422].fileTimeLo = 1286840380U;
  info[422].fileTimeHi = 0U;
  info[422].mFileTimeLo = 0U;
  info[422].mFileTimeHi = 0U;
  info[423].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[423].name = "eml_index_plus";
  info[423].dominantType = "double";
  info[423].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[423].fileTimeLo = 1286840378U;
  info[423].fileTimeHi = 0U;
  info[423].mFileTimeLo = 0U;
  info[423].mFileTimeHi = 0U;
  info[424].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[424].name = "eml_int_forloop_overflow_check";
  info[424].dominantType = "";
  info[424].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[424].fileTimeLo = 1346531940U;
  info[424].fileTimeHi = 0U;
  info[424].mFileTimeLo = 0U;
  info[424].mFileTimeHi = 0U;
  info[425].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[425].name = "eml_index_minus";
  info[425].dominantType = "coder.internal.indexInt";
  info[425].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[425].fileTimeLo = 1286840378U;
  info[425].fileTimeHi = 0U;
  info[425].mFileTimeLo = 0U;
  info[425].mFileTimeHi = 0U;
  info[426].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[426].name = "eml_index_class";
  info[426].dominantType = "";
  info[426].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[426].fileTimeLo = 1323192178U;
  info[426].fileTimeHi = 0U;
  info[426].mFileTimeLo = 0U;
  info[426].mFileTimeHi = 0U;
  info[427].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[427].name = "eml_unsigned_class";
  info[427].dominantType = "char";
  info[427].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[427].fileTimeLo = 1323192180U;
  info[427].fileTimeHi = 0U;
  info[427].mFileTimeLo = 0U;
  info[427].mFileTimeHi = 0U;
  info[428].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[428].name = "eml_int_forloop_overflow_check";
  info[428].dominantType = "";
  info[428].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[428].fileTimeLo = 1346531940U;
  info[428].fileTimeHi = 0U;
  info[428].mFileTimeLo = 0U;
  info[428].mFileTimeHi = 0U;
  info[429].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[429].name = "eml_index_plus";
  info[429].dominantType = "double";
  info[429].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[429].fileTimeLo = 1286840378U;
  info[429].fileTimeHi = 0U;
  info[429].mFileTimeLo = 0U;
  info[429].mFileTimeHi = 0U;
  info[430].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!eml_fft_bitrevidx";
  info[430].name = "eml_index_class";
  info[430].dominantType = "";
  info[430].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[430].fileTimeLo = 1323192178U;
  info[430].fileTimeHi = 0U;
  info[430].mFileTimeLo = 0U;
  info[430].mFileTimeHi = 0U;
  info[431].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[431].name = "eml_index_plus";
  info[431].dominantType = "coder.internal.indexInt";
  info[431].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[431].fileTimeLo = 1286840378U;
  info[431].fileTimeHi = 0U;
  info[431].mFileTimeLo = 0U;
  info[431].mFileTimeHi = 0U;
  info[432].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[432].name = "eml_index_times";
  info[432].dominantType = "double";
  info[432].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[432].fileTimeLo = 1286840380U;
  info[432].fileTimeHi = 0U;
  info[432].mFileTimeLo = 0U;
  info[432].mFileTimeHi = 0U;
  info[433].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[433].name = "fftshift";
  info[433].dominantType = "double";
  info[433].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fftshift.m";
  info[433].fileTimeLo = 1286840290U;
  info[433].fileTimeHi = 0U;
  info[433].mFileTimeLo = 0U;
  info[433].mFileTimeHi = 0U;
  info[434].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fftshift.m";
  info[434].name = "eml_assert_valid_dim";
  info[434].dominantType = "double";
  info[434].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[434].fileTimeLo = 1286840294U;
  info[434].fileTimeHi = 0U;
  info[434].mFileTimeLo = 0U;
  info[434].mFileTimeHi = 0U;
  info[435].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fftshift.m";
  info[435].name = "eml_fftshift";
  info[435].dominantType = "double";
  info[435].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[435].fileTimeLo = 1286840376U;
  info[435].fileTimeHi = 0U;
  info[435].mFileTimeLo = 0U;
  info[435].mFileTimeHi = 0U;
  info[436].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[436].name = "eml_index_rdivide";
  info[436].dominantType = "double";
  info[436].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[436].fileTimeLo = 1286840380U;
  info[436].fileTimeHi = 0U;
  info[436].mFileTimeLo = 0U;
  info[436].mFileTimeHi = 0U;
  info[437].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[437].name = "eml_matrix_vstride";
  info[437].dominantType = "double";
  info[437].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[437].fileTimeLo = 1286840388U;
  info[437].fileTimeHi = 0U;
  info[437].mFileTimeLo = 0U;
  info[437].mFileTimeHi = 0U;
  info[438].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[438].name = "eml_size_prod";
  info[438].dominantType = "double";
  info[438].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[438].fileTimeLo = 1286840398U;
  info[438].fileTimeHi = 0U;
  info[438].mFileTimeLo = 0U;
  info[438].mFileTimeHi = 0U;
  info[439].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[439].name = "eml_matrix_npages";
  info[439].dominantType = "double";
  info[439].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[439].fileTimeLo = 1286840386U;
  info[439].fileTimeHi = 0U;
  info[439].mFileTimeLo = 0U;
  info[439].mFileTimeHi = 0U;
  info[440].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[440].name = "eml_size_prod";
  info[440].dominantType = "double";
  info[440].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[440].fileTimeLo = 1286840398U;
  info[440].fileTimeHi = 0U;
  info[440].mFileTimeLo = 0U;
  info[440].mFileTimeHi = 0U;
  info[441].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[441].name = "eml_index_minus";
  info[441].dominantType = "double";
  info[441].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[441].fileTimeLo = 1286840378U;
  info[441].fileTimeHi = 0U;
  info[441].mFileTimeLo = 0U;
  info[441].mFileTimeHi = 0U;
  info[442].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[442].name = "eml_index_times";
  info[442].dominantType = "coder.internal.indexInt";
  info[442].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[442].fileTimeLo = 1286840380U;
  info[442].fileTimeHi = 0U;
  info[442].mFileTimeLo = 0U;
  info[442].mFileTimeHi = 0U;
  info[443].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[443].name = "eml_index_times";
  info[443].dominantType = "double";
  info[443].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[443].fileTimeLo = 1286840380U;
  info[443].fileTimeHi = 0U;
  info[443].mFileTimeLo = 0U;
  info[443].mFileTimeHi = 0U;
  info[444].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[444].name = "eml_index_class";
  info[444].dominantType = "";
  info[444].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[444].fileTimeLo = 1323192178U;
  info[444].fileTimeHi = 0U;
  info[444].mFileTimeLo = 0U;
  info[444].mFileTimeHi = 0U;
  info[445].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[445].name = "eml_index_plus";
  info[445].dominantType = "coder.internal.indexInt";
  info[445].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[445].fileTimeLo = 1286840378U;
  info[445].fileTimeHi = 0U;
  info[445].mFileTimeLo = 0U;
  info[445].mFileTimeHi = 0U;
  info[446].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[446].name = "eml_index_plus";
  info[446].dominantType = "double";
  info[446].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[446].fileTimeLo = 1286840378U;
  info[446].fileTimeHi = 0U;
  info[446].mFileTimeLo = 0U;
  info[446].mFileTimeHi = 0U;
  info[447].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[447].name = "eml_int_forloop_overflow_check";
  info[447].dominantType = "";
  info[447].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[447].fileTimeLo = 1346531940U;
  info[447].fileTimeHi = 0U;
  info[447].mFileTimeLo = 0U;
  info[447].mFileTimeHi = 0U;
}

static void h_info_helper(ResolvedFunctionInfo info[567])
{
  info[448].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[448].name = "length";
  info[448].dominantType = "double";
  info[448].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[448].fileTimeLo = 1303167806U;
  info[448].fileTimeHi = 0U;
  info[448].mFileTimeLo = 0U;
  info[448].mFileTimeHi = 0U;
  info[449].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[449].name = "mrdivide";
  info[449].dominantType = "double";
  info[449].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[449].fileTimeLo = 1357973148U;
  info[449].fileTimeHi = 0U;
  info[449].mFileTimeLo = 1319751566U;
  info[449].mFileTimeHi = 0U;
  info[450].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[450].name = "eml_assert_valid_size_arg";
  info[450].dominantType = "double";
  info[450].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[450].fileTimeLo = 1286840294U;
  info[450].fileTimeHi = 0U;
  info[450].mFileTimeLo = 0U;
  info[450].mFileTimeHi = 0U;
  info[451].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[451].name = "coder.internal.indexIntRelop";
  info[451].dominantType = "";
  info[451].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[451].fileTimeLo = 1326749922U;
  info[451].fileTimeHi = 0U;
  info[451].mFileTimeLo = 0U;
  info[451].mFileTimeHi = 0U;
  info[452].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[452].name = "max";
  info[452].dominantType = "double";
  info[452].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[452].fileTimeLo = 1311276916U;
  info[452].fileTimeHi = 0U;
  info[452].mFileTimeLo = 0U;
  info[452].mFileTimeHi = 0U;
  info[453].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[453].name = "isnan";
  info[453].dominantType = "coder.internal.indexInt";
  info[453].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[453].fileTimeLo = 1286840360U;
  info[453].fileTimeHi = 0U;
  info[453].mFileTimeLo = 0U;
  info[453].mFileTimeHi = 0U;
  info[454].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[454].name = "eml_error";
  info[454].dominantType = "char";
  info[454].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[454].fileTimeLo = 1343851958U;
  info[454].fileTimeHi = 0U;
  info[454].mFileTimeLo = 0U;
  info[454].mFileTimeHi = 0U;
  info[455].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[455].name = "coder.internal.indexIntRelop";
  info[455].dominantType = "";
  info[455].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[455].fileTimeLo = 1326749922U;
  info[455].fileTimeHi = 0U;
  info[455].mFileTimeLo = 0U;
  info[455].mFileTimeHi = 0U;
  info[456].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!preambleFDE";
  info[456].name = "sum";
  info[456].dominantType = "double";
  info[456].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[456].fileTimeLo = 1314758212U;
  info[456].fileTimeHi = 0U;
  info[456].mFileTimeLo = 0U;
  info[456].mFileTimeHi = 0U;
  info[457].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!preambleFDE";
  info[457].name = "rdivide";
  info[457].dominantType = "double";
  info[457].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[457].fileTimeLo = 1346531988U;
  info[457].fileTimeHi = 0U;
  info[457].mFileTimeLo = 0U;
  info[457].mFileTimeHi = 0U;
  info[458].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[458].name = "eml_scalar_eg";
  info[458].dominantType = "double";
  info[458].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[458].fileTimeLo = 1286840396U;
  info[458].fileTimeHi = 0U;
  info[458].mFileTimeLo = 0U;
  info[458].mFileTimeHi = 0U;
  info[459].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[459].name = "eml_scalexp_alloc";
  info[459].dominantType = "double";
  info[459].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[459].fileTimeLo = 1352446460U;
  info[459].fileTimeHi = 0U;
  info[459].mFileTimeLo = 0U;
  info[459].mFileTimeHi = 0U;
  info[460].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[460].name = "isequal";
  info[460].dominantType = "double";
  info[460].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[460].fileTimeLo = 1286840358U;
  info[460].fileTimeHi = 0U;
  info[460].mFileTimeLo = 0U;
  info[460].mFileTimeHi = 0U;
  info[461].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[461].name = "abs";
  info[461].dominantType = "double";
  info[461].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[461].fileTimeLo = 1343851966U;
  info[461].fileTimeHi = 0U;
  info[461].mFileTimeLo = 0U;
  info[461].mFileTimeHi = 0U;
  info[462].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[462].name = "mtimes";
  info[462].dominantType = "double";
  info[462].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[462].fileTimeLo = 1289541292U;
  info[462].fileTimeHi = 0U;
  info[462].mFileTimeLo = 0U;
  info[462].mFileTimeHi = 0U;
  info[463].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!preambleFDE";
  info[463].name = "abs";
  info[463].dominantType = "double";
  info[463].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[463].fileTimeLo = 1343851966U;
  info[463].fileTimeHi = 0U;
  info[463].mFileTimeLo = 0U;
  info[463].mFileTimeHi = 0U;
  info[464].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!preambleFDE";
  info[464].name = "power";
  info[464].dominantType = "double";
  info[464].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[464].fileTimeLo = 1348213530U;
  info[464].fileTimeHi = 0U;
  info[464].mFileTimeLo = 0U;
  info[464].mFileTimeHi = 0U;
  info[465].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!preambleFDE";
  info[465].name = "mean";
  info[465].dominantType = "double";
  info[465].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[465].fileTimeLo = 1286840294U;
  info[465].fileTimeHi = 0U;
  info[465].mFileTimeLo = 0U;
  info[465].mFileTimeHi = 0U;
  info[466].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[466].name = "eml_assert_valid_dim";
  info[466].dominantType = "double";
  info[466].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[466].fileTimeLo = 1286840294U;
  info[466].fileTimeHi = 0U;
  info[466].mFileTimeLo = 0U;
  info[466].mFileTimeHi = 0U;
  info[467].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[467].name = "eml_matrix_vstride";
  info[467].dominantType = "double";
  info[467].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[467].fileTimeLo = 1286840388U;
  info[467].fileTimeHi = 0U;
  info[467].mFileTimeLo = 0U;
  info[467].mFileTimeHi = 0U;
  info[468].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[468].name = "eml_matrix_npages";
  info[468].dominantType = "double";
  info[468].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[468].fileTimeLo = 1286840386U;
  info[468].fileTimeHi = 0U;
  info[468].mFileTimeLo = 0U;
  info[468].mFileTimeHi = 0U;
  info[469].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[469].name = "eml_index_plus";
  info[469].dominantType = "double";
  info[469].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[469].fileTimeLo = 1286840378U;
  info[469].fileTimeHi = 0U;
  info[469].mFileTimeLo = 0U;
  info[469].mFileTimeHi = 0U;
  info[470].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[470].name = "eml_index_plus";
  info[470].dominantType = "coder.internal.indexInt";
  info[470].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[470].fileTimeLo = 1286840378U;
  info[470].fileTimeHi = 0U;
  info[470].mFileTimeLo = 0U;
  info[470].mFileTimeHi = 0U;
  info[471].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[471].name = "ismatrix";
  info[471].dominantType = "double";
  info[471].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m";
  info[471].fileTimeLo = 1331326458U;
  info[471].fileTimeHi = 0U;
  info[471].mFileTimeLo = 0U;
  info[471].mFileTimeHi = 0U;
  info[472].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMDemodulator.m";
  info[472].name = "repmat";
  info[472].dominantType = "double";
  info[472].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[472].fileTimeLo = 1352446460U;
  info[472].fileTimeHi = 0U;
  info[472].mFileTimeLo = 0U;
  info[472].mFileTimeHi = 0U;
  info[473].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[473].name = "eml_scalar_eg";
  info[473].dominantType = "double";
  info[473].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[473].fileTimeLo = 1286840396U;
  info[473].fileTimeHi = 0U;
  info[473].mFileTimeLo = 0U;
  info[473].mFileTimeHi = 0U;
  info[474].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[474].name = "eml_index_prod";
  info[474].dominantType = "double";
  info[474].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[474].fileTimeLo = 1286840380U;
  info[474].fileTimeHi = 0U;
  info[474].mFileTimeLo = 0U;
  info[474].mFileTimeHi = 0U;
  info[475].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[475].name = "eml_index_class";
  info[475].dominantType = "";
  info[475].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[475].fileTimeLo = 1323192178U;
  info[475].fileTimeHi = 0U;
  info[475].mFileTimeLo = 0U;
  info[475].mFileTimeHi = 0U;
  info[476].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[476].name = "eml_int_forloop_overflow_check";
  info[476].dominantType = "";
  info[476].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[476].fileTimeLo = 1346531940U;
  info[476].fileTimeHi = 0U;
  info[476].mFileTimeLo = 0U;
  info[476].mFileTimeHi = 0U;
  info[477].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[477].name = "eml_index_times";
  info[477].dominantType = "coder.internal.indexInt";
  info[477].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[477].fileTimeLo = 1286840380U;
  info[477].fileTimeHi = 0U;
  info[477].mFileTimeLo = 0U;
  info[477].mFileTimeHi = 0U;
  info[478].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[478].name = "eml_int_forloop_overflow_check";
  info[478].dominantType = "";
  info[478].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[478].fileTimeLo = 1346531940U;
  info[478].fileTimeHi = 0U;
  info[478].mFileTimeLo = 0U;
  info[478].mFileTimeHi = 0U;
  info[479].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[479].name = "eml_index_plus";
  info[479].dominantType = "coder.internal.indexInt";
  info[479].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[479].fileTimeLo = 1286840378U;
  info[479].fileTimeHi = 0U;
  info[479].mFileTimeLo = 0U;
  info[479].mFileTimeHi = 0U;
  info[480].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[480].name = "colon";
  info[480].dominantType = "double";
  info[480].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[480].fileTimeLo = 1348213528U;
  info[480].fileTimeHi = 0U;
  info[480].mFileTimeLo = 0U;
  info[480].mFileTimeHi = 0U;
  info[481].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[481].name = "repmat";
  info[481].dominantType = "double";
  info[481].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[481].fileTimeLo = 1352446460U;
  info[481].fileTimeHi = 0U;
  info[481].mFileTimeLo = 0U;
  info[481].mFileTimeHi = 0U;
  info[482].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[482].name = "mtimes";
  info[482].dominantType = "double";
  info[482].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[482].fileTimeLo = 1289541292U;
  info[482].fileTimeHi = 0U;
  info[482].mFileTimeLo = 0U;
  info[482].mFileTimeHi = 0U;
  info[483].context =
    "[C]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/OFDMBase.m";
  info[483].name = "sub2ind";
  info[483].dominantType = "double";
  info[483].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m";
  info[483].fileTimeLo = 1286840370U;
  info[483].fileTimeHi = 0U;
  info[483].mFileTimeLo = 0U;
  info[483].mFileTimeHi = 0U;
  info[484].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m";
  info[484].name = "eml_index_class";
  info[484].dominantType = "";
  info[484].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[484].fileTimeLo = 1323192178U;
  info[484].fileTimeHi = 0U;
  info[484].mFileTimeLo = 0U;
  info[484].mFileTimeHi = 0U;
  info[485].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[485].name = "min";
  info[485].dominantType = "double";
  info[485].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[485].fileTimeLo = 1311276918U;
  info[485].fileTimeHi = 0U;
  info[485].mFileTimeLo = 0U;
  info[485].mFileTimeHi = 0U;
  info[486].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!allinrange";
  info[486].name = "coder.internal.indexIntRelop";
  info[486].dominantType = "";
  info[486].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[486].fileTimeLo = 1326749922U;
  info[486].fileTimeHi = 0U;
  info[486].mFileTimeLo = 0U;
  info[486].mFileTimeHi = 0U;
  info[487].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[487].name = "isequal";
  info[487].dominantType = "double";
  info[487].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[487].fileTimeLo = 1286840358U;
  info[487].fileTimeHi = 0U;
  info[487].mFileTimeLo = 0U;
  info[487].mFileTimeHi = 0U;
  info[488].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub";
  info[488].name = "eml_index_class";
  info[488].dominantType = "";
  info[488].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[488].fileTimeLo = 1323192178U;
  info[488].fileTimeHi = 0U;
  info[488].mFileTimeLo = 0U;
  info[488].mFileTimeHi = 0U;
  info[489].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub";
  info[489].name = "eml_index_times";
  info[489].dominantType = "coder.internal.indexInt";
  info[489].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[489].fileTimeLo = 1286840380U;
  info[489].fileTimeHi = 0U;
  info[489].mFileTimeLo = 0U;
  info[489].mFileTimeHi = 0U;
  info[490].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[490].name = "eml_index_class";
  info[490].dominantType = "";
  info[490].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[490].fileTimeLo = 1323192178U;
  info[490].fileTimeHi = 0U;
  info[490].mFileTimeLo = 0U;
  info[490].mFileTimeHi = 0U;
  info[491].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[491].name = "eml_index_minus";
  info[491].dominantType = "double";
  info[491].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[491].fileTimeLo = 1286840378U;
  info[491].fileTimeHi = 0U;
  info[491].mFileTimeLo = 0U;
  info[491].mFileTimeHi = 0U;
  info[492].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[492].name = "eml_index_times";
  info[492].dominantType = "coder.internal.indexInt";
  info[492].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[492].fileTimeLo = 1286840380U;
  info[492].fileTimeHi = 0U;
  info[492].mFileTimeLo = 0U;
  info[492].mFileTimeHi = 0U;
  info[493].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[493].name = "eml_index_plus";
  info[493].dominantType = "coder.internal.indexInt";
  info[493].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[493].fileTimeLo = 1286840378U;
  info[493].fileTimeHi = 0U;
  info[493].mFileTimeLo = 0U;
  info[493].mFileTimeHi = 0U;
  info[494].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[494].name = "eml_scalar_eg";
  info[494].dominantType = "double";
  info[494].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[494].fileTimeLo = 1286840396U;
  info[494].fileTimeHi = 0U;
  info[494].mFileTimeLo = 0U;
  info[494].mFileTimeHi = 0U;
  info[495].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m";
  info[495].name = "repmat";
  info[495].dominantType = "double";
  info[495].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[495].fileTimeLo = 1352446460U;
  info[495].fileTimeHi = 0U;
  info[495].mFileTimeLo = 0U;
  info[495].mFileTimeHi = 0U;
  info[496].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!pilotFDE";
  info[496].name = "rdivide";
  info[496].dominantType = "double";
  info[496].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[496].fileTimeLo = 1346531988U;
  info[496].fileTimeHi = 0U;
  info[496].mFileTimeLo = 0U;
  info[496].mFileTimeHi = 0U;
  info[497].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!pilotFDE";
  info[497].name = "abs";
  info[497].dominantType = "double";
  info[497].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[497].fileTimeLo = 1343851966U;
  info[497].fileTimeHi = 0U;
  info[497].mFileTimeLo = 0U;
  info[497].mFileTimeHi = 0U;
  info[498].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!pilotFDE";
  info[498].name = "power";
  info[498].dominantType = "double";
  info[498].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[498].fileTimeLo = 1348213530U;
  info[498].fileTimeHi = 0U;
  info[498].mFileTimeLo = 0U;
  info[498].mFileTimeHi = 0U;
  info[499].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/equalizeOFDM.m!pilotFDE";
  info[499].name = "resample";
  info[499].dominantType = "double";
  info[499].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[499].fileTimeLo = 1286808762U;
  info[499].fileTimeHi = 0U;
  info[499].mFileTimeLo = 0U;
  info[499].mFileTimeHi = 0U;
  info[500].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[500].name = "eml_is_positive_integer_scalar";
  info[500].dominantType = "double";
  info[500].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[500].fileTimeLo = 1309472796U;
  info[500].fileTimeHi = 0U;
  info[500].mFileTimeLo = 0U;
  info[500].mFileTimeHi = 0U;
  info[501].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[501].name = "mrdivide";
  info[501].dominantType = "double";
  info[501].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[501].fileTimeLo = 1357973148U;
  info[501].fileTimeHi = 0U;
  info[501].mFileTimeLo = 1319751566U;
  info[501].mFileTimeHi = 0U;
  info[502].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[502].name = "eml_is_positive_integer_scalar";
  info[502].dominantType = "double";
  info[502].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[502].fileTimeLo = 1309472796U;
  info[502].fileTimeHi = 0U;
  info[502].mFileTimeLo = 0U;
  info[502].mFileTimeHi = 0U;
  info[503].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[503].name = "length";
  info[503].dominantType = "double";
  info[503].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[503].fileTimeLo = 1303167806U;
  info[503].fileTimeHi = 0U;
  info[503].mFileTimeLo = 0U;
  info[503].mFileTimeHi = 0U;
  info[504].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[504].name = "max";
  info[504].dominantType = "double";
  info[504].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[504].fileTimeLo = 1311276916U;
  info[504].fileTimeHi = 0U;
  info[504].mFileTimeLo = 0U;
  info[504].mFileTimeHi = 0U;
  info[505].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[505].name = "mrdivide";
  info[505].dominantType = "double";
  info[505].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[505].fileTimeLo = 1357973148U;
  info[505].fileTimeHi = 0U;
  info[505].mFileTimeLo = 1319751566U;
  info[505].mFileTimeHi = 0U;
  info[506].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[506].name = "mtimes";
  info[506].dominantType = "double";
  info[506].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[506].fileTimeLo = 1289541292U;
  info[506].fileTimeHi = 0U;
  info[506].mFileTimeLo = 0U;
  info[506].mFileTimeHi = 0U;
  info[507].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[507].name = "firls";
  info[507].dominantType = "double";
  info[507].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/firls.m";
  info[507].fileTimeLo = 1286808742U;
  info[507].fileTimeHi = 0U;
  info[507].mFileTimeLo = 0U;
  info[507].mFileTimeHi = 0U;
  info[508].context = "[IXE]$matlabroot$/toolbox/signal/eml/firls.m";
  info[508].name = "eml_assert_all_constant";
  info[508].dominantType = "double";
  info[508].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_all_constant.m";
  info[508].fileTimeLo = 1286840294U;
  info[508].fileTimeHi = 0U;
  info[508].mFileTimeLo = 0U;
  info[508].mFileTimeHi = 0U;
  info[509].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[509].name = "kaiser";
  info[509].dominantType = "double";
  info[509].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/kaiser.m";
  info[509].fileTimeLo = 1286808754U;
  info[509].fileTimeHi = 0U;
  info[509].mFileTimeLo = 0U;
  info[509].mFileTimeHi = 0U;
  info[510].context = "[IXE]$matlabroot$/toolbox/signal/eml/kaiser.m";
  info[510].name = "eml_assert_all_constant";
  info[510].dominantType = "double";
  info[510].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_all_constant.m";
  info[510].fileTimeLo = 1286840294U;
  info[510].fileTimeHi = 0U;
  info[510].mFileTimeLo = 0U;
  info[510].mFileTimeHi = 0U;
  info[511].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[511].name = "eml_const_nonsingleton_dim";
  info[511].dominantType = "double";
  info[511].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[511].fileTimeLo = 1286840296U;
  info[511].fileTimeHi = 0U;
  info[511].mFileTimeLo = 0U;
  info[511].mFileTimeHi = 0U;
}

static void i_info_helper(ResolvedFunctionInfo info[567])
{
  info[512].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[512].name = "length";
  info[512].dominantType = "double";
  info[512].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[512].fileTimeLo = 1303167806U;
  info[512].fileTimeHi = 0U;
  info[512].mFileTimeLo = 0U;
  info[512].mFileTimeHi = 0U;
  info[513].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[513].name = "upfirdn";
  info[513].dominantType = "double";
  info[513].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[513].fileTimeLo = 1350433050U;
  info[513].fileTimeHi = 0U;
  info[513].mFileTimeLo = 0U;
  info[513].mFileTimeHi = 0U;
  info[514].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[514].name = "coder.internal.errorIf";
  info[514].dominantType = "char";
  info[514].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[514].fileTimeLo = 1334093538U;
  info[514].fileTimeHi = 0U;
  info[514].mFileTimeLo = 0U;
  info[514].mFileTimeHi = 0U;
  info[515].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[515].name = "eml_is_positive_integer_scalar";
  info[515].dominantType = "double";
  info[515].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[515].fileTimeLo = 1309472796U;
  info[515].fileTimeHi = 0U;
  info[515].mFileTimeLo = 0U;
  info[515].mFileTimeHi = 0U;
  info[516].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[516].name = "length";
  info[516].dominantType = "double";
  info[516].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[516].fileTimeLo = 1303167806U;
  info[516].fileTimeHi = 0U;
  info[516].mFileTimeLo = 0U;
  info[516].mFileTimeHi = 0U;
  info[517].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[517].name = "mtimes";
  info[517].dominantType = "double";
  info[517].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[517].fileTimeLo = 1289541292U;
  info[517].fileTimeHi = 0U;
  info[517].mFileTimeLo = 0U;
  info[517].mFileTimeHi = 0U;
  info[518].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[518].name = "mod";
  info[518].dominantType = "double";
  info[518].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[518].fileTimeLo = 1343851982U;
  info[518].fileTimeHi = 0U;
  info[518].mFileTimeLo = 0U;
  info[518].mFileTimeHi = 0U;
  info[519].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[519].name = "mrdivide";
  info[519].dominantType = "double";
  info[519].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[519].fileTimeLo = 1357973148U;
  info[519].fileTimeHi = 0U;
  info[519].mFileTimeLo = 1319751566U;
  info[519].mFileTimeHi = 0U;
  info[520].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[520].name = "ceil";
  info[520].dominantType = "double";
  info[520].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[520].fileTimeLo = 1343851972U;
  info[520].fileTimeHi = 0U;
  info[520].mFileTimeLo = 0U;
  info[520].mFileTimeHi = 0U;
  info[521].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[521].name = "max";
  info[521].dominantType = "double";
  info[521].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[521].fileTimeLo = 1311276916U;
  info[521].fileTimeHi = 0U;
  info[521].mFileTimeLo = 0U;
  info[521].mFileTimeHi = 0U;
  info[522].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[522].name = "matlab.system.coder.System";
  info[522].dominantType = "unknown";
  info[522].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[522].fileTimeLo = 1357971318U;
  info[522].fileTimeHi = 0U;
  info[522].mFileTimeLo = 0U;
  info[522].mFileTimeHi = 0U;
  info[523].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[523].name = "matlab.system.mixin.coder.Nondirect";
  info[523].dominantType = "unknown";
  info[523].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[523].fileTimeLo = 1357971320U;
  info[523].fileTimeHi = 0U;
  info[523].mFileTimeLo = 0U;
  info[523].mFileTimeHi = 0U;
  info[524].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[524].name = "matlab.system.mixin.Nondirect";
  info[524].dominantType = "unknown";
  info[524].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Nondirect.p";
  info[524].fileTimeLo = 1357962382U;
  info[524].fileTimeHi = 0U;
  info[524].mFileTimeLo = 0U;
  info[524].mFileTimeHi = 0U;
  info[525].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[525].name = "dspcodegen.FIRRateConverter";
  info[525].dominantType = "int32";
  info[525].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[525].fileTimeLo = 1358403902U;
  info[525].fileTimeHi = 0U;
  info[525].mFileTimeLo = 0U;
  info[525].mFileTimeHi = 0U;
  info[526].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[526].name = "createsystemobjectv2";
  info[526].dominantType = "";
  info[526].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[526].fileTimeLo = 1343851958U;
  info[526].fileTimeHi = 0U;
  info[526].mFileTimeLo = 0U;
  info[526].mFileTimeHi = 0U;
  info[527].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[527].name = "length";
  info[527].dominantType = "cell";
  info[527].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[527].fileTimeLo = 1303167806U;
  info[527].fileTimeHi = 0U;
  info[527].mFileTimeLo = 0U;
  info[527].mFileTimeHi = 0U;
  info[528].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[528].name = "matlab.system.pvParse";
  info[528].dominantType = "dspcodegen.FIRRateConverter";
  info[528].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[528].fileTimeLo = 1357962380U;
  info[528].fileTimeHi = 0U;
  info[528].mFileTimeLo = 0U;
  info[528].mFileTimeHi = 0U;
  info[529].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[529].name = "dspcodegen.FIRRateConverter";
  info[529].dominantType = "";
  info[529].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[529].fileTimeLo = 1358403902U;
  info[529].fileTimeHi = 0U;
  info[529].mFileTimeLo = 0U;
  info[529].mFileTimeHi = 0U;
  info[530].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[530].name = "matlab.system.coder.SystemProp";
  info[530].dominantType = "";
  info[530].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[530].fileTimeLo = 1357971320U;
  info[530].fileTimeHi = 0U;
  info[530].mFileTimeLo = 0U;
  info[530].mFileTimeHi = 0U;
  info[531].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[531].name = "get";
  info[531].dominantType = "dsp.FIRRateConverter";
  info[531].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[531].fileTimeLo = 1349900344U;
  info[531].fileTimeHi = 0U;
  info[531].mFileTimeLo = 0U;
  info[531].mFileTimeHi = 0U;
  info[532].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[532].name = "getNumInputs";
  info[532].dominantType = "dsp.FIRRateConverter";
  info[532].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[532].fileTimeLo = 1349900348U;
  info[532].fileTimeHi = 0U;
  info[532].mFileTimeLo = 0U;
  info[532].mFileTimeHi = 0U;
  info[533].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[533].name = "checkSystemObjectInput";
  info[533].dominantType = "dsp.FIRRateConverter";
  info[533].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[533].fileTimeLo = 1349900346U;
  info[533].fileTimeHi = 0U;
  info[533].mFileTimeLo = 0U;
  info[533].mFileTimeHi = 0U;
  info[534].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[534].name = "setup";
  info[534].dominantType = "dsp.FIRRateConverter";
  info[534].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[534].fileTimeLo = 1349900350U;
  info[534].fileTimeHi = 0U;
  info[534].mFileTimeLo = 0U;
  info[534].mFileTimeHi = 0U;
  info[535].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[535].name = "checkSystemObjectInput";
  info[535].dominantType = "dsp.FIRRateConverter";
  info[535].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[535].fileTimeLo = 1349900346U;
  info[535].fileTimeHi = 0U;
  info[535].mFileTimeLo = 0U;
  info[535].mFileTimeHi = 0U;
  info[536].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[536].name = "reset";
  info[536].dominantType = "dsp.FIRRateConverter";
  info[536].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[536].fileTimeLo = 1349900350U;
  info[536].fileTimeHi = 0U;
  info[536].mFileTimeLo = 0U;
  info[536].mFileTimeHi = 0U;
  info[537].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[537].name = "checkSystemObjectInput";
  info[537].dominantType = "dsp.FIRRateConverter";
  info[537].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[537].fileTimeLo = 1349900346U;
  info[537].fileTimeHi = 0U;
  info[537].mFileTimeLo = 0U;
  info[537].mFileTimeHi = 0U;
  info[538].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[538].name = "getNumOutputs";
  info[538].dominantType = "dsp.FIRRateConverter";
  info[538].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[538].fileTimeLo = 1349900348U;
  info[538].fileTimeHi = 0U;
  info[538].mFileTimeLo = 0U;
  info[538].mFileTimeHi = 0U;
  info[539].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[539].name = "checkSystemObjectInput";
  info[539].dominantType = "dsp.FIRRateConverter";
  info[539].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[539].fileTimeLo = 1349900346U;
  info[539].fileTimeHi = 0U;
  info[539].mFileTimeLo = 0U;
  info[539].mFileTimeHi = 0U;
  info[540].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[540].name = "output";
  info[540].dominantType = "dsp.FIRRateConverter";
  info[540].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[540].fileTimeLo = 1349900348U;
  info[540].fileTimeHi = 0U;
  info[540].mFileTimeLo = 0U;
  info[540].mFileTimeHi = 0U;
  info[541].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[541].name = "checkSystemObjectInput";
  info[541].dominantType = "dsp.FIRRateConverter";
  info[541].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[541].fileTimeLo = 1349900346U;
  info[541].fileTimeHi = 0U;
  info[541].mFileTimeLo = 0U;
  info[541].mFileTimeHi = 0U;
  info[542].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[542].name = "update";
  info[542].dominantType = "dsp.FIRRateConverter";
  info[542].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[542].fileTimeLo = 1349900352U;
  info[542].fileTimeHi = 0U;
  info[542].mFileTimeLo = 0U;
  info[542].mFileTimeHi = 0U;
  info[543].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[543].name = "checkSystemObjectInput";
  info[543].dominantType = "dsp.FIRRateConverter";
  info[543].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[543].fileTimeLo = 1349900346U;
  info[543].fileTimeHi = 0U;
  info[543].mFileTimeLo = 0U;
  info[543].mFileTimeHi = 0U;
  info[544].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m!intlength";
  info[544].name = "eml_index_class";
  info[544].dominantType = "";
  info[544].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[544].fileTimeLo = 1323192178U;
  info[544].fileTimeHi = 0U;
  info[544].mFileTimeLo = 0U;
  info[544].mFileTimeHi = 0U;
  info[545].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[545].name = "mtimes";
  info[545].dominantType = "double";
  info[545].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[545].fileTimeLo = 1289541292U;
  info[545].fileTimeHi = 0U;
  info[545].mFileTimeLo = 0U;
  info[545].mFileTimeHi = 0U;
  info[546].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[546].name = "ceil";
  info[546].dominantType = "double";
  info[546].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[546].fileTimeLo = 1343851972U;
  info[546].fileTimeHi = 0U;
  info[546].mFileTimeLo = 0U;
  info[546].mFileTimeHi = 0U;
  info[547].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[547].name = "demodOFDMSubcarriers_sdr";
  info[547].dominantType = "struct";
  info[547].resolved =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/demodOFDMSubcarriers_sdr.m";
  info[547].fileTimeLo = 1382979881U;
  info[547].fileTimeHi = 0U;
  info[547].mFileTimeLo = 0U;
  info[547].mFileTimeHi = 0U;
  info[548].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/demodOFDMSubcarriers_sdr.m";
  info[548].name = "mtimes";
  info[548].dominantType = "double";
  info[548].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[548].fileTimeLo = 1289541292U;
  info[548].fileTimeHi = 0U;
  info[548].mFileTimeLo = 0U;
  info[548].mFileTimeHi = 0U;
  info[549].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/demodOFDMSubcarriers_sdr.m";
  info[549].name = "reshape";
  info[549].dominantType = "double";
  info[549].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[549].fileTimeLo = 1286840368U;
  info[549].fileTimeHi = 0U;
  info[549].mFileTimeLo = 0U;
  info[549].mFileTimeHi = 0U;
  info[550].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!varargin_nempty";
  info[550].name = "eml_index_class";
  info[550].dominantType = "";
  info[550].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[550].fileTimeLo = 1323192178U;
  info[550].fileTimeHi = 0U;
  info[550].mFileTimeLo = 0U;
  info[550].mFileTimeHi = 0U;
  info[551].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[551].name = "eml_index_prod";
  info[551].dominantType = "coder.internal.indexInt";
  info[551].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[551].fileTimeLo = 1286840380U;
  info[551].fileTimeHi = 0U;
  info[551].mFileTimeLo = 0U;
  info[551].mFileTimeHi = 0U;
  info[552].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/demodOFDMSubcarriers_sdr.m";
  info[552].name = "sum";
  info[552].dominantType = "logical";
  info[552].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[552].fileTimeLo = 1314758212U;
  info[552].fileTimeHi = 0U;
  info[552].mFileTimeLo = 0U;
  info[552].mFileTimeHi = 0U;
  info[553].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[553].name = "eml_const_nonsingleton_dim";
  info[553].dominantType = "logical";
  info[553].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[553].fileTimeLo = 1286840296U;
  info[553].fileTimeHi = 0U;
  info[553].mFileTimeLo = 0U;
  info[553].mFileTimeHi = 0U;
  info[554].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/demodOFDMSubcarriers_sdr.m";
  info[554].name = "mrdivide";
  info[554].dominantType = "double";
  info[554].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[554].fileTimeLo = 1357973148U;
  info[554].fileTimeHi = 0U;
  info[554].mFileTimeLo = 1319751566U;
  info[554].mFileTimeHi = 0U;
  info[555].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[555].name = "closeDataConnection";
  info[555].dominantType = "int32";
  info[555].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[555].fileTimeLo = 1345182484U;
  info[555].fileTimeHi = 0U;
  info[555].mFileTimeLo = 0U;
  info[555].mFileTimeHi = 0U;
  info[556].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[556].name = "mapiPrivate";
  info[556].dominantType = "int32";
  info[556].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[556].fileTimeLo = 1357947598U;
  info[556].fileTimeHi = 0U;
  info[556].mFileTimeLo = 0U;
  info[556].mFileTimeHi = 0U;
  info[557].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[557].name = "reportDrivers";
  info[557].dominantType = "";
  info[557].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[557].fileTimeLo = 1345182488U;
  info[557].fileTimeHi = 0U;
  info[557].mFileTimeLo = 0U;
  info[557].mFileTimeHi = 0U;
  info[558].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[558].name = "mapiPrivate";
  info[558].dominantType = "char";
  info[558].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[558].fileTimeLo = 1357947598U;
  info[558].fileTimeHi = 0U;
  info[558].mFileTimeLo = 0U;
  info[558].mFileTimeHi = 0U;
  info[559].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[559].name = "coder.internal.warning";
  info[559].dominantType = "char";
  info[559].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[559].fileTimeLo = 1311277408U;
  info[559].fileTimeHi = 0U;
  info[559].mFileTimeLo = 0U;
  info[559].mFileTimeHi = 0U;
  info[560].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[560].name = "fprintf";
  info[560].dominantType = "char";
  info[560].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[560].fileTimeLo = 1354862384U;
  info[560].fileTimeHi = 0U;
  info[560].mFileTimeLo = 0U;
  info[560].mFileTimeHi = 0U;
  info[561].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[561].name = "isequal";
  info[561].dominantType = "char";
  info[561].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[561].fileTimeLo = 1286840358U;
  info[561].fileTimeHi = 0U;
  info[561].mFileTimeLo = 0U;
  info[561].mFileTimeHi = 0U;
  info[562].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[562].name = "eml_isequal_core";
  info[562].dominantType = "char";
  info[562].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[562].fileTimeLo = 1286840386U;
  info[562].fileTimeHi = 0U;
  info[562].mFileTimeLo = 0U;
  info[562].mFileTimeHi = 0U;
  info[563].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar";
  info[563].name = "isnan";
  info[563].dominantType = "char";
  info[563].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[563].fileTimeLo = 1286840360U;
  info[563].fileTimeHi = 0U;
  info[563].mFileTimeLo = 0U;
  info[563].mFileTimeHi = 0U;
  info[564].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[564].name = "fprintf";
  info[564].dominantType = "double";
  info[564].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[564].fileTimeLo = 1354862384U;
  info[564].fileTimeHi = 0U;
  info[564].mFileTimeLo = 0U;
  info[564].mFileTimeHi = 0U;
  info[565].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m!validate_arguments";
  info[565].name = "coder.internal.assert";
  info[565].dominantType = "char";
  info[565].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[565].fileTimeLo = 1334093538U;
  info[565].fileTimeHi = 0U;
  info[565].mFileTimeLo = 0U;
  info[565].mFileTimeHi = 0U;
  info[566].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m!check_type";
  info[566].name = "coder.internal.assert";
  info[566].dominantType = "char";
  info[566].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[566].fileTimeLo = 1334093538U;
  info[566].fileTimeHi = 0U;
  info[566].mFileTimeLo = 0U;
  info[566].mFileTimeHi = 0U;
}

static void info_helper(ResolvedFunctionInfo info[567])
{
  info[0].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[0].name = "mtimes";
  info[0].dominantType = "double";
  info[0].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[0].fileTimeLo = 1289541292U;
  info[0].fileTimeHi = 0U;
  info[0].mFileTimeLo = 0U;
  info[0].mFileTimeHi = 0U;
  info[1].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[1].name = "ceil";
  info[1].dominantType = "double";
  info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[1].fileTimeLo = 1343851972U;
  info[1].fileTimeHi = 0U;
  info[1].mFileTimeLo = 0U;
  info[1].mFileTimeHi = 0U;
  info[2].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[2].name = "eml_scalar_ceil";
  info[2].dominantType = "double";
  info[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_ceil.m";
  info[2].fileTimeLo = 1286840320U;
  info[2].fileTimeHi = 0U;
  info[2].mFileTimeLo = 0U;
  info[2].mFileTimeHi = 0U;
  info[3].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[3].name = "initializeOFDMSyncMemory_sdr";
  info[3].dominantType = "struct";
  info[3].resolved =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/initializeOFDMSyncMemory_sdr.m";
  info[3].fileTimeLo = 1382979881U;
  info[3].fileTimeHi = 0U;
  info[3].mFileTimeLo = 0U;
  info[3].mFileTimeHi = 0U;
  info[4].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/initializeOFDMSyncMemory_sdr.m";
  info[4].name = "sum";
  info[4].dominantType = "double";
  info[4].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[4].fileTimeLo = 1314758212U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[5].name = "isequal";
  info[5].dominantType = "double";
  info[5].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[5].fileTimeLo = 1286840358U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[6].name = "eml_isequal_core";
  info[6].dominantType = "double";
  info[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[6].fileTimeLo = 1286840386U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[7].name = "eml_const_nonsingleton_dim";
  info[7].dominantType = "double";
  info[7].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[7].fileTimeLo = 1286840296U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[8].name = "eml_scalar_eg";
  info[8].dominantType = "double";
  info[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[8].fileTimeLo = 1286840396U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[9].name = "eml_index_class";
  info[9].dominantType = "";
  info[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[9].fileTimeLo = 1323192178U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[10].name = "mrdivide";
  info[10].dominantType = "double";
  info[10].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[10].fileTimeLo = 1357973148U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 1319751566U;
  info[10].mFileTimeHi = 0U;
  info[11].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[11].name = "rdivide";
  info[11].dominantType = "double";
  info[11].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[11].fileTimeLo = 1346531988U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[12].name = "eml_scalexp_compatible";
  info[12].dominantType = "double";
  info[12].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[12].fileTimeLo = 1286840396U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[13].name = "eml_div";
  info[13].dominantType = "double";
  info[13].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[13].fileTimeLo = 1313369410U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[14].name = "matlab.system.coder.SystemProp";
  info[14].dominantType = "unknown";
  info[14].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[14].fileTimeLo = 1357971320U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[15].name = "matlab.system.coder.SystemCore";
  info[15].dominantType = "unknown";
  info[15].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[15].fileTimeLo = 1357971318U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[16].name = "matlab.system.coder.System";
  info[16].dominantType = "unknown";
  info[16].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[16].fileTimeLo = 1357971318U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[17].name = "matlab.system.System";
  info[17].dominantType = "unknown";
  info[17].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/System.p";
  info[17].fileTimeLo = 1357962380U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[18].name = "matlab.System";
  info[18].dominantType = "unknown";
  info[18].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[18].fileTimeLo = 1357962380U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[19].name = "comm.internal.SDRuBase";
  info[19].dominantType = "unknown";
  info[19].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[19].fileTimeLo = 1358405138U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context =
    "[E]/home/traviscollins/git/USRP_MATLAB/sdruOFDMRx/scripts/receiveOFDM80211a_sdru.m";
  info[20].name = "comm.SDRuReceiver";
  info[20].dominantType = "char";
  info[20].resolved =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/SDRuReceiver.p";
  info[20].fileTimeLo = 1358405138U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[21].name = "matlab.system.coder.SystemProp";
  info[21].dominantType = "";
  info[21].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[21].fileTimeLo = 1357971320U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[22].name = "coder.internal.getHostName";
  info[22].dominantType = "char";
  info[22].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m";
  info[22].fileTimeLo = 1327440774U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[23].name = "randi";
  info[23].dominantType = "double";
  info[23].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[23].fileTimeLo = 1320911042U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 0U;
  info[23].mFileTimeHi = 0U;
  info[24].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[24].name = "eml_assert_valid_size_arg";
  info[24].dominantType = "double";
  info[24].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[24].fileTimeLo = 1286840294U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral";
  info[25].name = "isinf";
  info[25].dominantType = "double";
  info[25].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[25].fileTimeLo = 1286840360U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size";
  info[26].name = "mtimes";
  info[26].dominantType = "double";
  info[26].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[26].fileTimeLo = 1289541292U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[27].name = "eml_index_class";
  info[27].dominantType = "";
  info[27].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[27].fileTimeLo = 1323192178U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[28].name = "intmax";
  info[28].dominantType = "char";
  info[28].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[28].fileTimeLo = 1311276916U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[29].name = "rand";
  info[29].dominantType = "double";
  info[29].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[29].fileTimeLo = 1313369422U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[30].name = "eml_is_rand_extrinsic";
  info[30].dominantType = "";
  info[30].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/eml_is_rand_extrinsic.m";
  info[30].fileTimeLo = 1334093090U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[31].name = "mtimes";
  info[31].dominantType = "double";
  info[31].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[31].fileTimeLo = 1289541292U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[32].name = "floor";
  info[32].dominantType = "double";
  info[32].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[32].fileTimeLo = 1343851980U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[33].name = "eml_scalar_floor";
  info[33].dominantType = "double";
  info[33].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[33].fileTimeLo = 1286840326U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context =
    "[C]/tmp/MATLAB/SupportPackages/R2013a/sdru/+comm/+internal/SDRuBase.p";
  info[34].name = "char";
  info[34].dominantType = "double";
  info[34].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[34].fileTimeLo = 1319751568U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[35].name = "matlab.system.isSystemObject";
  info[35].dominantType = "char";
  info[35].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[35].fileTimeLo = 1357962380U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 0U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[36].name = "length";
  info[36].dominantType = "cell";
  info[36].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[36].fileTimeLo = 1303167806U;
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
  info[39].fileTimeLo = 1351913716U;
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
  info[56].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[56].name = "eml_const_nonsingleton_dim";
  info[56].dominantType = "logical";
  info[56].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[56].fileTimeLo = 1286840296U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[57].name = "eml_matrix_vstride";
  info[57].dominantType = "double";
  info[57].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[57].fileTimeLo = 1286840388U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[58].name = "eml_index_minus";
  info[58].dominantType = "double";
  info[58].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[58].fileTimeLo = 1286840378U;
  info[58].fileTimeHi = 0U;
  info[58].mFileTimeLo = 0U;
  info[58].mFileTimeHi = 0U;
  info[59].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[59].name = "eml_index_class";
  info[59].dominantType = "";
  info[59].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[59].fileTimeLo = 1323192178U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
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
  info[61].name = "eml_size_prod";
  info[61].dominantType = "logical";
  info[61].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[61].fileTimeLo = 1286840398U;
  info[61].fileTimeHi = 0U;
  info[61].mFileTimeLo = 0U;
  info[61].mFileTimeHi = 0U;
  info[62].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[62].name = "eml_index_class";
  info[62].dominantType = "";
  info[62].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[62].fileTimeLo = 1323192178U;
  info[62].fileTimeHi = 0U;
  info[62].mFileTimeLo = 0U;
  info[62].mFileTimeHi = 0U;
  info[63].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[63].name = "eml_index_times";
  info[63].dominantType = "double";
  info[63].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[63].fileTimeLo = 1286840380U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[567];
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
  emlrtAssign(&nameCaptureInfo, b_emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void receiveOFDM80211a_sdru_api(receiveOFDM80211a_sdruStackData *SD, const
  mxArray * const prhs[5], const mxArray *plhs[2])
{
  static const uint32_T tx[4] = { 3470778819U, 4058626000U, 3217126425U,
    1692235040U };

  static const uint32_T b_useScopes[4] = { 1709037630U, 926886882U, 736726680U,
    2774870372U };

  static const uint32_T c_printReceivedData[4] = { 2771799987U, 1170139851U,
    3519338680U, 321885583U };

  real_T offsetCompensationValue;
  real_T b_numFrames;
  b_struct_T estimate;
  real_T frameBER;

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2013a("tx", tx, prhs[0]);
  emlrtCheckArrayChecksumR2013a("useScopes", b_useScopes, prhs[3]);
  emlrtCheckArrayChecksumR2013a("printReceivedData", c_printReceivedData, prhs[4]);

  /* Marshall function inputs */
  offsetCompensationValue = c_emlrt_marshallIn(emlrtAliasP(prhs[1]),
    "offsetCompensationValue");
  b_numFrames = c_emlrt_marshallIn(emlrtAliasP(prhs[2]), "numFrames");

  /* Invoke the target function */
  receiveOFDM80211a_sdru(SD, offsetCompensationValue, b_numFrames, &frameBER,
    &estimate);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(frameBER);
  plhs[1] = c_emlrt_marshallOut(&estimate);
}

/* End of code generation (receiveOFDM80211a_sdru_api.c) */
