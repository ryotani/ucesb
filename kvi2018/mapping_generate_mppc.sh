#!/bin/bash

dst=mapping_fibsipm.hh
echo \/\/ $(date) > $dst

#
# SIPM fiber.
#

echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TLC1);" >> $dst
echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TLF1);" >> $dst
echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TTC1);" >> $dst
echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TTF1);" >> $dst
echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TLC1);" >> $dst
echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TLF1);" >> $dst
echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TTC1);" >> $dst
echo "SIGNAL(ZERO_SUPPRESS_MULTI(32): FIBSIPM_TTF1);" >> $dst

for ch in `seq 1 32`
do
	chan=$(echo 2 \* $ch - 1 | bc)
	for edge in L T
	do
		sfp=3
		card=0
		dev=mppc.mppc_0
		echo "SIGNAL(FIBSIPM_T${edge}C$ch, $dev.time_coarse[$chan], DATA12);" >> $dst
		echo "SIGNAL(FIBSIPM_T${edge}F$ch, $dev.time_fine[$chan], DATA12);" >> $dst
		chan=$((chan + 1))
	done
done
