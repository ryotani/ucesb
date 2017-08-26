#include "structures.hh"
#include "user.hh"
#include "sis3316_params.hh"
#include <vector>
#include <numeric>

using namespace std;

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
vector<vector<uint64> > wr_ts(N_CRATES, vector<uint64>(TS_SAMPLES, 0));
vector<vector<uint64> > sis_ts(N_CRATES, vector<uint64>(TS_SAMPLES, 0));
vector<vector<double> > avg_slope(N_CRATES, vector<double>(AVG_ENTRIES, 0));
vector<vector<double> > avg_offset(N_CRATES, vector<double>(AVG_ENTRIES, 0));
vector<vector<uint64> > last_max_wr_timestamp;
vector<vector<uint64> > last_hit_ts;
vector<vector<size_t> > last_hit_ch;
vector<int> idx(N_CRATES);
vector<int> s_idx(N_CRATES);
vector<int> n_entries_with_data(N_CRATES);
vector<double> o(N_CRATES, 0), s(N_CRATES, 0);

#ifndef countof
#define countof(a) ((a) / sizeof((a)[0]))
#endif

typedef raw_list_ii_zero_suppress<DATA32, DATA32, 170> trloii_data_t;
typedef raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS * N_TS,
	MAX_HITS> sis3316_ts_t;
typedef raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS * N_MAW,
	MAX_HITS> sis3316_maw_t;
typedef raw_array_multi_zero_suppress<DATA32, DATA32, N_CHANNELS * N_MAXE,
	MAX_HITS> sis3316_maxe_t;

void
raw_user_function(unpack_event *event, raw_event *raw)
{
	uint64 n;
	vector<TRLOII_TPAT *> tpat_mod(N_CRATES);
	vector<WR_MULTI *> wr_mod(N_CRATES);
	vector<unsigned int> n_modules_per_crate(N_CRATES);
	vector<VME_STRUCK_SIS3316_ASYNC *> fadc;
	vector<uint64> fadc_wr;
	vector<unsigned int> crate_of_module;
	vector<size_t> index_of_module;

	/* Assign pointers to modules */
	/* XB left */
	n = event->event_no;
	tpat_mod[0] = &event->vme_tpat_left.tpat;
	wr_mod[0] = &event->vme_ts_left.ts_multi;
	/* XB right */
	tpat_mod[1] = &event->vme_tpat_right.tpat;
	wr_mod[1] = &event->vme_ts_right.ts_multi;

	/* Get pointers to data */
	vector<uint64> trloii_timestamp(N_CRATES);
#if USE_TPAT
	vector<trloii_data_t *> tpat(N_CRATES);
	vector<trloii_data_t *> mtslo(N_CRATES);
	vector<trloii_data_t *> mtshi(N_CRATES);
	vector<DATA32> tpat_n(N_CRATES);
#endif

	for (unsigned int i = 0; i < N_CRATES; ++i) {
		trloii_timestamp[i] =
		    (((uint64)(wr_mod[i]->time_hi.value)) << 32)
		    | wr_mod[i]->time_lo.value;
#if USE_TPAT
		tpat[i] = &tpat_mod[i]->tpat;
		mtslo[i] = &tpat_mod[i]->ts_lo;
		mtshi[i] = &tpat_mod[i]->ts_hi;
		tpat_n[i] = tpat_mod[i]->n;
#endif

		/* map WR timestamp */
		raw->WR.HIGH[i].value = wr_mod[i]->time_hi.value;
		raw->WR.LOW[i].value = wr_mod[i]->time_lo.value;
	}


	/* Get fadc data pointers and assign wr timestamps */
	/* XB left crate */
	for (size_t i = 0; i < countof(event->vme_left.fadc); ++i) {
		fadc.push_back(&event->vme_left.fadc[i]);
		fadc_wr.push_back(trloii_timestamp[0]);
		n_modules_per_crate[0]++;
		crate_of_module.push_back(0);
		index_of_module.push_back(i);
	}
	/* XB right crate */
	for (size_t i = 0; i < countof(event->vme_right.fadc); ++i) {
		fadc.push_back(&event->vme_right.fadc[i]);
		fadc_wr.push_back(trloii_timestamp[1]);
		n_modules_per_crate[1]++;
		crate_of_module.push_back(1);
		index_of_module.push_back(i);
	}

	/*
	 * Find out the hit corresponding to the time of the first
	 * bank switch. This hit is the last hit in the module that
	 * switched first inside each crate.
	 * Thus, we are looking for the smallest timestamp, in the last hit
	 * of each module in each crate in this event. This is the time,
	 * when the trloii of that crate was latched.
	 */
	vector<uint64> min_timestamp(N_CRATES, (uint64) -1);
	vector<size_t> min_module(N_CRATES, 0);
	vector<size_t> min_ch(N_CRATES, 0);
	vector<size_t> n_modules_with_hits(N_CRATES, 0);
	const size_t n_modules = fadc.size();
	vector<vector<size_t> > n_hits(N_CRATES, vector<size_t>(n_modules, 0));

	/*
	 * None of the hits may receive a WR timestamp earlier than this.
	 */
	last_max_wr_timestamp.resize(N_CRATES);
	last_hit_ts.resize(N_CRATES);
	last_hit_ch.resize(N_CRATES);
	assert(n_modules <= 4);
	for (unsigned int i = 0; i < N_CRATES; ++i) {
		last_max_wr_timestamp[i].resize(n_modules, 0);
		last_hit_ts[i].resize(n_modules, 0);
		last_hit_ch[i].resize(n_modules, 0);
		fill(last_hit_ts[i].begin(), last_hit_ts[i].end(), 0);
	}

	/*
	 * Find out last hit of each module, separately for each crate
	 */
	for (size_t m = 0; m < n_modules; ++m) {
		sis3316_ts_t & ts = fadc[m]->ts;
		uint32 *ts_n = ts._num_entries;
		DATA32 (*t)[MAX_HITS] = ts._items;
		bitsone_iterator it;
		int i;
		size_t crate = crate_of_module[m];
		size_t idx = index_of_module[m];

		while ((i = (int)ts._valid.next(it)) >= 0) {
			uint64 timestamp = 0;
			/* Mapping */
			if (i % N_TS != 0) continue;

			int ch = (int)m * N_CHANNELS + (i / N_TS);

			n_hits[crate][idx] += ts_n[i];
			size_t last = ts_n[i] - 1;

			timestamp = ((((uint64)(t[i][last].value)) << 32)
			    | t[i+1][last].value) * NSEC_PER_CLOCK;

			if (timestamp > last_hit_ts[crate][idx]) {
				last_hit_ts[crate][idx] = timestamp;
				last_hit_ch[crate][idx] = ch;
			}
		}

		if (n_hits[crate][idx] > 0) {
			n_modules_with_hits[crate]++;
			printf(" Ev %llu/%lu: hits %lu last_hit_ts 0x%016llx\n",
			    n, m, n_hits[crate][idx], last_hit_ts[crate][idx]);
		}
	}

	/*
	 * Find out the earliest last hit per crate
	 */
	unsigned int n_crates_with_hits = 0;
	for (size_t i = 0; i < N_CRATES; ++i) {
		if (n_modules_with_hits[i] == 0) continue;
		n_crates_with_hits++;
		n_entries_with_data[i]++;
		for (size_t m = 0; m < n_modules_per_crate[i]; ++m) {
			if (n_hits[i][m] > 0
			    && last_hit_ts[i][m] < min_timestamp[i]) {
				min_timestamp[i] = last_hit_ts[i][m];
				min_module[i] = m;
				min_ch[i] = last_hit_ch[i][m];
			}
		}
	}

	if (n_crates_with_hits == 0) {
		printf(" Ev %llu: No crates with hits...\n", n);
		return;
	}

	for (size_t i = 0; i < N_CRATES; ++i) {
		if (n_modules_with_hits[i] == 0) continue;

		printf("min_ts[%lu] = 0x%016llx in module %lu ch %lu\n", i,
		    min_timestamp[i], min_module[i], min_ch[i]);

		printf("sis_ts[%lu] = 0x%016llx <=> wr[%lu] 0x%016llx\n", i,
		    min_timestamp[i], i, trloii_timestamp[i]);

		/*
		 * Only do the slope / offset estimation, if the first module
		 * had the earliest last timestamp, because all clocks should be
		 * synchronised.
		 */
		//if (min_module == 0) {

		/* Collect data */
		wr_ts[i][idx[i]] = trloii_timestamp[i];
		sis_ts[i][idx[i]] = min_timestamp[i];

		/* Compute slope */
		double slope = (double)(sis_ts[i][idx[i]]
		        - sis_ts[i][(idx[i] + 1) % TS_SAMPLES])
		    / (double)(wr_ts[i][idx[i]]
			- wr_ts[i][(idx[i] + 1) % TS_SAMPLES]);

		/* Compute offset */
		double offset = (double)sis_ts[i][idx[i]] - (slope *
		    (double)(wr_ts[i][idx[i]]));

		/* Store values for averaging */
		avg_slope[i][s_idx[i]] = slope;
		avg_offset[i][s_idx[i]] = offset;

		/* Compute means */
		double mean_s = accumulate(avg_slope[i].begin(),
		    avg_slope[i].end(), 0.0) / (double)avg_slope[i].size();
		double mean_o = accumulate(avg_offset[i].begin(),
		    avg_offset[i].end(), 0.0) / (double)avg_offset[i].size();

		/* Debug output */
		printf("   idx = %02d, s_idx = %02d\n", idx[i], s_idx[i]);
		printf("   slope = %f, offset = %f\n", slope, offset);
		printf("  mean_s = %f, mean_o = %f\n", mean_s, mean_o);

		/* Increase counters */
		idx[i] = idx[i] >= TS_SAMPLES - 1 ? 0 : idx[i] + 1;
		s_idx[i] = s_idx[i] >= AVG_ENTRIES - 1 ? 0 : s_idx[i] + 1;

		/* For the first N_SKIP events, use the un-averaged values */
		if (n_entries_with_data[i] < N_SKIP) {
			s[i] = slope;
			o[i] = offset;
		} else {
			s[i] = mean_s;
			o[i] = mean_o;
		}
		//}
	}

	/*
	 * Mapping calculation:
	 * - Transform sis timstamps into WR timestamps.
	 * - Subtract baseline from energy value.
	 */
	for (size_t m = 0; m < n_modules; ++m) {
		int i;
		bitsone_iterator it;
		size_t midx = index_of_module[m];
		size_t crate = crate_of_module[m];

		/* timestamp */
		sis3316_ts_t & ts = fadc[m]->ts;
		uint32 *ts_n = ts._num_entries;
		DATA32 (*t)[MAX_HITS] = ts._items;

		/* energy */
		sis3316_maxe_t & energy = fadc[m]->maxe;
		DATA32 (*e)[MAX_HITS] = energy._items;

		/* maw values */
		sis3316_maw_t & maw_zzp = fadc[m]->maw;
		DATA32 (*maw)[MAX_HITS] = maw_zzp._items;

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
				timestamp_wr = (uint64)
				    (((double)timestamp_wr - o[crate])
					/ s[crate]);

				if (timestamp_wr <
				    last_max_wr_timestamp[crate][midx]) {
					printf("%lu/%d/%lu: "
					    "0x%016llx < 0x%016llx,"
					    " scaled ts before latest ts\n",
					    m, ch, j, timestamp_wr,
					    last_max_wr_timestamp[crate][midx]);
				}

				/* map raw timestamp */
				DATA32 &tshi =
				    raw->TS.HIGH.insert_index(-1, ch);
				tshi.value = t[i][j].value;
				DATA32 &tslo =
				    raw->TS.LOW.insert_index(-1, ch);
				tslo.value = t[i+1][j].value;

				/* map scaled timestamp */
				DATA32 &wrhi =
				    raw->WRTS.HIGH.insert_index(-1, ch);
				wrhi.value =
				    (uint32)(timestamp_wr >> 32);
				DATA32 &wrlo =
				    raw->WRTS.LOW.insert_index(-1, ch);
				wrlo.value =
				    (uint32)(timestamp_wr & 0xffffffff);

				/* map energy */
				DATA32 &em = raw->E.insert_index(-1, ch);
				em.value = e[i+1][j].value - e[i][j].value;
				/*
				DATA32 &eem = raw->EE.insert_index(-1, ch);
				eem.value = e[i+1][j].value;
				DATA32 &bem = raw->BE.insert_index(-1, ch);
				bem.value = e[i][j].value;
				*/

				/* map maw values
				 * Note: They get encoded with an added value
				 * of 0x08000000 */
				DATA32 &maw1 =
				    raw->MAW.MAX.insert_index(-1, ch);
				maw1.value = maw[i][j].value - 0x08000000;
				DATA32 &maw2 =
				    raw->MAW.BEFORE.insert_index(-1, ch);
				maw2.value = maw[i+1][j].value - 0x08000000;
				DATA32 &maw3 =
				    raw->MAW.AFTER.insert_index(-1, ch);
				maw3.value = maw[i+2][j].value - 0x08000000;

				/* calculate negative timestamp correction */
				double maw_fraction_until_n =
				    ((double)((int)maw[i][j].value
					    - 0x08000000))
				    / 2. - (double)maw[i+2][j].value;

				double maw_full_step = (int)
				    (maw[i+2][j].value - maw[i+1][j].value);

				double maw_correction_ns =
				    maw_fraction_until_n
				    / maw_full_step * NSEC_PER_CLOCK;

				/* Save the correction in units of ps */
				DATA32 &ts_corr =
				    raw->TS.CORRECTION.insert_index(-1, ch);
				ts_corr.value =
				    (uint32)(maw_correction_ns * 1000);

				/* improve raw timestamp */
				double ts_corrected_ns = (double)(timestamp_wr)
				    - ts_corr;

				/* Save fine ts in units of ps */
				DATA32 &ts_fine =
				    raw->TS.FINE.insert_index(-1, ch);
				ts_fine.value =
				    (uint32)(ts_corrected_ns * 1000);
			}

		}
		/* scale last max ts */
		last_max_wr_timestamp[crate][midx] =
		    (uint64)(((double)last_hit_ts[crate][midx] - o[crate])
			/ s[crate]);
	}
}

