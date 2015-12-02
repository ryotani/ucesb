awk '$1!="#" && NF>1{
	plane=$1;bar=$2;pm=$3;tamex=$6+1;ch=$7;pc=$4+1;sfp=$5+1;
	coarse="NN_P"plane"_tc_T"pm"_B";
	fine="NN_P"plane"_tf_T"pm"_B";
	if (found[plane][pm] == 0)
		{
			print "SIGNAL(ZERO_SUPPRESS_MULTI(200): "coarse"1);";
			print "SIGNAL(ZERO_SUPPRESS_MULTI(200): "fine"1);";
		}
	coarse=coarse bar;
	fine=fine bar;
	found[plane][pm] = 1;
	print "SIGNAL("coarse", pc["pc"].s["sfp"].evhead["tamex"].time_coarse["ch"], DATA12);";
	print "SIGNAL("fine", pc["pc"].s["sfp"].evhead["tamex"].time_fine["ch"], DATA12);";
}' mappingNeuland.txt

