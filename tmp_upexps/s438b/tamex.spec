// -*- C++ -*-

/*
 * Based on GO4 code.
 */

TAMEX_CHANNEL(sfp, card)
{
	MEMBER(DATA32 type[128] ZERO_SUPPRESS);
	MEMBER(DATA32 tdc[128] ZERO_SUPPRESS);

	UINT32 header {
		0_7:   0x34;
		8_11:  trigger_type;
		12_15: sfp_index = MATCH(sfp);
		16_23: card_index = MATCH(card);
		24_31: channel_index = 0;
	}
	UINT32 data_size;
	UINT32 tdc_header {
		0_23:  yanana_phone;
		24_31: 0xaa;
	}

	list(0 <= index < (data_size / 4 - 2)) {
		UINT32 tdc_data NOENCODE {
			0_21:  value;
			22_28: channel_i;
			29_31: type;

			ENCODE(type[channel_i], (value = type));
			ENCODE(tdc[channel_i], (value = value));
		}
	}

	UINT32 tdc_trailer {
		0_23:  wanana_phone;
		24_31: 0xbb;
	}
}
