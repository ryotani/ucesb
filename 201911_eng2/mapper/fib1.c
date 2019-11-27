#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char side_array[2] = {'M', 'S'};
static char edge_array[2] = {'L', 'T'};
static char prec_array[2] = {'C', 'F'};
static char const *prec_name_array[2] = {"coarse", "fine  "};

/* Fanout beard between MAPMT and PADI boards. */
void
ctdc_from_mapmt(int a_mapmt_ch, int *a_ctdc_i, int *a_ctdc_ch)
{
	int ch2 = a_mapmt_ch / 2;
	/* Figure out the row and column of the slot, then the slot. */
	int col = 7 - (ch2 & 7);
	int row = a_mapmt_ch / 128;
	int slot = row + 2 * col;
	/* Figure out the channel within one slot. */
	int ch = ((2 * (ch2 / 8)) & 15) + (1 & a_mapmt_ch);
	/* Figure out the CTDC card and channel from the slot and its channel. */
	*a_ctdc_i = slot >= 8;
	*a_ctdc_ch = (15 - ch) + 16 * (slot & 7);
	if (0)
		printf("%u = row=%u col=%u slot=%u ch=%u i=%u ch=%u\n", a_mapmt_ch, row, col,
		    slot, ch, *a_ctdc_i, *a_ctdc_ch);
}

/* Fiber sorting into mask. */
int
bunch_from_mapmt_fi1a(int a_mapmt_ch)
{
	int row = a_mapmt_ch / 16;
	int col = 15 & a_mapmt_ch;
	switch (col) {
	case 15: col =  1; break;
	case 14: col =  5; break;
	case 13: col =  9; break;
	case 12: col = 13; break;
	case 11: col =  2; break;
	case 10: col =  6; break;
	case  9: col = 10; break;
	case  8: col = 14; break;
	case  7: col =  3; break;
	case  6: col =  7; break;
	case  5: col = 11; break;
	case  4: col = 15; break;
	case  3: col =  4; break;
	case  2: col =  8; break;
	case  1: col = 12; break;
	case  0: col = 16; break;
	}
	return 16 * row + col;
}

/* Fiber sorting into mask. */
int
bunch_from_mapmt_fi1b(int a_mapmt_ch)
{
	int row = a_mapmt_ch / 16;
	int col = 15 & a_mapmt_ch;
	row = 15 - row;
	switch (col) {
	case 15: col =  1; break;
	case 14: col =  5; break;
	case 13: col =  9; break;
	case 12: col = 13; break;
	case 11: col =  2; break;
	case 10: col =  6; break;
	case  9: col = 10; break;
	case  8: col = 14; break;
	case  7: col =  3; break;
	case  6: col =  7; break;
	case  5: col = 11; break;
	case  4: col = 15; break;
	case  3: col =  4; break;
	case  2: col =  8; break;
	case  1: col = 12; break;
	case  0: col = 16; break;
	}
	return 16 * row + col;
}

void
map(char const *a_dst, unsigned a_mapmt, unsigned a_ctdc_i, unsigned a_spmt,
    unsigned a_tamex_i, unsigned a_tamex_ch_i)
{
	unsigned side_i, edge_i, prec_i;
	unsigned spmt_i;
	unsigned i;

	/* Only support 256 MAPMT channels for now. */
	assert(256 == a_mapmt);

	/* Zero-suppress all channels. */
	for (side_i = 0; side_i < 2; ++side_i) {
		for (edge_i = 0; edge_i < 2; ++edge_i) {
			for (prec_i = 0; prec_i < 2; ++prec_i) {
				printf(
				    "SIGNAL(ZERO_SUPPRESS_MULTI(64): "
				    "%s_T%c%c%c1);\n", a_dst,
				    side_array[side_i], edge_array[edge_i],
				    prec_array[prec_i]);
			}
		}
	}

	//Go through the 256 holes of the mask. Assign a fiber on one side and a channel on the other side.
	for (i = 0; i < a_mapmt; i++) {
		int bunch_i;
		int ctdc_i, ctdc_ch;

		if (0 == strcmp(a_dst, "FIBONEA")) {
			bunch_i = bunch_from_mapmt_fi1a(i);
		} else if (0 == strcmp(a_dst, "FIBONEB")) {
			bunch_i = bunch_from_mapmt_fi1b(i);
		}
		ctdc_from_mapmt(i, &ctdc_i, &ctdc_ch);
		/* Duplicate for leading/trailing and coarse/fine. */
		for (edge_i = 0; edge_i < 2; ++edge_i) {
			for (prec_i = 0; prec_i < 2; ++prec_i) {
				printf(
				    "SIGNAL(%s_TM%c%c%u, "
				    "fib1ab.data.ctdc[%u].time_%s[%u], DATA12);\n",
				    a_dst, edge_array[edge_i],
				    prec_array[prec_i], bunch_i,
				    a_ctdc_i + ctdc_i,
				    prec_name_array[prec_i],
				    2 * ctdc_ch + edge_i);
			}
		}
	}

	/* SPMT side. */
	for (spmt_i = 0; spmt_i < a_spmt; ++spmt_i) {
		for (edge_i = 0; edge_i < 2; ++edge_i) {
			for (prec_i = 0; prec_i < 2; ++prec_i) {
				printf(
				    "SIGNAL(%s_TS%c%c%u, "
				    "fib1ab.data.tamex[%u].time_%s[%u], DATA12);\n",
				    a_dst, edge_array[edge_i],
				    prec_array[prec_i], spmt_i + 1,
				    a_tamex_i, prec_name_array[prec_i],
				    (a_tamex_ch_i + spmt_i) * 2 + edge_i + 1);
			}
		}
	}
}

int
main()
{
	if (0) {
		int i;
		for (i = 0; i < 256; ++i) {
			int j, k;
			ctdc_from_mapmt(i, &j, &k);
			printf("P:%u = Card:%u Ch:%u\n", i, j, k);
		}
	} else if (0) {
		int i;
		for (i = 0; i < 256; ++i) {
			int j;
			j = bunch_from_mapmt(i);
			printf("P:%u = Bunch:%u\n", i, j);
		}
	} else {
		map("FIBONEA", 256, 0, 1, 0, 0);
		map("FIBONEB", 256, 2, 1, 0, 8);
	}
	return 0;
}
