function [ r, tx ] = generateOFDMSignal_Tx( numFrames, enableMA, inputPayloadMessage )
% generateOFDMSignal: Generate OFDM signal based on the 802.11a standard.
% This function returns the time domain signal and a structure containing
% details about the signal itself.  This information is required by the
% receiver to operate correctly.

%% System Parameters
tx.samplingFreq = 20e6;    % Sampling frequency (Hz)
tx.FFTLength = 64;         % OFDM modulator FFT size
tx.enableMA = enableMA;    % Enable moving averages for estimates

% Message to transmit
% message is 80 characters max, so extra 3 for EOF and 1 for uniqueID
if length(inputPayloadMessage) < 76
   uniqueID = char(randi([0 (2^7)-1],1,1));%Add additional character to differentiate messages
   payloadMessage = [inputPayloadMessage,uniqueID,'EOF',repmat('-',1,76 - length(inputPayloadMessage))];
end


%% Create Short Preamble
tx.shortPreamble = [ 0 0  1+1i 0 0 0  -1-1i 0 0 0 ... % [-27:-17]
 1+1i 0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [-16:-1]
 0    0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [0:15]
 1+1i 0 0 0   1+1i 0 0 0  1+1i 0 0 ].';               % [16:27]

% % Create modulator
% hPreambleMod = OFDMModulator(...
%     'NumGuardBandCarriers', [6; 5],...
%     'CyclicPrefixLength',   0,...
%     'FFTLength' ,           tx.FFTLength,...
%     'NumSymbols',           1);    

% Create modulator
hPreambleMod = OFDMModulator(...
    'NumGuardBandCarriers', [6; 5],...
    'CyclicPrefixLength',   0,...
    'FFTLength' ,           64,...
    'NumSymbols',           1); 

% Modulate and scale
tx.shortPreambleOFDM = sqrt(13/6)*step(hPreambleMod, tx.shortPreamble);

% Form 10 Short Preambles
tx.completeShortPreambleOFDM = [tx.shortPreambleOFDM; tx.shortPreambleOFDM; tx.shortPreambleOFDM(1:32)];

%% Create Long Preamble
tx.longPreamble = [1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,...
                   1,  1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,  1, 0,...
                   1, -1, -1,  1,  1, -1,  1, -1,  1, -1, -1, -1, -1, -1,...
                   1,  1, -1, -1,  1, -1,  1, -1,  1,  1,  1,  1].';
 
% Modulate
tx.longPreambleOFDM = step(hPreambleMod, tx.longPreamble);

% Form 2 Long Preambles
tx.completeLongPreambleOFDM =[tx.longPreambleOFDM(33:64); tx.longPreambleOFDM; tx.longPreambleOFDM];

%% Generate Data
tx.numCarriers = 48;
CyclicPrefixLength = 16;
PilotCarrierIndices = [12;26;40;54];

% Use string as message
tx.originalData = OFDMletters2bits(payloadMessage);
tx.originalData = reshape(tx.originalData.',size(tx.originalData,1)*size(tx.originalData,2),1);

% Generate CRC
hGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);
dataWithCRC = step(hGen, tx.originalData);% Add CRC


% Construct modulator for each subcarrier
hMod = comm.BPSKModulator; % BPSK

% Apply modulator for each subcarrier
%modData = step(hMod, tx.originalData);
modData = step(hMod, dataWithCRC);

% Pad IFFT
tx.padBits = tx.numCarriers - mod(length(modData),tx.numCarriers);
if tx.padBits == tx.numCarriers
    tx.padBits = 0;
end
modData = [modData; step(hMod,randi([0 1],tx.padBits,1))];

% Calculate required data sizes for correct receiver operation
numDataSymbols = length(modData)/tx.numCarriers;
tx.numSamples = length(modData);
tx.messageCharacters = length(payloadMessage); % Save desired message size
tx.numFrames = numFrames; % Save number of transmitted frames

% Convert data into subcarrier streams
ofdmData = reshape(modData.', tx.numCarriers, length(modData)/tx.numCarriers);

% Create Pilots
hPN = comm.PNSequence(...
        'Polynomial',[1 0 0 0 1 0 0 1],...
        'SamplesPerFrame', numDataSymbols,...
        'InitialConditions',[1 1 1 1 1 1 1]);

pilot = step(hPN); % Create pilot
tx.pilots = repmat(pilot, 1, 4 ); % Expand to all pilot tones
tx.pilots = 2*double(tx.pilots.'<1)-1; % Bipolar to unipolar
tx.pilots(4,:) = -1*tx.pilots(4,:); % Invert last pilot

% Construct Modulator
hDataMod = OFDMModulator(...
    'CyclicPrefixLength',   CyclicPrefixLength,...
    'FFTLength' ,           tx.FFTLength,...
    'NumGuardBandCarriers', hPreambleMod.NumGuardBandCarriers,...
    'NumSymbols',           numDataSymbols,...
    'PilotInputPort',       true,...
    'PilotCarrierIndices',  PilotCarrierIndices,...
    'InsertDCNull',         true);


% Modulate
r = step(hDataMod, ofdmData, tx.pilots);

% Add preambles to data
tx.preambles = [tx.completeShortPreambleOFDM; tx.completeLongPreambleOFDM];
r = [tx.preambles; r];
tx.frameLength = length(r);

% Repeat frame
r = repmat(r, tx.numFrames, 1);

% Save Demodulator object data for receiver
tx.hDataDemod = get(OFDMDemodulator(hDataMod));
tx.hPreambleDemod = get(OFDMDemodulator(hPreambleMod));

% Calcuate OFDM frequency bin size
tx.freqBin = tx.samplingFreq/tx.FFTLength;

% Calculate locations of pilots without guardbands
tx.pilotLocationsWithoutGuardbands = tx.hDataDemod.PilotCarrierIndices-tx.hDataDemod.NumGuardBandCarriers(1);

% Calculate locations of subcarrier datastreams without guardbands
tx.dataSubcarrierIndexies = 1:tx.FFTLength-sum(tx.hDataDemod.NumGuardBandCarriers);%Remove guardband offsets
DCNullLocation = 33 - tx.hDataDemod.NumGuardBandCarriers(1);%Remove index offsets for pilots and guardbands
tx.dataSubcarrierIndexies([tx.pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations

end














