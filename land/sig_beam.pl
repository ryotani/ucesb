#!/usr/bin/perl

use warnings;

%type;
$type{"L_Q47342"} = "fastbus_1.qdc_";
$type{"L_Q11111"} = "fastbus_1.qdc_";
$type{"L_Q46848"} = "fastbus_1.qdc_";
$type{"L_Q47315"} = "fastbus_1.qdc_";
$type{"L_Q17320"} = "fastbus_1.qdc_";
$type{"L_Q15372"} = "fastbus_1.qdc_";
$type{"F_Q46962"} = "fastbus_1.qdc_";
$type{"L_Q46993"} = "fastbus_1.qdc_";
$type{"L_Q15358"} = "fastbus_1.qdc_";
$type{"L_Q47264"} = "fastbus_1.qdc_";
$type{"L_T81855"} = "fastbus_1.tdc_";
$type{"L_T87044"} = "fastbus_1.tdc_";
$type{"L_T87024"} = "fastbus_1.tdc_";
$type{"L_T81800"} = "fastbus_1.tdc_";
$type{"L_T87047"} = "fastbus_2.tdc_";
$type{"L_T48854"} = "fastbus_2.tdc_";
$type{"L_T81808"} = "fastbus_2.tdc_";
$type{"L_T81859"} = "fastbus_2.tdc_";
$type{"L_T81795"} = "fastbus_2.tdc_";
$type{"L_T81806"} = "fastbus_2.tdc_";
$type{"L_T48834"} = "fastbus_2.tdc_";
$type{"SIA0416"} = "camac.qdc_";
$type{"SIA0458"} = "camac.qdc_";
$type{"SIA0429"} = "camac.qdc_";
$type{"SIA8035"} = "camac.tdc_";
$type{"SIA0469"} = "camac.tdc_";
$type{"SIA0480"} = "camac.qdc_";
$type{"C_FRS120"} = "camac.tdc_";
$type{"SIA0426"} = "camac.tdc_";
$type{"SIA0495"} = "camac.qdc_";
$type{"PHI18573"} = "camac.tdc_";
$type{"PHI10481"} = "camac.tdc_";
$type{"PHI12160"} = "camac.adc_";
$type{"SIA0400"} = "camac.tdc_";
$type{"SIA0401"} = "camac.tdc_";


#open the input file and copy the informations into an aray
open(INPUT,"../../cabling/gen/cfg_sig_beam.hh");
@SigBeam = <INPUT>;
close(INPUT);

open(OUTPUT,">mapping.hh");

for($i=0;$i<scalar(@SigBeam);$i++) {chomp($SigBeam[$i]);}

$dim=31;
for($i=0;$i<scalar(@SigBeam);$i++) 
  {
    @line = split(' ',$SigBeam[$i]);
    $len = scalar(@line);
    if(($len==$dim) && ($line[0]eq'SIG_BEAM('))
      {
	$name = $line[1];
	
	if ($line[15]ne'NONE') 
	  {
	    $ch_E = $line[17];
	    $module = $line[15];
	    print OUTPUT "SIGNAL($name";
	    print OUTPUT "_E,$type{$module}$module.data[$ch_E],DATA12);\n";
	  }
	  
	if ($line[19]ne'NONE') 
	  {
	    $ch_T = $line[21];
	    $module = $line[19];
	    print OUTPUT "SIGNAL($name";
	    print OUTPUT "_T,$type{$module}$module.data[$ch_T],DATA12);\n";
	  }
      }
  }

close(OUTPUT);
