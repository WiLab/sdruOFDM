function [BER, estimate, RHard] = demodOFDMSubcarriers_sdr( R, tx, estimate )
%#codegen
% demodOFDMSubcarriers: Hard demodulate then compare received and
% transmitted data

% Demodulate subcarrier data
RLinear = reshape(R,size(R,1)*size(R,2),1);
RHard = RLinear(1:end-tx.padBits) < 0; %Bits

% Decode received text
%estimate.message = OFDMbits2letters(RHard > 0);

% Check results (remove CRC for compare)
%BER = sum(RHard(1:end-3)~=tx.originalData)/numel(RHard);
BER = 1;

% Save additional information
%estimate.totalFrameErrors(estimate.numProcessed) = sum(RHard~=tx.originalData);
%estimate.totalFrameBits(estimate.numProcessed) = numel(RHard);           

end

