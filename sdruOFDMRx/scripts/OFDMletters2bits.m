function f = letters2bits(str)
% Encode a string of ASCII text into bits(1,0)
N=length(str);
f=zeros(N,7);                          

bits = dec2bin(str);
for k=1:N
    letter = bits(k,:);
    for i = 1:7
        f(k,i)=str2double(letter(i));
    end
end