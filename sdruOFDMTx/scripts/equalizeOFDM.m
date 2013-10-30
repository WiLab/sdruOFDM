function [R, Rraw, estimate] = equalizeOFDM( recv, tx, estimate, hPreambleDemod, hDataDemod)
    %#codegen
    % equalizeOFDM: Equalize the entire OFDM frame through the use of both
    % the long preamble from the 802.11a standard and four pilot tones in
    % the data frames themselves.  The gains from the pilots are
    % interpolated across frequency to fill the data frame and apply gains
    % to all data subcarriers.

    %% Use Long Preamble frame to estimate channel in frequency domain
    % Separate out received preambles
    rLong = recv(length(tx.completeShortPreambleOFDM)+1 : length(tx.completeShortPreambleOFDM)+length(tx.completeLongPreambleOFDM));
    rLongFirst = rLong(33:32+length(tx.longPreambleOFDM));
    rLongSecond = rLong(33+length(tx.longPreambleOFDM) : 32+length(tx.longPreambleOFDM)*2);
    
    % Demod
    RLongFirst = step(hPreambleDemod, rLongFirst); %First half of long preamble
    RLongSecond = step(hPreambleDemod, rLongSecond); %Second half of long preamble

    %% Preamble Equalization
    % Get Equalizer tap gains
    preambleEqGains = preambleFDE([RLongFirst, RLongSecond], [tx.longPreamble, tx.longPreamble], tx);
      
    % Separate data from preambles
    recvData = recv(length(tx.preambles)+1:length(tx.preambles)+(tx.hDataDemod.NumSymbols)*(tx.FFTLength+tx.hDataDemod.CyclicPrefixLength));
    
    % OFDM Demod
    [Rraw, RXPilots] = step(hDataDemod, recvData);
        
    % Expand equalizer gains to full frame size
    preambleGainsFull = repmat(preambleEqGains ,1 , tx.hDataDemod.NumSymbols);
    
    % Isolate pilot gains from preamble equalizer
    preamblePilotGains = preambleGainsFull(tx.pilotLocationsWithoutGuardbands,:); % Needed to correctly adjust pilot gains

    % Apply preamble equalizer gains to data and pilots
    RXPilots = preamblePilotGains.*RXPilots; %Correct pilots
    R = preambleGainsFull(tx.dataSubcarrierIndexies,:).*Rraw;%Correct data
    
    %% Pilot Equalization
    % Get pilot-based equalizer gains
    pilotEqGains = pilotFDE(RXPilots, tx.pilots, 12);
       
    % Apply Equalizer from Pilots
    R = pilotEqGains.*R;
       
    % Save Gains for visualization
    estimate.pilotEqGains = pilotEqGains;
    estimate.preambleEqGains = preambleEqGains;


end

% Calculate Equalizer Taps with preamble symbols
function RGains = preambleFDE(R, Known, tx)

% Calculate non-normalized channel gains
R = R(1:(tx.hDataDemod.FFTLength-sum(tx.hDataDemod.NumGuardBandCarriers)),1:2);
RNormal = R./Known; % Known is the original Long Preamble symbols 

% Scale channel gains
REnergy = mean(abs(RNormal).^2,2);
RConj = conj(mean(RNormal,2));
RGains = RConj./ REnergy;

end

% Calculate Equalizer Taps with pilot symbols
function PilotGainsFull = pilotFDE(rxPilots, txPilots, upSampleFactor)

% Calculate non-normalized channel gains
PilotNormal = rxPilots./txPilots;

% Scale channel gains
PilotEnergy = abs(PilotNormal).^2;
PilotConj = conj(PilotNormal);
PilotGains = PilotConj./ PilotEnergy;

% Interpolate to data carrier size
PilotGainsFull = resample(PilotGains, upSampleFactor, 1);

end


