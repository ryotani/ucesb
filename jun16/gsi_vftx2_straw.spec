VME_GSI_VFTX2_STRAW(id)
{
	MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(32));
	MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(32));
	MEMBER(DATA16 time_trigger);

	UINT32 status {
		0_3:  internal;
		4_12: count;
	}

	UINT32 custom_header {
		0_15:  count;
		16_23: id = MATCH(id);
		24_31: 0xab;
	}

	UINT32 event_header {
		0_7:   0xaa;
		11_23: trigger_timestamp;
		29_30: 0b01;
		31:    0b1;

		ENCODE(time_trigger, (value = trigger_timestamp));
	}

	list(0 <= index < custom_header.count) {
		UINT32 event NOENCODE {
			0_10:  time_fine;
			11_23: time_coarse;
			24:    future;
			25_30: channel;
			31:    bluppidupp;

			ENCODE(time_fine[channel], (value = time_fine));
			ENCODE(time_coarse[channel], (value = time_coarse));
		}
	}
}
