// -*- C++ -*-

#define ACTAR_TRACE_LENGTH 2050
SIS3316_ACTAR_S438(id)
{
	MEMBER(DATA32 channel_header[16 * 8]);
	MEMBER(DATA16 trace[16 * ACTAR_TRACE_LENGTH] ZERO_SUPPRESS);

	UINT32 custom_header {
		0_7:   id = MATCH(id);
		8_15:  channel_num;
		16_31: 0x3316;
	}

	list(0 <= channel_index < custom_header.channel_num) {
		// Max 3 padding words can be inserted.
		optional UINT32 padding0 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}
		optional UINT32 padding1 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}
		optional UINT32 padding2 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}

		list(0 <= header_index < 8) {
			UINT32 header_data NOENCODE {
				0_31: data;

				ENCODE(channel_header[channel_index * 8 +
				    header_index], (value = data));
			}
		}

		list(0 <= sample_index < ACTAR_TRACE_LENGTH) {
			UINT16 sample NOENCODE {
				0_15: data;

				ENCODE(trace[channel_index *
				    ACTAR_TRACE_LENGTH + sample_index], (value
				    = data));
			}
		}
	}
}

#define PSP_TRACE_LENGTH 1000
SIS3316_PSP_S438(id)
{
	MEMBER(DATA32 channel_header[16 * 8]);
	MEMBER(DATA16 trace[16 * PSP_TRACE_LENGTH] ZERO_SUPPRESS);

	UINT32 custom_header {
		0_7:   id = MATCH(id);
		8_15:  channel_num;
		16_31: 0x3316;
	}

	list(0 <= channel_index < custom_header.channel_num) {
		// Max 3 padding words can be inserted.
		optional UINT32 padding0 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}
		optional UINT32 padding1 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}
		optional UINT32 padding2 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}

		list(0 <= header_index < 8) {
			UINT32 header_data NOENCODE {
				0_31: data;

				ENCODE(channel_header[channel_index * 8 +
				    header_index], (value = data));
			}
		}

		list(0 <= sample_index < PSP_TRACE_LENGTH) {
			UINT16 sample NOENCODE {
				0_15: data;

				ENCODE(trace[channel_index * PSP_TRACE_LENGTH
				    + sample_index], (value = data));
			}
		}
	}
}

#define S2_TRACE_LENGTH 50
SIS3316_S2_S438(id)
{
	MEMBER(DATA32 channel_header[16 * 8]);
	MEMBER(DATA16 trace[16 * S2_TRACE_LENGTH] ZERO_SUPPRESS);

	UINT32 custom_header {
		0_7:   id = MATCH(id);
		8_15:  channel_num;
		16_31: 0x3316;
	}

	list(0 <= channel_index < custom_header.channel_num) {
		// Max 3 padding words can be inserted.
		optional UINT32 padding0 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}
		optional UINT32 padding1 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}
		optional UINT32 padding2 NOENCODE {
			  0_7: id = MATCH(id);
			 8_15: 0;
			16_31: 0x3316;
		}

		list(0 <= header_index < 8) {
			UINT32 header_data NOENCODE {
				0_31: data;

				ENCODE(channel_header[channel_index * 8 +
				    header_index], (value = data));
			}
		}

		list(0 <= sample_index < S2_TRACE_LENGTH) {
			UINT16 sample NOENCODE {
				0_15: data;

				ENCODE(trace[channel_index * S2_TRACE_LENGTH +
				    sample_index], (value = data));
			}
		}
	}
}

SIS3316_SCALERS_S438()
{
	MEMBER(DATA32 scalers[5 * 4 * 4 * 6]);

	UINT32 custom_header {
		0_31: 0x33161234;
	}

	list(0 <= index < 5 * 4 * 4 * 6) {
		UINT32 scaler NOENCODE {
			0_31: data;

			ENCODE(scalers[index], (value = data));
		}
	}
}

SIS3316_S2_SCALERS_S438()
{
	MEMBER(DATA32 scalers[2 * 4 * 4 * 6]);

	UINT32 custom_header {
		0_31: 0x33161234;
	}

	list(0 <= index < 2 * 4 * 4 * 6) {
		UINT32 scaler NOENCODE {
			0_31: data;

			ENCODE(scalers[index], (value = data));
		}
	}
}
