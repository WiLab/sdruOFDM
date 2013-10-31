/*
 * TestSDRuCodegen_api.c
 *
 * Code generation for function 'TestSDRuCodegen_api'
 *
 * C source code generated on: Tue Oct  8 16:14:51 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TestSDRuCodegen.h"
#include "TestSDRuCodegen_api.h"
#include "TestSDRuCodegen_mexutil.h"

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(ResolvedFunctionInfo u[83]);
static void b_info_helper(ResolvedFunctionInfo info[83]);
static void info_helper(ResolvedFunctionInfo info[83]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(ResolvedFunctionInfo u[83])
{
  const mxArray *y;
  int32_T iv10[1];
  int32_T i10;
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m6;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  y = NULL;
  iv10[0] = 83;
  emlrtAssign(&y, mxCreateStructArray(1, iv10, 0, NULL));
  for (i10 = 0; i10 < 83; i10++) {
    r0 = &u[i10];
    b_u = r0->context;
    b_y = NULL;
    m6 = mxCreateString(b_u);
    emlrtAssign(&b_y, m6);
    emlrtAddField(y, b_y, "context", i10);
    b_u = r0->name;
    c_y = NULL;
    m6 = mxCreateString(b_u);
    emlrtAssign(&c_y, m6);
    emlrtAddField(y, c_y, "name", i10);
    b_u = r0->dominantType;
    d_y = NULL;
    m6 = mxCreateString(b_u);
    emlrtAssign(&d_y, m6);
    emlrtAddField(y, d_y, "dominantType", i10);
    b_u = r0->resolved;
    e_y = NULL;
    m6 = mxCreateString(b_u);
    emlrtAssign(&e_y, m6);
    emlrtAddField(y, e_y, "resolved", i10);
    c_u = r0->fileTimeLo;
    f_y = NULL;
    m6 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m6) = c_u;
    emlrtAssign(&f_y, m6);
    emlrtAddField(y, f_y, "fileTimeLo", i10);
    c_u = r0->fileTimeHi;
    g_y = NULL;
    m6 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m6) = c_u;
    emlrtAssign(&g_y, m6);
    emlrtAddField(y, g_y, "fileTimeHi", i10);
    c_u = r0->mFileTimeLo;
    h_y = NULL;
    m6 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m6) = c_u;
    emlrtAssign(&h_y, m6);
    emlrtAddField(y, h_y, "mFileTimeLo", i10);
    c_u = r0->mFileTimeHi;
    i_y = NULL;
    m6 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m6) = c_u;
    emlrtAssign(&i_y, m6);
    emlrtAddField(y, i_y, "mFileTimeHi", i10);
  }

  return y;
}

static void b_info_helper(ResolvedFunctionInfo info[83])
{
  info[64].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[64].name = "matlab.system.pvParse";
  info[64].dominantType = "comm.SDRuReceiver";
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
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/SDRuReceiver.p";
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
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[71].name = "repmat";
  info[71].dominantType = "char";
  info[71].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[71].fileTimeLo = 1352446460U;
  info[71].fileTimeHi = 0U;
  info[71].mFileTimeLo = 0U;
  info[71].mFileTimeHi = 0U;
  info[72].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[72].name = "eml_assert_valid_size_arg";
  info[72].dominantType = "double";
  info[72].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[72].fileTimeLo = 1286840294U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[73].name = "eml_index_class";
  info[73].dominantType = "";
  info[73].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[73].fileTimeLo = 1323192178U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[74].name = "eml_index_minus";
  info[74].dominantType = "coder.internal.indexInt";
  info[74].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[74].fileTimeLo = 1286840378U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[75].name = "closeDataConnection";
  info[75].dominantType = "int32";
  info[75].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[75].fileTimeLo = 1345182484U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/closeDataConnection.m";
  info[76].name = "mapiPrivate";
  info[76].dominantType = "int32";
  info[76].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[76].fileTimeLo = 1357947598U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[77].name = "UsrpErrorCapiEnumT";
  info[77].dominantType = "double";
  info[77].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[77].fileTimeLo = 1345182482U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 0U;
  info[77].mFileTimeHi = 0U;
  info[78].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[78].name = "char";
  info[78].dominantType = "double";
  info[78].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[78].fileTimeLo = 1319751568U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[79].name = "UsrpErrorCapiEnumT";
  info[79].dominantType = "";
  info[79].resolved =
    "[N]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[79].fileTimeLo = 1345182482U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[80].name = "reportDrivers";
  info[80].dominantType = "";
  info[80].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[80].fileTimeLo = 1345182488U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/reportDrivers.m";
  info[81].name = "mapiPrivate";
  info[81].dominantType = "char";
  info[81].resolved =
    "[E]/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[81].fileTimeLo = 1357947598U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[82].name = "coder.internal.warning";
  info[82].dominantType = "char";
  info[82].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[82].fileTimeLo = 1311277408U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 0U;
  info[82].mFileTimeHi = 0U;
}

static void info_helper(ResolvedFunctionInfo info[83])
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
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[4].name = "matlab.System";
  info[4].dominantType = "unknown";
  info[4].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[4].fileTimeLo = 1357962380U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/SDRuReceiver.p";
  info[5].name = "comm.internal.SDRuBase";
  info[5].dominantType = "unknown";
  info[5].resolved =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[5].fileTimeLo = 1381255251U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/TestSDRuCodegen.m";
  info[6].name = "comm.SDRuReceiver";
  info[6].dominantType = "char";
  info[6].resolved =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/SDRuReceiver.p";
  info[6].fileTimeLo = 1381255251U;
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
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[8].name = "coder.internal.getHostName";
  info[8].dominantType = "char";
  info[8].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m";
  info[8].fileTimeLo = 1327440774U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
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
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
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
  info[24].dominantType = "comm.SDRuReceiver";
  info[24].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[24].fileTimeLo = 1357962380U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[C]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/+comm/+internal/SDRuBase.p";
  info[25].name = "checkIPAddressFormat";
  info[25].dominantType = "char";
  info[25].resolved =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m";
  info[25].fileTimeLo = 1381255251U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m";
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
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m";
  info[28].name = "coder.internal.errorIf";
  info[28].dominantType = "char";
  info[28].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[28].fileTimeLo = 1334093538U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m";
  info[29].name = "isrow";
  info[29].dominantType = "char";
  info[29].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[29].fileTimeLo = 1346531960U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m";
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
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m";
  info[37].name = "length";
  info[37].dominantType = "double";
  info[37].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[37].fileTimeLo = 1303167806U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 0U;
  info[37].mFileTimeHi = 0U;
  info[38].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m";
  info[38].name = "length";
  info[38].dominantType = "char";
  info[38].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[38].fileTimeLo = 1303167806U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context =
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m!checkNumeric";
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
    "[E]/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/checkIPAddressFormat.m!checkNumeric";
  info[63].name = "coder.internal.errorIf";
  info[63].dominantType = "char";
  info[63].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[63].fileTimeLo = 1334093538U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

void TestSDRuCodegen_api(const mxArray *plhs[1])
{
  real_T x;

  /* Invoke the target function */
  x = TestSDRuCodegen();

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(x);
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[83];
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info_helper(info);
  emlrtAssign(&nameCaptureInfo, b_emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

/* End of code generation (TestSDRuCodegen_api.c) */
