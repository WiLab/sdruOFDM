%% FRS/GMRS Walkie-Talkie Receiver with USRP(R) Hardware
% This example shows how to use the Universal Software Radio Peripheral(R)
% (USRP(R)) device with MATLAB(R) to implement a walkie-talkie receiver.
% The specific radio standard that this example follows is FRS/GMRS (Family
% Radio Service / General Mobile Radio Service) with CTCSS (Continuous
% Tone-Coded Squelch System).  You can transmit a signal to the implemented
% receiver using a commercial walkie-talkie device.
%
% In order to run this example, you need a USRP(R) board with an
% appropriate receiver daughterboard that supports the UHF 462-467 MHz band
% (for example, WBX).  Please refer to <../../help/index.html Getting
% Started> for details on configuring your host computer to work with the
% SDRu Receiver System object, comm.SDRuReceiver.
% 
% This example is designed to work with USA standards for FRS/GMRS
% operation. The technical specifications for these standards can be found
% at [<#20 1> ] and [ <#20 2> ]. Operation in other countries may or may
% not work.

%   Copyright 2011-2012 The MathWorks, Inc.

%% Overview
% Please refer to the <sdruFRSGMRSTransmitter.html FRS/GMRS Walkie-Talkie
% Transmitter with USRP(R) Hardware> example for general information and
% overview details.  Note that all the information in that section applies
% to this example, except that this example is designed to receive signals
% instead of transmit them.
%
% Also, please refer to the Simulink(R) model in the <sdruFRSGMRSRx.html
% FRS/GMRS Walkie-Talkie Receiver with USRP(R) Hardware> example for a
% block diagram view of the system.

%% Initialization
% The <matlab:edit('configureSdruFRSGMRSRxDemo.m')
% configureSdruFRSGMRSRxDemo.m> script initializes some simulation
% parameters and generates a structure, frsRx. The fields of this structure
% are the parameters of the FRS/GMRS receiver system at hand.

% Configure the example to receive on channel 12 with the CTCSS code 5 with
% a detection threshold of 0.1.
channel            = 12;
CTCSSCode          = 5;
detectionThreshold = 0.1;

frsRx = configureSdruFRSGMRSRxDemo(channel, CTCSSCode, detectionThreshold)

%% FRS/GMRS Receiver
% The FRS/GMRS receiver example tunes the USRP(R) board to receive at the
% center frequency specified by the channel selection. The script applies
% automatic gain control (AGC) and FM demodulates the received signal. A
% CTCSS tone decoder passes the demodulated signal to an audio device if
% the received code matches the selected code.

%%
% *AGC and Channel Selectivity Filter*
%
% Automatic gain controller applies a variable gain to the received signal
% to assure that the received signal amplitude is at a known level. Set the
% DesiredAmplitude property to 1. The AGC updates the gain periodically.
% Set UpdatePeriod property to 200. You can increase the update period,
% until it equals the input length, to increase the speed of the AGC
% algorithm. In this example, the walkie-talkie transmitter is likely
% nearby the USRP(R) board, which implies that the received signal should
% not suffer from fading, and the received signal-to-noise ratio (SNR)
% should be high. In practice, the received signals will likely suffer from
% fading and low SNR.

hAGC = comm.AGC('UpdatePeriod', 200, ...
  'StepSize',     0.1);

%%
% This script uses a low pass channel separation filter to reduce the
% signals from an adjacent channel.  The gap between adjacent channels is
% 25 kHz, which means the baseband bandwidth is at most 12.5 kHz. Thus, we
% choose the cutoff frequency to be 10 kHz. Create a digital filter System
% object that implements an FIR transfer function and set the Numerator
% property to the value specified in the frsRx structure.

hChanFilt = dsp.DigitalFilter('TransferFunction', 'FIR (all zeros)', ...
  'Numerator', frsRx.ChannelFilterNumerator);

%%
% Next, a channel selector computes the average power of the filtered
% signal. If it is greater than a threshold (set to a default of 10%), the
% channel selector determines that the received signal is from the correct
% channel and it allows the signal to pass through.  In the case of an
% out-of-band signal, although the channel separation filter reduces its
% magnitude, it is still FM modulated and the modulating signal will be
% present after FM demodulation.  To reject such a signal completely, the
% channel selector outputs zero.

%% 
% *FM Demodulation and Decimation*
%
% This example implements FM demodulation by taking the phase difference of
% consecutive complex samples. Use a delay System object to delay the
% received baseband signal to prepare for the phase difference calculation.

hDelay = dsp.Delay;

%%
% A decimation filter converts the sampling rate to 8 kHz. This rate is one
% of the native sampling rates of your host computer's output audio device.
% Use an FIR decimator System object to convert the 200 kHz signal to an 8
% kHz signal. Set the decimation factor to 25, and the numerator to the
% value specified in the frsRx structure.

hDecimator = dsp.FIRDecimator(frsRx.DecimationFactor, frsRx.Numerator);

%% 
% *Continuous Tone-Coded Squelch System (CTCSS)*
%
% The CTCSS [ <#20 3> ] decoder computes the power at each CTCSS tone
% frequency using the Goertzel algorithm [ <#20 4> ] and outputs the code
% with the largest power. The Goertzel algorithm provides an efficient
% method to compute the frequency components at predetermined frequencies,
% i.e., the tone code frequencies used by FRS/GMRS.
%
% The script compares the estimated received code with the preselected code
% and then sends the signal to the audio device if the two codes match.
% When the preselected code is zero, it indicates no squelch system is used
% and the decision block passes the signal at the channel to the audio
% device no matter which code is used.

hDecoder = FRSGMRSDemoCTCSSDecoder(...
  'MinimumBlockLength', frsRx.CTCSSDecodeBlockLength, ...
  'SampleRate',         frsRx.SampleRate);

%% 
% *Audio Output*
%
% A high pass filter with a cutoff frequency of 260 Hz filters out the
% CTCSS tones, which have a maximum frequency of 250 Hz. Use an audio
% player System object to play the received signals through your computer's
% speakers. If you do not hear any sound, please select another device
% using the DeviceName property of the audio player object, hAudio.

hAudioFilt = dsp.DigitalFilter('TransferFunction', 'FIR (all zeros)', ...
  'Numerator', frsRx.AudioFilterNumerator);

hAudio = dsp.AudioPlayer(frsRx.SampleRate);

%% SDRu
% The script communicates with the USRP(R) board using the SDRu receiver
% System object. You can supply the IP address of the USRP(R) board as an
% argument when you construct the object. The IP address can be any address
% within the same sub-network as the host computer. You set the rest of the
% properties using name-value pair arguments. Set the center frequency
% source to input port and the gain to 5 dB.

%%
% Set the decimation factor to 500 so that the example uses round numbers
% to convert the sampling rate to 8 kHz using small resampling filters.
% Because the USRP(R) board samples at a rate of 100 MHz, set the sample
% rate to 100 MHz / 500 = 200 kHz, which is the sample rate of the data
% received from the USRP(R) board. Frame length controls the number of
% samples at the output of the SDRu receiver, which is the input to the
% AGC. The frame length must be an integer multiple of the decimation
% factor, which is 25. Set the frame length to 4000 samples. Select the
% output data type as single to reduce the required memory and speed up
% execution.

hSDRu = comm.SDRuReceiver('192.168.10.2', ...
  'CenterFrequencySource', 'Input port', ...
  'Gain',                  frsRx.USRPGain, ...
  'DecimationFactor',      frsRx.USRPDecimationFactor, ...
  'SampleRate',            frsRx.FrontEndSampleRate, ...
  'FrameLength',           frsRx.USRPFrameLength, ...
  'OutputDataType',        'single')

%% Running the Example
% Turn on your walkie-talkie, set the channel to 12 and the private code to
% 5. The center frequency is a function of the selected channel number.

% Get the carrier frequency for the selected channel
fc = convertChan2FreqFRSGMRSDemo(frsRx.Channel);

%% 
% *Stream Processing Loop*
%
% Capture FRS/GMRS signals and demodulate for 10 seconds, which is
% specified by frsRx.StopTime. The SDRu object returns a column vector, x.
% Because the MATLAB script may run faster than the hardware, the object
% also returns the actual size of the valid data in x using the second
% output argument, len. If len is zero, then there is no new data for the
% demodulator code to process.

%%
% Check for the status of the USRP(R) radio
radio = findsdru(hSDRu.IPAddress); 
if strncmp(radio.Status, 'Success', 7)
  % Loop until the example reaches the target stop time.
  timeCounter = 0;
  while timeCounter < frsRx.StopTime
    
    [data, len] = step(hSDRu, fc);
    if len > 0
      
      % AGC and channel selectivity
      outAGC      = step(hAGC, data);
      
      outChanFilt = step(hChanFilt, outAGC);
      rxAmp       = mean(abs(outChanFilt));
      if rxAmp > frsRx.DetectionThreshold
        x = outChanFilt;
      else
        x = complex(single(zeros(frsRx.USRPFrameLength, 1)));
      end
      
      % FM demodulator and decimation
      xDelay  = step(hDelay, x);
      y       = angle(xDelay .* conj(x));
      outRC   = step(hDecimator, y);
      
      % CTCSS decoder
      rcvdCode = step(hDecoder, outRC);
      if (rcvdCode == frsRx.CTCSSCode) || (frsRx.CTCSSCode == 0)
        rcvdSig = outRC;
      else
        rcvdSig = single(zeros(frsRx.AudioFrameLength, 1));
      end
      
      % Output to audio device
      audioSig = step(hAudioFilt, rcvdSig);
      step(hAudio, audioSig);
      
      timeCounter = timeCounter + frsRx.USRPFrameTime;
    end
  end
else
  warning(message('sdru:sysobjdemos:MainLoop'))
end

%% 
% Release the audio and USRP(R) resources.

release(hAudio)
release(hSDRu); clear hSDRu

%% Conclusion
% In this example, you used Communications System Toolbox(TM) System
% objects to build an FRS/GMRS receiver utilizing the USRP(R) device. The
% example showed that the MATLAB script can process signals captured by the
% USRP(R) device in real time.

%% Further Exploration
% The CTCSS decoding computes the DFT (Discrete-Time Fourier Transform) of
% the incoming signal using the Goertzel algorithm and computes the power
% at the tone frequencies. Since the tone frequencies are very close to
% each other (only 3-4 Hz apart) the block length of the DFT should be
% large enough to provide enough resolution for the frequency analysis.
% However, long block lengths cause decoding delay. For example, a block
% length of 16000 will cause 2 seconds of delay because the CTCSS decoder
% operates at an 8 kHz sampling rate.  This creates a trade-off between
% detection performance and processing latency. The optimal block length
% may depend on the quality of the transmitter and receiver, the distance
% between the transmitter and receiver, and other factors. You are
% encouraged to change the block length in the initialization function by
% navigating to the getParamsSdruFRSGMRSRxDemo function and changing the
% value of the CTCSSDecodeBlockLength field.  This will enable you to
% observe the trade-off and find the optimal value for your
% transmitter/receiver pair.

%% Appendix
% The following scripts are used in this example.
%
% * <matlab:edit('configureSdruFRSGMRSRxDemo.m') configureSdruFRSGMRSRxDemo.m>
% * <matlab:edit('getParamsSdruFRSGMRSRxDemo.m') getParamsSdruFRSGMRSRxDemo.m>

%% References
% * <http://en.wikipedia.org/wiki/Family_Radio_Service Family Radio Service on Wikipedia>
% * <http://en.wikipedia.org/wiki/General_Mobile_Radio_Service General Mobile Radio Service on Wikipedia>
% * <http://en.wikipedia.org/wiki/Continuous_Tone-Coded_Squelch_System Continuous Tone-Coded Squelch System on Wikipedia>
% * <http://en.wikipedia.org/wiki/Goertzel_algorithm Goertzel Algorithm on Wikipedia>
%

%% Copyright Notice
% Universal Software Radio Peripheral(R) and USRP(R) are trademarks of
% National Instruments Corp.

displayEndOfDemoMessage(mfilename)
