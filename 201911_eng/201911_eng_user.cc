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

  unsigned int dest_det = 0;

#define UNPACK_RAW_SST(id) \
  for (unsigned int det = 0; det < countof(event->ams_siderem_##id.sst##id); det++) \
    map_unpack_raw_sst(event->ams_siderem_##id.sst##id[det],raw_event->SST[dest_det++])
  UNPACK_RAW_SST(1);
  UNPACK_RAW_SST(2);

  assert (dest_det <= countof(raw_event->SST));

}
