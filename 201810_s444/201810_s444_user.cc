#include "structures.hh"
#include <cstdint>
#include <iomanip>
#include <iostream>
//#include "user.hh"
//#include "land_user.hh"
//#include "land_triggers.hh"

#define NUM_SST 8 // 4 box detectors taken out

struct Time {
  Time():
    coarse(UINT32_MAX),
    fine(UINT32_MAX)
  {}
  uint32_t coarse;
  uint32_t fine;
};

namespace {

uint32_t tamex_trigger_diff(Time const &a_ref, Time const &a_trig)
{
  return 2047 & (a_trig.coarse - a_ref.coarse);
}

}

void map_unpack_raw_sst(EXT_SST &unpack,
			raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024> &raw)
{
  bitsone_iterator iter;
  int i;
  // int j = 0;
  
  while ((i = (int) unpack.data._valid.next(iter)) >= 0)
    {
      DATA12 value = unpack.data._items[i];

      raw.insert_index(-1,i).E = value;

      // j++;
    }

  // raw.header = unpack.header;
  /*
  printf ("%d %d %d %d %08x\n",
	  unpack.header.sam,unpack.header.gtb,unpack.header.siderem,j,
	  (int) raw._valid._bits[0]);
  */
}

void raw_user_function(unpack_event *event,
		       raw_event    *raw_event)
{
  // Do the mapping of the unpack->raw SST data

  unsigned int dest_det = 0;

  for (unsigned int det = 0; det < countof(event->ams_siderem.sst); det++)
    map_unpack_raw_sst(event->ams_siderem.sst[det],raw_event->SST[dest_det++]);

  assert (dest_det <= countof(raw_event->SST));

#if 0
  //
  // Track coarse counter offsets.
  //

  // Easy access.
  Time los_vftx2_trigger;
  Time los_tamex_trigger;
  std::vector<Time> tofd_tamex1_trigger(countof(event->tofd_tamex.tamex1));
  std::vector<Time> tofd_tamex2_trigger(countof(event->tofd_tamex.tamex2));
  std::vector<Time> fib_tamex_trigger(countof(event->fib_tamex.tamex));
  std::vector<Time> fibsevent_trigger(countof(event->fib_ctdc.fibseven));

#define TRIGGER_GET(name, suffix, module, trigger_ch, trigger) do {\
    bitsone_iterator iter;\
    ssize_t i;\
    while ((i = module.time_coarse._valid.next(iter)) >= 0) {\
      if (trigger_ch == i) {\
        trigger.coarse = module.time_coarse._items[i][0].value;\
        break;\
      }\
    }\
    if (UINT32_MAX == trigger.coarse) {\
      fprintf(stderr, "Missing trigger!\n");\
      return;\
    }\
  } while (0)
#define CTDC_ARRAY_TRIGGER_GET(name, ctdc_array, trigger_array) do {\
    for (size_t card_i = 0; card_i < countof(ctdc_array); ++card_i) {\
      auto const &ctdc = ctdc_array[card_i];\
      auto &trigger = trigger_array.at(card_i);\
      TRIGGER_GET(name, card_i, ctdc, 256, trigger);\
    }\
  } while (0)
#define TAMEX_ARRAY_TRIGGER_GET(name, tamex_array, trigger_array) do {\
    for (size_t card_i = 0; card_i < countof(tamex_array); ++card_i) {\
      auto const &tamex = tamex_array[card_i];\
      auto &trigger = trigger_array.at(card_i);\
      TRIGGER_GET(name, card_i, tamex, 0, trigger);\
    }\
  } while (0)

  TRIGGER_GET("LOSV", 15, event->los_vme.vftx2, 0, los_vftx2_trigger);

  TRIGGER_GET("LOST", 0, event->los_tamex.tamex, 0, los_tamex_trigger);

  TAMEX_ARRAY_TRIGGER_GET("TOFD1", event->tofd_tamex.tamex1,
      tofd_tamex1_trigger);
  TAMEX_ARRAY_TRIGGER_GET("TOFD2", event->tofd_tamex.tamex2,
      tofd_tamex2_trigger);

  TAMEX_ARRAY_TRIGGER_GET("FIBS", event->fib_tamex.tamex, fib_tamex_trigger);

  CTDC_ARRAY_TRIGGER_GET("FIBM", event->fib_ctdc.fibseven, fibsevent_trigger);

  // Compare all TAMEX against LOS VFTX2.
  auto diff = tamex_trigger_diff(los_tamex_trigger, los_vftx2_trigger);
  std::cout << "LOST=" << diff << '\n';

  for (size_t i = 0; i < tofd_tamex1_trigger.size(); ++i) {
    diff = tamex_trigger_diff(tofd_tamex1_trigger[i], los_vftx2_trigger);
    std::cout << "TOFD1_" << i << '=' << diff << '\n';
  }
  for (size_t i = 0; i < tofd_tamex2_trigger.size(); ++i) {
    diff = tamex_trigger_diff(tofd_tamex2_trigger[i], los_vftx2_trigger);
    std::cout << "TOFD2_" << i << '=' << diff << '\n';
  }

  for (size_t i = 0; i < fib_tamex_trigger.size(); ++i) {
    diff = tamex_trigger_diff(fib_tamex_trigger[i], los_vftx2_trigger);
    std::cout << "FIB7_" << i << '=' << diff << '\n';
  }

#endif
}
