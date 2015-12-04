
#include "structures.hh"

#include "user.hh"

#include "multi_chunk_fcn.hh"

#include <stdint.h>

int
dummy_user_function_multi(unpack_event *event)
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

  for (unsigned int i = 0; i < countof(event->vme.dummy); ++i) {
      map_continuous_multi_events(event->vme.multi_dummy[i],
        0, multi_events);
  }

  return multi_events;
}

#ifdef DECLARED_UNPACK_DUMMY
uint32 DUMMY::get_event_counter() const
{
  return 0;
}

bool DUMMY::good_event_counter_offset(uint32 expect) const
{
  return 1;
}
#endif

