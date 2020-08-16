// -*- C++ -*-

FEBEX()
{
	UINT32 header {
		0_31: 0xfebe0000;
	}

	UINT32 slaves {
		  0_7: sfp0;
		 8_15: sfp1;
		16_23: sfp2;
		24_31: sfp3;
	}

	UINT32 channel_header {
		0_7: 0x34;
		8_11: trig_type;
		12_15: sfp_id;
		16_23: card_id;
		24_31: channel_i;
	}
}
