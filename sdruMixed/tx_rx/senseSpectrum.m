function [ occupied ] = senseSpectrum( offsetCompensationValue )
% Sense and determine if band is occupied


% Setup USRP
DecimationFactor = 512;
hSDRu = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9 + offsetCompensationValue, ...
    'DecimationFactor',     DecimationFactor,...
    'FrameLength',          1024,...
    'OutputDataType',       'double',...
    'Gain',                 18);



% Remove empty buffer
while 1
    rec = step(hSDRu);
    if sum(rec)>0
        break
    end
end


max_found=0;
buffersToCapture = 10e2;

% Measure spectrum
for buffer = 1 : buffersToCapture
    data = step(hSDRu);
    x = downsample(data,4);  
    N=length(x);                               % length of the signal x
    fx=fft(x(1:N));                            % do DFT/FFT
    fxs=fftshift(fx);                          % shift it for plotting
    
    
    max_now = sum(abs(fxs));
    if max_now > max_found
        max_found = max_now;
    end
end



% Evaluate
coder.extrinsic('num2str','system');
threshold = 1;% Determined experimentally
fprintf('Level: %f\n',max_found);
system(['echo "',num2str(max_found),'" >> messages.txt']); 

if max_found > threshold
    occupied = true;
else
    occupied = false;
end

release(hSDRu);

end

