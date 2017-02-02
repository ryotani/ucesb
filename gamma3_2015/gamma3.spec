#include "spec/spec.spec"
//#include "vme_mesy_madc32.spec"
#include "trlo.spec"
#include "trlo_data.spec"
#include "caen_scaler_data.spec"
//#include "vme_struck_sis3302.spec"
#include "vme_struck_sis3316.spec"

LAND_STD_VME()
{
  MEMBER(DATA32 timestamp);
  UINT32 failure
  {
    0:  fail_general;
    1:  fail_data_corrupt;
    2:  fail_data_missing;
    3:  fail_data_too_much;
    4:  fail_event_counter_mismatch;
    5:  fail_readout_error_driver;
    6:  fail_unexpected_trigger;

    26: has_scaler_data;
    27: has_no_zero_suppression;
    28: has_multi_adctdc_counter0;
    29: has_multi_scaler_counter0;
    30: has_multi_event;
    31: has_time_stamp;
  }

  if (failure.has_time_stamp) {
    UINT32 time_stamp {
      0_31: value;
      ENCODE(timestamp,(value=value));
    }
  }

  if (failure.has_multi_event) {
    UINT32 multi_events;
  }

  if (failure.has_multi_scaler_counter0) {
    UINT32 multi_scaler_counter0;
  }

  if (failure.has_multi_adctdc_counter0) {
    UINT32 multi_adctdc_counter0;
  }

}

SUBEVENT(SCALERS)
{
  select several {
    trlo = TRLO_TRIG_SCALER(id = 0x12);
    caen_scaler = VME_CAEN_V830(geom=0x1f);
  }
}

SUBEVENT(TS)
{
  /*trlo = TRLO(id = 2, multi_events = 32);*/
  trlo = TRLO(id = 2, multi_events = 29);
}

SUBEVENT(VME)
{
  header = LAND_STD_VME();

  select several {
    sis3316[0] = VME_STRUCK_SIS3316(id=3);
    sis3316[1] = VME_STRUCK_SIS3316(id=4);
    sis3316[2] = VME_STRUCK_SIS3316(id=5);
    /*multi scaler = VME_CAEN_V830(geom=0x1f);*/
    multi tdc = VME_CAEN_V775(geom=0x1f, crate=0x0);
    multi adc = VME_MESYTEC_MADC32(geom=0x4);
  }
}

EVENT
{
  ts = TS(type = 10, subtype = 1, control = 5, subcrate = 1);
  vme = VME(type = 88, subtype = 8800, control = 5, subcrate = 1);
  scalers = SCALERS(type = 12, subtype = 3456, control = 5, subcrate = 1);
  ignore_unknown_subevent;
}

#include "mapping_in.h"


