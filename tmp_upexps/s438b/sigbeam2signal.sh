#!/bin/bash
# for conversion of neuland SIG_BEAM directives to ucesb SIGNAL
awk 'NR>1{sam=substr($16,4,1);
	gtb=substr($16,9,1);
	addr=substr($16,14,2);
	ch=$18;
	chm1=ch-1;
	chp15=ch+15;
	plane=substr($4,1,5);
	bar=substr($4,7,2);
	pm=substr($2,10,1);
	signal=plane"_"pm"_";
	if (found[plane,pm] == 0) {
		print "SIGNAL(ZERO_SUPPRESS: "signal"1);";
	}
	found[plane,pm]=1;
	signal=signal bar;
	print "SIGNAL("signal"TAC, neuland_tacq.data_sam"sam"_gtb"gtb".tac["int(addr-1)"]["chm1"], DATA12);";
	print "SIGNAL("signal"CLK, neuland_tacq.data_sam"sam"_gtb"gtb".clk["int(addr-1)"]["chm1"], DATA12);";
	print "SIGNAL("signal"ADC, neuland_tacq.data_sam"sam"_gtb"gtb".adc["int(addr-1)"]["chm1"], DATA12);";
	print "SIGNAL("signal"T,   neuland_tacq.data_sam"sam"_gtb"gtb".tac["int(addr-1)"]["chp15"], DATA12);";
}' $1
