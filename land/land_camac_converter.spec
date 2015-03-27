// -*- C++ -*-

SUBEVENT(LAND_CAMAC_CONVERTER)
{
  UINT16 tpat;
  UINT16 tprev;
  UINT16 tnext; 
  UINT16 tprev2;

  if (EXTERNAL has_data)
    {
#include "camac_c3.hh"
    }
}

SUBEVENT(LAND_CAMAC_TCAL_INFO)
{
  UINT32 info NOENCODE;
}
