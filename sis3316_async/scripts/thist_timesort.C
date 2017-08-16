#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBranch.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TSystem.h"
#include "TEnv.h"
#include <deque>

/*
 * A few macros to make handling of multi-hit zero-suppressed arrays
 * less verbose in the code.
 *
 * Below there is a sample ROOT macro that shows how these macros can be
 * used.
 *
 * Run the ROOT macro with 'root -l -q thist.C+' to enable compilation.
 * Author: Bastian Löher <b.loeher@gsi.de>
 */

/*
 * Declares all needed variables to read a zero-suppressed multi-hit array
 *   type = The data type of the stored data (i.e. 'unsigned int')
 *   name = The name of the variable to be declared.
 * Additional variables with the appropriate suffixes will also be declared.
 */
#define DECLARE_ZZP_MA(type, name) \
	type name; \
	type name##_m; \
	vector<type> name##_me; \
	vector<type> name##_mi; \
	vector<type> name##_v

/*
 * Set the branch addresses of the tree, where the data is stored
 *   tname = Name of the TTree *pointer variable pointing to the tree.
 *   bname = Name of the branch inside the ROOT tree.
 *   name = Name of the variable, the one given in DECLARE_ZZP_MA.
 */
#define SET_BRANCH_ZZP_MA(tname, bname, name) \
	tname->SetBranchAddress(bname, &name); \
	tname->SetBranchAddress(bname"M", &name##_m); \
	TBranch *b_##name = tname->GetBranch(bname); \
	TBranch *b_##name##_m = tname->GetBranch(bname"M"); \
	TBranch *b_##name##_me = tname->GetBranch(bname"ME"); \
	TBranch *b_##name##_mi = tname->GetBranch(bname"MI"); \
	TBranch *b_##name##_v = tname->GetBranch(bname"v")

/*
 * Get the entry from the tree for all ZZP_MA variables.
 * This will resize all vectors according to the multiplicities.
 *   name = Name of the variable
 *   i = Entry number
 */
#define GET_BRANCH_ZZP_MA(name, i) \
		b_##name->GetEntry(i); \
		b_##name##_m->GetEntry(i); \
		name##_me.resize(name##_m); \
		name##_mi.resize(name##_m); \
		name##_v.resize(name); \
		b_##name##_me->SetAddress(name##_me.data()); \
		b_##name##_mi->SetAddress(name##_mi.data()); \
		b_##name##_v->SetAddress(name##_v.data()); \
		b_##name##_me->GetEntry(i); \
		b_##name##_mi->GetEntry(i); \
		b_##name##_v->GetEntry(i);

/* Set your file name here */
TFile f("/tmp/test7.root");

void dump_chunk(vector<vector<unsigned int> > & _chunk)
{
	printf("-- Dumping chunk --\n");
	int ch_idx = 0;
	for (auto & ch : _chunk) {
		if (ch.size() > 0) {
			printf("  ch %d: %lu hits\n", ch_idx, ch.size());
		}
		int hit_idx = 0;
		for (auto & hit : ch) {
			printf("    hit %d: %u\n", hit_idx, hit);
			hit_idx++;
		}
		ch_idx++;
	}
}

#define NSECS_PER_SAMPLE 1
vector<vector<TH1D *> >tdiff;
static const int coinc_len = 400 / NSECS_PER_SAMPLE /* ns */;

void fill_tdiff(vector<vector<unsigned int> > & _chunk)
{
	unsigned int ch_idx = 0;
	for (auto & ch : _chunk) {
		//printf("chunk %u has %lu hits\n", ch_idx, ch.size());
		for (auto & hit : ch) {
			unsigned int ch2_idx = 0;
			for (auto & ch2 : _chunk) {
				if (ch2_idx <= ch_idx) {
					++ch2_idx;
					continue;
				}
				//printf("ch_idx = %u, ch2_idx = %u, hits = %lu\n"
				//    , ch_idx, ch2_idx, ch2.size());
				for (auto & hit2 : ch2) {
					if ((int)hit - (int)hit2 < coinc_len ||
					    (int)hit2 - (int)hit < coinc_len) {
						//printf(" Filling %u %u -> %d\n",
						//    ch_idx, ch2_idx,
						//    (int)hit - (int)hit2);
						tdiff[ch_idx][ch2_idx]->Fill(
						    (int)hit - (int)hit2);
					}
				}
				++ch2_idx;
			}
		}
		++ch_idx;
	}
}

void use_chunk(vector<vector<unsigned int> > & _chunk)
{
	//printf("-- Using chunk --\n");
	fill_tdiff(_chunk);

	//printf("-- Clearing chunk --\n");
	for (auto & ch : _chunk) {
		ch.clear();
	}
}

void flush_output_queue(vector<vector<unsigned int> > & _out)
{
	//dump_chunk(_out);
	use_chunk(_out);
}

void thist_timesort()
{
	/* Set the name of the tree here */
	TTree *t = (TTree *)f.Get("h101");
	size_t n = t->GetEntries();

	/* Here the macros get used */
	DECLARE_ZZP_MA(unsigned int, ts_low);
	SET_BRANCH_ZZP_MA(t, "WRTS_LOW", ts_low);

	/* Set the total number of channels here */
	const unsigned int n_channels = 64;

	/*
	 * double-ended queues to keep track of hits for all channels.
	 * We assume that timestamps from hits come in sequential oder,
	 * so that the content of the queues is always sorted.
	 */
	vector<deque<unsigned int> > q;
	q.resize(n_channels);

	/*
	 * vector to hold one output chunk.
	 */
	vector<vector<unsigned int> > out;
	out.resize(n_channels);

	/*
	 * The channels which are required to have hits.
	 * Only for those channels the histograms will be filled.
	 */
	vector<bool> required(n_channels, false);
	required[0] = true;
	required[4] = true;
	required[8] = true;
	required[16] = true;
	required[20] = true;
	required[24] = true;
	required[32] = true;
	required[36] = true;
	required[40] = true;
	required[48] = true;

	unsigned int n_histograms = 0;

	tdiff.resize(n_channels);
	for (unsigned int i = 0; i < n_channels; ++i) {
		tdiff[i].resize(n_channels);
		for (unsigned int j = 0; j < n_channels; ++j) {
			tdiff[i][j] = nullptr;
		}
	}

	for (unsigned int i = 0; i < n_channels; ++i) {
		if (required[i]) {
			for (unsigned int j = i + 1; j < n_channels; ++j) {
				if (required[j]) {
					tdiff[i][j] = new TH1D(
					    Form("%d_%d", i, j),
					    Form("%d_%d", i, j),
					    500, -coinc_len, coinc_len);
					n_histograms++;
				}
			}
		}
	}

	/*
	 * Define a chunking window cw. Outgoing hits are sorted into windows
	 * of this length (in ns).
	 * The earliest hit opens a chunking window and consecutive hits
	 * are sorted into it. The window may be extended, if there are more
	 * hits after the window within ew.
	 */
	const unsigned int cw_len = 2000 / NSECS_PER_SAMPLE;
	const unsigned int ew_len = 100;
	unsigned int chunk_no = 0;

	/*
	 * The start of the chunking window.
	 */
	unsigned int cw_start = 0;

	for (size_t i = 0; i < n; ++i) {
		/* Here the macro for getting the branch data is used */
		GET_BRANCH_ZZP_MA(ts_low, i);

		printf("%03lu: ts_low: %u, ts_low_m: %u\n", i,
		    ts_low, ts_low_m);

		/*
		 * Read all required data from the current event into the
		 * queue. There are also potentially unsorted hits from past
		 * events in the queue.
		 */

		/* Loop over the stored channels */
		unsigned int hit = 0;
		for (unsigned int ch = 0; ch < ts_low_m; ++ch) {
			unsigned int ch_no = ts_low_mi[ch] - 1;

			/* If we don't care about this channel, skip */
			if (!required[ch_no]) {
				hit = ts_low_me[ch];
				continue;
			}

			/* Loop over the hits in the channel */
    			for (; hit < ts_low_me[ch]; ++hit) {
				q[ch_no].push_back(ts_low_v[hit]);
			}
		}

next_channel:
		/*
		 * Need to test, if any of the required channels have no data.
		 * In that case, we need to read and buffer more events.
		 */
		for (unsigned int ch = 0; ch < n_channels; ++ch) {
			if (required[ch] && q[ch].empty()) {
				//printf("Missing data in ch %u, next.\n", ch);
				continue;
			}
		}

		/*
		 * Find out channel with the earliest timestamp
		 * and the channel with the next earliest timestamp.
		 * The earliest and next earliest ch may have equal times.
		 */
		unsigned int earliest = (unsigned int) -1;
		unsigned int next_earliest = (unsigned int) -1;
		unsigned int earliest_ch = (unsigned int) -1;
		unsigned int next_earliest_ch = (unsigned int) -1;
		for (unsigned int ch = 0; ch < n_channels; ++ch) {
			if (required[ch]) {
				if (q[ch].front() <= earliest) {
					next_earliest = earliest;
					next_earliest_ch = earliest_ch;
					earliest = q[ch].front();
					earliest_ch = ch;
				} else if (q[ch].front() <= next_earliest) {
					next_earliest = q[ch].front();
					next_earliest_ch = ch;
				}
			}
		}
		//printf("earliest = %u in ch %u, next = %u in ch %u\n",
		//    earliest, earliest_ch, next_earliest, next_earliest_ch);

		/*
		 * Sort all hits from earliest channel, until we reach the
		 * next_earliest time.
		 */
		while (q[earliest_ch].front() <= next_earliest) {
			/* If the queue is empty, go to the next event */
			if (q[earliest_ch].empty()) {
				//printf("queue for ch %u has run empty.\n",
				//    earliest_ch);
				/* Need more data */
				goto next_event;
			}
			/*
			 * Check, if the next hit fits inside the same
			 * chunking window.
			 */
			if (q[earliest_ch].front() >= cw_start + cw_len) {
				flush_output_queue(out);
				cw_start = 0;
			}
			/* A new chunking window hast started */
			if (cw_start == 0) {
				//printf("-- new chunk window %u from %u --\n",
				//    chunk_no,
				//    q[earliest_ch].front());
				cw_start = q[earliest_ch].front();
				chunk_no++;
			}
			/* Put the hit in the output */
			out[earliest_ch].push_back(q[earliest_ch].front());
			/* And pop it off the queue */
			q[earliest_ch].pop_front();
		}
		goto next_channel;
next_event:
		;
	}

	/* Flush the last chunk */
	flush_output_queue(out);

	TCanvas *c = new TCanvas("c","c");
	c->Divide(ceil(sqrt(n_histograms)),ceil(sqrt(n_histograms)));

	int pad_idx = 1;
	for (auto & x : tdiff) {
		for (unsigned int i = 0; i < x.size(); ++i) {
			if (x[i] != nullptr) {
				c->cd(pad_idx);
				x[i]->Draw();
				pad_idx++;
			}
		}
	}
}
