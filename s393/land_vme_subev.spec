// -*- C++ -*-

SUBEVENT(CB_VME)
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

TRLO_SAMPLER(id)
{
  MEMBER(DATA32 stamps[512] NO_INDEX_LIST);

  UINT32 header
    {
      0_9:      count; // for easy skip (max 511 entries)
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
