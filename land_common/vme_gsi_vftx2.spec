// -*- C++ -*-

VME_GSI_VFTX2(id)
{
	MEMBER(DATA32 time_fine[32] ZERO_SUPPRESS_MULTI(32));
	MEMBER(DATA32 time_coarse[32] ZERO_SUPPRESS_MULTI(32));

	UINT32 custom_header {
		0_4:   id = MATCH(id);
		5_8:   internal_status;
		9_17:  count;
		24_31: 0xab;
	}

	UINT32 event_header {
		0_7:   0xaa;
		11_23: trigger_timestamp;
		29_30: 0b01;
		31:    0b1;
	}

	list(0 <= index < custom_header.count - 1) {
		UINT32 event NOENCODE {
			0_10:  time_fine;
			11_23: time_coarse;
			24:    future;
			25:    boo_ba_doo_ba_doop;
			26_29: channel;

			ENCODE(time_fine[channel], (value = time_fine));
			ENCODE(time_coarse[channel], (value = time_coarse));
		}
	}
}
