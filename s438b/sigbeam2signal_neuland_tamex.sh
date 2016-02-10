#!/bin/bash
# for conversion of neuland tamex SIG_BEAM directives to ucesb SIGNAL
awk 'NR>1{sfp=substr($16,4,1);
	tac=substr($16,9,2);
	ch_l=$18;
	ch_t_tot=$18+16;
	ch_t_qtc=$18+32;
	if ($2 == "") next;
	if ($0 ~ /^\/\//) next;
	print "SIGNAL("$2"LE, neuland_tamex.tamex["tac"].tdc["ch_l"], DATA32);";
	print "SIGNAL("$2"TE_TOT, neuland_tamex.tamex["tac"].tdc["ch_t_tot"], DATA32);";
	print "SIGNAL("$2"TE_QTC, neuland_tamex.tamex["tac"].tdc["ch_t_qtc"], DATA32);";
}' $1
