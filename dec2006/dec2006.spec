// -*- C++ -*-

#include "spec/spec.spec"

#include "siderem01_vme.spec"
#include "land_camac_converter.spec"
#include "land_camac_scaler.spec"
#include "land_fastbus.spec"
//#include "land_vme.spec"
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
  sst = SIDEREM01_VME(type=10,subtype=1,control=91);
  camac  = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_CONVERTERS);
  fastbus_1 = LAND_FASTBUS1(type = SUBEVENT_FASTBUS1, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 1);
  fastbus_2 = LAND_FASTBUS2(type = SUBEVENT_FASTBUS2, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 2);

  camac = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_CONVERTERS);
  camac_tcal_info = LAND_CAMAC_TCAL_INFO(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_TCAL_INFO);
#if 0
  camac_scalers = LAND_CAMAC_SCALER(type = SUBEVENT_START_STOP_ACQ, subtype = SUBEVENT_CAMAC_SCALERS);
#else
  d2 = DUMMY_TDC(type = SUBEVENT_START_STOP_ACQ, subtype = SUBEVENT_CAMAC_SCALERS);
#endif
  camac_scalers = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_SCALERS);
  camac_scalers = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_SCALERS);
  fastbus_error = LAND_FASTBUS_ERROR(type = SUBEVENT_FASTBUS_ERROR, subtype = SUBEVENT_FASTBUS_ERROR_INFO);
  d1 = DUMMY_TDC(type=34,subtype=3500,control=9);
}

#include "mapping.hh"

SIGNAL(SST1_1_E,    sst.sst[0].data[0][0],
       SST1_320_E,  sst.sst[0].data[0][319], DATA12);
SIGNAL(SST1_321_E,  sst.sst[0].data[1][0],
       SST1_640_E,  sst.sst[0].data[1][319], DATA12);
SIGNAL(SST1_641_E,  sst.sst[0].data[2][0],
       SST1_1024_E, sst.sst[0].data[2][383], DATA12);

SIGNAL(SST2_1_E,    sst.sst[1].data[0][0],
       SST2_320_E,  sst.sst[1].data[0][319], DATA12);
SIGNAL(SST2_321_E,  sst.sst[1].data[1][0],
       SST2_640_E,  sst.sst[1].data[1][319], DATA12);
SIGNAL(SST2_641_E,  sst.sst[1].data[2][0],
       SST2_1024_E, sst.sst[1].data[2][383], DATA12);

SIGNAL(SST3_1_E,    sst.sst[2].data[0][0],
       SST3_320_E,  sst.sst[2].data[0][319], DATA12);
SIGNAL(SST3_321_E,  sst.sst[2].data[1][0],
       SST3_640_E,  sst.sst[2].data[1][319], DATA12);
SIGNAL(SST3_641_E,  sst.sst[2].data[2][0],
       SST3_1024_E, sst.sst[2].data[2][383], DATA12);

SIGNAL(SST4_1_E,    sst.sst[3].data[0][0],
       SST4_320_E,  sst.sst[3].data[0][319], DATA12);
SIGNAL(SST4_321_E,  sst.sst[3].data[1][0],
       SST4_640_E,  sst.sst[3].data[1][319], DATA12);
SIGNAL(SST4_641_E,  sst.sst[3].data[2][0],
       SST4_1024_E, sst.sst[3].data[2][383], DATA12);
			     			     
SIGNAL(ZERO_SUPPRESS: SST1_1024);
SIGNAL(ZERO_SUPPRESS: NTF16);



