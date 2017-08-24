#include "stdint.h"

#include "structures.hh"

#include "user.hh"

#include "multi_chunk_fcn.hh"

int
gamma3_user_function_multi(unpack_event *event)
{
  uint32_t multi_events;

  /* Check the event for errors */
#define EVENT_FAILURE_ERROR(failmode,message) \
  { if (event->vme.header.failure.failmode) ERROR(message); }
#define EVENT_FAILURE_WARNING(failmode,message) \
  { if (event->vme.header.failure.failmode) WARNING(message); }

  EVENT_FAILURE_ERROR(fail_general,               "Event with DAQ general failure.");
  EVENT_FAILURE_ERROR(fail_data_corrupt,          "Event with DAQ data corruption.");
  EVENT_FAILURE_ERROR(fail_data_missing,          "Event with DAQ data missing.");
  EVENT_FAILURE_ERROR(fail_data_too_much,         "Event with DAQ data too much.");
  EVENT_FAILURE_ERROR(fail_event_counter_mismatch,"Event with DAQ event counter mismatch.");
  EVENT_FAILURE_ERROR(fail_readout_error_driver,  "Event with DAQ readout driver error.");
  EVENT_FAILURE_WARNING(fail_unexpected_trigger,  "Event with DAQ unexpected trigger.");

  if (event->vme.header.failure.has_multi_event)
  {
    multi_events = event->vme.header.multi_events;
  } else {
    multi_events = 1;
  }

  for (unsigned int i = 0; i < countof(event->vme.sis3316); ++i) {
    for (unsigned int j = 0; j < countof(event->vme.sis3316[i].channel); ++j) {
      map_continuous_multi_events(event->vme.sis3316[i].channel[j].multi_data,
        0, multi_events);
    }

    map_continuous_multi_events(event->ts.trlo.serial_ts.multi_event,
        0, multi_events);
    map_continuous_multi_events(event->ts.trlo.trigbuf.multi_entry,
        0, multi_events);
    map_continuous_multi_events(event->vme.multi_tdc, 0, multi_events);
    map_continuous_multi_events(event->vme.multi_adc, 0, multi_events);
    /*map_continuous_multi_events(event->vme.multi_scaler, 0, multi_events);*/
  }

  return multi_events;
}


#ifdef DECLARED_UNPACK_SERIAL_TS_EVENT
uint32 SERIAL_TS_EVENT::get_event_counter() const
{
  return 0;
}

bool SERIAL_TS_EVENT::good_event_counter_offset(uint32 expect) const
{
  return 1;
}
#endif

#ifdef DECLARED_UNPACK_TRIGBUF_ENTRY
uint32 TRIGBUF_ENTRY::get_event_counter() const
{
  return 0;
}

bool TRIGBUF_ENTRY::good_event_counter_offset(uint32 expect) const
{
  return 1;
}
#endif

#ifdef DECLARED_UNPACK_CAEN_V775
uint32 CAEN_V775::get_event_counter() const
{
  return eob.event_number;
}

bool CAEN_V775::good_event_counter_offset(uint32 expect) const
{
  return 1;
}
#endif

#ifdef DECLARED_UNPACK_VME_MESY_MADC32
uint32 VME_MESY_MADC32::get_event_counter() const
{
  return 0;
}

bool VME_MESY_MADC32::good_event_counter_offset(uint32 expect) const
{
  return 1;
}
#endif

