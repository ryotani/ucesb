// -*- C++ -*-

#define NUM_SFP_MODULES 2
#define NUM_FEBEX_MODULES 25
#define CHANNELS_PER_FEBEX 16
#define FEBEX_MODULES_PER_SFP 20

/* ***************** */
/* FEBEX3 FOR CALIFA */
/* ***************** */
FEBEX3_CALIFA_BASE(){

  MEMBER(DATA16 energy[NUM_SFP_MODULES*NUM_FEBEX_MODULES*CHANNELS_PER_FEBEX]  ZERO_SUPPRESS);
  MEMBER(DATA32 ts_lsb[NUM_SFP_MODULES*NUM_FEBEX_MODULES*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);
  MEMBER(DATA32 ts_msb[NUM_SFP_MODULES*NUM_FEBEX_MODULES*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);
  MEMBER(DATA16 n_f[NUM_SFP_MODULES*NUM_FEBEX_MODULES*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);
  MEMBER(DATA16 n_s[NUM_SFP_MODULES*NUM_FEBEX_MODULES*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);

  // ADDING THE NEXT TEN LINES PRODUCES
  // califa.spec:162: Subevent:   100/10000 (id:2,crate:2,ctrl:9) not completely read.
  //
  // Extract White Rabbit Timestamp after CALIFA_SYSTEM_ID identifier
  // optional UINT32 CALIFA_SYSTEM_ID NOENCODE{
  //   0_31: system_id = MATCH(0x400);
  // }
  // if(CALIFA_SYSTEM_ID.system_id == 0x400){
  //   //Should be encoded for a multidetector environment
  //   list (0 <= index < 4){
  //     UINT32 WRTS NOENCODE;
  //   }
  // }

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
    0_15: sizebytes;
    16_31: 0x0000;
  }

  if(DATASIZE.sizebytes>0){
    if(HEADER.submemory_id==0xff){
      // NOTE FROM PHILIPP: IIRC, Max uses the 0xff channel for timestamp synchronization.
      // after timestitching one does not need it anymore, in my view.
      list (0 <= index < DATASIZE.sizebytes/4){
        UINT32 SYNCHRO NOENCODE;
      }
    }
    else{
      UINT32 HEADER_MAGIC NOENCODE{
        0_15: sizebytes = MATCH(DATASIZE.sizebytes);
        16_31: magic;
      }
      if(HEADER_MAGIC.magic==0x115A){
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

        UINT16 pileup NOENCODE;
        UINT16 discard NOENCODE;

        UINT32 ENERGY_VALUE NOENCODE{
      0_15:  eneval;
      16_31: reservedbits;
        }
        UINT32 INTEGRAL_VALUE NOENCODE{
      0_15:  nf;
      16_31: ns;
        }

        ENCODE(energy[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=ENERGY_VALUE.eneval));
        ENCODE(ts_lsb[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=timestamp_lsb));
        ENCODE(ts_msb[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=timestamp_msb));
        ENCODE(n_f[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=INTEGRAL_VALUE.nf));
        ENCODE(n_s[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=INTEGRAL_VALUE.ns));

        if(DATASIZE.sizebytes>40){
          UINT32 HEADER_TOT NOENCODE{
	    0_15: tot;
            16_31: magic_beef = MATCH(0xBEEF);
          }
          UINT16 trace_sample_val1 NOENCODE;
          UINT16 trace_sample_val2 NOENCODE;
          UINT16 trace_sample_val3 NOENCODE;
          UINT16 trace_sample_val4 NOENCODE;
        }
        if(DATASIZE.sizebytes>52){
          UINT32 HEADER_TRACE NOENCODE{
	    0_15: datalength; //2*num samples+8
	    16_31: magic_2bad = MATCH(0x2BAD);
          }
          list (0 <= index < (HEADER_TRACE.datalength/4)-1){
            // Should be properly encoded if traces are needed
            UINT32 TRACE_SAMPLES NOENCODE;
          }
	}
      }
      else if(HEADER_MAGIC.magic==0xB00B){
        // The 0xB00B stuff is related to patricks pulser. Again, support for that is not very urgent,
        // but might come in handy at some point.
        UINT32 pul_eventid NOENCODE;
        UINT32 pul_timestamp_lsb NOENCODE;
        UINT32 pul_timestamp_msb NOENCODE;

        UINT32 N_S_TOT NOENCODE{
	  0_7: pul_n_s;
	  8_31: pul_nothingofinterest;
        }
        UINT32 N_F_TOT NOENCODE{
          0_7: pul_firstterm;
          8_11: pul_secondterm;
          12_15: pul_nothingofinterest2;
          16_23: pul_nothingofinterest3;
          24_31: pul_n_f;
        }
        UINT32 pul_throwme NOENCODE;
      }
    }
  }
}

//FEBEX3_CALIFA_PADDING(){
//  UINT32 PADDING NOENCODE{
//    0_19: irrelevant;
//    20_31: all = MATCH(0xadd);
//  }
//}

SUBEVENT(CALIFA){
  //select several{
  //  other = FEBEX3_CALIFA_PADDING();
  //}
  select several{
    febex3 = FEBEX3_CALIFA_BASE();
  }
}

EVENT{
  califa = CALIFA(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 9);
}

#include "mapping_CALIFA.hh"
