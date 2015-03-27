#!/bin/bash

#######################################################################
# This script is designed to 
# 1) help updating and compiling the UCESB quickly and in a reproducable way....
# 2) merge and rewrite the s296 experimental data by calling a second srcipt,
# s296_merge_rewrite.sh, once for each major data block. I.e. the
#  - test runs before main experiment
#  - main experiment
#  - cosmic data after end of beam time
#  - gamma runs for XB  after end of beam time
#
# AUTHOR: Felix Wamers
# Modified by Valerii Panin for s296 experiment
#
########################################################################

############ update/compile ucesb ##########

export GSTOREHANDLE="rfio://gstore:/landraw/lmdv/" 
export TARGETDIR="/d/land2/s296/lmd"	
export MYDIR="$(pwd)"
export UCESBBASE="$MYDIR/../../../"
#echo "$UCESBBASE"
echo
echo "Hello! I am the script to do the merging and rewriting of the s296 data."
echo
echo "You called me from this directory: $MYDIR ."
echo
echo "In case you want to do an update of the corresponding UCESB directories, just execute the commands you find between the ********************** lines below:"
echo
echo "****************************************************************************************************************************************"
echo "cd "$UCESBBASE"landdaq_/"
echo "cvs -R -d /u/johansso/CVS update -d"
echo
echo "cd "$UCESBBASE"landdaq/"
echo "cvs -R -d /u/landcvs/CVS update -d"
echo
echo "cd "$UCESBBASE"unpacker/"
echo "cvs -R -d /u/johansso/CVS update -d"
echo
echo "cd "$UCESBBASE"unpackexps/"
echo "cvs -R -d /u/landcvs/CVS update -d"
echo
echo "make -C "$UCESBBASE"unpacker/ all-clean"
echo "make -C "$UCESBBASE"unpacker/ -j10 CXX=g++-3.4"
echo "make -C "$UCESBBASE"unpackexps/s296/ all-clean"
echo "make -C "$UCESBBASE"unpackexps/s296/ -j10 USE_MERGING=1"
echo "****************************************************************************************************************************************"
echo

if [ $# == 0 ]
	then
	echo "If you want to do the merging/rewriting job type \"$0 S296\""
	exit
fi

if [ $# == 1 ] && [ $1 == "S296" ]
then
########################################################
cd $MYDIR

#echo "PART1: Files which do not need to be merged/rewritten / should not be... exceptions still possible."
#echo "These files mainly were for testing individual detectors."
#echo "Later it may be decided how exactly to deal with those files."
#echo "For now, just stage these files, do not retrieve nor merge/rewrite nor index them..."
#echo
#./s296_runlist.pl s296_prenomerge.gst > /dev/null
#cd $TARGETDIR
#NOMERGE="gstore stage "$MYDIR"/@s296_prenomerge.filelist landraw lmdv/s296"
#echo $NOMERGE
#$NOMERGE
#cd $MYDIR
#echo

# The following needs to be fixed 
echo "PART2: test runs before main experiment"
export EVENTCUT="500000"	#s296_preruns.gst
MERGETEST="./s296_merge_rewrite.sh s296_preruns.gst"
echo $MERGETEST
$MERGETEST
echo

echo "PART3: 12C main experiment"
export EVENTCUT="1000000"	#s296_mainruns.gst
MERGEMAIN="./s296_merge_rewrite.sh s296_mainruns.gst"
echo $MERGEMAIN
$MERGEMAIN
echo

echo "PART4: Cosmic runs after end of beam time"
export EVENTCUT="1000000"	#s296_postcosmic.gst
MERGECOSMIC="./s296_merge_rewrite.sh s296_postcosmic.gst"
echo $MERGECOSMIC
$MERGECOSMIC
echo

echo "PART5: Gamma data for XB after end of beam time"
export EVENTCUT="1000000"	#s296_postruns.gst
MERGEGAMMA="./s296_merge_rewrite.sh s296_postruns.gst"
echo $MERGEGAMMA
$MERGEGAMMA
echo

#######################################################
else
echo "Execute \"$0 S296\" to start the program."
fi
