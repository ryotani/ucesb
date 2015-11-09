// -*- C++ -*-

SIS3316_ACTAR_S438(id)
{
	MEMBER(DATA32 channel_header[16 * 8]);
	MEMBER(DATA16 trace[16 * 2500] ZERO_SUPPRESS);

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

		list(0 <= header_index < 7) {
			UINT32 header_data NOENCODE {
				0_31: data;

				ENCODE(channel_header[channel_index * 8 +
				    header_index], (value = data));
			}
		}

		UINT32 header3
		{
			0_25: sampleLength;
			26:	0;
			27:	mawFlag;
			28_31:	0xE;
		}

		list(0 <= sample_index < header3.sampleLength * 2) {
			UINT16 sample NOENCODE {
				0_15: data;

				ENCODE(trace[channel_index *
				    header3.sampleLength + sample_index], (value
				    = data));
			}
		}
	}
}

SIS3316_PSP_S438(id)
{
	MEMBER(DATA32 channel_header[16 * 8]);
	MEMBER(DATA16 trace[16 * 1000] ZERO_SUPPRESS);

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

		list(0 <= header_index < 7) {
			UINT32 header_data NOENCODE {
				0_31: data;

				ENCODE(channel_header[channel_index * 8 +
				    header_index], (value = data));
			}
		}

		UINT32 header3
		{
			0_25: sampleLength;
			26:	0;
			27:	mawFlag;
			28_31:	0xE;
		}

		list(0 <= sample_index < header3.sampleLength * 2) {
			UINT16 sample NOENCODE {
				0_15: data;

				ENCODE(trace[channel_index * header3.sampleLength
				    + sample_index], (value = data));
			}
		}
	}
}

SIS3316_S2_S438(id)
{
	MEMBER(DATA32 channel_header[16 * 8]);
	MEMBER(DATA16 trace[16 * 50] ZERO_SUPPRESS);

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

		list(0 <= header_index < 7) {
			UINT32 header_data NOENCODE {
				0_31: data;

				ENCODE(channel_header[channel_index * 8 +
				    header_index], (value = data));
			}
		}

		UINT32 header3
		{
			0_25: sampleLength;
			26:	0;
			27:	mawFlag;
			28_31:	0xE;
		}

		list(0 <= sample_index < header3.sampleLength * 2) {
			UINT16 sample NOENCODE {
				0_15: data;

				ENCODE(trace[channel_index * header3.sampleLength +
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
