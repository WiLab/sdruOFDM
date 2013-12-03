function sendPacketSDRu(  InterpolationFactor, message, repeats, framesToTxOnStep, numFrames )


	
	% Message info
	max_message_size = 77 - 3;%3 characters for packet tags
	packetToTransmit = ceil( length(message)/max_message_size );
	location = 1: max_message_size : length(message);
	
	% Send message pieces
	for packetNum = 1:packetToTransmit

		% Extract substring
		smallerMessage = message( location(packetNum), end  );
		if packetNum ~= packetToTransmit
			smallerMessage = message( location(packetNum), location(packetNum+1) - 1  );
		end

		% Add Numbers to Packets
		if packetNum < 10
			smallerMessage = [ '00', num2str(packetNum), smallerMessage];
		elseif packetNum < 100
			smallerMessage = [ '0', num2str(packetNum), smallerMessage];
		else
			smallerMessage = [ num2str(packetNum), smallerMessage];	
		end
	
		% Send individual message
		sendMessageSDRu(  InterpolationFactor, smallerMessage, repeats, framesToTxOnStep, numFrames );

	end







