function true_offset = FreqCalRx(prmFreqCalibRx)

hSDRuRx = comm.SDRuReceiver(...
    'IPAddress',                     '192.168.10.2', ...
    'CenterFrequency',                prmFreqCalibRx.RxCenterFrequency,...
    'Gain',                           prmFreqCalibRx.Gain, ...
    'DecimationFactor',               prmFreqCalibRx.DecimationFactor,...
    'SampleRate',                     prmFreqCalibRx.Fs, ...
    'FrameLength',                    prmFreqCalibRx.FrameLength,...
    'OutputDataType',                 prmFreqCalibRx.OutputDataType);

% Create a coarse frequency offset estimation object to calculate the
% frequency offset. The coarse frequency offset object performs an FFT on
% its input signal and finds the frequency of maximum power. This quantity
% is the frequency offset plus the reference sine wave frequency of 100 Hz.
hCFO = CoarseFrequencyOffset(...
    'FFTSize',                         prmFreqCalibRx.FocFFTSize ,...
    'SampleRate',                      prmFreqCalibRx.Fs);


%% Stream Processing
rxSig = zeros(prmFreqCalibRx.FrameLength *...
    prmFreqCalibRx.TotalFrames, 1);


offsets = zeros(prmFreqCalibRx.TotalFrames,1);
index = 1;

for iFrame = 1 : prmFreqCalibRx.TotalFrames
    [rxSig, len ] = step(hSDRuRx);
    if len > 0
        % Compute the frequency offset.
        offset = step(hCFO, rxSig);
        % Print the frequency offset compensation value in MATLAB command
        % window.
        %offsetCompensationValue = -offset;
        %%fprintf('Offset: %f\n',offsetCompensationValue);
        % Save offsets
        if offset ~= 0
            offsets(index) = -offset;
            index = index + 1;
        end
    end
end

% Release all System objects
release(hSDRuRx);
release(hCFO);

% Get true offset
true_offset = mode(offsets(1:index-1));

    
end
    
%% Conclusion
% In this example, you used Communications System Toolbox(TM) System objects
% to build a receiver that calculates the relative frequency offset between
% a USRP(R) transmitter and a USRP(R) receiver.
%
%% Appendix
% The following scripts are used in this example.
%
% * <matlab:edit('configureFreqCalibRx.m') configureFreqCalibRx.m>
% * <matlab:edit('CoarseFrequencyOffset') CoarseFrequencyOffset.m>
%
%% Copyright Notice
% Universal Software Radio Peripheral(R) and USRP(R) are trademarks of
% National Instruments Corp.
