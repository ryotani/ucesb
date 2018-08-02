#include "structures.hh"
#include <cstdint>
#include <iostream>
//#include "user.hh"
//#include "land_user.hh"
//#include "land_triggers.hh"

#define NUM_SST 8 // 4 box detectors taken out

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

  //
  // Track coarse counter offsets.
  //

#if 0
  bitsone_iterator iter;
  ssize_t i;

  // WR timestamp to sync coarse counter windows.
  auto const &master_wr = event->master_ts.ts100;
  uint64_t wr =
      (uint64_t)master_wr.t4.value << 48 |
      (uint64_t)master_wr.t3.value << 32 |
      (uint64_t)master_wr.t2.value << 16 |
      (uint64_t)master_wr.t1.value;

  auto const &los_vftx2 = event->los_vme.vftx2;
  auto los_vftx2_trigger = los_vftx2.time_trigger.value;

  auto const &los_tamex = event->los_tamex.tamex;
  while ((i = los_tamex.time_coarse._valid.next(iter)) >= 0) {
    std::cout << i << ' ' << los_tamex.time_coarse._num_entries[i] << ' ' <<
        los_tamex.time_coarse._items[i][0].value << '\n';
  }

/*  auto const &tofd1_tamex = event->tofd1_tamex.tamex;
  auto tofd1_tamex_trigger = tofd1_tamex.time_coarse.value;

  auto const &fib_ctdc = event->fib_ctdc.ctdc;
  auto fib_ctdc_trigger = fib_ctdc.time_coarse.value;

  auto const &fib_tamex = event->fib_tamex.tamex;
  auto fib_tamex_trigger = fib_tamex.time_coarse.value;*/
#endif
}
