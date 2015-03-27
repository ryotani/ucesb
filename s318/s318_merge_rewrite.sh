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
TARGETDIR="/d/land1/s318/lmd"	#/d/land2/s318/lmd/jon, /d/land2/quasifree/s318/lmd/

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
#cd /u/land/landdaq_/
#echo
#pwd
#echo
#cvs -R -d /u/johansso/CVS update -d
#
#cd /u/land/landdaq/
#echo
#pwd
#echo
#cvs -R -d /u/landcvs/CVS update -d
#
#cd /u/land/unpacker/
#echo
#pwd
#echo
#cvs -R -d /u/johansso/CVS update -d
#
#cd /u/land/unpackexps/
#echo
#pwd
#echo
#cvs -R -d /u/landcvs/CVS update -d
#
#make -C /u/land/unpacker/ -j5 CXX=g++-3.4
#make -C /u/land/unpackexps/s318/ -j5 USE_MERGING=1
#
#cd $MYDIR
#
############ s318 CB proton readout QDC tests  ##########

# run_500_*

############ s318 test experiment ##########

#'Blacklist':
#run_0042_0287.lmd, run_0042_0287.lmd	(only DCH, but same run number)
#run_0043_0301.lmd	(only DCH, but same run number)
#run_0046*	(no physics data, just random numbers)
#testBLACKLIST="run_0042_0287.lmd run_0042_0291.lmd run_0043_0301.lmd run_0046"
#echo $testBLACKLIST

testSIZE="350000"	#number of events per output lmd file. Initially 350000, but need to change to more (1400000) for run 27 at least.

#Name of file to read runs from, and name of the blacklist file, with the files/runs not to merge
if [ $# == 0 ] 
	then
	echo "Usage: $0 gstorelist.gst [optional: blacklist.blk]" 
	exit
fi
#echo $#
FILEHANDLE=$1
BLACKHANDLE=$2	#The files you do not want to merge, because they are corrupted etc.
echo $BLACKHANDLE
LISTHANDLE=`echo $FILEHANDLE | sed -n s/.gst//p`
#echo "$LISTHANDLE"
#echo $LISTHANDLE
#testRUNS=""1" "`echo "$LISTHANDLE" | ./s318_runlist.pl`""
PERLDUMMY="`./s318_runlist.pl $FILEHANDLE $BLACKHANDLE`" #$testBLACKLIST`"
testRUNS=""1" "`echo $PERLDUMMY | awk '{print $1}'`""	#number of runs to be treated with the same (events per file) setting. STDOUT of this perl script is the number of runs to be treated.
#s318_runlist.pl also reads the gstore content of all s318 test exp data, and puts the relevant information into the file s318_testexp.dat, one run per line
#echo "$testRUNS"
EXPHANDLE="`echo $PERLDUMMY | awk '{print $2}'`"	#gstore subdirectory specifying the experiment the data belongs to
echo Data belonging to experiment: $EXPHANDLE

for i in `seq  $testRUNS`;				#read in the files, one run per line, and execute the merge-rewrite command run by run.
do
	echo
	echo Loop Iteration $i;
	thisRUN=`awk '{if (NR==line) { printf "%s",$1;}}' line=$i $LISTHANDLE.dat`;#s318_testexp.dat`;	#get run number to be processed
	firstFILE=`awk '{if (NR==line) { printf "%s",$2;}}' line=$i $LISTHANDLE.dat | sed -n 's/run_\(\w*\)_\(\w*\).lmd/\2/p'`;
	echo
	echo This iteration will merge the files of run_$thisRUN;
	echo First file in the current run: $firstFILE;
	echo
	#gstore stage "$thisRUN"\* landraw lmdv/s318t1 &			#stage all files of that run... -> So not do that within the script. Let the user do that, give him the command line to do it!
	echo "Checking gstore status of files of run_$thisRUN..."
	#while (gstore query "$thisRUN"\* landraw lmdv/s318t1 | grep "TAPE\|STAGE\*" >/dev/null) ;		#wait until all files are staged
	#do echo ...;	#echo "waiting for gstore" ;
	#done
	if (gstore query run_"$thisRUN"\* landraw lmdv/"$EXPHANDLE" | grep "TAPE\|STAGE\*" >/dev/null) 
		then
		echo Not all files of run_$thisRUN staged yet... Please do it... Stopping this loop now.
		echo To stage all files of your list, just execute this commands:
		echo
		#echo 'for i in `cat @'$LISTHANDLE'.filelist` ; do  gstore stage  $i landraw lmdv/s318t1; do  gstore stage $i landraw lmdv/s318 ; done' 
		echo 'gstore stage @'$LISTHANDLE'.filelist landraw lmdv/'$EXPHANDLE'' 
		break
	fi	#Stop, if not all files are staged
	echo
	echo "All files of run_$thisRUN have been staged."
	testSOURCE=`awk '{if (NR==line) { for (j=2; j<=NF; j++) printf "%s%s/%s\n",path,dir,$j;}}' path=$GSTOREHANDLE dir=$EXPHANDLE line=$i $LISTHANDLE.dat`;#s318_testexp.dat`;
	#echo $testSOURCE;
	MRGRWRT="/u/land/unpackexps/s318/s318 --merge=6 $testSOURCE --output=excl=sst,excl=cros3,eventcut="$testSIZE","$TARGETDIR"/s318_mrgrwt_"$thisRUN"_"$firstFILE".lmd"	#File numbering for each merged run will start at the number of the first original file belonging to that run
	echo $MRGRWRT;
	echo
	#$MRGRWRT; # execute the actual merging command
	echo
	echo
	echo
#testSOURCE2=`awk '{if (NR==line) { for (j=2; j<=NF; j++) printf "%s%s\n",dir,$j;}}' dir=$SOURCEDIR2 line=$i $LISTHANDLE.dat`;#s318_testexp.dat`;
#MRGRWRT2="/u/land/unpackexps/s318/s318 --merge=6 $testSOURCE2 --output=eventcut="$testSIZE","$TARGETDIR"/s318_"$thisRUN"_mrg.lmd"
#echo $MRGRWRT2;
#echo
#$MRGRWRT2;
	#echo "gstore unstage "$mergeThisRUN"\* landraw lmdv/s318t1"			#unstage all files of that run
done
echo
echo End of Programme
############ s318 main experiment ##########

############ s318 gamma calib ##########

############ test area (to be cleared up when all's done) ##########

#blub[1]="bla"
#blub[2]="blip boff"
#blub[3]="burp bum zapp"
#
#echo ${blub[*]}
#
#A=2
#B=\$2
#echo ${blub[$A]} | awk "{print $B}"

#echo ${testSOURCE[2]} | awk '{print $1}'			#debug
#echo ${testSOURCE[1]}

#BLUB=`awk '{ for(i=1; i<36; i++) {if(i==NR) {printf "%s\n",$0;} } }' s318_testexp.dat`
#echo ${BLUB[*]}
#$STUFF
#awk '{{printf  ("%s\t%s\t\n",$1,$2);} }' $STUFF 


#for i in `seq  $testRUNS`;				#perform the actual rewriting commands
#do
#	testSOURCE=`awk '{if (NR==line) {printf "%s\n",$0;}}' line=$i dir=$SOURCEDIR1`					#${testFILES[$i]};
#	echo $testSOURCE;
#done

#SOURCE="$SOURCEDIR1/run_0022_0184.lmd $SOURCEDIR1/run_0022_0185.lmd $SOURCEDIR1/run_0022_0186.lmd"
#echo "$SOURCE"

#********complicated stuff**********
#BLUB=awk '{{printf  ("%s\t%s\t\n",$1,$2);} }' s318_testexp.txt
#sed s318_testexp.txt


#FIRST_testRUN="1"
#LAST_testRUN="1"
#testRUNS=""$FIRST_testRUN" "$LAST_testRUN""
#testRUNS=$testRUNS" 1"
#echo "$testRUNS"
#for i in `seq $STUFF`;
#do
#echo "yes"
#done
#********complicated stuff**********

#mytestRUNS1=""0023" "0063""
#mytestRUNS=""001" """

#MRGRWRT="/u/land/unpackexps/s318/s318 --merge=6 $testSOURCE --output=eventcut="$testSIZE","$TARGETDIR"/s318mergetest.lmd"
#echo "$MRGRWRT"
#$MRGRWRT


