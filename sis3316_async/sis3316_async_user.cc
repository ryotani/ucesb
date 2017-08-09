#include "structures.hh"
#include "user.hh"
#include "sis3316_params.hh"
#include <vector>
#include <numeric>

using namespace std;

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

#define TS_SAMPLES 32
#define AVG_ENTRIES 32
vector<uint64> wr_ts(TS_SAMPLES, 0);
vector<vector<uint64> > sis_ts;
vector<vector<double> > avg_slope;
vector<vector<double> > avg_offset;
vector<int> idx;
vector<int> s_idx;
vector<int> n_entries_with_data;

void
raw_sis3316_async(uint64 _n, WR_MULTI &_wr, VME_STRUCK_SIS3316_ASYNC *_fadc,
    size_t n_modules, raw_event *raw_event)
{
	uint64 trloii_timestamp = (((uint64)(_wr.time_hi.value)) << 32)
	    | _wr.time_lo.value;

	idx.resize(n_modules);
	s_idx.resize(n_modules);
	sis_ts.resize(n_modules);
	avg_slope.resize(n_modules);
	avg_offset.resize(n_modules);
	n_entries_with_data.resize(n_modules);

	raw_event->WR.HIGH.value = _wr.time_hi.value;
	raw_event->WR.LOW.value = _wr.time_lo.value;

	for (size_t m = 0; m < n_modules; ++m) {
		size_t n_hits;
		double o, s;
		uint64 max_timestamp = 0;
		bitsone_iterator it;

		/* Initialise containers */
		sis_ts[m].resize(TS_SAMPLES);
		avg_slope[m].resize(AVG_ENTRIES);
		avg_offset[m].resize(AVG_ENTRIES);

		raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS * N_TS,
		    MAX_HITS> & ts = _fadc[m].ts;
		uint32 *ts_n = ts._num_entries;
		DATA32 (*t)[MAX_HITS] = ts._items;

		n_hits = 0;
		int i;
		while ((i = (int)ts._valid.next(it)) >= 0) {
			/* Mapping */
			if (i % N_TS != 0) continue;

			int ch = (int)m * N_CHANNELS + (i / N_TS);

			// printf("  channel %d has %u hits.\n", ch, ts_n[i]);

			for (size_t j = 0; j < ts_n[i]; ++j) {
				uint64 timestamp = 0;
				//printf("    ts[%02d][%04lu] = 0x%08x 0x%08x\n",
				//    i, j, t[i][j].value, t[i+1][j].value);

				DATA32 &tshi =
				    raw_event->TS.HIGH.insert_index(-1, ch);
				tshi.value = t[i][j].value;
				DATA32 &tslo =
				    raw_event->TS.LOW.insert_index(-1, ch);
				tslo.value = t[i+1][j].value;

				timestamp = ((((uint64)(t[i][j].value)) << 32)
				    | t[i+1][j].value) * NSEC_PER_CLOCK;

				if (timestamp > max_timestamp)
					max_timestamp = timestamp;

			}
			n_hits += ts_n[i];
		}

		/* Nothing to be done */
		if (n_hits <= 0) continue;

		++n_entries_with_data[m];

		printf(" Ev %llu/%lu: h %lu wr %llu "
		    "max_ts %llu\n",
		    _n, m, n_hits, trloii_timestamp, max_timestamp);

		/* Collect data */
		wr_ts[idx[m]] = trloii_timestamp;
		sis_ts[m][idx[m]] = max_timestamp;

		/* Compute slope */
		double slope = (double)(sis_ts[m][idx[m]]
		    - sis_ts[m][(idx[m] + 1) % TS_SAMPLES])
		    / (double)(wr_ts[idx[m]]
			- wr_ts[(idx[m] + 1) % TS_SAMPLES]);

		/* Compute offset */
		double offset = (double)sis_ts[m][idx[m]]
		    - (slope * (double)(wr_ts[idx[m]]));

		/* Store values for averaging */
		avg_slope[m][s_idx[m]] = slope;
		avg_offset[m][s_idx[m]] = offset;

		/* Compute means */
		double mean_slope = accumulate(avg_slope[m].begin(),
		    avg_slope[m].end(), 0.0)
		    / (double)avg_slope[m].size();
		double mean_offset = accumulate(avg_offset[m].begin(),
		    avg_offset[m].end(), 0.0)
		    / (double)avg_offset[m].size();

		/* Debug output */
		printf("   idx = %02d, s_idx = %02d\n",
		    idx[m], s_idx[m]);
		printf("   slope = %f,  offset = %f\n",
		    slope, offset);
		printf("  mslope = %f, moffset = %f\n",
		    mean_slope, mean_offset);

		/* Increase counters */
		idx[m] = idx[m] >= TS_SAMPLES - 1 ? 0 : idx[m] + 1;
		s_idx[m] = s_idx[m] >= AVG_ENTRIES - 1 ? 0 : s_idx[m] + 1;

		/* For the first few events, use the actual values */
		if (n_entries_with_data[m] < AVG_ENTRIES * 2) {
			s = slope;
			o = offset;
		} else {
			s = mean_slope;
			o = mean_offset;
		}

		/* Transform sis timstamps into WR timestamps */
		it.init();
		while ((i = (int)ts._valid.next(it)) >= 0) {
			/* Mapping */
			if (i % N_TS != 0) continue;

			int ch = (int)m * N_CHANNELS + (i / N_TS);

			// printf("  channel %d has %u hits.\n", ch, ts_n[i]);

			for (size_t j = 0; j < ts_n[i]; ++j) {
				uint64 timestamp = 0;
				//printf("    ts[%02d][%04lu] = 0x%08x 0x%08x\n",
				//    i, j, t[i][j].value, t[i+1][j].value);

				timestamp = ((((uint64)(t[i][j].value)) << 32)
				    | t[i+1][j].value) * NSEC_PER_CLOCK;

				timestamp =
				    (uint64)(((double)timestamp - o) / s);

				DATA32 &tshi =
				    raw_event->WRTS.HIGH.insert_index(-1, ch);
				tshi.value = (uint32)(timestamp >> 32);
				DATA32 &tslo =
				    raw_event->WRTS.LOW.insert_index(-1, ch);
				tslo.value = (uint32)(timestamp & 0xffffffff);

				if (timestamp > max_timestamp)
					max_timestamp = timestamp;

			}
			n_hits += ts_n[i];
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
