// -*- C++ -*-

TRIDI_SCALERS_S438()
{
	MEMBER(DATA32 before_lmu[16] ZERO_SUPPRESS);
	MEMBER(DATA32 before_lmu_mux[16] ZERO_SUPPRESS);
	MEMBER(DATA32 before_lmu_aux[16] ZERO_SUPPRESS);
	MEMBER(DATA32 before_dt[16] ZERO_SUPPRESS);
	MEMBER(DATA32 after_dt[16] ZERO_SUPPRESS);
	MEMBER(DATA32 after_red[16] ZERO_SUPPRESS);

	UINT32 marker {
		0_31: 0x3d001234;
	}

	UINT32 header {
		  0_5: num_before_lmu;
		 6_10: num_before_lmu_mux;
		11_15: num_before_lmu_aux;
		16_23: num_after_lmu;
		24_31: id;
	}

	list(0 <= index < header.num_before_lmu) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(before_lmu[index], (value = value));
		}
	}
	list(0 <= index < header.num_before_lmu_mux) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(before_lmu_mux[index], (value = value));
		}
	}
	list(0 <= index < header.num_before_lmu_aux) {
		UINT32 scaler NOENCODE {
			0_31: value;
			ENCODE(before_lmu_aux[index], (value = value));
		}
	}
	list(0 <= index < header.num_after_lmu) {
		UINT32 scaler1 NOENCODE {
			0_31: value;
			ENCODE(before_dt[index], (value = value));
		}
		UINT32 scaler2 NOENCODE {
			0_31: value;
			ENCODE(after_dt[index], (value = value));
		}
		UINT32 scaler3 NOENCODE {
			0_31: value;
			ENCODE(after_red[index], (value = value));
		}
	}
}
