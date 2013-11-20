function Letters = OFDMbits2letters( bits )
%#codegen
% OFDMbits2letters: Convert input bits from a double array to ascii
% integers, which can be converted to letters by the char() function

% Make input into column
bits = bits(:);

%Trim extra bits
bits = bits(1: floor(length(bits)/7)*7);

%Shape into letters
bits = reshape(bits, 7, length(bits)/7).';


%Convert bits to letters
Letters = zeros(size(bits,1),1);
for i = 1:size(bits,1)
    Letters(i) = char(bin2dec(dec2bin(bits(i,:)).'));
end

end

