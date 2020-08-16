#!/bin/bash

#######################################################################
# This script is designed to merge (i.e. event-sort) and rewrite
# (change format of data for the proton drift chambers) the files from
# the s318 experiment. The merging/rewriting shall happen on a run-by-run
# basis, and shall be event-by-event reproducable for the whole s318
# data. This means using this scripts always puts the same events into
# the same files, regardless of how the merging/rewriting routines might 
# work in detail.
#
#
#
#
#
# AUTHOR: Felix
#
########################################################################
#Working directory:
MYDIR="$(pwd)"
#Source containers of untreated lmd files:
GSTOREHANDLE="rfio://gstore:/landraw/lmdv/" #data from 12C testrun: run_001 to run_0063
#SOURCEDIR2="rfio://gstore:/landraw/lmdv/s318/" #data from 20Ne/17Ne mainrun: cros3_0113, cros3_thr,
#run_0100 to run_0208, (experimental data)
#run_0209 run_0210 (cosmic runs without CB),
#run_0211 to run_0221  (gamma runs) & run_0222 (cosmic run for CB),
#run_500 & run_501 (CB proton readout tests, mainly Si792 QDC),
#run_pdc_0051, run_sst_0047, sst_001, sst_0113, sst_ped_1,
#some gstore test files...  

#Target container of merged&rewritten files:
TARGETDIR="/d/land2/s318/lmd/"	#/d/land2/s318/lmd/jon

############ installing/update/compile ##########
#
##/u/land/cvs -R -d /u/johansso/CVS co landdaq_
##/u/land/cvs -R -d /u/landcvs/CVS co landdaq
##/u/land/cvs -R -d /u/johansso/CVS co unpacker
##/u/land/cvs -R -d /u/landcvs/CVS co unpackexps
#
#make -C /u/land/unpacker/ all-clean
#make -C /u/land/unpackexps/s318/ all-clean
#
cd /u/land/landdaq_/
echo
pwd
echo
cvs -R -d /u/johansso/CVS update -d

cd /u/land/landdaq/
echo
pwd
echo
cvs -R -d /u/landcvs/CVS update -d

#cd /u/land/cabling_htj/
#echo
#pwd
#echo
#cvs -R -d /u/johansso/CVS update -d

#cd /u/land/cabling/
#echo
#pwd
#echo
#cvs -R -d /u/landcvs/CVS update -d

cd /u/land/unpacker/
echo
pwd
echo
cvs -R -d /u/johansso/CVS update -d

cd /u/land/unpackexps/
echo
pwd
echo
cvs -R -d /u/landcvs/CVS update -d

echo
make -C /u/land/unpacker/ -j10 CXX=g++-3.4
make -C /u/land/unpackexps/s318/ -j10 USE_MERGING=1
echo

#cd $MYDIR
cd /u/land/unpackexps/s318/

#Idea: let this script run ./s318_merge_rewrite for each subset of the experiment data.

PART1="./s318_merge_rewrite.sh s318_qdctests.gst"


#
############# s318 CB proton readout QDC tests  ##########
#
## run_500_*
#
############# s318 test experiment ##########
#
##'Blacklist':
##run_0042_0287.lmd, run_0042_0287.lmd	(only DCH, but same run number)
##run_0043_0301.lmd	(only DCH, but same run number)
##run_0046*	(no physics data, just random numbers)
##testBLACKLIST="run_0042_0287.lmd run_0042_0291.lmd run_0043_0301.lmd run_0046"
##echo $testBLACKLIST
#
#testSIZE="350000"	#number of events per output lmd file. Initially 350000, but need to change to more (1400000) for run 27 at least.
#
##Name of file to read runs from, and name of the blacklist file, with the files/runs not to merge
#if [ $# == 0 ] 
#	then
#	echo "Usage: $0 gstorelist.gst [optional: blacklist.blk]" 
#	exit
#fi
##echo $#
#FILEHANDLE=$1
#BLACKHANDLE=$2	#The files you do not want to merge, because they are corrupted etc.
#echo $BLACKHANDLE
#LISTHANDLE=`echo $FILEHANDLE | sed -n s/.gst//p`
##echo "$LISTHANDLE"
##echo $LISTHANDLE
##testRUNS=""1" "`echo "$LISTHANDLE" | ./s318_runlist.pl`""
#PERLDUMMY="`./s318_runlist.pl $FILEHANDLE $BLACKHANDLE`" #$testBLACKLIST`"
#testRUNS=""1" "`echo $PERLDUMMY | awk '{print $1}'`""	#number of runs to be treated with the same (events per file) setting. STDOUT of this perl script is the number of runs to be treated.
##s318_runlist.pl also reads the gstore content of all s318 test exp data, and puts the relevant information into the file s318_testexp.dat, one run per line
##echo "$testRUNS"
#EXPHANDLE="`echo $PERLDUMMY | awk '{print $2}'`"	#gstore subdirectory specifying the experiment the data belongs to
#echo $EXPHANDLE
