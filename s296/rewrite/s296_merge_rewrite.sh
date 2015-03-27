#!/bin/bash

#######################################################################
# This script is designed to merge (i.e. event-sort) and rewrite
# (change format of data for the proton drift chambers) the files from
# the s296 experiment. The merging/rewriting shall happen on a run-by-run
# basis, and shall be event-by-event reproducable for the whole s296
# data. This means using this scripts always puts the same events into
# the same files, regardless of how the merging/rewriting routines might 
# work in detail.
# Right now, only files with names as "run_XXXX_YYYY.lmd" can be processed,
# see the s296_runlist.pl helping script.
#
#
#
# AUTHOR: Felix
# Corrected by Valerii Panin for s296 experiment 
########################################################################
#Working directories:
MYDIR="$(pwd)"
UCESBBASE="$MYDIR/../../../"
#Source containers of untreated lmd files:
GSTOREHANDLE="rfio://gstore:/landraw/lmdv/"
#Target container of merged&rewritten files:
TARGETDIR="/d/land2/s296/lmd/"


#Name of file to read runs from, and name of the blacklist file, with the files/runs not to merge.
#Blacklisting of files not planned to be used for the moment... F.Wamers, 28.11.2008.
if [ $# == 0 ] 
	then
	echo "Usage: $0 gstorelist.gst [optional: blacklist.blk]" 
	exit
fi
FILEHANDLE=$1	#name of the list of files in gstore to be treated
BLACKHANDLE=$2	#The files you do not want to merge, because they are corrupted etc.
echo $BLACKHANDLE
LISTHANDLE=`echo $FILEHANDLE | sed -n s/.gst//p`
echo "$LISTHANDLE"
PERLDUMMY="`./s296_runlist.pl $FILEHANDLE $BLACKHANDLE`" #create file list in a different format for easier processing
RUNS=""1" "`echo $PERLDUMMY | awk '{print $1}'`""	#number of runs to be treated with the same (events per file) setting. STDOUT of this perl script is the number of runs to be treated.
#s296_runlist.pl also reads the gstore content of all s296 test exp data, and puts the relevant information into the file s296_testexp.dat, one run per line
EXPHANDLE="`echo $PERLDUMMY | awk '{print $2}'`"	#gstore subdirectory specifying the experiment the data belongs to
echo Data belonging to experiment: $EXPHANDLE

for i in `seq  $RUNS`;				#read in the files, one run per line, and execute the merge-rewrite command run by run.
do
	echo
	echo Loop Iteration $i;
	thisRUN=`awk '{if (NR==line) { printf "%s",$1;}}' line=$i $LISTHANDLE.dat`;#s296_testexp.dat`;	#get run number to be processed
	firstFILE=`awk '{if (NR==line) { printf "%s",$2;}}' line=$i $LISTHANDLE.dat | sed -n 's/r_*\(\w*\)_\(\w*\).lmd/\2/p'`;
	echo
	echo This iteration will merge the files of run_$thisRUN;
	echo First file in the current run: $firstFILE;
	echo
	echo "Checking gstore status of files of r$thisRUN..."
		
	if (gstore query r"$thisRUN"\* landraw lmdv/"$EXPHANDLE" | grep "TAPE\|STAGE\*" >/dev/null) 
		then
		echo Not all files of r$thisRUN staged yet... Please do it... Stopping this loop now.
		echo To stage all files of your list, just execute this commands:
		echo
		echo 'gstore stage @'$LISTHANDLE'.filelist landraw lmdv/'$EXPHANDLE'' 
		break
	fi	#Stop, if not all files are staged
	echo
	echo "All files of run_$thisRUN have been staged."
	SOURCE=`awk '{if (NR==line) { for (j=2; j<=NF; j++) printf "%s%s/%s\n",path,dir,$j;}}' path=$GSTOREHANDLE dir=$EXPHANDLE line=$i $LISTHANDLE.dat`;#s296_testexp.dat`;
	MRGRWRT=""$UCESBBASE"unpackexps/s296/s296 --merge=6 $SOURCE --allow-errors --output=excl=sst1,excl=sst2,excl=cros3,eventcut="$EVENTCUT","$TARGETDIR"/s296_mrgrwt_"$thisRUN"_"$firstFILE".lmd" #File numbering for each merged run will start at the number of the first original file belonging to that run
	echo $MRGRWRT; #echo the command to be executed
	echo
	$MRGRWRT; # execute the actual merging command
	echo
	echo
	echo
done
echo
echo End of Programme



