#include "structures.hh"
#include "user.hh"
#include "sis3316_params.hh"
#include <vector>
#include <numeric>

using namespace std;

void raw_sis3316_async(uint64 _n, TRLOII_TPAT &, WR_MULTI &,
    VME_STRUCK_SIS3316_ASYNC *_fadc,
    size_t n_modules, raw_event *);

void
init_function(void)
{

}

void
exit_function(void)
{

}

#define TS_SAMPLES 2
#define AVG_ENTRIES 1
#define N_SKIP 1e9
vector<uint64> wr_ts(TS_SAMPLES, 0);
vector<uint64> sis_ts;
vector<double> avg_slope;
vector<double> avg_offset;
vector<uint64> last_max_wr_timestamp;
vector<uint64> last_hit_ts;
vector<size_t> last_hit_ch;
int idx;
int s_idx;
int n_entries_with_data;
double o = 0, s = 0;

void
raw_sis3316_async(uint64 _n, TRLOII_TPAT & _tpat, WR_MULTI &_wr,
    VME_STRUCK_SIS3316_ASYNC *_fadc,
    size_t n_modules, raw_event *raw_event)
{
	uint64 trloii_timestamp = (((uint64)(_wr.time_hi.value)) << 32)
	    | _wr.time_lo.value;

	raw_list_ii_zero_suppress<DATA32, DATA32, 170> tpat = _tpat.tpat;
	raw_list_ii_zero_suppress<DATA32, DATA32, 170> mtslo = _tpat.ts_lo;
	raw_list_ii_zero_suppress<DATA32, DATA32, 170> mtshi = _tpat.ts_hi;
	DATA32 tpat_n = _tpat.n;

	raw_event->WR.HIGH.value = _wr.time_hi.value;
	raw_event->WR.LOW.value = _wr.time_lo.value;

	printf("\n");
	printf("trloii has %u events at ts = 0x%08x%08x:\n", tpat_n.value,
	    _wr.time_hi.value, _wr.time_lo.value);
	for (size_t i = 0; i < tpat_n.value; ++i) {
		printf("  %lu: tpat = %u, ts = 0x%08x%08x.\n", i,
		    tpat[i].value, mtshi[i].value, mtslo[i].value);
	}

	/* Resize containers -> can be moved to init() */
	sis_ts.resize(TS_SAMPLES);
	avg_slope.resize(AVG_ENTRIES);
	avg_offset.resize(AVG_ENTRIES);

	/*
	 * Find out the hit corresponding to the time of the first
	 * bank switch. This hit is the last hit in the module that
	 * switched first. Thus, we are looking for the smallest timestamp,
	 * in the last hit of each module in this event. This is the time,
	 * when the trloii was latched.
	 */
	uint64 min_timestamp = (uint64) -1;
	size_t min_module = 0;
	size_t min_ch = 0;
	size_t n_modules_with_hits = 0;
	vector<size_t> n_hits(n_modules,0);

	/*
	 * None of the hits may receive a WR timestamp earlier than this.
	 */
	last_max_wr_timestamp.resize(n_modules, 0);
	last_hit_ts.resize(n_modules, 0);
	last_hit_ch.resize(n_modules, 0);
	fill(last_hit_ts.begin(), last_hit_ts.end(), 0);

	/*
	 * Find out last hit of each module
	 */
	for (size_t m = 0; m < n_modules; ++m) {
		raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS * N_TS,
		    MAX_HITS> & ts = _fadc[m].ts;

		uint32 *ts_n = ts._num_entries;
		DATA32 (*t)[MAX_HITS] = ts._items;
		bitsone_iterator it;
		int i;

		while ((i = (int)ts._valid.next(it)) >= 0) {
			uint64 timestamp = 0;
			/* Mapping */
			if (i % N_TS != 0) continue;

			int ch = (int)m * N_CHANNELS + (i / N_TS);

			n_hits[m] += ts_n[i];

			timestamp = ((((uint64)(t[i][ts_n[i]-1].value)) << 32)
			    | t[i+1][ts_n[i]-1].value) * NSEC_PER_CLOCK;

			if (timestamp > last_hit_ts[m]) {
				last_hit_ts[m] = timestamp;
				last_hit_ch[m] = ch;
			}
		}

		if (n_hits[m] > 0) {
			n_modules_with_hits++;
			printf(" Ev %llu/%lu: hits %lu last_hit_ts 0x%016llx\n", _n,
			   m, n_hits[m], last_hit_ts[m]);
		}
	}

	/*
	 * Find out the earliest last hit.
	 */
	for (size_t m = 0; m < n_modules; ++m) {
		if (n_hits[m] > 0 && last_hit_ts[m] < min_timestamp) {
			min_timestamp = last_hit_ts[m];
			min_module = m;
			min_ch = last_hit_ch[m];
		}
	}

	/* Nothing to be done */
	if (n_modules_with_hits == 0) {
		printf("Ev %llu: modules_with_hits %lu wr %llu\n", _n,
		    n_modules_with_hits,  trloii_timestamp);
		return;
	}

	n_entries_with_data++;

	printf("min_timestamp = 0x%016llx in module %lu ch %lu\n",
	    min_timestamp, min_module, min_ch);

	printf("sis_timestamp = 0x%016llx corresponds to wr_timestamp 0x%016llx\n",
	    min_timestamp, trloii_timestamp);

	/*
	 * Only do the slope / offset estimation, if the first module had
	 * the earliest last timestamp, because all clocks should be
	 * synchronised.
	 */
	//if (min_module == 0) {

	/* Collect data */
	wr_ts[idx] = trloii_timestamp;
	sis_ts[idx] = min_timestamp;

	/* Compute slope */
	double slope = (double)(sis_ts[idx] - sis_ts[(idx + 1) % TS_SAMPLES])
	    / (double)(wr_ts[idx] - wr_ts[(idx + 1) % TS_SAMPLES]);

	/* Compute offset */
	double offset = (double)sis_ts[idx] - (slope * (double)(wr_ts[idx]));

	/* Store values for averaging */
	avg_slope[s_idx] = slope;
	avg_offset[s_idx] = offset;

	/* Compute means */
	double mean_slope = accumulate(avg_slope.begin(), avg_slope.end(), 0.0)
	    / (double)avg_slope.size();
	double mean_offset = accumulate(avg_offset.begin(), avg_offset.end(),
	    0.0) / (double)avg_offset.size();

	/* Debug output */
	printf("   idx = %02d, s_idx = %02d\n", idx, s_idx);
	printf("   slope = %f,  offset = %f\n", slope, offset);
	printf("  mslope = %f, moffset = %f\n", mean_slope, mean_offset);

	/* Increase counters */
	idx = idx >= TS_SAMPLES - 1 ? 0 : idx + 1;
	s_idx = s_idx >= AVG_ENTRIES - 1 ? 0 : s_idx + 1;

	/* For the first N_SKIP events, use the un-averaged values */
	if (n_entries_with_data < N_SKIP) {
		s = slope;
		o = offset;
	} else {
		s = mean_slope;
		o = mean_offset;
	}

	//}

	/*
	 * Mapping calculation:
	 * - Transform sis timstamps into WR timestamps.
	 * - Subtract baseline from energy value.
	 */
	for (size_t m = 0; m < n_modules; ++m) {
		int i;
		bitsone_iterator it;

		/* timestamp */
		raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS * N_TS,
		    MAX_HITS> & ts = _fadc[m].ts;
		uint32 *ts_n = ts._num_entries;
		DATA32 (*t)[MAX_HITS] = ts._items;

		/* energy */
		raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS
		    * N_MAXE, MAX_HITS> & energy = _fadc[m].maxe;
		DATA32 (*e)[MAX_HITS] = energy._items;


		/* Loop over all channels */
		while ((i = (int)ts._valid.next(it)) >= 0) {
			/* Mapping */
			if (i % N_TS != 0) continue;

			int ch = (int)m * N_CHANNELS + (i / N_TS);

			/* Loop over all hits */
			for (size_t j = 0; j < ts_n[i]; ++j) {
				uint64 timestamp_wr = 0;

				timestamp_wr =
				    ((((uint64)(t[i][j].value)) << 32)
				    | t[i+1][j].value) * NSEC_PER_CLOCK;

				/* scale */
				timestamp_wr =
				    (uint64)(((double)timestamp_wr - o) / s);

				if (timestamp_wr < last_max_wr_timestamp[m]) {
					printf("%lu/%d/%lu: "
					    "0x%016llx < 0x%016llx,"
					    " scaled ts before latest ts\n",
					    m, ch, j, timestamp_wr,
					    last_max_wr_timestamp[m]);
				}

				/* map raw timestamp */
				DATA32 &tshi =
				    raw_event->TS.HIGH.insert_index(-1, ch);
				tshi.value = t[i][j].value;
				DATA32 &tslo =
				    raw_event->TS.LOW.insert_index(-1, ch);
				tslo.value = t[i+1][j].value;

				/* map scaled timestamp */
				DATA32 &wrhi =
				    raw_event->WRTS.HIGH.insert_index(-1, ch);
				wrhi.value =
				    (uint32)(timestamp_wr >> 32);
				DATA32 &wrlo =
				    raw_event->WRTS.LOW.insert_index(-1, ch);
				wrlo.value =
				    (uint32)(timestamp_wr & 0xffffffff);

				/* map energy */
				DATA32 &em = raw_event->E.insert_index(-1, ch);
				em.value = e[i+1][j].value - e[i][j].value;
				DATA32 &eem = raw_event->EE.insert_index(-1, ch);
				eem.value = e[i+1][j].value;
				DATA32 &bem = raw_event->BE.insert_index(-1, ch);
				bem.value = e[i][j].value;

				/*printf("%lu/%d/%lu: Inserted 0x%08x:%08x, "
				    "wr = 0x%08x:%08x\n",
				    m, ch, j, wrhi.value, wrlo.value,
				    (uint32)(trloii_timestamp >> 32),
				    (uint32)(trloii_timestamp & 0xffffffff));
				    */
			}

		}
		/* scale last max ts */
		last_max_wr_timestamp[m] =
		    (uint64)(((double)last_hit_ts[m] - o) / s);
	}
}

void
raw_user_function(unpack_event *event, raw_event *raw_event)
{
	raw_sis3316_async(event->event_no, event->vme_tpat_left.tpat,
	    event->vme_ts_left.ts_multi, event->vme_left.fadc,
	    sizeof(event->vme_left.fadc) / sizeof(event->vme_left.fadc[0]),
	    raw_event);
}
