// -*- C++ -*-

#include "spec/spec.spec"

#include "land_camac_converter.spec"
#include "land_camac_scaler.spec"
#include "land_fastbus.spec"
#include "land_type_subtype.spec"

DUMMY_WORD()
{
  UINT32 dummy_word;
}

SUBEVENT(DUMMY_TDC)
{
  select several
  {
    dum = DUMMY_WORD();
  }
}



EVENT
{
  // Globally will be added (always) (from event header):
  // TRIG, EVENTNO

  camac  = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_CONVERTERS);
  camac  = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_CONVERTERS);  

  camac_tcal_info  = LAND_CAMAC_TCAL_INFO(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_TCAL_INFO);

  camac_start_stop_stamp  = LAND_CAMAC_START_STOP_STAMP(type = SUBEVENT_START_STOP_ACQ, subtype = SUBEVENT_CAMAC_SCALERS);

  camac_scalers  = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_SCALERS); 
  camac_scalers  = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_SCALERS);

  fastbus_error = LAND_FASTBUS_ERROR(type = SUBEVENT_FASTBUS_ERROR, subtype = SUBEVENT_FASTBUS_ERROR_INFO);

  fastbus1 = LAND_FASTBUS1(type = SUBEVENT_FASTBUS1, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 1);
  fastbus2 = LAND_FASTBUS2(type = SUBEVENT_FASTBUS2, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 2);

  d1 = DUMMY_TDC(type=34,subtype=3500,control=9);
  d2 = DUMMY_TDC(type=9934,subtype=3500,control=9);
}

#include "mapping.hh"
SIGNAL(ZERO_SUPPRESS: N1_1); // zero suppress along the second index
SIGNAL(ZERO_SUPPRESS: V1_1); // zero suppress along the second index
SIGNAL(ZERO_SUPPRESS: TFW1); // zero suppress along the first index
SIGNAL(ZERO_SUPPRESS: NTF1); // zero suppress along the first index
SIGNAL(ZERO_SUPPRESS: CS1_1);
SIGNAL(ZERO_SUPPRESS: CV1_1);
SIGNAL(ZERO_SUPPRESS: GFI1_1);
SIGNAL(ZERO_SUPPRESS: FGR1_1);
