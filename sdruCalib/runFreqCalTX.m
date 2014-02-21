function runFreqCalTX( hostname )


command = ['ssh root@monadnock.ece.wpi.edu "tb -dest ',hostname,' -act runFreqCalTX -u traviscollins"'];
system(command);


end