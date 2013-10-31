function y = get38kHzSignalFMStereoDemo(pilot)
%get38kHzSignalFMStereoDemo Generate a 38 kHz signal based on 19 kHz input
%   Y = get38kHzSignalFMStereoDemo(X) generates a 38 kH signal, Y, based on
%   the 19 kHz input signal, X. This function tracks the maximum absolute
%   value of latest 8 samples, assuming 152 kHz sampling rate for X. Number
%   of rows of X must be a multiple of 8. This function also guarantees
%   that the normalized input never exceeds 1.
%
%   This function creates a phase-locked 38 kHz reference tone for FM
%   demodulation based on 19 kHz pilot tone. This is achieved by doubling
%   the input frequency by use of trigonometric identity
%
%     sin(2w) = -2 * (-cos(w)) * sin(w)

%   Copyright 2011-2012 The MathWorks, Inc.

%#codegen

persistent pilot_delay
if isempty(pilot_delay)
    pilot_delay = single(zeros(2,1));
end

pilotLen = length(pilot);
N8 = pilotLen/8;      % # of 8-sample sub-frames in input signal
coder.internal.errorIf(N8~=fix(N8), 'sdru:get38kHzSignalFMStereoDemo:InvalidFrameSize');

% AGC update.  Work on subframes
framedPilot = reshape(pilot,8,N8);
currMax = max(abs(framedPilot));
% set minimum currMax to be ~10*eps('single')
currMax(currMax < 1.19e-6) = 1.19e-6;
% Apply AGC
agc_scale = 1./currMax * sqrt(2);
pilot = reshape(framedPilot*diag(agc_scale), pilotLen, 1);

% Synthesize in-phase from quadrature signal. This creates symmetric output
% (+/- peaks are about equal) For a 19kHz sinusoid at 152kHz sample rate,
% Delay the sin(w) by two samples, i.e., pi/2 phase shift Obtain -cos(w)
y = -2 * pilot .* [pilot_delay; pilot(1:end-2,1)];
pilot_delay = pilot(end-1:end);
end
