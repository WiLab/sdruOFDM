%% FM Monophonic Receiver with USRP(R) Hardware
%
% This example shows how to use the Universal Software Radio Peripheral(R)
% (USRP(R)) device with MATLAB(R) to build an FM mono receiver. It
% performs FM demodulation, deemphasis, and rate conversion.
%
% In order to run this example, you need a USRP(R) board with an
% appropriate receiver daughterboard that supports the FM band (e.g., TVRX
% or WBX). Please refer to <../../help/index.html Getting Started> for
% details on configuring your host computer to work with the SDRu Receiver
% System object, comm.SDRuReceiver.

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.4 $ $Date: 2012/11/05 15:06:48 $

%% Initialization
% The <matlab:edit('configureSdruFMMonoDemo.m') configureSdruFMMonoDemo.m>
% script initializes some simulation parameters and generates a structure,
% monoFM. The fields of this structure are the parameters of the FM
% demodulator system at hand.

monoFM = configureSdruFMMonoDemo

%% Mono FM Demodulation
% The SDRu receiver System object takes in baseband discrete-time complex
% samples from USRP(R) hardware. The USRP(R) hardware has an
% analog-to-digital converter (ADC) working at 100M samples per second
% sampling rate. The decimation factor is 500, making the SDRu object
% output sampling rate 200 kHz. The FM demodulation is implemented by
% taking the phase difference of consecutive complex samples. Use a delay
% System object to delay the received baseband signal to prepare for phase
% difference calculation.

hDelay = dsp.Delay;

%%
% The deemphasis filter in the receiver is set to 75 microseconds 
% [ <#16 1> ] and compensates for the preemphasis filter at the
% transmitter. The frequency response table is given below.
% 
% <<usrpFMMonoDeemp.png>>

%%
% Use a Biquad filter System object as the deemphasis filter. Biquad
% filters provide a more stable behavior than standard IIR filters.
% Configure the filter to use direct form II structure with the specified
% SOS matrix and scale values.

hDeemphasisFilter = dsp.BiquadFilter(...
  'Structure',    'Direct form II', ...
  'SOSMatrix',    monoFM.DeemphasisFilter.sosMatrix, ...
  'ScaleValues',  monoFM.DeemphasisFilter.ScaleValues);

%%
% A resampling filter converts the sampling rate of 200 kHz to 48 kHz, a
% native sampling rate for your host computer's audio device. The filter
% also removes the 19 kHz stereo pilot tone. Use an FIR rate converter
% System object to convert the 200 kHz signal to a 48 kHz signal. Set the
% interpolation factor to 6, decimation factor to 25, and numerator to the
% specified value.

hRateConverter = dsp.FIRRateConverter(monoFM.InterpolationFactor, ...
  monoFM.DecimationFactor, monoFM.Lowpass15k);

%%
% Use an audio player System object to play the demodulated signals through
% your computer's speakers. Set the sample rate to (100 MHz/500)*(6/25) =
% 48 kHz. If you do not hear any sound, please select another device using
% the DeviceName property of the audio player object, hAudio.

hAudio = dsp.AudioPlayer(monoFM.AudioSampleRate);

%%
% Please refer to the Simulink(R) model in the <sdruFMMono.html FM
% Monophonic Receiver with USRP(R) Hardware> example for a block diagram
% view of the system.

%% SDRu
% The script communicates with the USRP(R) board using the SDRu receiver
% System object. You can supply the IP address of the USRP(R) board as an
% argument when you construct the object. The IP address can be any address
% within the same subnetwork as the host computer. If there are no USRP(R)
% devices, the script does not assign an IP address. You set the rest of
% the properties using name-value pair arguments. Set the center frequency
% to 102.5 MHz and the gain to 30 dB.

%% 
% Set the decimation rate to 500 so that the example uses round numbers to
% convert the sampling rate to 152 kHz and then 48 kHz using small
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
  'Gain',             monoFM.USRPGaindB, ...
  'DecimationFactor', monoFM.USRPDecimationFactor, ...
  'SampleRate',       monoFM.Fs, ...
  'FrameLength',      monoFM.FrameLength, ...
  'OutputDataType',   'single')

%%
% You can obtain information about the daughterboard using the info method
% of the object. This method returns a structure with fields that specify
% the valid range of SDRu properties. You can verify that the daughterboard
% covers the FM broadcast frequency range, which is 88 MHZ to 108 MHz.

hwInfo = info(hSDRu)

%% Stream Processing Loop
%
% Capture FM signals and apply mono FM demodulation for 10 seconds, which
% is specified by monoFM.StopTime. The SDRu object returns a column vector,
% x. Since the MATLAB script may run faster than the hardware, the object
% also returns the actual size of the valid data in x using the second
% output argument, len. If len is zero, then there is no new data for the
% demodulator code to process. The demodulator code runs only if len is
% greater than 0.

%%
% Check for the status of the USRP(R) radio
radio = findsdru(hSDRu.IPAddress); 
if strncmp(radio.Status, 'Success', 7)
  % Loop until the example reaches the target stop time.
  timeCounter = 0;
  while timeCounter < monoFM.StopTime
    % Get baseband samples from USRP(R) board
    [x, len] = step(hSDRu);
    
    if len > 0
      % FM demodulate samples
      xDelay  = step(hDelay, x);
      y       = angle(xDelay .* conj(x));
      yFilt   = step(hDeemphasisFilter, y);
      
      % Output to audio device
      yOut    = step(hRateConverter, yFilt);
      step(hAudio, yOut);
      
      % Update counter
      timeCounter = timeCounter + monoFM.AudioFrameTime;
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
% objects to build a monophonic FM receiver utilizing a USRP(R) device.
% The example shows that the MATLAB script can process signals captured by
% a USRP(R) device in real time.
%

%% Further Exploration
% To further explore the example, you can vary the center frequency of the
% USRP(R) device and listen to other radio stations.
%
% To optimize the filtering speed, you can combine the resampling filter in
% the 25n/6 resampler and the deemphasis filter into a single filter.

%% Appendix
% The following scripts are used in this example.
%
% * <matlab:edit('configureSdruFMMonoDemo.m') configureSdruFMMonoDemo.m>
% * <matlab:edit('getParamsSdruFMMonoDemo.m') getParamsSdruFMMonoDemo.m>

%% Selected Bibliography 
% 
% * <http://en.wikipedia.org/wiki/FM_broadcasting FM broadcasting on Wikipedia>
%

%% Copyright Notice
% Universal Software Radio Peripheral(R) and USRP(R) are trademarks of
% National Instruments Corp.

displayEndOfDemoMessage(mfilename)
