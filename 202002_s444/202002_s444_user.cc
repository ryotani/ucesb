#include "structures.hh"

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

void raw_user_function(unpack_event *event, raw_event *raw_event)
{
  // Do the mapping of the unpack->raw SST data

#define UNPACK_RAW_SST(dest_idx, branch, sst_idx) \
  assert(dest_idx < countof(raw_event->SST)); \
  map_unpack_raw_sst(event->ams_siderem_##branch.sst[sst_idx],raw_event->SST[dest_idx])
  UNPACK_RAW_SST(0, 2, 2);
  UNPACK_RAW_SST(1, 2, 0);
  UNPACK_RAW_SST(2, 2, 1);
  UNPACK_RAW_SST(3, 1, 2);
  UNPACK_RAW_SST(4, 1, 0);
  UNPACK_RAW_SST(5, 1, 1);
}
