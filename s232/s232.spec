// -*- C++ -*-

#include "spec/spec.spec"

#define LAND_FASTBUS_FIRST_WORD_0
#define NO_LAND_FASTBUS2

#include "land_camac_converter.spec"
#include "land_camac_scaler.spec"
#include "land_fastbus.spec"
//#include "land_vme.spec"
#include "land_type_subtype.spec"

EVENT
{
  // Globally will be added (always) (from event header):
  // TRIG, EVENTNO

  camac       = LAND_CAMAC_CONVERTER(type    = SUBEVENT_CAMAC, 
				     subtype = SUBEVENT_CAMAC_CONVERTERS);

  camac_scalers  = LAND_CAMAC_SCALER(type    = SUBEVENT_CAMAC, 
				     subtype = SUBEVENT_CAMAC_SCALERS); 

  fastbus_error = LAND_FASTBUS_ERROR(type    = SUBEVENT_FASTBUS_ERROR, 
				     subtype = SUBEVENT_FASTBUS_ERROR_INFO);
  fastbus1           = LAND_FASTBUS1(type    = SUBEVENT_FASTBUS1, 
				     subtype = SUBEVENT_FASTBUS_DATA1);
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
