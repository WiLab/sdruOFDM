MATLAB="/opt/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/traviscollins/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for sdruOFDMTransmitterRun" > sdruOFDMTransmitterRun_mex.mki
echo "CC=$CC" >> sdruOFDMTransmitterRun_mex.mki
echo "CFLAGS=$CFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "CLIBS=$CLIBS" >> sdruOFDMTransmitterRun_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "CXX=$CXX" >> sdruOFDMTransmitterRun_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "CXXLIBS=$CXXLIBS" >> sdruOFDMTransmitterRun_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "LD=$LD" >> sdruOFDMTransmitterRun_mex.mki
echo "LDFLAGS=$LDFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> sdruOFDMTransmitterRun_mex.mki
echo "Arch=$Arch" >> sdruOFDMTransmitterRun_mex.mki
echo OMPFLAGS= >> sdruOFDMTransmitterRun_mex.mki
echo OMPLINKFLAGS= >> sdruOFDMTransmitterRun_mex.mki
echo "EMC_COMPILER=" >> sdruOFDMTransmitterRun_mex.mki
echo "EMC_CONFIG=optim" >> sdruOFDMTransmitterRun_mex.mki
"/opt/MATLAB/R2013a/bin/glnxa64/gmake" -B -f sdruOFDMTransmitterRun_mex.mk
