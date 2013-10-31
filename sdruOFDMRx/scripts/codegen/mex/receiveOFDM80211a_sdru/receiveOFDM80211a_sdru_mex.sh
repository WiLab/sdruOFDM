MATLAB="/opt/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/traviscollins/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for receiveOFDM80211a_sdru" > receiveOFDM80211a_sdru_mex.mki
echo "CC=$CC" >> receiveOFDM80211a_sdru_mex.mki
echo "CFLAGS=$CFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "CLIBS=$CLIBS" >> receiveOFDM80211a_sdru_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "CXX=$CXX" >> receiveOFDM80211a_sdru_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "CXXLIBS=$CXXLIBS" >> receiveOFDM80211a_sdru_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "LD=$LD" >> receiveOFDM80211a_sdru_mex.mki
echo "LDFLAGS=$LDFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> receiveOFDM80211a_sdru_mex.mki
echo "Arch=$Arch" >> receiveOFDM80211a_sdru_mex.mki
echo OMPFLAGS= >> receiveOFDM80211a_sdru_mex.mki
echo OMPLINKFLAGS= >> receiveOFDM80211a_sdru_mex.mki
echo "EMC_COMPILER=" >> receiveOFDM80211a_sdru_mex.mki
echo "EMC_CONFIG=optim" >> receiveOFDM80211a_sdru_mex.mki
"/opt/MATLAB/R2013a/bin/glnxa64/gmake" -B -f receiveOFDM80211a_sdru_mex.mk
