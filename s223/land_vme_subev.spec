SUBEVENT(LAND_VME)
{
	vme = LAND_STD_VME();

	select several
	{
		//tdc0 = VME_CAEN_V775(geom=20,crate=20);
		tdc775 = VME_CAEN_V775(geom=16,crate=130);
		//adc785 = VME_CAEN_V785(geom=11,crate=0);
		qdc792 = VME_CAEN_V792(geom=0,crate=1);
		scaler[0] = VME_CAEN_V830(geom=30);
		scaler[1] = VME_CAEN_V830(geom=31);
	}
}

