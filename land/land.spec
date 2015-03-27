// -*- C++ -*-

#include "spec/spec.spec"

#include "land_camac_converter.spec"
#include "land_camac_scaler.spec"
#include "land_fastbus.spec"
#include "land_vme.spec"
#include "land_type_subtype.spec"

DUMMY_WORD()
{
  UINT32 dummy_word;
}

SUBEVENT(DUMMY_TDC)
{
  select several
  {
    d = DUMMY_WORD();
  }
}

EVENT
{
  // Globally will be added (always) (from event header):
  // TRIG, EVENTNO

  camac  = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_CONVERTERS);
  camac_tcal  = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_CONVERTERS);
  camac_tcal_info  = LAND_CAMAC_TCAL_INFO(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_TCAL_INFO);
#if 0
  camac_scalers  = LAND_CAMAC_SCALER(type = SUBEVENT_START_STOP_ACQ, subtype = SUBEVENT_CAMAC_SCALERS);
#endif
  camac_scalers  = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_SCALERS);
  camac_scalers_tcal  = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_SCALERS);
  fastbus_error = LAND_FASTBUS_ERROR(type = SUBEVENT_FASTBUS_ERROR, subtype = SUBEVENT_FASTBUS_ERROR_INFO);
  fastbus_1 = LAND_FASTBUS1(type = SUBEVENT_FASTBUS1, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 1);
  fastbus_2 = LAND_FASTBUS2(type = SUBEVENT_FASTBUS2, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 2);
  d1 = DUMMY_TDC(type=34,subtype=3500,control=9);

  
}

#include "mapping.hh"
