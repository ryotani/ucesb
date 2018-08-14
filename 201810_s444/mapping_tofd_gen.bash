#!/bin/bash

#
# s444 & s454
#
# 4 planes:
# 1: 20 paddles -> 2.25 tamex cards
# 2: 20 paddles -> 2.25 tamex cards
# 3: 44 paddles -> 5.5 tamex cards
# 4: 44 paddles -> 5.5 tamex cards
#

function map_octopus()
{
	plane=$1
	side=$2
	paddle_ofs=$3
	sfp=$4
	card=$5
	ch_ofs=$6

	paddle=$paddle_ofs
	chl=$((2*ch_ofs+1))
	cht=$((chl+1))
	for paddle_sub in $(seq 0 7)
	do
		echo "SIGNAL(TOFD_P${plane}T${side}_TFL${paddle},tofd_tamex.tamex$sfp[$card].time_fine[$chl], DATA12);"
		echo "SIGNAL(TOFD_P${plane}T${side}_TFT${paddle},tofd_tamex.tamex$sfp[$card].time_fine[$cht], DATA12);"
		echo "SIGNAL(TOFD_P${plane}T${side}_TCL${paddle},tofd_tamex.tamex$sfp[$card].time_coarse[$chl], DATA12);"
		echo "SIGNAL(TOFD_P${plane}T${side}_TCT${paddle},tofd_tamex.tamex$sfp[$card].time_coarse[$cht], DATA12);"
		((paddle++))
		((chl+=2))
		((cht+=2))
	done
}

function map_wall()
{
	plane=$1
	paddle_num=$2
	sfp=$3
	card_ofs=$4

	for side in 1 2
	do
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TFL1);"
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TFT1);"
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TCL1);"
		echo "SIGNAL(ZERO_SUPPRESS_MULTI(64): TOFD_P${plane}T${side}_TCT1);"
	done
	paddle_ofs=1
	card=$card_ofs
	while [ $paddle_ofs -lt $paddle_num ]
	do
		map_octopus $plane 1 $paddle_ofs $sfp $card 0
		map_octopus $plane 2 $paddle_ofs $sfp $card 8
		((card++))
		((paddle_ofs+=8))
	done
}

echo "// $0 on $(date)"
map_wall 1 20 0 0
map_wall 2 20 0 3
map_wall 3 44 2 0
map_wall 4 44 2 6
