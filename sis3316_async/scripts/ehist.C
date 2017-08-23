#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBranch.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TSystem.h"

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

vector<TH1D *> eh;

/* Set your file name here */
TFile f("/tmp/test8.root");

void ehist()
{
	/* Set the name of the tree here */
	TTree *t = (TTree *)f.Get("h101");

	/* Here the macros get used */
	DECLARE_ZZP_MA(unsigned int, e);
	SET_BRANCH_ZZP_MA(t, "E", e);

	/* Set the number of channels here */
	const unsigned int n_channels = 32;

	size_t n = t->GetEntries();
	TCanvas *c = new TCanvas("c1", "ehist");

	/* Adjust the rows and columns of the canvas here */
	c->Divide(sqrt(n_channels)+1,sqrt(n_channels)+1);

	eh.resize(n_channels);
	for (size_t i = 0; i < n_channels; ++i) {
		eh[i] = new TH1D(Form("h%lu", i), "", 1000, 0, 1e5);
		c->cd(i + 1);
		eh[i]->Draw();
	}

	for (size_t i = 0; i < n; ++i) {
		/* Here the macro for getting the branch data is used */
		GET_BRANCH_ZZP_MA(e, i);

		/* The loop over the stored channels */
		unsigned int hit = 0;
		for (unsigned int ch = 0; ch < e_m; ++ch) {
			unsigned int ch_no = e_mi[ch];

			/* The loop over the hits in the channel */
    			for (; hit < e_me[ch];) {
				eh[ch_no-1]->Fill(e_v[hit++]);
			}
		}
	}

	for (size_t ci = 0; ci < n_channels; ++ci) {
		c->cd(ci + 1);
		gPad->Modified();
		gPad->Update();
	}
	gSystem->ProcessEvents();
}
