#!/usr/bin/perl -w

#use strict;
use warnings;

if ( $#ARGV < 0 ) {die "Usage: $0 runlist [blacklist]\n"};	#listname prefix given as argument to this routine. [Optional]: (black)list of files to be ignored/ left out in this routine.
my $FILENAME=${ARGV[0]};	#e.g. "s318_jonsselection";
chomp ($FILENAME);
if ($FILENAME !~ /(s318_.*).gst/) {	# filename has to match certain pattern
	die ("Error: The list name you specified does not match 's318_*\.gst'\n");
}
my $LISTNAME=$1;
if ( $#ARGV > 0) {	#read in the black list of files/runs not to be treated
#	#print "$#ARGV\n";
#	for ($i=1;$i<=$#ARGV;$i++) {
#		${BLACKLIST[$i]}=${ARGV[$i]};
#		chomp(${BLACKLIST[$i]});

#my $BLACKNAME=${ARGV[1]};	#name of blacklist file to be considered
	open(blackNAME, "<${ARGV[1]}") or
		die ("Error: Cannot open file '$blackNAME'\n");
	my @blacklines = <blackNAME>;
	for ($i=0;$i<=$#blacklines;$i++) {
		${BLACKLIST[$i]}=${blacklines[$i]};
		chomp(${BLACKLIST[$i]});
	}

}
#print "$#BLACKLIST\n";
#print "$BLACKLIST[0]\n";
#print "$BLACKLIST[1]\n";
#print "$BLACKLIST[2]\n";
#print "$BLACKLIST[3]\n";

open(testFILESin, "<$FILENAME") or
	die ("Error: Cannot open file '$FILENAME'\n");
open(testFILESout, ">$LISTNAME.dat") or			#filelist for shell script loop
	die ("Error: Cannot open file '$LISTNAME.dat'\n");
open(testFILESgstore, ">@" . "$LISTNAME.filelist") or	#filelist for gstore accessing
	die ("Error: Cannot open file '@$LISTNAME.filelist'\n");
my @lines = <testFILESin>;
my $NUMRUNS=0;
#$i=0;
$OLDFILE=0;
$OLDRUN=0;
$OLDPATH=0;
for ($i=0; $i<=$#lines; $i++) {
	my $LINE = $lines[$i];
	if ($LINE =~ /(\d+):\s+(.*\/(\w+)\/((run_(\d*))_(\d*)\.lmd)).*/) {
		if ($6 ne $OLDRUN) {
			#print "$5\n";
			if (isBlackListed($5)) {	#jump to next file (and se wether that is ok)
				#print "yesmain\n";
				next;
			}
			if ($OLDRUN ne 0) {
				printf(testFILESout "\n");
			}
			printf(testFILESout "$6");	#print run number at the beginning of each line
			$NUMRUNS++;
		}
		if (isBlackListed($4)) {
			next;
		}
		printf(testFILESout " $4");
		printf (testFILESgstore "$4\n");
		$OLDRUN=$6;
		$OLDFILE=$4;
		if ($3 ne $OLDPATH && $OLDPATH ne 0) {
			die ("Warning: Your files are not all in the same gstore directory.\nI found $OLDFILE in $OLDPATH, and $4 in $3\n");
		}
		$OLDPATH=$3;
	}
	#$i++;
}
#while ($i<scalar @lines);

printf (STDOUT "$NUMRUNS $OLDPATH\n");
close testFILESin;
close testFILESout;
close testFILESgstore;
close blackNAME;

sub isBlackListed {
	my ($thisFile) = @_;
	#print "$thisFile\n";
	#print "$#BLACKLIST\n";
	for ($j=0;$j<=$#BLACKLIST;$j++) {
		if ($thisFile eq ${BLACKLIST[$j]}) {
			#print "yessub\n";
			return 1;
		}
	}
	return 0;
}
