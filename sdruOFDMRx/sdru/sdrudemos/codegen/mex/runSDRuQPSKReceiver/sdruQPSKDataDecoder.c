/*
 * sdruQPSKDataDecoder.c
 *
 * Code generation for function 'sdruQPSKDataDecoder'
 *
 * C source code generated on: Tue Oct  8 17:03:40 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "sdruQPSKDataDecoder.h"
#include "SystemProp.h"
#include "SystemCore.h"
#include "mod.h"
#include "abs.h"
#include "exp.h"
#include "mean.h"
#include "Buffer.h"
#include "runSDRuQPSKReceiver_mexutil.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo of_emlrtRSI = { 45, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo pf_emlrtRSI = { 46, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo qf_emlrtRSI = { 47, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo rf_emlrtRSI = { 48, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo sf_emlrtRSI = { 49, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo tf_emlrtRSI = { 54, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo uf_emlrtRSI = { 56, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo vf_emlrtRSI = { 57, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo wf_emlrtRSI = { 58, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo xf_emlrtRSI = { 60, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo yf_emlrtRSI = { 62, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo bg_emlrtRSI = { 1, "QPSKModulator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/QPSKModulator.p" };

static emlrtRSInfo gg_emlrtRSI = { 69, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo hg_emlrtRSI = { 72, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo ig_emlrtRSI = { 88, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo jg_emlrtRSI = { 97, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo kg_emlrtRSI = { 99, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo lg_emlrtRSI = { 102, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo mg_emlrtRSI = { 105, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo ng_emlrtRSI = { 106, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo og_emlrtRSI = { 110, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo pg_emlrtRSI = { 111, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo qg_emlrtRSI = { 115, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo rg_emlrtRSI = { 117, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo sg_emlrtRSI = { 118, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo tg_emlrtRSI = { 119, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo ug_emlrtRSI = { 149, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo vg_emlrtRSI = { 295, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo wg_emlrtRSI = { 296, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtRSInfo xg_emlrtRSI = { 154, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

static emlrtRSInfo bh_emlrtRSI = { 36, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

static emlrtMCInfo r_emlrtMCI = { 149, 17, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtMCInfo u_emlrtMCI = { 154, 1, "de2bi",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/eml/de2bi.m" };

static emlrtRTEInfo p_emlrtRTEI = { 72, 27, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m"
};

static emlrtBCInfo m_emlrtBCI = { 1, 200, 72, 20, "rxData",
  "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m",
  0 };

static emlrtDCInfo emlrtDCI = { 72, 20, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m",
  1 };

static emlrtDCInfo b_emlrtDCI = { 294, 32, "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m",
  1 };

static emlrtBCInfo n_emlrtBCI = { 1, 100, 294, 32, "MsgStrSet",
  "sdruQPSKDataDecoder",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/sdruQPSKDataDecoder.m",
  0 };

/* Function Declarations */
static void c_sdruQPSKDataDecoder_messEstim(real_T ind, real_T msg[105]);
static void disp(const mxArray *b, emlrtMCInfo *location);
static void sdruQPSKDataDecoder_bits2ASCII(const sdruQPSKDataDecoder_264 *obj,
  const real_T u[105], real_T *estimatedFrameIndex, real_T *syncIndex);

/* Function Definitions */
static void c_sdruQPSKDataDecoder_messEstim(real_T ind, real_T msg[105])
{
  real_T y;
  int32_T j;
  int32_T nmin;
  char_T msgStr[15];
  static const char_T MsgStrSet[1500] = { 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H',
    'H', 'H', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
    'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w',
    'w', 'w', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o',
    'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r',
    'r', 'r', 'r', 'r', 'r', 'r', 'r', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'l',
    'l', 'l', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd',
    'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '1', '1',
    '1', '1', '1', '1', '1', '1', '1', '2', '2', '2', '2', '2', '2', '2', '2',
    '2', '2', '3', '3', '3', '3', '3', '3', '3', '3', '3', '3', '4', '4', '4',
    '4', '4', '4', '4', '4', '4', '4', '5', '5', '5', '5', '5', '5', '5', '5',
    '5', '5', '6', '6', '6', '6', '6', '6', '6', '6', '6', '6', '7', '7', '7',
    '7', '7', '7', '7', '7', '7', '7', '8', '8', '8', '8', '8', '8', '8', '8',
    '8', '8', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9' };

  int8_T d[15];
  int8_T mtmp;
  const mxArray *b_y;
  static const int32_T iv92[2] = { 1, 17 };

  const mxArray *m20;
  char_T cv129[17];
  static const char_T cv130[17] = { 'c', 'o', 'm', 'm', ':', 'd', 'e', '2', 'b',
    'i', ':', 'S', 'm', 'a', 'l', 'l', 'N' };

  const mxArray *c_y;
  static const int32_T iv93[2] = { 1, 58 };

  char_T cv131[58];
  static const char_T cv132[58] = { 'S', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd',
    ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 'c', 'o', 'l', 'u',
    'm', 'n', 's', ' ', 'i', 'n', ' ', 'o', 'u', 't', 'p', 'u', 't', ' ', 'm',
    'a', 't', 'r', 'i', 'x', ' ', 'i', 's', ' ', 't', 'o', 'o', ' ', 's', 'm',
    'a', 'l', 'l', '.' };

  int8_T msgBin_data[105];
  int32_T tmp;
  int8_T b_msgBin_data[105];
  real_T x_data[105];

  /*  Convert binary-valued column vector to 7-bit decimal values. */
  /*  binary digit weighting */
  /*  Obtain ASCII values of received frame */
  /*  Display ASCII message to command window    */
  /*  Retrieve last 2 ASCII values */
  /*  Create lookup table of ASCII values and corresponding integer numbers  */
  /*  Initialize variables */
  /*  Index lookup table with decoded ASCII values */
  /*  There are more efficient ways to perform vector indexing */
  /*  using MATLAB functions like find(). However, to meet codegen */
  /*  requirements, the usage of the four loop was necessary. */
  /*  Find the ones place in the lookup table */
  /*  Find the tens place in the lookup table */
  /*  Estimate the frame index */
  y = (ind - muDoubleScalarFloor(ind / 100.0) * 100.0) + 1.0;
  j = (int32_T)emlrtIntegerCheckFastR2012b(y, &b_emlrtDCI, emlrtRootTLSGlobal);
  nmin = emlrtDynamicBoundsCheckFastR2012b(j, 1, 100, &n_emlrtBCI,
    emlrtRootTLSGlobal);
  for (j = 0; j < 15; j++) {
    msgStr[j] = MsgStrSet[(nmin + 100 * j) - 1];
  }

  emlrtPushRtStackR2012b(&vg_emlrtRSI, emlrtRootTLSGlobal);
  for (j = 0; j < 15; j++) {
    d[j] = msgStr[j];
  }

  emlrtPushRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
  mtmp = d[0];
  for (nmin = 0; nmin < 14; nmin++) {
    if (d[nmin + 1] > mtmp) {
      mtmp = d[nmin + 1];
    }
  }

  y = muDoubleScalarLog(mtmp) / 0.69314718055994529;
  nmin = (int32_T)muDoubleScalarFloor(y) + 1;
  if (!((int32_T)muDoubleScalarPower(2.0, nmin) > mtmp)) {
    nmin = (int32_T)muDoubleScalarFloor(y) + 2;
  }

  if (7 >= nmin) {
  } else {
    emlrtPushRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m20 = mxCreateCharArray(2, iv92);
    for (nmin = 0; nmin < 17; nmin++) {
      cv129[nmin] = cv130[nmin];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 17, m20, cv129);
    emlrtAssign(&b_y, m20);
    c_y = NULL;
    m20 = mxCreateCharArray(2, iv93);
    for (nmin = 0; nmin < 58; nmin++) {
      cv131[nmin] = cv132[nmin];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 58, m20, cv131);
    emlrtAssign(&c_y, m20);
    c_error(b_y, c_y, &u_emlrtMCI);
    emlrtPopRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
  memset(&msgBin_data[0], 0, 105U * sizeof(int8_T));
  for (nmin = 0; nmin < 15; nmin++) {
    j = 1;
    tmp = d[nmin];
    while ((j <= 7) && (tmp > 0)) {
      msgBin_data[nmin + 15 * (j - 1)] = (int8_T)muDoubleScalarRem(tmp, 2.0);
      tmp = (int32_T)muDoubleScalarFloor((real_T)tmp / 2.0);
      j++;
    }
  }

  for (j = 0; j < 7; j++) {
    for (nmin = 0; nmin < 15; nmin++) {
      b_msgBin_data[nmin + 15 * j] = msgBin_data[nmin + 15 * (6 - j)];
    }
  }

  for (j = 0; j < 7; j++) {
    for (nmin = 0; nmin < 15; nmin++) {
      msgBin_data[nmin + 15 * j] = b_msgBin_data[nmin + 15 * j];
    }
  }

  emlrtPopRtStackR2012b(&vg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
  for (j = 0; j < 15; j++) {
    for (nmin = 0; nmin < 7; nmin++) {
      x_data[nmin + 7 * j] = msgBin_data[j + 15 * nmin];
    }
  }

  memcpy(&msg[0], &x_data[0], 105U * sizeof(real_T));
  emlrtPopRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
}

static void disp(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "disp", TRUE,
                        location);
}

static void sdruQPSKDataDecoder_bits2ASCII(const sdruQPSKDataDecoder_264 *obj,
  const real_T u[105], real_T *estimatedFrameIndex, real_T *syncIndex)
{
  real_T y[15];
  int32_T tensPlace;
  int32_T onesPlace;
  real_T b_y;
  int32_T ii;
  static const int8_T iv90[7] = { 64, 32, 16, 8, 4, 2, 1 };

  char_T c_y[15];
  const mxArray *d_y;
  static const int32_T iv91[2] = { 1, 15 };

  const mxArray *m19;
  int8_T look_tab[20];
  boolean_T dec_found;
  boolean_T unity_found;
  for (tensPlace = 0; tensPlace < 15; tensPlace++) {
    onesPlace = 7 * tensPlace - 1;
    b_y = 0.0;
    for (ii = 0; ii < 7; ii++) {
      b_y += (real_T)iv90[ii] * u[(ii + onesPlace) + 1];
    }

    y[tensPlace] = b_y;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
  for (tensPlace = 0; tensPlace < 15; tensPlace++) {
    onesPlace = (int32_T)y[tensPlace];
    onesPlace = emlrtDynamicBoundsCheckFastR2012b(onesPlace, 0, 255, &emlrtBCI,
      emlrtRootTLSGlobal);
    onesPlace = (int32_T)muDoubleScalarRem(onesPlace, 256.0);
    if (onesPlace < 0) {
      c_y[tensPlace] = (int8_T)-(int8_T)(uint8_T)-(real_T)onesPlace;
    } else {
      c_y[tensPlace] = (int8_T)(uint8_T)(real_T)onesPlace;
    }
  }

  d_y = NULL;
  m19 = mxCreateCharArray(2, iv91);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 15, m19, c_y);
  emlrtAssign(&d_y, m19);
  disp(d_y, &r_emlrtMCI);
  emlrtPopRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
  for (tensPlace = 0; tensPlace < 20; tensPlace++) {
    look_tab[tensPlace] = 0;
  }

  for (tensPlace = 0; tensPlace < 10; tensPlace++) {
    look_tab[tensPlace << 1] = (int8_T)tensPlace;
    look_tab[1 + (tensPlace << 1)] = (int8_T)(48 + tensPlace);
  }

  *estimatedFrameIndex = 100.0;
  *syncIndex = 0.0;
  onesPlace = 0;
  tensPlace = 0;
  dec_found = FALSE;
  unity_found = FALSE;
  for (ii = 0; ii < 10; ii++) {
    if (y[13] == look_tab[1 + (ii << 1)]) {
      onesPlace = 10 * look_tab[ii << 1];
      dec_found = TRUE;
    }

    if (y[14] == look_tab[1 + (ii << 1)]) {
      tensPlace = look_tab[ii << 1];
      unity_found = TRUE;
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  if (dec_found && unity_found && obj->pSyncFlag) {
    *estimatedFrameIndex = onesPlace + tensPlace;
    *syncIndex = obj->pSyncIndex + 1.0;
  }
}

void sdruQPSKDataDecoder_setupImpl(sdruQPSKDataDecoder_264 *obj)
{
  sdruQPSKDataDecoder_264 *b_obj;
  commcodegen_QPSKModulator *c_obj;
  comm_QPSKModulator_7 *d_obj;
  int32_T i;
  static const real_T dv4[8] = { 0.70710678118654757, 0.70710678118654746,
    -0.70710678118654746, 0.70710678118654757, -0.70710678118654768,
    -0.70710678118654746, 0.70710678118654735, -0.70710678118654768 };

  creal_T varargout_1[13];
  const mxArray *y;
  static const int32_T iv68[2] = { 1, 45 };

  const mxArray *m15;
  char_T cv97[45];
  static const char_T cv98[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv69[2] = { 1, 4 };

  char_T cv99[4];
  static const char_T cv100[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv70[2] = { 1, 51 };

  char_T cv101[51];
  static const char_T cv102[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv71[2] = { 1, 5 };

  char_T cv103[5];
  static const char_T cv104[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int8_T value[8] = { 26, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int8_T iv72[8] = { 26, 1, 1, 1, 1, 1, 1, 1 };

  int32_T inIdx;
  int32_T outIdx;
  int32_T symbolIndex;
  static const int8_T varargin_1[26] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
    0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 };

  int32_T u;
  dspcodegen_Crosscorrelator *e_obj;
  dsp_Crosscorrelator_8 *f_obj;
  comm_QPSKDemodulator_9 *g_obj;
  commcodegen_Descrambler *h_obj;
  comm_Descrambler_10 *i_obj;
  static const int8_T iv73[5] = { 1, 1, 1, 0, 1 };

  commcodegen_ErrorRate *j_obj;
  comm_ErrorRate_11 *k_obj;
  emlrtPushRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pCount = 0.0;
  emlrtPopRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pDelay = 0.0;
  emlrtPopRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pPhase = 0.0;
  emlrtPopRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pf_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pFrameIndex = 1.0;
  emlrtPopRtStackR2012b(&pf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pSyncIndex = 0.0;
  emlrtPopRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pSyncFlag = TRUE;
  emlrtPopRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
  Buffer_Buffer(&obj->pBuffer);
  emlrtPopRtStackR2012b(&sf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &obj->pModulator;
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &c_obj->cSFunObject;

  /* System object Constructor function: comm.QPSKModulator */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    d_obj->P0_modmap[i] = dv4[i];
  }

  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&uf_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &obj->pModulator;
  if (!c_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m15 = mxCreateCharArray(2, iv68);
    for (i = 0; i < 45; i++) {
      cv97[i] = cv98[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m15, cv97);
    emlrtAssign(&y, m15);
    b_y = NULL;
    m15 = mxCreateCharArray(2, iv69);
    for (i = 0; i < 4; i++) {
      cv99[i] = cv100[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m15, cv99);
    emlrtAssign(&b_y, m15);
    b_error(message(y, b_y, &k_emlrtMCI), &k_emlrtMCI);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!c_obj->isInitialized) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    if (!c_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m15 = mxCreateCharArray(2, iv70);
      for (i = 0; i < 51; i++) {
        cv101[i] = cv102[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m15, cv101);
      emlrtAssign(&c_y, m15);
      d_y = NULL;
      m15 = mxCreateCharArray(2, iv71);
      for (i = 0; i < 5; i++) {
        cv103[i] = cv104[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m15, cv103);
      emlrtAssign(&d_y, m15);
      b_error(message(c_y, d_y, &k_emlrtMCI), &k_emlrtMCI);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      c_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    c_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (c_obj->inputVarSize1[k] != (uint32_T)iv72[k]) {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        c_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &c_obj->cSFunObject;

  /* System object Outputs function: comm.QPSKModulator */
  inIdx = 0;
  outIdx = 0;
  for (i = 0; i < 13; i++) {
    symbolIndex = 0;
    for (k = 0; k < 2; k++) {
      symbolIndex <<= 1;
      u = varargin_1[inIdx];
      inIdx++;
      symbolIndex += u;
    }

    if (symbolIndex >= 0) {
      k = (int32_T)((uint32_T)symbolIndex >> 1);
    } else {
      k = ~(int32_T)((uint32_T)~symbolIndex >> 1);
    }

    symbolIndex ^= k;
    varargout_1[outIdx].re = d_obj->P0_modmap[symbolIndex << 1];
    varargout_1[outIdx].im = d_obj->P0_modmap[(symbolIndex << 1) + 1];
    outIdx++;
  }

  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ud_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  for (i = 0; i < 13; i++) {
    b_obj->pModulatedHeader[i] = varargout_1[i];
  }

  emlrtPopRtStackR2012b(&uf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
  e_obj = &obj->pCorrelator;
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  e_obj->isInitialized = FALSE;
  e_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  e_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  e_obj->inputDirectFeedthrough2 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  f_obj = &e_obj->cSFunObject;

  /* System object Constructor function: dsp.Crosscorrelator */
  f_obj->S0_isInitialized = FALSE;
  f_obj->S1_isReleased = FALSE;
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
  g_obj = &obj->pQPSKDemodulator;

  /* System object Constructor function: comm.QPSKDemodulator */
  g_obj->S0_isInitialized = FALSE;
  g_obj->S1_isReleased = FALSE;
  emlrtPopRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
  h_obj = &obj->pDescrambler;
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  h_obj->isInitialized = FALSE;
  h_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  h_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  i_obj = &h_obj->cSFunObject;

  /* System object Constructor function: comm.Descrambler */
  i_obj->S0_isInitialized = FALSE;
  i_obj->S1_isReleased = FALSE;
  for (i = 0; i < 5; i++) {
    i_obj->P0_Polynomial[i] = (uint8_T)iv73[i];
  }

  for (i = 0; i < 4; i++) {
    i_obj->P1_IniState[i] = 0;
  }

  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
  j_obj = &obj->pBER;
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  j_obj->isInitialized = FALSE;
  j_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  j_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  j_obj->inputDirectFeedthrough2 = FALSE;
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  k_obj = &j_obj->cSFunObject;

  /* System object Constructor function: comm.ErrorRate */
  k_obj->S0_isInitialized = FALSE;
  k_obj->S1_isReleased = FALSE;
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
}

void sdruQPSKDataDecoder_stepImpl(sdruQPSKDataDecoder_264 *obj, const creal_T
  DataIn[100], real_T BER[3])
{
  creal_T rxData[200];
  real_T d1;
  real_T b;
  int32_T i;
  int32_T iIdx;
  int32_T iv74[100];
  creal_T b_obj[13];
  real_T syncIndex;
  creal_T y;
  creal_T b_y;
  creal_T phShiftedData[100];
  int32_T ix;
  int32_T demodOut[200];
  real_T b_demodOut[174];
  real_T deScrData[174];
  creal_T dcv2[112];
  real_T z[112];
  boolean_T exitg1;
  real_T transmittedMessage[105];
  emlrtPushRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
  j_SystemCore_step(&obj->pBuffer, DataIn, rxData);
  emlrtPopRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
  d1 = obj->pDelay;
  b = obj->pDelay;
  if (d1 == b) {
  } else {
    emlrtPushRtStackR2012b(&hg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &p_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    emlrtPopRtStackR2012b(&hg_emlrtRSI, emlrtRootTLSGlobal);
  }

  for (i = 0; i < 100; i++) {
    b = d1 + (1.0 + (real_T)i);
    iIdx = (int32_T)emlrtIntegerCheckFastR2012b(b, &emlrtDCI, emlrtRootTLSGlobal);
    emlrtDynamicBoundsCheckFastR2012b(iIdx, 1, 200, &m_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  for (i = 0; i < 100; i++) {
    iv74[i] = (int32_T)(d1 + (1.0 + (real_T)i));
  }

  for (i = 0; i < 13; i++) {
    b = obj->pModulatedHeader[i].re;
    syncIndex = -obj->pModulatedHeader[i].im;
    b_obj[i].re = b * rxData[iv74[i] - 1].re - syncIndex * rxData[iv74[i] - 1].
      im;
    b_obj[i].im = b * rxData[iv74[i] - 1].im + syncIndex * rxData[iv74[i] - 1].
      re;
  }

  y = mean(b_obj);
  if ((rxData[(int32_T)(d1 + 1.0) - 1].re != 0.0) || (rxData[(int32_T)(d1 + 1.0)
       - 1].im != 0.0)) {
    b = obj->pPhase;
    b_y.re = b * -0.0;
    b_y.im = -b;
    b_exp(&b_y);
    for (i = 0; i < 100; i++) {
      phShiftedData[i].re = rxData[(int32_T)(d1 + (1.0 + (real_T)i)) - 1].re *
        b_y.re - rxData[(int32_T)(d1 + (1.0 + (real_T)i)) - 1].im * b_y.im;
      phShiftedData[i].im = rxData[(int32_T)(d1 + (1.0 + (real_T)i)) - 1].re *
        b_y.im + rxData[(int32_T)(d1 + (1.0 + (real_T)i)) - 1].im * b_y.re;
    }
  } else {
    for (i = 0; i < 100; i++) {
      phShiftedData[i].re = 0.0;
      phShiftedData[i].im = 0.0;
    }
  }

  /* System object Outputs function: comm.QPSKDemodulator */
  for (iIdx = 0; iIdx < 100; iIdx++) {
    if (phShiftedData[iIdx].re > 0.0) {
      if (phShiftedData[iIdx].im >= 0.0) {
        i = 0;
      } else {
        i = 3;
      }
    } else if (phShiftedData[iIdx].re < 0.0) {
      if (phShiftedData[iIdx].im <= 0.0) {
        i = 2;
      } else {
        i = 1;
      }
    } else if (phShiftedData[iIdx].im < 0.0) {
      i = 3;
    } else if (phShiftedData[iIdx].im > 0.0) {
      i = 1;
    } else {
      i = 0;
    }

    ix = (int32_T)((uint32_T)i >> 1);
    ix ^= i;
    for (i = 0; i < 2; i++) {
      demodOut[((iIdx << 1) - i) + 1] = ix % 2;
      ix = (int32_T)((uint32_T)ix >> 1);
    }
  }

  emlrtPushRtStackR2012b(&ig_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 174; i++) {
    b_demodOut[i] = demodOut[i + 26];
  }

  k_SystemCore_step(&obj->pDescrambler, b_demodOut, deScrData);
  emlrtPopRtStackR2012b(&ig_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jg_emlrtRSI, emlrtRootTLSGlobal);
  l_SystemCore_step(&obj->pCorrelator, obj->pModulatedHeader, DataIn, dcv2);
  b_abs(dcv2, z);
  emlrtPopRtStackR2012b(&jg_emlrtRSI, emlrtRootTLSGlobal);
  i = 1;
  b = z[0];
  iIdx = 1;
  if (muDoubleScalarIsNaN(z[0])) {
    ix = 2;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ix < 113)) {
      i = ix;
      if (!muDoubleScalarIsNaN(z[ix - 1])) {
        b = z[ix - 1];
        iIdx = ix;
        exitg1 = TRUE;
      } else {
        ix++;
      }
    }
  }

  if (i < 112) {
    while (i + 1 < 113) {
      if (z[i] > b) {
        b = z[i];
        iIdx = i + 1;
      }

      i++;
    }
  }

  emlrtPushRtStackR2012b(&kg_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemProp_matlabCodegenSetAn(obj, b_mod(100.0 - (real_T)iIdx, 99.0));
  emlrtPopRtStackR2012b(&kg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lg_emlrtRSI, emlrtRootTLSGlobal);
  f_SystemProp_matlabCodegenSetAn(obj, muDoubleScalarRound(muDoubleScalarAtan2
    (y.im, y.re) * 2.0 / 3.1415926535897931) / 2.0 * 3.1415926535897931);
  emlrtPopRtStackR2012b(&lg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mg_emlrtRSI, emlrtRootTLSGlobal);
  sdruQPSKDataDecoder_bits2ASCII(obj, *(real_T (*)[105])&deScrData[0], &b,
    &syncIndex);
  emlrtPopRtStackR2012b(&mg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
  h_SystemProp_matlabCodegenSetAn(obj, syncIndex);
  emlrtPopRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->pSyncFlag && (b != 100.0) && (obj->pSyncIndex >= 4.0)) {
    emlrtPushRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
    g_SystemProp_matlabCodegenSetAn(obj, b);
    emlrtPopRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
    i_SystemProp_matlabCodegenSetAn(obj, FALSE);
    emlrtPopRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
  c_sdruQPSKDataDecoder_messEstim(obj->pFrameIndex, transmittedMessage);
  emlrtPopRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  m_SystemCore_step(&obj->pBER, transmittedMessage, *(real_T (*)[105])&
                    deScrData[0], BER);
  emlrtPopRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemProp_matlabCodegenSetAn(obj, obj->pCount + 1.0);
  emlrtPopRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
  g_SystemProp_matlabCodegenSetAn(obj, obj->pFrameIndex + 1.0);
  emlrtPopRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (sdruQPSKDataDecoder.c) */
