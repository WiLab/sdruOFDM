/*
 * runSDRuQPSKReceiver.c
 *
 * Code generation for function 'runSDRuQPSKReceiver'
 *
 * C source code generated on: Tue Oct  8 17:03:39 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKReceiver.h"
#include "SystemCore.h"
#include "SDRuReceiver.h"
#include "sdruQPSKRx.h"
#include "runSDRuQPSKReceiver_data.h"

/* Variable Definitions */
static comm_SDRuReceiver hSDRu;
static emlrtRSInfo emlrtRSI = { 64, "runSDRuQPSKReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m"
};

static emlrtRSInfo b_emlrtRSI = { 63, "runSDRuQPSKReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m"
};

static emlrtRSInfo c_emlrtRSI = { 56, "runSDRuQPSKReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m"
};

static emlrtRSInfo d_emlrtRSI = { 51, "runSDRuQPSKReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m"
};

static emlrtRSInfo e_emlrtRSI = { 33, "runSDRuQPSKReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m"
};

static emlrtRSInfo f_emlrtRSI = { 8, "runSDRuQPSKReceiver",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKReceiver.m"
};

/* Function Definitions */
void runSDRuQPSKReceiver(runSDRuQPSKReceiverStackData *SD, real_T BER_data[3],
  int32_T BER_size[1])
{
  real_T currentTime;
  uint32_T len;
  int32_T i;
  real_T dv0[3];

  /*    Copyright 2012 The MathWorks, Inc. */
  if (!hRx_not_empty) {
    emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    sdruQPSKRx_sdruQPSKRx(&hRx);
    emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    hRx_not_empty = TRUE;
    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    SDRuReceiver_SDRuReceiver(&hSDRu);
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  }

  /*  Initialize variables */
  currentTime = 0.0;
  len = 0U;
  BER_size[0] = 1;
  BER_data[0] = rtNaN;
  for (i = 0; i < 4000; i++) {
    SD->f1.corruptSignal[i].re = 0.0;
    SD->f1.corruptSignal[i].im = 0.0;
  }

  while (currentTime < 5.0) {
    /*  Keep accessing the SDRu System object output until it is valid */
    while (len <= 0U) {
      emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
      SystemCore_step(&hSDRu, SD->f1.corruptSignal, &len);
      emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    /*  When the SDRu System object output is valid, decode the received */
    /*  message */
    emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    b_SystemCore_step(SD, &hRx, SD->f1.corruptSignal, dv0);
    BER_size[0] = 3;
    for (i = 0; i < 3; i++) {
      BER_data[i] = dv0[i];
    }

    emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);

    /*  Update simulation time */
    currentTime += 0.02;
    len = 0U;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_release(&hRx);
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_release(&hSDRu);
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (runSDRuQPSKReceiver.c) */
