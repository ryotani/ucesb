#File to set r3broot variables
#!/bin/bash

export UCESB_DIR="/u/land/fake_cvmfs/ucesb/"
export ROOTSYS="/u/land/fake_cvmfs/FairSoft/deps/"
export SIMPATH="/u/land/fake_cvmfs/FairSoft/deps/"
export PATH=$SIMPATH/bin:$PATH
export FAIRROOTPATH="/u/land/fake_cvmfs/FairRoot/install-v18.2.1/"

. /u/land/fake_cvmfs/FairSoft/deps/bin/thisroot.sh
