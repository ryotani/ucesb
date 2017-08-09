#include "structures.hh"
#include "user.hh"
#include "sis3316_params.hh"

void raw_sis3316_async(uint64 _n, WR_MULTI &, VME_STRUCK_SIS3316_ASYNC *_fadc,
    size_t n_modules, raw_event *);

void
init_function(void)
{

}

void
exit_function(void)
{

}

void
raw_sis3316_async(uint64 _n, WR_MULTI &_wr, VME_STRUCK_SIS3316_ASYNC *_fadc,
    size_t n_modules, raw_event *raw_event)
{
	uint64 trloii_timestamp = (((uint64)(_wr.time_hi.value)) << 32)
	    | _wr.time_lo.value;

	for (size_t m = 0; m < n_modules; ++m) {
		size_t n_hits;
		uint64 max_timestamp = 0;

		raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS * N_TS,
		    MAX_HITS> & ts = _fadc[m].ts;
		uint32 *ts_n = ts._num_entries;
		DATA32 (*t)[MAX_HITS] = ts._items;

		n_hits = 0;
		bitsone_iterator it;
		int i;
		while ((i = (int)ts._valid.next(it)) >= 0) {
			/* Mapping */
			if (i % N_TS != 0) continue;

			int ch = (int)m * N_CHANNELS + (i / N_TS);

			printf("  channel %d has %u hits.\n", ch, ts_n[i]);

			for (size_t j = 0; j < ts_n[i]; ++j) {
				uint64 timestamp = 0;
				//printf("    ts[%02d][%04lu] = 0x%08x 0x%08x\n",
				//    i, j, t[i][j].value, t[i+1][j].value);

				raw_event->TS.HIGH.insert_index(
				    t[i][j].value, ch);
				raw_event->TS.LOW.insert_index(
				    t[i+1][j].value, ch);

				timestamp = ((((uint64)(t[i][j].value)) << 32)
				    | t[i+1][j].value) * NSEC_PER_CLOCK;

				if (timestamp > max_timestamp)
					max_timestamp = timestamp;

				++n_hits;
			}
		}

		if (n_hits > 0) {
			printf(" Ev %llu/%lu: h %lu wr 0x%016llx "
			    "max_ts 0x%016llx\n",
			    _n, m, n_hits, trloii_timestamp, max_timestamp);
		}
	}
}

void
raw_user_function(unpack_event *event, raw_event *raw_event)
{
	raw_sis3316_async(event->event_no, event->vme_ts.ts_multi,
	    event->vme.fadc,
	    sizeof(event->vme.fadc) / sizeof(event->vme.fadc[0]), raw_event);
}
