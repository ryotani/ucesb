#!/bin/bash

if [ $# -eq 0 ]
then
	echo "Usage: $0 detector" 1>&2
	echo " E.g.: $0 ROLU" 1>&2
	echo " E.g.: $0 nn" 1>&2
	exit 1
elif [ $# -eq 1 ]
then
	name=$(echo $1 | tr '[:upper:]' '[:lower:]')
	NAME=$(echo $1 | tr '[:lower:]' '[:upper:]')
	id=h101_$NAME
	dst=ext_h101_$name.h
	sigs=RAW:$NAME
else
	name=$(echo $1 | tr '[:upper:]' '[:lower:]')
	NAME=$(echo $1 | tr '[:lower:]' '[:upper:]')
	id=h101_$NAME
	dst=ext_h101_$name.h
	shift
	sigs=$(echo $* | tr '[:lower:]' '[:upper:]' | sed 's/^/RAW:/;s/ /,RAW:/g')
fi

tmp=$(mktemp --suffix=.h)
./202002_s467 --ntuple=$sigs,id=$id,$tmp
echo ./202002_s467 --ntuple=$sigs,id=$id,$tmp
sed '/ INFO /,+2 d;/"TRIGGER"/,+3 d;/while (0)/,/#endif/{//!d}' $tmp > $dst
rm -f $tmp

echo "$dst ready!"
