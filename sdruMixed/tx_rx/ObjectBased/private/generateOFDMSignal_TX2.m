function [hPreambleDemod,hDataDemod, r, tx ] = generateOFDMSignal_TX2(inputPayloadMessage)
% generateOFDMSignal: Generate OFDM signal based on the 802.11a standard.
% This function returns the time domain signal and a structure containing
% details about the signal itself.  This information is required by the
% receiver to operate correctly.

%% System Parameters
samplingFreq = 5e6;    % Sampling frequency (Hz)
FFTLength = 64;         % OFDM modulator FFT size
enableMA = true;    % Enable moving averages for estimates
numFrames = 20;%20     % Make larger to reduce underflow

% Message to transmit
% Message to transmit
if length(inputPayloadMessage) < 77
   payloadMessage = [inputPayloadMessage,'EOF',repmat('-',1,77 - length(inputPayloadMessage))];
end
%% Create Short Preamble
shortPreamble = [ 0 0  1+1i 0 0 0  -1-1i 0 0 0 ... % [-27:-17]
 1+1i 0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [-16:-1]
 0    0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [0:15]
 1+1i 0 0 0   1+1i 0 0 0  1+1i 0 0 ].';               % [16:27]


% % Create modulator
% hPreambleMod = OFDMModulator(...
%     'NumGuardBandCarriers', [6; 5],...
%     'CyclicPrefixLength',   0,...
%     'FFTLength' ,           FFTLength,...
%     'NumSymbols',           1);    

% Create modulator
hPreambleMod = OFDMModulator(...
    'NumGuardBandCarriers', [6; 5],...
    'CyclicPrefixLength',   0,...
    'FFTLength' ,           64,...
    'NumSymbols',           1); 

% Modulate and scale
shortPreambleOFDM = sqrt(13/6)*step(hPreambleMod, shortPreamble);

% Form 10 Short Preambles
completeShortPreambleOFDM = [shortPreambleOFDM; shortPreambleOFDM; shortPreambleOFDM(1:32)];

%% Create Long Preamble
longPreamble = [1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,...
                   1,  1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,  1, 0,...
                   1, -1, -1,  1,  1, -1,  1, -1,  1, -1, -1, -1, -1, -1,...
                   1,  1, -1, -1,  1, -1,  1, -1,  1,  1,  1,  1].';
 
% Modulate
longPreambleOFDM = step( hPreambleMod, complex(longPreamble,0) );

% Form 2 Long Preambles
completeLongPreambleOFDM =[longPreambleOFDM(33:64); longPreambleOFDM; longPreambleOFDM];

%% Generate Data
numCarriers = 48;
CyclicPrefixLength = 16;
PilotCarrierIndices = [12;26;40;54];

% Use string as message
originalData = OFDMletters2bits(payloadMessage);
originalData = reshape(originalData.',size(originalData,1)*size(originalData,2),1);

% Generate CRC
hGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);
dataWithCRC = step(hGen, originalData);% Add CRC

% Construct modulator for each subcarrier
hMod = comm.BPSKModulator; % BPSK

% Apply modulator for each subcarrier
modData = step(hMod, dataWithCRC);

% Pad IFFT
padBits = numCarriers - mod(length(modData),numCarriers);
if padBits == numCarriers
    padBits = 0;
end
modData = [modData; step(hMod,randi([0 1],padBits,1))];

% Calculate required data sizes for correct receiver operation
numDataSymbols = length(modData)/numCarriers;
numSamples = length(modData);
messageCharacters = length(payloadMessage); % Save desired message size
numFrames = numFrames; % Save number of transmitted frames

% Convert data into subcarrier streams
ofdmData = reshape(modData.', numCarriers, length(modData)/numCarriers);

% Create Pilots
hPN = comm.PNSequence(...
        'Polynomial',[1 0 0 0 1 0 0 1],...
        'SamplesPerFrame', numDataSymbols,...
        'InitialConditions',[1 1 1 1 1 1 1]);

pilot = step(hPN); % Create pilot
pilots = repmat(pilot, 1, 4 ); % Expand to all pilot tones
pilots = 2*double(pilots.'<1)-1; % Bipolar to unipolar
pilots(4,:) = -1*pilots(4,:); % Invert last pilot

% Construct Modulator
hDataMod = OFDMModulator(...
    'CyclicPrefixLength',   CyclicPrefixLength,...
    'FFTLength' ,           FFTLength,...
    'NumGuardBandCarriers', hPreambleMod.NumGuardBandCarriers,...
    'NumSymbols',           numDataSymbols,...
    'PilotInputPort',       true,...
    'PilotCarrierIndices',  PilotCarrierIndices,...
    'InsertDCNull',         true);


% Modulate
r = step(hDataMod, ofdmData, pilots);

% Add preambles to data
preambles = [completeShortPreambleOFDM; completeLongPreambleOFDM];
r = [preambles; r];
frameLength = length(r);

% Repeat frame (Used in debugging)
r = repmat(r, numFrames, 1);

% Save Demodulator object data for receiver
%hDataDemod = get(OFDMDemodulator(hDataMod));
%hPreambleDemod = get(OFDMDemodulator(hPreambleMod));
hDataDemod = OFDMDemodulator(hDataMod);
hPreambleDemod = OFDMDemodulator(hPreambleMod);

% Calcuate OFDM frequency bin size
freqBin = samplingFreq/FFTLength;

% Calculate locations of pilots without guardbands
pilotLocationsWithoutGuardbands = hDataDemod.PilotCarrierIndices-hDataDemod.NumGuardBandCarriers(1);

% Calculate locations of subcarrier datastreams without guardbands
dataSubcarrierIndexies = 1:FFTLength-sum(hDataDemod.NumGuardBandCarriers);%Remove guardband offsets
DCNullLocation = 33 - hDataDemod.NumGuardBandCarriers(1);%Remove index offsets for pilots and guardbands
%dataSubcarrierIndexies([pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations
dataSubcarrierIndexies = [1:5,7:19,21:26,28:33,35:47,49:53];


% Preallocate values needed later

% Create return structure
tx = struct('originalData',originalData,...
            'shortPreambleOFDM',shortPreambleOFDM,...
            'completeShortPreambleOFDM',completeShortPreambleOFDM,...
            'shortPreamble',shortPreamble,...
            'longPreamble',longPreamble,...
            'longPreambleOFDM',longPreambleOFDM,...
            'completeLongPreambleOFDM',completeLongPreambleOFDM,...
            'pilots',pilots,...
            'preambles',preambles,...
            'pilotLocationsWithoutGuardbands',pilotLocationsWithoutGuardbands,...
            'dataSubcarrierIndexies',dataSubcarrierIndexies,...
            'samplingFreq',samplingFreq,...
            'FFTLength',FFTLength,...
            'enableMA',enableMA,...
            'numCarriers',numCarriers,...
            'padBits',padBits,...
            'numSamples',numSamples,...
            'messageCharacters',messageCharacters,...
            'numFrames',numFrames,...
            'frameLength',frameLength,...
            'freqBin',freqBin,...
            ...
            'DecimationFactor',0,...
            'receiveBufferLength',0);


end






%                             padBits: 13
%                          numSamples: 576
%                   messageCharacters: 80
%                           numFrames: 1000

%                         frameLength: 1280

%                             freqBin: 312500

%                          hDataDemod: [1x1 struct]
%                      hPreambleDemod: [1x1 struct]











