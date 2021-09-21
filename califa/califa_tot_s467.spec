// -*- C++ -*-


#define NUM_SFP_MODULES 8
#define CHANNELS_PER_FEBEX 16
#define FEBEX_MODULES_PER_SFP 16

#define CALIFA_CHANNELS (NUM_SFP_MODULES*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX)
#define CALIFA_CH (HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id)

FEBEX3_CALIFA_BASE(id){
        
	MEMBER(DATA16 trg[CALIFA_CHANNELS]  ZERO_SUPPRESS);
	MEMBER(DATA16 energy[CALIFA_CHANNELS]  ZERO_SUPPRESS);
	MEMBER(DATA32 ts_lsb[CALIFA_CHANNELS]   ZERO_SUPPRESS);
	MEMBER(DATA32 ts_msb[CALIFA_CHANNELS]   ZERO_SUPPRESS);
	MEMBER(DATA16 n_f[CALIFA_CHANNELS]   ZERO_SUPPRESS);
	MEMBER(DATA16 n_s[CALIFA_CHANNELS]   ZERO_SUPPRESS);
	MEMBER(DATA16 tot[CALIFA_CHANNELS]   ZERO_SUPPRESS);
	MEMBER(DATA32 overflow[CALIFA_CHANNELS]   ZERO_SUPPRESS);
        MEMBER(DATA16 wrts_id[CALIFA_CHANNELS]  ZERO_SUPPRESS);
        MEMBER(DATA16 wrts_t1[CALIFA_CHANNELS] ZERO_SUPPRESS);
        MEMBER(DATA16 wrts_t2[CALIFA_CHANNELS] ZERO_SUPPRESS);
        MEMBER(DATA16 wrts_t3[CALIFA_CHANNELS] ZERO_SUPPRESS);
        MEMBER(DATA16 wrts_t4[CALIFA_CHANNELS] ZERO_SUPPRESS);
        MEMBER(DATA16 pileup[CALIFA_CHANNELS] ZERO_SUPPRESS);
        MEMBER(DATA16 discard[CALIFA_CHANNELS] ZERO_SUPPRESS);

        // copied from whiterabbit.spec
        UINT32 wrts_header NOENCODE {
                0_12:  id = MATCH(id);
                13_15: 0;
                   16: error_bit;
                17_31: 0;
        };
        UINT32 d1 NOENCODE {
                0_15:  t1;
                16_31: 0x03e1;
        };
        UINT32 d2 NOENCODE {
                0_15:  t2;
                16_31: 0x04e1;
        };
        UINT32 d3 NOENCODE {
                0_15:  t3;
                16_31: 0x05e1;
        };
        UINT32 d4 NOENCODE {
                0_15:  t4;
                16_31: 0x06e1;
        };

        // end of WRTS part

        // GOSIP padding:       
	several UINT32 PADDING NOENCODE{
		0_19: irrelevant;
		20_31: all = MATCH(0xadd);
	}

	// Decoding GOSIP
	UINT32 HEADER NOENCODE{
		0_7: header_size;
		8_11: trigger;
		12_15: sfp_id;        //fiberConnector;
		16_23: module_id;     //card;
		24_31: submemory_id;  //channel;
	}

	UINT32 DATASIZE NOENCODE{
		0_23: sizebytes;
		24_31: 0x0000;
	}
        
	if(HEADER.submemory_id==0xff){
              //special channel. not useful after califa haecksler/eventbuilder.
	      list (0 <= index < (DATASIZE.sizebytes-12)/4){
		  UINT32 SYNCHRO NOENCODE;
	      }
	} else if (DATASIZE.sizebytes == 0x34) {
	      UINT32 HEADER_MAGIC NOENCODE{
		  0_15: sizebytes = 0x34;
		  16_31: magic = 0x115a;
	      }

	      UINT32 eventid NOENCODE;
	      UINT32 timestamp_lsb NOENCODE;
	      UINT32 timestamp_msb NOENCODE;
              
	      UINT16 cfd_sample_val1 NOENCODE;
	      UINT16 cfd_sample_val2 NOENCODE;
	      UINT16 cfd_sample_val3 NOENCODE;
	      UINT16 cfd_sample_val4 NOENCODE;

	      UINT32 FLAGS NOENCODE{
		  0_23:  ov;
		  24_31: selftrigger;
	      }

	      UINT16 pileup_ NOENCODE;
	      UINT16 discard_ NOENCODE;

	      UINT32 ENERGY_VALUE NOENCODE{
		  0_15:  eneval;
		  16_31: reservedbits;
	      }
	      UINT32 QPID_VALUE NOENCODE{
		  0_15:  nf;
		  16_31: ns;
	      }
	      UINT32 HEADER_TOT NOENCODE{
			0_15: tot;
			16_31: magic_beef = MATCH(0xBEEF);
		}
	      UINT16 trace_sample_val1 NOENCODE;
	      UINT16 trace_sample_val2 NOENCODE;
	      UINT16 trace_sample_val3 NOENCODE;
	      UINT16 trace_sample_val4 NOENCODE;

              
              ENCODE(trg[CALIFA_CH], (value=HEADER.trigger));
              ENCODE(energy[CALIFA_CH], (value=ENERGY_VALUE.eneval));
              ENCODE(ts_lsb[CALIFA_CH], (value=timestamp_lsb));
              ENCODE(ts_msb[CALIFA_CH], (value=timestamp_msb));
              ENCODE(n_f[CALIFA_CH], (value=QPID_VALUE.nf));
              ENCODE(n_s[CALIFA_CH], (value=QPID_VALUE.ns));
              ENCODE(overflow[CALIFA_CH], (value=FLAGS.ov));
              ENCODE(wrts_id[CALIFA_CH], (value=wrts_header.id) );
              ENCODE(wrts_t1[CALIFA_CH], (value=d1.t1));
              ENCODE(wrts_t2[CALIFA_CH], (value=d2.t2));
              ENCODE(wrts_t3[CALIFA_CH], (value=d3.t3));
              ENCODE(wrts_t4[CALIFA_CH], (value=d4.t4));
              ENCODE(pileup[CALIFA_CH], (value=pileup_));
              ENCODE(discard[CALIFA_CH], (value=discard_));
	      ENCODE(tot[CALIFA_CH],(value=HEADER_TOT.tot));
              
	  } else {
	      list (0 <= i < (DATASIZE.sizebytes-12)/4) {
		  UINT32 tmp NOENCODE;
		}
	  }
}

SUBEVENT(CALIFAM)
{
	select several{
		febex3 = FEBEX3_CALIFA_BASE(id=0xa00);
	}
}

SUBEVENT(CALIFAW)
{
	select several{
		febex3 = FEBEX3_CALIFA_BASE(id=0xb00);
	}
}


#if 0
// main event usage:
        revisit califa_messel = CALIFAM(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 9);
        revisit califa_wixhausen = CALIFAW(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 10);
#endif



//#include "mapping_CALIFA.hh"

