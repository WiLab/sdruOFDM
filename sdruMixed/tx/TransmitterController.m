message = 'Greetings from WiLab';

[ InterpolationFactor, ~,numFrames, framesToTxOnStep ] = setupSDRuTx( true );

repeats = 10;

sendMessageSDRu(  InterpolationFactor, message, repeats, framesToTxOnStep, numFrames )