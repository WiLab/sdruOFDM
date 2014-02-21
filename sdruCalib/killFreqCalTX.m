function killFreqCalTX( hostname )


command = ['ssh root@monadnock.ece.wpi.edu "tb -dest ',hostname,' -act killFreqCalTX -u traviscollins"'];
system(command);


end