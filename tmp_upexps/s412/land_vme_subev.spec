  // -*- C++ -*-

TRLO_SAMPLER(id)
{
  MEMBER(DATA32 stamps[512] NO_INDEX_LIST);

  UINT32 header
    {
      0_9:      count; // for easy skip (max 512 entries)
      24_31:    id = MATCH(id);
    }

  list(0 <= index < header.count)
    {
      UINT32 data NOENCODE
	{
	  // in principle: bit 31: entries were lost (buffer overflow), 30-0: timestamp

	  0_31: stamp;

	  ENCODE(stamps APPEND_LIST,(value=stamp));
	}
    }
}

SUBEVENT(MASTER_VME)
{
  vme = LAND_STD_VME();

  select several
    {
      sampler_pos    = TRLO_SAMPLER(id=0xdf);
      sampler_cb_sum = TRLO_SAMPLER(id=0xd7);
    }
}

SUBEVENT(VME_CRATE1)
{
  vme = LAND_STD_VME();
 
  select several
    {
      qdc792POS_ROLU = VME_CAEN_V792(geom=31,crate=1);
      tdc775POS_ROLU = VME_CAEN_V775(geom=31,crate=130);
      qdc965PIX = VME_CAEN_V792(geom=31,crate=3);
//      Psp_madc0 = VME_MESY_MADC32(geom=1);
      scaler     = VME_CAEN_V830(geom=31);
      
    }  
}

SUBEVENT(VME_CRATE2)
{
  vme = LAND_STD_VME();
 
  select several
    {
      qdc792TFW1 = VME_CAEN_V792(geom=31,crate=1);
      qdc792TFW2 = VME_CAEN_V792(geom=31,crate=2);
      
      tdc775TFW1 = VME_CAEN_V775(geom=31,crate=131);
      tdc775TFW2 = VME_CAEN_V775(geom=31,crate=132);
      
      tdc775NTF  = VME_CAEN_V775(geom=31,crate=133);
      scaler     = VME_CAEN_V830(geom=31);
      qdc792NTF  = VME_CAEN_V792(geom=31,crate=6);
//      qdc792NTF = VME_CAEN_V792(geom=31,crate=7);

      qdc792GFI1 = VME_CAEN_V792(geom=31,crate=7);
      qdc792GFI2 = VME_CAEN_V792(geom=31,crate=8);
      qdc792GFI3 = VME_CAEN_V792(geom=31,crate=9);

      qdc792MFA  = VME_CAEN_V792(geom=31,crate=10);
     }  
}


SUBEVENT(CB_VME_RIGHT)
{
  vme = LAND_STD_VME();
  select several
  {
    adc[0] = VME_MESYTEC_MADC32(geom=0);
    adc[1] = VME_MESYTEC_MADC32(geom=1);
    adc[2] = VME_MESYTEC_MADC32(geom=2);
    adc[3] = VME_MESYTEC_MADC32(geom=3);
    tdc    = VME_VUPROM_V35();
  }
}


SUBEVENT(CB_VME_LEFT)
{
  vme = LAND_STD_VME();
  select several
  {
    adc[0] = VME_MESYTEC_MADC32(geom=0);
    adc[1] = VME_MESYTEC_MADC32(geom=1);
    adc[2] = VME_MESYTEC_MADC32(geom=2);
    adc[3] = VME_MESYTEC_MADC32(geom=3);
    Psp_madc0 = VME_MESYTEC_MADC32(geom=4);
    tdc    = VME_VUPROM_V35();
    scaler = VME_CAEN_V830(geom=31);
  }
}

