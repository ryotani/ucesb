#!/bin/bash

#######################################################################
# This script is designed to 
# 1) help updating and compiling the UCESB quickly and in a reproducable way....
# 2) merge and rewrite the s318 experimental data by calling a second srcipt,
# s318_merge_rewrite.sh, once for each major data block. I.e. the
# - 12C test runs 26th to 28th July 2007
# - 20Ne / 17Ne main runs 05th to 14th August 2007
# - cosmic runs 14th to 15th August 2007
# - gamma runs 15th to 21st August 2007
#
# AUTHOR: Felix Wamers
#
########################################################################

############ update/compile ucesb ##########

export GSTOREHANDLE="rfio://gstore:/landraw/lmdv/" #data from 12C testrun: run_001 to run_0063
export TARGETDIR="/lustre/land/s318/lmd"	#/d/land2/s318/lmd/jon, /d/land2/quasifree/s318/lmd/
export MYDIR="$(pwd)"
export UCESBBASE="$MYDIR/../../../"
#echo "$UCESBBASE"
echo
echo "Hello! I am the script to do the merging and rewriting of the s318 data."
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
echo "make -C "$UCESBBASE"unpackexps/s318/ all-clean"
echo "make -C "$UCESBBASE"unpackexps/s318/ -j10 USE_MERGING=1"
echo "****************************************************************************************************************************************"
echo

if [ $# == 0 ]
	then
	echo "If you want to do the merging/rewriting job type \"$0 S318\""
	exit
fi

if [ $# == 1 ] && [ $1 == "S318" ]
then
########################################################
cd $MYDIR

#echo "PART1: Files which do not need to be merged/rewritten / should not be... exceptions still possible."
#echo "These files mainly were for testing individual detectors before the 12C testruns and before the 20Ne/17Ne mainrun."
#echo "Later it may be decided how exactly to deal with those files."
#echo "For now, just stage these files, do not retrieve nor merge/rewrite nor index them..."
#echo
#./s318_runlist.pl s318_prenomerge.gst > /dev/null
#cd $TARGETDIR
#NOMERGE="gstore stage "$MYDIR"/@s318_prenomerge.filelist landraw lmdv/s318"
#echo $NOMERGE
#$NOMERGE
#cd $MYDIR
#echo

echo "PART2: 12C test experiment"
export EVENTCUT="350000"	#s318_testruns.gst
MERGETEST="./s318_merge_rewrite.sh s318_testruns.gst"
echo $MERGETEST
$MERGETEST
echo

echo "PART3: 20Ne and 17Ne main experiment"
export EVENTCUT="1000000"	#s318_mainruns.gst
MERGEMAIN="./s318_merge_rewrite.sh s318_mainruns.gst"
echo $MERGEMAIN
$MERGEMAIN
echo

echo "PART4: Cosmic data after main experiment"
export EVENTCUT="1000000"	#s318_maincosmic.gst
MERGECOSMIC="./s318_merge_rewrite.sh s318_maincosmic.gst"
echo $MERGECOSMIC
$MERGECOSMIC
echo

echo "PART5: Gamma data for XB after main experiment"
export EVENTCUT="3000000"	#s318_maingamma.gst
MERGEGAMMA="./s318_merge_rewrite.sh s318_maingamma.gst"
echo $MERGEGAMMA
$MERGEGAMMA
echo
########################################################
else
echo "Execute \"$0 S318\" to start the program."
fi
