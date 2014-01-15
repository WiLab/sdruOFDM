function Node

% Setup Receiver
[ ObjPreambleDemod, ObjDataDemod, ObjAGC, ObjCRC, ObjSDRuReceiver, rx, estimate ] = PHYReceiverSetup;

% Run Receiver
message = PHYReceiveSDR(ObjSDRuReceiver, ObjAGC, ObjCRC, ObjPreambleDemod, ObjDataDemod, rx, estimate);



end