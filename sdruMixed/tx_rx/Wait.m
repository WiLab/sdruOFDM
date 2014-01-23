% Do nothing aka waste time
function Wait(ObjSDRuReceiver,desiredSamplingFrequency,time)

% Calculate how many buffer needed to step through to wait
% desired time
timeToFillBuffer = ObjSDRuReceiver.FrameLength / desiredSamplingFrequency;
buffersToProcess = ceil(time/timeToFillBuffer);

for buffer = 1:buffersToProcess
    step(ObjSDRuReceiver);
end

end
