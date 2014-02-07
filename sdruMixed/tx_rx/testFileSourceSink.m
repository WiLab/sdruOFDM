function testFileSourceSink

done = 0;
charsPerPacket = 70;
message = char(zeros(1,charsPerPacket));

% Get data to transmit from file, output must be multiple of message size
% fileSource also adds EOF stubs to determine end of file
data = fileSource('alice_org.txt',charsPerPacket);


for packet = 1:charsPerPacket:length(data)

    % Pull out message
    message(1:70) = data(packet:packet+charsPerPacket-1);
    done = fileSink( message, 'alice_hat.txt' );

    if done
        break
    end
    
end

fprintf('Done: %d\n',int32(done));
fprintf('Remember to compare output files with md5 or SHA\n');


end