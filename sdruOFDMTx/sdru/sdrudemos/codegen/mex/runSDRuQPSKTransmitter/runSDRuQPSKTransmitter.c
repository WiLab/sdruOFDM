/*
 * runSDRuQPSKTransmitter.c
 *
 * Code generation for function 'runSDRuQPSKTransmitter'
 *
 * C source code generated on: Tue Oct  8 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSDRuQPSKTransmitter.h"
#include "SystemCore.h"
#include "SDRuTransmitter.h"
#include "QPSKTransmitter.h"
#include "runSDRuQPSKTransmitter_data.h"

/* Variable Definitions */
static comm_SDRuTransmitter hSDRu;
static emlrtRSInfo emlrtRSI = { 10, "runSDRuQPSKTransmitter",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m"
};

static emlrtRSInfo b_emlrtRSI = { 20, "runSDRuQPSKTransmitter",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m"
};

static emlrtRSInfo c_emlrtRSI = { 31, "runSDRuQPSKTransmitter",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m"
};

static emlrtRSInfo d_emlrtRSI = { 33, "runSDRuQPSKTransmitter",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m"
};

static emlrtRSInfo e_emlrtRSI = { 38, "runSDRuQPSKTransmitter",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m"
};

static emlrtRSInfo f_emlrtRSI = { 39, "runSDRuQPSKTransmitter",
  "/home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos/runSDRuQPSKTransmitter.m"
};

/* Function Definitions */
void runSDRuQPSKTransmitter(void)
{
  real_T currentTime;
  creal_T data[400];

  /*    Copyright 2012 The MathWorks, Inc. */
  if (!hTx_not_empty) {
    /*  Initialize the components */
    /*  Create and configure the transmitter System object */
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    QPSKTransmitter_QPSKTransmitter(&hTx);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    hTx_not_empty = TRUE;

    /*  Create and configure the SDRu System object */
    emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    SDRuTransmitter_SDRuTransmitter(&hSDRu);
    emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  }

  currentTime = 0.0;

  /* Transmission Process */
  while (currentTime < 1000.0) {
    /*  Bit generation, modulation and transmission filtering */
    emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    SystemCore_step(&hTx, data);
    emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);

    /*  Data transmission */
    emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
    d_SystemCore_step(&hSDRu, data);
    emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);

    /*  Update simulation time */
    currentTime += 0.02;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_release(&hTx);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_release(&hSDRu);
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (runSDRuQPSKTransmitter.c) */
