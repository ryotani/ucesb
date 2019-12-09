#include <stdio.h>

static char side_array[2] = {'M', 'S'};
static char edge_array[2] = {'L', 'T'};
static char prec_array[2] = {'C', 'F'};
static char const *prec_name_array[2] = {"coarse", "fine  "};

void
sipm_map()
{
	unsigned ch_, edge_i, prec_i;

	for (edge_i = 0; edge_i < 2; ++edge_i) {
		for (prec_i = 0; prec_i < 2; ++prec_i) {
			printf(
				"SIGNAL(ZERO_SUPPRESS_MULTI(64): "
				"SFIB_BT%c%c1);\n", 
				edge_array[edge_i],
				prec_array[prec_i]);
			printf(
				"SIGNAL(ZERO_SUPPRESS_MULTI(64): "
				"SFIB_TT%c%c1);\n",
				edge_array[edge_i],
				prec_array[prec_i]);
		}
	}
	for (ch_ = 0; ch_ < 256; ++ch_) {
		unsigned top_ctdc, padi, pch, bottom_ctdc;

		/* Mapping of each pair of PADI flipped from s473. */
		unsigned ch = (7 - (ch_ / 32)) * 32 + (ch_ & 31);

		/* Top side electronics mapping. */
		top_ctdc = ch / 128;
		padi = 7 & ((1 & ch) + 2 * (ch / 32));
		pch = 15 & (ch / 2);
		if ((1 & padi) == 0) pch = 15 - pch;

		/* Bottom side electronics mapping. */
		bottom_ctdc = 2 + (ch / 128);

		for (edge_i = 0; edge_i < 2; ++edge_i) {
			for (prec_i = 0; prec_i < 2; ++prec_i) {
				printf("SIGNAL(SFIB_TT%c%c%u, "
				    "fibsipm.data.ctdc[%u].time_%s[%u], "
				    "DATA12);\n",
				    edge_array[edge_i], prec_array[prec_i],
				    ch_ + 1, top_ctdc, prec_name_array[prec_i],
				    2 * (padi * 16 + pch) + edge_i);
				printf("SIGNAL(SFIB_BT%c%c%u, "
				    "fibsipm.data.ctdc[%u].time_%s[%u], "
				    "DATA12);\n",
				    edge_array[edge_i], prec_array[prec_i],
				    ch_ + 1, bottom_ctdc,
				    prec_name_array[prec_i],
				    2 * (padi * 16 + pch) + edge_i);
			}
		}
	}
}

int
main()
{
	sipm_map();
	return 0;
}
