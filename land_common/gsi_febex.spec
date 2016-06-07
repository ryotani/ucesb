FEBEX_EVENTHEADER()
{
	UINT32 identifier NOENCODE {
		0_31: 0xfebe0000;
	}

	UINT32 febexcards {
		0_7:   n_febex_sfp0;
		8_15:  n_febex_sfp1;
		16_23: n_febex_sfp2;
		24_31: n_febex_sfp3;
	}
}

FEBEX_PADDING()
{
	UINT32 pads_data NOENCODE {
		0_11:  counter;
		12_19: index;
		20_31: 0xadd;
	}
}

FEBEX_NOTRACE(sfp, card)
{
	MEMBER(DATA8 n_hit[16]);
	MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(10));
	MEMBER(DATA32 e[16] ZERO_SUPPRESS_MULTI(10));

	UINT32 indicator NOENCODE {
		0_7:   0x34;
		8_11:  trigger_type;
		12_15: sfp =  MATCH(sfp);
		16_23: card = MATCH(card);
		24_31: 0xff;
	}

	UINT32 data_size NOENCODE {
		0_31: size;
	}

	UINT32 head NOENCODE {
		0_23:  unused;
		24_31: 0xaf;
	}

	UINT32 triggertime NOENCODE {
		0_31: trigger_time;
	}

	UINT32 time NOENCODE {
		0_31: time;
	}

	list (0 <= i < ((data_size.size - 16) >> 3)) {
		UINT32 time NOENCODE {
			0_11:  time;
			12_14: unused1;
			15:    sign;
			16_19: unused2;
			20_23: multi_hit;
			24_27: n_hit;
			28_31: channel_id;
			ENCODE(t[channel_id], (value = time));
			ENCODE(n_hit[channel_id], (value = n_hit));
		}

		UINT32 energy NOENCODE {
			0_21:  energy;
			22:    unused1;
			23:    sign;
			24_27: unused2;
			28_31: channel_id;
			ENCODE(e[channel_id], (value = energy | sign << 23));
		}
	}

	UINT32 trailer NOENCODE {
		0_23:  unused;
		24_31: 0xbf;
	}
}
