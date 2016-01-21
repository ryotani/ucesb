// -*- C++ -*-
// created by Ralf on Jan 12th 2016
// there are obviously also other implementions of the febex around, e.g.
// by Joachim Tscheuschner.
// Need to check which one to use.
// currently, this one is special due to the energy handling: We grab
// only the relevant 12 energy bits and only if the value has the requested
// sign. This way we are compatible with the MADC32 readout for PSPX3.

// sign: 0=positive 1=negative values
FEBEX_PSP(card,requested_sign)
{
//	MEMBER(DATA32 tdc[16] ZERO_SUPPRESS);
//	MEMBER(DATA12 energy[16] ZERO_SUPPRESS); // 12 bits for compatibility with MADC readout
    MEMBER(DATA12_OVERFLOW energy[16] ZERO_SUPPRESS);

			
	UINT32 channel_header {
		0_7: 0x34;
		8_11: trig_type;
		12_15: sfp_id;
		16_23: card_id = MATCH (card);
		24_31: channel_i;
	}
	

	UINT32 channel_info {
	 0_2  : ignore;
	 3_31 : num_channels;
	}

	UINT32 dummy1; // no idea about these...
	UINT32 dummy2;
	UINT32 dummy3;
	
	
	// energy and time data
	list(0 <= channel_index < channel_info.num_channels-2) {
		
		UINT32 t_data NOENCODE {
			0_12:  t_val;
			13_27: dummy;
			28_31: channel_i;
//			ENCODE(tdc[channel_i], (value = t_val)); // not needed for PSPs
			}
			
		UINT32 e_data NOENCODE {
			0_3  : lsbs;  // ignore
			4_15 : val;          // take the relevant 12bits only to be compatible with MADC32 for PSP3
			16_22: msbs; // ignore
			23: sign;              // 0=positive signal, 1=negative
			28_31 : channel_i = MATCH (t_data.channel_i);
			}

		// Note: e_data==0xeeeeee indicates an error. Using 12bits we 
		// are left with e_data.e_val=0xeee which is inside the good data
		if (e_data.sign==requested_sign) { 
			if ((e_data.val==0xeee) && (e_data.msbs==0x6e)) { // error! Set overflow bit (better than nothing)
				ENCODE(energy[t_data.channel_i], (value = 0, overflow = 1)); 
				}
			else {
				ENCODE(energy[t_data.channel_i], (value = e_data.val, overflow = 0)); 
				}
			} 
			
		} // list
		
	// footer
	UINT32 channel_footer {
		0_23: dummy;
		24_31: 0xbf;
	}
	
	

/*
	UINT32 slaves {
		  0_7: sfp0;
		 8_15: sfp1;
		16_23: sfp2;
		24_31: sfp3;
	}
*/
}
