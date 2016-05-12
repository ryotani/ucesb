TRLOII(id)
{
	UINT32 header {
		0_11:  uint32_num;
		12_23: event_num;
		24_31: id = MATCH(id);
	}

	list(0 <= index < header.uint32_num / 3) {
		UINT32 time_lo {
			0_31: t;
		}
		UINT32 time_hi {
			0_30: t;
			31:   overflow;
		}
		UINT32 trigger {
			0_23:  tpat;
			24_27: encoded;
			28_31: lec;
		}
	}
}

SUBEVENT(trloii_subev)
{
	trloii = TRLOII(id=0xcf);
}
