TRLOII_LMU_SCALERS(id)
{
	MEMBER(DATA32 before_lmu[63] ZERO_SUPPRESS);
	MEMBER(DATA32 before_lmu_mux[31] ZERO_SUPPRESS);
	MEMBER(DATA32 before_lmu_aux[31] ZERO_SUPPRESS);
	MEMBER(DATA32 before_dt[127] ZERO_SUPPRESS);
	MEMBER(DATA32 after_dt[127] ZERO_SUPPRESS);
	MEMBER(DATA32 after_reduction[127] ZERO_SUPPRESS);

	UINT32 header {
		0_5:   before_lmu;
		6_10:  before_lmu_mux;
		11_15: before_lmu_aux;
		16_23: after_lmu;
		24_31: id = MATCH(id);
	}

	list(0 <= i < header.before_lmu) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(before_lmu[i], (value=value));
		}
	}
	list(0 <= i < header.before_lmu_mux) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(before_lmu_mux[i], (value=value));
		}
	}
	list(0 <= i < header.before_lmu_aux) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(before_lmu_aux[i], (value=value));
		}
	}
	list(0 <= i < header.after_lmu) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(before_dt[i], (value=value));
		}
	}
	list(0 <= i < header.after_lmu) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(after_dt[i], (value=value));
		}
	}
	list(0 <= i < header.after_lmu) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(after_reduction[i], (value=value));
		}
	}
}

TRLOII_TPAT(id)
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
