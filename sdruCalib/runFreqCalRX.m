function offset = runFreqCalRX( hostname )

%
command ='ssh root@monadnock.ece.wpi.edu tb -dest '+hostname+' -act runFreqCalRX -u traviscollins';
system(command);




end