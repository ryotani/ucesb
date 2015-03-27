// -*- C++ -*-
#define VME_CAEN_V820_FRS VME_CAEN_V830_FRS

VME_CAEN_V830_FRS(geom)
{
  MEMBER(DATA32 data[32]);

  UINT32 header NOENCODE
    {
        0_4: count;
       5_26: 0b00100000000000000000000;// 0x2000000 >> 5 
      27_31: geom = MATCH(geom);
    }

    list(0<=index<header.count)
    {
   UINT32 ch_data NOENCODE
        {
          0_31: value;
          ENCODE(data[index],(value=value));
	}
     }
  
   UINT32 eob
    {
       0_26: 0x4000000;
      27_31: geom = MATCH(geom);
    }
  
}


