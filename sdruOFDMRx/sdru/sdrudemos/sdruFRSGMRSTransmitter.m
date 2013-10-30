%% FRS/GMRS Walkie-Talkie Transmitter with USRP(R) Hardware
%
% This example shows how to use the Universal Software Radio Peripheral(R)
% (USRP(R)) device with MATLAB(R) to implement a walkie-talkie
% transmitter. The specific radio standard that this example follows is
% FRS/GMRS (Family Radio Service / General Mobile Radio Service) with CTCSS
% (Continuous Tone-Coded Squelch System). You can listen to the transmitted
% signal using a commercial walkie-talkie device.
%
% In order to run this example, you need a USRP(R) board with an
% appropriate transmitter daughterboard that supports the UHF 462-467 MHz
% band (for example, WBX). Please refer to <../../help/index.html Getting
% Started> for details on configuring your host computer to work with the
% SDRu Transmitter System object, comm.SDRuTransmitter.
%
% This example is designed to work with USA standards for FRS/GMRS
% operation. The technical specifications for these standards can be found
% at [ <#19 1> ] and [ <#19 2> ]. Operation in other countries may or may
% not work.

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.4 $ $Date: 2012/11/05 15:06:51 $

%% Overview
% Walkie-talkies provide a subscription-free method of communicating over
% short distances. Although their popularity has been diminished by the
% rise of cell phones, walkie-talkies are still useful when lack of
% reception or high per-minute charges hinders the cell phone use.
%
% Modern walkie-talkies operate on the FRS/GMRS standards. Both standards
% use frequency modulation (FM) at 462 or 467 MHz, which is in the UHF
% (Ultra High Frequency) band. The USRP(R) device in this example will
% transmit messages at either 462 or 467 MHz, in a manner that is
% compatible with FRS/GMRS devices.
%
% Please refer to the Simulink(R) model in the <sdruFRSGMRSTx.html FRS/GMRS
% Walkie-Talkie Transmitter with USRP(R) Hardware> example for a block
% diagram view of the system.

%% Initialization
% The <matlab:edit('configureSdruFRSGMRSTxDemo.m')
% configureSdruFRSGMRSTxDemo.m> script initialize some simulation
% parameters and generates a structure, frsTx. The fields of this structure
% are the parameters of the FRS/GMRS transmitter system at hand.

% Configure the example to transmit on channel 12 with the CTCSS code 5.
channel = 12;
CTCSSCode = 5;

frsTx = configureSdruFRSGMRSTxDemo(channel, CTCSSCode)

%% FRS/GMRS Transmitter
% The FRS/GMRS transmitter combines signals from a source and CTCSS tone
% generator. The script FM modulates the combined signal and sends to the
% USRP(R) board to transmit over the air.

%% 
% *Source Signals*
%
% This example uses a source object, hSource, which is an FRSGMRSDemoSource
% System object, to generate data signals for the transmitter. The source
% signal can be a pure tone sine wave, a chirp signal, or a multimedia
% file. To switch between these sources, you can change the Signal property
% of hSource. The source object also allows you to set the pure tone
% frequency or the chirp signal target/sweep time (which controls the
% duration of the chirp signal). This example works properly with tones as
% low as 500 Hz and as high as 4 kHz. When using a multimedia file, the
% sampling rate needs to be converted to 8 kHz; therefore, the
% FRSGMRSDemoAudioSource System object class employs a rate conversion
% filter to convert the 22.5 kHz signal to an 8 kHz signal.

% Create a data source to transmit the contents of a sound file at a
% sampling frequency of 8 kHz.
hSource = FRSGMRSDemoSource('Sound file', frsTx.SampleRate);

%%
% *Continuous Tone-Coded Squelch System (CTCSS)*
%
% Walkie-Talkies operate on a shared public channel, allowing multiple
% users to access the same channel simultaneously. The CTCSS [ <#19 3> ]
% method filters out undesired communication or interference from these
% other users by generating a tone between 67 Hz and 250 Hz and
% transmitting it along with the source signal. The receiver contains logic
% to detect this tone, and acknowledges a message if the detected tone
% matches the code setting on the receiver. The receiver filters out the
% tone so that the user does not hear it.
%
% The CTCSS tone generator generates a continuous phase sine wave with a
% frequency corresponding to the selected private code. The amplitude of
% the tone is usually 10%-15% of the maximum amplitude of the modulating
% signal. Note that because the maximum amplitude of all the source signals
% is 1, the default amplitude of 0.15 for the CTCSS tone corresponds to 15%
% of the modulating signal's maximum amplitude.

hCTCSS = dsp.SineWave(frsTx.CTCSSAmplitude, ...
  frsTx.ToneFrequencies(frsTx.CTCSSCode), ...
  'SampleRate',       frsTx.SampleRate, ...
  'SamplesPerFrame',  frsTx.SourceFrameLength, ...
  'OutputDataType',   'single');

%% 
% *Interpolator and FM Modulator*
%
% The interpolator converts the sampling rate of the sum of the modulating
% signal and the CTCSS tone to match the USRP(R) hardware sampling rate of
% 200 kHz. The resampling filter is designed using the MFILT object from
% the DSP System Toolbox.

hInterpolator = dsp.FIRInterpolator(frsTx.InterpolationFactor, ...
  frsTx.Numerator);

%%
% This example implements the FM modulator using a simple digital IIR
% filter as an integrator. The frequency sensitivity parameter (K) in the
% model is related to the frequency deviation (FD) by K=FD/A*(2*pi*Ts),
% where FD is 2.5 kHz, Ts represents the sampling time of USRP(R)
% transmitter (5 us = 1/200 kHz), and A represents the maximum amplitude of
% the modulating signal. The current value of K is computed assuming A = 1.
% It should be changed if you change the signal source maximum amplitude.

hIntegrator = dsp.DigitalFilter(...
  'Structure',    'Direct form I', ...
  'Numerator',    1, ...
  'Denominator',  [1 -1]);

%% SDRu
% The script communicates with the USRP(R) board using the SDRu
% transmitter System object. You can supply the IP address of the USRP(R)
% board as an argument when you construct the object. The IP address can be
% any address within the same sub-network as the host computer. You set the
% rest of the properties using name-value pair arguments. This example
% configures the hSDRu object to accept the center frequency as an input
% argument. Set the gain to 30 dB.

%%
% Set the interpolation factor to 500 so that the example uses round
% numbers to convert the sampling rate from 8 kHz to 200 kHz using a simple
% interpolation filter. 

hSDRu = comm.SDRuTransmitter('192.168.10.2', ...
  'CenterFrequencySource',  'Input port', ...
  'Gain',                   frsTx.USRPGain, ...
  'InterpolationFactor',    frsTx.USRPInterpolationFactor)

%%
% You can obtain the information about the daughterboard using the info
% method of the object. This method returns a structure with fields that
% specify the valid range of SDRu properties. You can verify that the
% daughterboard covers the UHF frequency range, which is 462 MHZ to 467
% MHz.

hwInfo = info(hSDRu)

%% Running the Example
% Turn on your walkie-talkie, set the channel to 12 and the private code to
% 5. The center frequency is a function of the selected channel number.

% Get the carrier frequency for the selected channel
fc = convertChan2FreqFRSGMRSDemo(frsTx.Channel);

%% 
% *Stream Processing Loop*
%
% Generate a data signal for the FRS/GMRS transmitter using the hSource
% object. Combine the data signal with the CTCSS tone, and pass them
% through a rate converter to generate a 200 kHz signal. FM modulate the
% resampled signal and send it to the USRP(R) board. The loop runs for 10
% seconds and you should be able to hear the voice from your commercial
% walkie-talkie device.

%%
% Check for the status of the USRP(R) radio
radio = findsdru(hSDRu.IPAddress); 
if strncmp(radio.Status, 'Success', 7)
  % Loop until the example reaches the target stop time.
  timeCounter = 0;
  while timeCounter < frsTx.StopTime
    
    data = step(hSource);
    dataWTone = data + step(hCTCSS);
    outResamp = step(hInterpolator, dataWTone);
    
    % FM modulator
    outInteg  = step(hIntegrator, outResamp);
    outMod    = exp(1i*frsTx.FrequencySensitivityGain * outInteg);
    
    step(hSDRu, outMod, fc);
    
    timeCounter = timeCounter + frsTx.SourceFrameTime;
  end
else
  warning(message('sdru:sysobjdemos:MainLoop'))
end

%% 
% Release the USRP(R) resources
release(hSDRu); clear hSDRu

%%
% If you cannot hear the voice, slightly increase the CTCSS amplitude
% parameter using the Amplitude property of the hCTCSS object, and try
% again. You can also edit the value of the CTCSSAmplitude field of the
% frsTxParams structure in <matlab:edit('getParamsSdruFRSGMRSTxDemo.m')
% getParamsSdruFRSGMRSTxDemo.m>.
%
% Instead of using a commercial walkie-talkie device, you can also run this
% example alongside an additional USRP(R) device running the FRS/GMRS
% receiver example.

%% Conclusion
% In this example, you used Communications System Toolbox(TM) System
% objects to build an FRS/GMRS transmitter utilizing a USRP(R) device.
% This example showed that the MATLAB script can generate signals for the
% USRP(R) device in real time.

%% Further Exploration
% You can set your walkie-talkie channel to one of the 14 channels
% (numbered 1 to 14) and the private code to either one of the 38 private
% codes (numbered 1 to 38) or 0, in which case the squelch system is not
% used and all received messages are accepted. Note that the private codes
% above 38 are digital codes and are not implemented in this example. Set
% the channel and private code in the example so that they match the
% walkie-talkie.
%
% Part 95.637 (Modulation standards) of the FCC wireless standards [ <#19
% 4> ] state that the maximum frequency deviation (FD) is 2.5 kHz for FRS
% and 5 kHz for GMRS. In practice, it is usually set to 2.5 kHz for both
% systems. If the maximum signal amplitude increases, the frequency
% sensitivity parameter (K) should decrease. Otherwise, the receiving
% walkie-talkie will not decode the CTCSS code correctly. You can try to
% use a different signal with different values for K to see if your
% walkie-talkie works properly. If the FD value is too large, you may not
% hear anything from your receiver when using a non-zero CTCSS private
% code. Set the CTCSS code to 0, which disables the squelch system. If you
% hear the transmitted signal, the CTCSS decoding of the non-zero code is
% incorrect.
%
% You can reduce the amplitude of the CTCSS tone to determine the minimum
% amplitude required for your receiver to work correctly.

%% Appendix
% The following scripts and System objects are used in this example.
%
% * <matlab:edit('configureSdruFRSGMRSTxDemo.m') configureSdruFRSGMRSTxDemo.m>
% * <matlab:edit('getParamsSdruFRSGMRSTxDemo.m') getParamsSdruFRSGMRSTxDemo.m>
% * <matlab:edit('convertChan2FreqFRSGMRSDemo.m') convertChan2FreqFRSGMRSDemo.m>

%% References
% * <http://en.wikipedia.org/wiki/Family_Radio_Service Family Radio Service on Wikipedia>
% * <http://en.wikipedia.org/wiki/General_Mobile_Radio_Service General Mobile Radio Service on Wikipedia>
% * <http://en.wikipedia.org/wiki/Continuous_Tone-Coded_Squelch_System Continuous Tone-Coded Squelch System on Wikipedia>
% * <http://www.gpo.gov/fdsys/pkg/CFR-2009-title47-vol5/pdf/CFR-2009-title47-vol5-part95.pdf Part 95.637 (Modulation standards) of the FCC wireless standards>
%

%% Copyright Notice
% Universal Software Radio Peripheral(R) and USRP(R) are trademarks of
% National Instruments Corp.

displayEndOfDemoMessage(mfilename)
