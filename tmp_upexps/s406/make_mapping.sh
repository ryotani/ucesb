#!/bin/sh

LAND02_CFG_SIG_BEAM=/scratch.local1/htj/ralfs/land02/s406/cfg/cfg_sig_beam.hh

cpp -P $LAND02_CFG_SIG_BEAM | ../land_common/sig_beam.pl > raw_mapping.hh

egrep -v "SIGNAL\((XB|N|V|NNP|HNNP|MFI)[0-9]" raw_mapping.hh > mapping.hh

egrep "SIGNAL\((XB)[0-9]" raw_mapping.hh > xb_mapping.hh

egrep "SIGNAL\((N|V|NNP|HNNP)[0-9]" raw_mapping.hh > land_mapping.hh

egrep "SIGNAL\((MFI)[0-9]" raw_mapping.hh > mfi_mapping.hh

echo ";" > camac_c2.hh
echo ";" > camac_c3.hh
