#!/bin/bash

echo "// $(date)" > mapping_tofd.hh
echo "SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_TTFL1);" >> mapping_tofd.hh
echo "SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_TTFT1);" >> mapping_tofd.hh
echo "SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_TTCL1);" >> mapping_tofd.hh
echo "SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_TTCT1);" >> mapping_tofd.hh
ofs=1
for tamex in $(seq 0 3)
do
	for ch in $(seq 1 16)
	do
		echo "SIGNAL(TOFD_TTFL$ofs,tofd_tamex.tamex[$tamex].time_fine[$((2*ch-1))], DATA12);" >> mapping_tofd.hh
		echo "SIGNAL(TOFD_TTFT$ofs,tofd_tamex.tamex[$tamex].time_fine[$((2*ch))], DATA12);" >> mapping_tofd.hh
		echo "SIGNAL(TOFD_TTCL$ofs,tofd_tamex.tamex[$tamex].time_coarse[$((2*ch-1))], DATA12);" >> mapping_tofd.hh
		echo "SIGNAL(TOFD_TTCT$ofs,tofd_tamex.tamex[$tamex].time_coarse[$((2*ch))], DATA12);" >> mapping_tofd.hh
		ofs=$((ofs+1))
	done
done
