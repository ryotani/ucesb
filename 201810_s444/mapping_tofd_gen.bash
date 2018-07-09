#!/bin/bash

#
# s444
#
# 2 planes 20 paddles -> 5 tamex cards
# BL: Currently only 4 tamex cards used, so stop generating after 4 cards
#

#
# s454
#
# 2 planes 44 paddles -> 11 tamex cards
#

echo "// $0 on $(date)"
tamex=0
ch=0
for plane in 1 2
do
	for side in 1 2
	do
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TFL1);"
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TFT1);"
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TCL1);"
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TCT1);"
	done
	for paddle in $(seq 1 20)
	do
		for side in 1 2
		do
			echo "SIGNAL(TOFD_P${plane}T${side}_TFL${paddle},tofd_tamex.tamex[$tamex].time_fine[$((2*ch+1))], DATA12);"
			echo "SIGNAL(TOFD_P${plane}T${side}_TFT${paddle},tofd_tamex.tamex[$tamex].time_fine[$((2*ch+2))], DATA12);"
			echo "SIGNAL(TOFD_P${plane}T${side}_TCL${paddle},tofd_tamex.tamex[$tamex].time_coarse[$((2*ch+1))], DATA12);"
			echo "SIGNAL(TOFD_P${plane}T${side}_TCT${paddle},tofd_tamex.tamex[$tamex].time_coarse[$((2*ch+2))], DATA12);"
			ch=$((ch+1))
			if [ $ch -eq 16 ]
			then
				tamex=$((tamex+1))
				if [ $tamex -eq 4 ]; then
					exit;
				fi
				ch=0
			fi
		done
	done
done
