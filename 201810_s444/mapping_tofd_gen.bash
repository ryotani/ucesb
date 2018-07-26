#!/bin/bash

#
# s444 & s454
#
# 2 walls:
# 1: 2 planes 20 paddles -> 5 tamex cards
# 2: 2 planes 44 paddles -> 5 tamex cards
#

function map_group()
{
	plane=$1
	side=$2
	paddle_ofs=$3
	prefix=$4
	tamex=$5
	ch_ofs=$6

	paddle=$paddle_ofs
	ch1=$((2*ch_ofs+1))
	ch2=$((ch1+1))
	for paddle_sub in $(seq 0 7)
	do
		echo "SIGNAL(TOFD_P${plane}T${side}_TFL${paddle},${prefix}_tamex.tamex[$tamex].time_fine[$ch1], DATA12);"
		echo "SIGNAL(TOFD_P${plane}T${side}_TFT${paddle},${prefix}_tamex.tamex[$tamex].time_fine[$ch2], DATA12);"
		echo "SIGNAL(TOFD_P${plane}T${side}_TCL${paddle},${prefix}_tamex.tamex[$tamex].time_coarse[$ch1], DATA12);"
		echo "SIGNAL(TOFD_P${plane}T${side}_TCT${paddle},${prefix}_tamex.tamex[$tamex].time_coarse[$ch2], DATA12);"
		paddle=$((paddle+1))
		ch1=$((ch1+2))
		ch2=$((ch2+2))
	done
}

function map_wall()
{
	wall=$1
	paddle_num=$2
	prefix=$3

	plane1=$((2*wall-1))
	plane2=$((plane1+1))
	for plane in $plane1 $plane2
	do
		for side in 1 2
		do
			echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TFL1);"
			echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TFT1);"
			echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TCL1);"
			echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TCT1);"
		done
	done
	paddle_ofs=1
	tamex=0
	while [ $paddle_ofs -lt $paddle_num ]
	do
		map_group $plane1 1 $paddle_ofs $prefix $tamex 0
		map_group $plane1 2 $paddle_ofs $prefix $tamex 8
		tamex=$((tamex+1))
		map_group $plane2 1 $paddle_ofs $prefix $tamex 0
		map_group $plane2 2 $paddle_ofs $prefix $tamex 8
		tamex=$((tamex+1))
		paddle_ofs=$((paddle_ofs+8))
	done
}

echo "// $0 on $(date)"
tamex=0
map_wall 1 20 tofd1
#map_wall 2 44 tofd2
