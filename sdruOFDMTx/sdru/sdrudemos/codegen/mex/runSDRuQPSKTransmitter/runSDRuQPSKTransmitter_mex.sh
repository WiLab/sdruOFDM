MATLAB="/opt/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sdruser/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for runSDRuQPSKTransmitter" > runSDRuQPSKTransmitter_mex.mki
echo "CC=$CC" >> runSDRuQPSKTransmitter_mex.mki
echo "CFLAGS=$CFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "CLIBS=$CLIBS" >> runSDRuQPSKTransmitter_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "CXX=$CXX" >> runSDRuQPSKTransmitter_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "CXXLIBS=$CXXLIBS" >> runSDRuQPSKTransmitter_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "LD=$LD" >> runSDRuQPSKTransmitter_mex.mki
echo "LDFLAGS=$LDFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> runSDRuQPSKTransmitter_mex.mki
echo "Arch=$Arch" >> runSDRuQPSKTransmitter_mex.mki
echo OMPFLAGS= >> runSDRuQPSKTransmitter_mex.mki
echo OMPLINKFLAGS= >> runSDRuQPSKTransmitter_mex.mki
echo "EMC_COMPILER=" >> runSDRuQPSKTransmitter_mex.mki
echo "EMC_CONFIG=optim" >> runSDRuQPSKTransmitter_mex.mki
"/opt/MATLAB/R2013a/bin/glnxa64/gmake" -B -f runSDRuQPSKTransmitter_mex.mk
