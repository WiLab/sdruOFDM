function [ shortPreambleOFDM ] = codegentest


shortPreamble = [ 0 0  1+1i 0 0 0  -1-1i 0 0 0 ... % [-27:-17]
 1+1i 0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [-16:-1]
 0    0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [0:15]
 1+1i 0 0 0   1+1i 0 0 0  1+1i 0 0 ].';  

%Create modulator
hPreambleMod = OFDMModulator(...
    'NumGuardBandCarriers', [6; 5],...
    'CyclicPrefixLength',   0,...
    'FFTLength' ,           64,...
    'NumSymbols',           1); 
 hTest = OFDMDemodulator;

% Modulate and scale
shortPreambleOFDM = sqrt(13/6)*step(hPreambleMod, shortPreamble);

%input = randn((64+16)*1,1);
%shortPreambleOFDM = step(hTest,input.');

end

