%% FM Stereo Receiver with USRP(R) Hardware
%
% This example shows how to use the Universal Software Radio Peripheral(R)
% (USRP(R)) device with MATLAB(R) to build an FM stereo receiver. The
% example plays both the left and right channels.
%
% In order to run this example, you need a USRP(R) board with an
% appropriate receiver daughterboard that supports the FM band (e.g., TVRX
% or WBX). Please refer to <../../help/index.html Getting Started> for
% details on configuring your host computer to work with the SDRu Receiver
% System object, comm.SDRuReceiver.

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.4 $ $Date: 2012/11/05 15:06:49 $

%% Initialization
% The <matlab:edit('configureSdruFMStereoDemo.m')
% configureSdruFMStereoDemo.m> script initialize some simulation parameters
% and generates a structure, stereoFM. The fields of this structure are the
% parameters of the FM receiver system at hand.

stereoFM = configureSdruFMStereoDemo

%% Stereo FM Demodulation
% The SDRu receiver System object takes in baseband discrete-time complex
% samples from USRP(R) hardware. The USRP(R) hardware has an
% analog-to-digital converter (ADC) working at 100M samples per second
% sampling rate. The decimation factor is 500, making the SDRu object
% output sampling rate 200 kHz. Use an FIR rate converter System object to
% convert the 200 kHz signal to an 152 kHz signal. The 152 kHz sampling
% rate is eight times the 19 kHz pilot signal and simplifies the algorithm
% to extract the pilot tone. Set the interpolation factor to 19, decimation
% factor to 25, and numerator to the specified value.

hRateConverterDemod = dsp.FIRRateConverter(...
  stereoFM.RCDemodInterpFactor, ...
  stereoFM.RCDemodDecimFactor, ...
  stereoFM.RCDemodNumerator);

%%
% This example implements FM demodulation by taking the phase difference of
% consecutive complex samples. Use a delay System object to delay the
% received baseband signal to prepare for the phase difference calculation.

hDelay = dsp.Delay;

%%
% To perform stereo decoding, the peaking filter picks out the 19 kHz pilot
% tone from which the 38 kHz carrier is created. Use a biquad filter System
% object as the peaking filter. Biquad filters provide a more stable
% behavior than standard IIR filters. Configure the filter to use direct
% form II structure with the specified SOS matrix and scale values.

hPeakingFilter = dsp.BiquadFilter(...
  'Structure',    'Direct form II', ...
  'SOSMatrix',    stereoFM.peak19fil.sosMatrix, ...
  'ScaleValues',  stereoFM.peak19fil.scaleValues);

%%
% This example uses the carrier signal from the previous step and
% downconvert the L-R signal, centered at 38 kHz, to baseband. Apply a gain
% to the baseband L-R signal to compensate for the filtering signal loss.
% This ensures effective stereo demultiplexing.

stereoFM.CompensationGain = 1.17;

%%
% A resampling filter converts the sampling rate to 48 kHz. This rate is
% one of the native sampling rates of your host computer's output audio
% device. During rate conversion, the filter removes the undesirable
% signals above 15 kHz. Use an FIR rate converter System object to convert
% the 152 kHz signal to an 48 kHz signal. Set the interpolation factor to
% 6, decimation factor to 19, and numerator to the specified value.

hRateConverterAudio = dsp.FIRRateConverter(...
  stereoFM.RCAudioInterpFactor, ...
  stereoFM.RCAudioDecimFactor, ...
  stereoFM.LP15k);

%%
% Next, the baseband L+R and L-R signals pass through a 75 microsecond
% deemphasis filter as described in [ <#20 1> ]. You use a Biquad filter
% System object to use as the Deemphasis filter. Configure the filter to
% use direct form II structure with the specified SOS matrix and scale
% values.

hDeemphasisFilter = dsp.BiquadFilter(...
  'Structure',    'Direct form II', ...
  'SOSMatrix',    stereoFM.Deemp.sosMatrix, ...
  'ScaleValues',  stereoFM.Deemp.scaleValues);

%%
% The example separates the L and R signals. Use an audio player System
% object to play the demodulated signals through your computer's speakers.
% Set the sample rate to (100MHz/500)*(19/25)*(6/19) = 48 kHz. If you do
% not hear any sound, please select another device using the DeviceName
% property of the audio player object, hAudio.

hAudio = dsp.AudioPlayer(stereoFM.AudioSampleRate);

%%
% Please refer to the Simulink(R) model in the <sdruFMStereo.html FM Stereo
% Receiver with USRP(R) Hardware> example for a block diagram view of the
% system.

%% SDRu
% The script communicates with the USRP(R) board using the SDRu System
% object. You can supply the IP address of the USRP(R) board as an
% argument when you construct the object. The IP address can be any address
% within the same subnetwork as the host computer.  If there are no
% USRP(R) devices, the script does not assign an IP address. You set the
% rest of the properties using name-value pair arguments. Set the center
% frequency to 102.5 MHz and the gain to 30 dB.

%%
% Set the decimation factor to 500 so that the example uses round numbers
% to convert the sampling rate to 152 kHz and then 48 kHz using small
% resampling filters. Since the USRP(R) board samples at a rate of 100
% MHz, set the sample rate to 100 MHz / 500 = 200 kHz, which is the sample
% rate of the data received from the USRP(R) board. Frame length controls
% the number of samples at the output of the SDRu receiver, which is the
% input to the rate converter filter. The frame length must be an integer
% multiple of the decimation factor, which is 25. Set the frame length to
% 4000 samples. Select the output data type as single to reduce the
% required memory and speed up execution.

hSDRu = comm.SDRuReceiver('192.168.10.2', ...
  'CenterFrequency',  102.5e6, ...
  'Gain',             stereoFM.USRPGain, ...
  'DecimationFactor', stereoFM.USRPDecimationFactor, ...
  'SampleRate',       1e8 / stereoFM.USRPDecimationFactor, ...
  'FrameLength',      stereoFM.FrameLength, ...
  'OutputDataType',   'single')

%%
% You can obtain information about the daughterboard using the info method
% of the object. This method returns a structure with fields that specify
% the valid range of SDRu properties. You can verify that the daughterboard
% covers the FM broadcast frequency range, which is 88 MHZ to 108 MHz.

hwInfo = info(hSDRu)

%% Stream Processing Loop
%
% Capture FM signals and apply stereo FM demodulation for 10 seconds, which
% is specified by monoFM.StopTime. The SDRu object returns a column vector,
% x. Because the MATLAB script may run faster than the hardware, the object
% also returns the actual size of the valid data in x using the second
% output argument, len. If len is zero, then there is no new data for the
% demodulator code to process. The demodulator downconverts the sampling
% rate to 152 kHz and than performs FM demodulation. The stereo decoder
% extracts the 19 kHz pilot signal and generates a 38 kHz reference tone to
% convert the L-R channel to baseband. After compensating for the loss in
% the L-R channel, both L-R and L+R channels pass through a rate converter
% and deemphasis filter. The resulting 48 kHz signal is separated into the
% left and right channels and sent to the audio device.

%%
% Check for the status of the USRP(R) radio
radio = findsdru(hSDRu.IPAddress); 
if strncmp(radio.Status, 'Success', 7)
  % Loop until the example reaches the target stop time, which is 10
  % seconds.
  timeCounter = 0;
  while timeCounter < stereoFM.StopTime
    [x, len] = step(hSDRu);
    if len > 0
      % Convert sampling rate to 152 kHz
      xFilt   = step(hRateConverterDemod, x);
      
      % FM demodulate
      xDelay  = step(hDelay, xFilt);
      xDemod  = angle(xDelay .* conj(xFilt));
      
      % Stereo decoding
      pilot   = step(hPeakingFilter, xDemod);
      refTone = get38kHzSignalFMStereoDemo(pilot);
      yR1     = [xDemod, ...
        stereoFM.CompensationGain * (refTone .* xDemod)];
      yR2     = step(hRateConverterAudio, yR1);
      yFilt   = step(hDeemphasisFilter, yR2);
      yOut    = [yFilt(:, 1)+yFilt(:, 2), yFilt(:, 1)-yFilt(:, 2)];
      
      % Output to audio device
      step(hAudio, yOut);
      
      timeCounter = timeCounter + stereoFM.AudioFrameTime;
    end
  end
else
  warning(message('sdru:sysobjdemos:MainLoop'))
end

%% 
% Release the audio and USRP(R) resources.

release(hAudio)
release(hSDRu); clear hSDRu

%% Results
% You can obtain the spectrum of the signal yR1 using the Burg spectrum
% estimator (dsp.BurgSpectrumEstimator). The black spectrum contains L+R
% signal at baseband, L-R signal at 38 kHz, and the 19 kHz tone. The red
% spectrum is the downconverted signal with L-R at baseband.
% 
% <<usrpFMStereoSpectrum1.png>>
%
% The following figure shows the spectrum of the left (black) and the right
% (red) channel corresponding to the spectrum above. This spectrum
% represents music from a broadcast FM station. Note the stereo separation
% between the left and the right channel between 10 and 15 kHz.
%
% <<usrpFMStereoSpectrum2.png>>
%
% The following figure illustrates the separation between the left and
% right channels achieved by this example with a known, controlled source.
% It shows the spectrum of the left (black) and the right (red) channel for
% a stereo test signal transmitted by a hand-held FM transmitter. The test
% signal consists of a single 1 kHz tone in the left channel and a single
% 500 Hz tone in the right channel. The model achieves approximately 30 dB
% separation between left and right channels.
%
% <<usrpFMStereoSpectrum3.png>>

%% Conclusion
% In this example, you used Communications System Toolbox(TM) System
% objects to build a stereo FM receiver utilizing the USRP(R) device. The
% example showed that the MATLAB script can process signals captured by the
% USRP(R) device in real time.

%% Further Exploration
% To further explore the example, you can vary the center frequency of the
% USRP(R) device and listen to other radio stations.
%
% If you have your own FM transmitter that can transmit .wma files, you can
% duplicate the test that shows the channel separation result above. Load
% the |sdruFMStereoTestSignal.wma| file into your transmitter. The channel
% separation can be easily observed from the spectrum and heard from the
% audio device. You can also adjust the gain compensation to see its effect
% on stereo separation.
%
% To optimize the filtering speed, you can combine the resampling filter in
% the 19n/6 resampler and the deemphasis filter into a single filter.

%% Appendix
% The following scripts are used in this example.
%
% * <matlab:edit('configureSdruFMStereoDemo.m') configureSdruFMStereoDemo.m>
% * <matlab:edit('getParamsSdruFMStereoDemo.m') getParamsSdruFMStereoDemo.m>
% * <matlab:edit('get38kHzSignalFMStereoDemo.m') get38kHzSignalFMStereoDemo.m>

%% Selected Bibliography 
% 
% * <http://en.wikipedia.org/wiki/FM_broadcasting FM broadcasting on Wikipedia>
%

%% Copyright Notice
% Universal Software Radio Peripheral(R) and USRP(R) are trademarks of
% National Instruments Corp.

displayEndOfDemoMessage(mfilename)
