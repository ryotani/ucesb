// -*- C++ -*-
#include "tamex.spec"

TAMEX_SFP(sfp)
{
	select several {
		evhead[1] = TAMEX(sfp = sfp, card = 0);
		evhead[2] = TAMEX(sfp = sfp, card = 1);
		evhead[3] = TAMEX(sfp = sfp, card = 2);
		evhead[4] = TAMEX(sfp = sfp, card = 3);
		evhead[5] = TAMEX(sfp = sfp, card = 4);
		evhead[6] = TAMEX(sfp = sfp, card = 5);
		evhead[7] = TAMEX(sfp = sfp, card = 6);
		evhead[8] = TAMEX(sfp = sfp, card = 7);
	}
}

SUBEVENT(tamex_pcie)
{
	header = TAMEX_HEADER();
	list (0 <= sfp < 4)
	{
		select several {
			padding = TAMEX_PADDING();
		}
		select several {
			s[1] = TAMEX_SFP(sfp = 0);
			s[2] = TAMEX_SFP(sfp = 1);
			s[3] = TAMEX_SFP(sfp = 2);
			s[4] = TAMEX_SFP(sfp = 3);
		}
	}
}

EVENT
{
	pc[1] = tamex_pcie(type = 10, subtype = 1, procid = 100);
	pc[2] = tamex_pcie(type = 10, subtype = 1, procid = 200);
}

// Proposed naming scheme: NN_Pn_Bn_Tn (Neuland Plane Bar Tube)

#define TAMEX(pcie,sfp,card) \
	SIGNAL(ZERO_SUPPRESS_MULTI(200): pc##pcie##s##sfp##c##card##tc1); \
	SIGNAL(pc##pcie##s##sfp##c##card##tc1, \
	       pc[pcie].s[sfp].evhead[card].time_coarse[0],\
	       pc##pcie##s##sfp##c##card##tc50, \
	       pc[pcie].s[sfp].evhead[card].time_coarse[49], DATA12); \
	SIGNAL(ZERO_SUPPRESS_MULTI(200): pc##pcie##s##sfp##c##card##tf1); \
	SIGNAL(pc##pcie##s##sfp##c##card##tf1, \
	       pc[pcie].s[sfp].evhead[card].time_fine[0],\
	       pc##pcie##s##sfp##c##card##tf50, \
	       pc[pcie].s[sfp].evhead[card].time_fine[49], DATA12);

/*TAMEX(1, 1, 1);
TAMEX(1, 1, 2);
TAMEX(1, 1, 3);
TAMEX(1, 1, 4);
TAMEX(1, 1, 5);
TAMEX(1, 1, 6);
TAMEX(1, 1, 7);
TAMEX(2, 1, 1);
TAMEX(2, 1, 2);
TAMEX(2, 1, 3);
TAMEX(2, 1, 4);
TAMEX(2, 1, 5);
TAMEX(2, 1, 6);
TAMEX(2, 1, 7);*/

#include "mapping.h"

