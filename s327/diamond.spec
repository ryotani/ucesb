// -*- C++ -*-

APV25_BLOCK(dsp_no)
{
  MEMBER(DATA12_OVERFLOW d2[128] ZERO_SUPPRESS);
  MEMBER(DATA12_OVERFLOW d3[128] ZERO_SUPPRESS);

  UINT32 dsp_header
  {
    0_15: count32; // total number of 32bit words to follow (except the "SAME")
    16_23: trigger_counter;
    24_31: dsp_no = MATCH(dsp_no); // 	(="0", the DSP number)
  }
    
  UINT32 seh_ahw_header
  {
    //0_11: count16; //number of 16bit data words (as being transferred via GTB)
    // Need to divide the number of 16-bit words by two in order to obtain 
    // the number of 32bit-words. Even though / is now available the 
    // following solution is safer:
    0:     0x0;
    1_11:  count32;
    12_14: 0x0;
    15: dummy;
    16_23: se_trigger_counter = MATCH (dsp_header.trigger_counter);
    24_26: trigger_number; //	"0" "1" "2" or "3", the trigger number
    27_30: 0x0; //	"0", the Bridgeboard address
    31: has_data; //"1" if there is data, "0" if there is no data for the SAM3 in this event
  }    

  // now read the actual data;
  if (seh_ahw_header.count32) 
  {
    UINT32 first_ch_data NOENCODE
    {
        0_11:  adc_value;
//	  12_13: adc_no = RANGE(2,3); //"2" or "3", the number of the onboard ADC used
        12: adc_id; 
        13: 0x1;
	14: underflow;    
	15: overflow;    
//        14_15: reserved
        16_22: strip; //"0-127" the strip number
        23: 0x1; //is_good; // "1" if data is ok, "0" if there is some error
        24_31: r; //The "row" of the AVP chain in which the data was contained
    }  
    
    if (first_ch_data.adc_id) 
    {
      ENCODE(d3[first_ch_data.strip],(value=first_ch_data.adc_value,overflow=first_ch_data.overflow));
    }
    else 
    {
      ENCODE(d2[first_ch_data.strip],(value=first_ch_data.adc_value,overflow=first_ch_data.overflow));
    }
    
    list(1<=index<seh_ahw_header.count32)
    {
      UINT32 ch_data NOENCODE
      {
        0_11:  adc_value;
        12: adc_id; 
        13: 0x1;
	14: underflow;    
	15: overflow;    
        16_22: strip; //"0-127" the strip number
        23: 0x1; //is_good; // "1" if data is ok, "0" if there is some error
        24_31: r=MATCH(first_ch_data.r); //The "row" of the AVP chain
      }
      if (ch_data.adc_id) 
      {
        ENCODE(d3[ch_data.strip],(value=ch_data.adc_value,overflow=ch_data.overflow));
      }
      else
      {
        ENCODE(d2[ch_data.strip],(value=ch_data.adc_value,overflow=ch_data.overflow));
      }
    } // list
  }  // if count32
}


#define DIAMOND_DSP_NO 0x30

external EXTERNAL_DATA_INFO();

SUBEVENT(DIAMOND_SUBEVENT)
{
  external subevent_info = EXTERNAL_DATA_INFO();

  // TDC
  UINT32 dummy_header NOENCODE
  {
      0_31: 0x54443041;
  }
  MARK(begin_tdc);
  select several 
  {
    tdc = VME_CAEN_V775(geom=0x1f,crate= 0);
  }
  MARK(end_tdc);
  UINT32 dummy_footer NOENCODE
  {
      0_31: 0x54443045;
  }
  
  // ADC
  UINT32 dummy_header_adc NOENCODE
  {
      0_31: 0x41443041;
  }
  MARK(begin_adc);
  select several 
  {
    adc = VME_CAEN_V785(geom=0x1f,crate= 0);
  }
  MARK(end_adc);
  UINT32 dummy_footer_adc NOENCODE
  {
      0_31: 0x41443045;
  }
    
  // APV data
  UINT32 dummy_header_apv NOENCODE
  {
      0_31: 0x41505641;
  } 
  MARK(begin_apv25);
  select several 
  {   
    apv25 = APV25_BLOCK(dsp_no=DIAMOND_DSP_NO);
  }
  MARK(end_apv25);
  UINT32 dummy_footer_apv NOENCODE
  {
      0_31: 0x41505645;
  }  
}

SUBEVENT(DIAMOND_VME)
{
  vme = LAND_STD_VME();
 
  select several
    {
      tdc = VME_CAEN_V775(geom=0x1c,crate= 0);
      adc = VME_CAEN_V785(geom=0x1f,crate= 0);
      apv25 = APV25_BLOCK(dsp_no=DIAMOND_DSP_NO);
    }  
}
