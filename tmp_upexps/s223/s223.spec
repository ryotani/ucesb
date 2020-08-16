// -*- C++ -*-

#include "spec/spec.spec"
#include "siderem01_vme.spec"
#include "cros3_ext.spec"
#include "land_camac_converter.spec"
#include "land_camac_scaler.spec"
#include "land_fastbus.spec"
#include "land_vme.spec"
#include "land_vme_subev.spec"
#include "land_type_subtype.spec"

DUMMY_WORD()
{
  UINT32 dummy_word;
}

SUBEVENT(DUMMY)
{
  select several
  {
    d = DUMMY_WORD();
  }
}


EVENT
{
  cros3    = CROS3_SUBEVENT(type = SUBEVENT_CROS3,subtype = SUBEVENT_CROS3_DATA);
  //cros3_d    = DUMMY(type = 85,subtype = 8500);
  
  cros3_rewrite = CROS3_REWRITE_SUBEVENT(type = 85,subtype = 8510);
  
  sst      = SIDEREM01_VME(type = SUBEVENT_SST,subtype = SUBEVENT_SST_DATA8200,control=3);
  camac    = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_CONVERTERS);
  fastbus1 = LAND_FASTBUS1(type = SUBEVENT_FASTBUS, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 1);
  fastbus2 = LAND_FASTBUS2(type = SUBEVENT_FASTBUS, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 2);
  acq      = DUMMY(type = SUBEVENT_START_STOP_ACQ, subtype = 3100);
  vme      = LAND_VME(type = SUBEVENT_VME, subtype = SUBEVENT_VME_DATA8800,control=5);

  camac = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_CONVERTERS);
  camac_tcal_info = LAND_CAMAC_TCAL_INFO(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_TCAL_INFO);
#if 0
  camac_scalers = LAND_CAMAC_SCALER(type = SUBEVENT_START_STOP_ACQ, subtype = SUBEVENT_CAMAC_SCALERS);
#endif
//  camac_scalers = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_SCALERS);
  camac_scalers_d = DUMMY(type=34, subtype=3100);
  camac_scalers = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_SCALERS);
  fastbus_error = LAND_FASTBUS_ERROR(type = SUBEVENT_FASTBUS_ERROR, subtype = SUBEVENT_FASTBUS_ERROR_INFO);
  d1 = DUMMY(type=34,subtype=3500,control=1);
}

#include "mapping.hh"

SIGNAL(SST1_1_E,    sst.sst[0].data[0][0],
       SST1_320_E,  sst.sst[0].data[0][319], DATA12);
SIGNAL(SST1_321_E,  sst.sst[0].data[1][0],
       SST1_640_E,  sst.sst[0].data[1][319], DATA12);
SIGNAL(SST1_641_E,  sst.sst[0].data[2][0],
       SST1_1024_E, sst.sst[0].data[2][383], DATA12);

SIGNAL(SST2_1_E,    sst.sst[1].data[0][0],
       SST2_320_E,  sst.sst[1].data[0][319], DATA12);
SIGNAL(SST2_321_E,  sst.sst[1].data[1][0],
       SST2_640_E,  sst.sst[1].data[1][319], DATA12);
SIGNAL(SST2_641_E,  sst.sst[1].data[2][0],
       SST2_1024_E, sst.sst[1].data[2][383], DATA12);

SIGNAL(SST3_1_E,    sst.sst[2].data[0][0],
       SST3_320_E,  sst.sst[2].data[0][319], DATA12);
SIGNAL(SST3_321_E,  sst.sst[2].data[1][0],
       SST3_640_E,  sst.sst[2].data[1][319], DATA12);
SIGNAL(SST3_641_E,  sst.sst[2].data[2][0],
       SST3_1024_E, sst.sst[2].data[2][383], DATA12);

SIGNAL(SST4_1_E,    sst.sst[3].data[0][0],
       SST4_320_E,  sst.sst[3].data[0][319], DATA12);
SIGNAL(SST4_321_E,  sst.sst[3].data[1][0],
       SST4_640_E,  sst.sst[3].data[1][319], DATA12);
SIGNAL(SST4_641_E,  sst.sst[3].data[2][0],
       SST4_1024_E, sst.sst[3].data[2][383], DATA12);

SIGNAL(SST5_1_E,    sst.sst[4].data[0][0],
       SST5_320_E,  sst.sst[4].data[0][319], DATA12);
SIGNAL(SST5_321_E,  sst.sst[4].data[1][0],
       SST5_640_E,  sst.sst[4].data[1][319], DATA12);
SIGNAL(SST5_641_E,  sst.sst[4].data[2][0],
       SST5_1024_E, sst.sst[4].data[2][383], DATA12);
			     			     
SIGNAL(ZERO_SUPPRESS: SST1_1024);

//include the mapping for the NTF
SIGNAL(NTF01_1_T,vme.tdc775.data[0],DATA12);
SIGNAL(NTF05_1_T,vme.tdc775.data[1],DATA12);
SIGNAL(NTF01_2_T,vme.tdc775.data[2],DATA12);
SIGNAL(NTF05_2_T,vme.tdc775.data[3],DATA12);
SIGNAL(NTF06_1_T,vme.tdc775.data[4],DATA12);
SIGNAL(NTF02_1_T,vme.tdc775.data[5],DATA12);
SIGNAL(NTF06_2_T,vme.tdc775.data[6],DATA12);
SIGNAL(NTF02_2_T,vme.tdc775.data[7],DATA12);
SIGNAL(NTF03_1_T,vme.tdc775.data[8],DATA12);
SIGNAL(NTF07_1_T,vme.tdc775.data[9],DATA12);
SIGNAL(NTF03_2_T,vme.tdc775.data[10],DATA12);
SIGNAL(NTF07_2_T,vme.tdc775.data[11],DATA12);
SIGNAL(NTF08_1_T,vme.tdc775.data[12],DATA12);
SIGNAL(NTF04_1_T,vme.tdc775.data[13],DATA12);
SIGNAL(NTF08_2_T,vme.tdc775.data[14],DATA12);
SIGNAL(NTF04_2_T,vme.tdc775.data[15],DATA12);
SIGNAL(NTF09_1_T,vme.tdc775.data[16],DATA12);
SIGNAL(NTF13_1_T,vme.tdc775.data[17],DATA12);
SIGNAL(NTF09_2_T,vme.tdc775.data[18],DATA12);
SIGNAL(NTF13_2_T,vme.tdc775.data[19],DATA12);
SIGNAL(NTF14_1_T,vme.tdc775.data[20],DATA12);
SIGNAL(NTF10_1_T,vme.tdc775.data[21],DATA12);
SIGNAL(NTF14_2_T,vme.tdc775.data[22],DATA12);
SIGNAL(NTF10_2_T,vme.tdc775.data[23],DATA12);
SIGNAL(NTF11_1_T,vme.tdc775.data[24],DATA12);
SIGNAL(NTF15_1_T,vme.tdc775.data[25],DATA12);
SIGNAL(NTF11_2_T,vme.tdc775.data[26],DATA12);
SIGNAL(NTF15_2_T,vme.tdc775.data[27],DATA12);
SIGNAL(NTF16_1_T,vme.tdc775.data[28],DATA12);
SIGNAL(NTF12_1_T,vme.tdc775.data[29],DATA12);
SIGNAL(NTF16_2_T,vme.tdc775.data[30],DATA12);
SIGNAL(NTF12_2_T,vme.tdc775.data[31],DATA12);
//include the mapping for the NTF (CHARGE-QDC)
SIGNAL(NTF01_1_Q,vme.qdc792.data[0],DATA12);
SIGNAL(NTF05_1_Q,vme.qdc792.data[1],DATA12);
SIGNAL(NTF01_2_Q,vme.qdc792.data[2],DATA12);
SIGNAL(NTF05_2_Q,vme.qdc792.data[3],DATA12);
SIGNAL(NTF06_1_Q,vme.qdc792.data[4],DATA12);
SIGNAL(NTF02_1_Q,vme.qdc792.data[5],DATA12);
SIGNAL(NTF06_2_Q,vme.qdc792.data[6],DATA12);
SIGNAL(NTF02_2_Q,vme.qdc792.data[7],DATA12);
SIGNAL(NTF03_1_Q,vme.qdc792.data[8],DATA12);
SIGNAL(NTF07_1_Q,vme.qdc792.data[9],DATA12);
SIGNAL(NTF03_2_Q,vme.qdc792.data[10],DATA12);
SIGNAL(NTF07_2_Q,vme.qdc792.data[11],DATA12);
SIGNAL(NTF08_1_Q,vme.qdc792.data[12],DATA12);
SIGNAL(NTF04_1_Q,vme.qdc792.data[13],DATA12);
SIGNAL(NTF08_2_Q,vme.qdc792.data[14],DATA12);
SIGNAL(NTF04_2_Q,vme.qdc792.data[15],DATA12);
SIGNAL(NTF09_1_Q,vme.qdc792.data[16],DATA12);
SIGNAL(NTF13_1_Q,vme.qdc792.data[17],DATA12);
SIGNAL(NTF09_2_Q,vme.qdc792.data[18],DATA12);
SIGNAL(NTF13_2_Q,vme.qdc792.data[19],DATA12);
SIGNAL(NTF14_1_Q,vme.qdc792.data[20],DATA12);
SIGNAL(NTF10_1_Q,vme.qdc792.data[21],DATA12);
SIGNAL(NTF14_2_Q,vme.qdc792.data[22],DATA12);
SIGNAL(NTF10_2_Q,vme.qdc792.data[23],DATA12);
SIGNAL(NTF11_1_Q,vme.qdc792.data[24],DATA12);
SIGNAL(NTF15_1_Q,vme.qdc792.data[25],DATA12);
SIGNAL(NTF11_2_Q,vme.qdc792.data[26],DATA12);
SIGNAL(NTF15_2_Q,vme.qdc792.data[27],DATA12);
SIGNAL(NTF16_1_Q,vme.qdc792.data[28],DATA12);
SIGNAL(NTF12_1_Q,vme.qdc792.data[29],DATA12);
SIGNAL(NTF16_2_Q,vme.qdc792.data[30],DATA12);
SIGNAL(NTF12_2_Q,vme.qdc792.data[31],DATA12);
//include the mapping for the NTF(SCALER)
SIGNAL(NTF01_1_S,vme.scaler[0].data[0],DATA32);
SIGNAL(NTF05_1_S,vme.scaler[0].data[1],DATA32);
SIGNAL(NTF01_2_S,vme.scaler[0].data[2],DATA32);
SIGNAL(NTF05_2_S,vme.scaler[0].data[3],DATA32);
SIGNAL(NTF06_1_S,vme.scaler[0].data[4],DATA32);
SIGNAL(NTF02_1_S,vme.scaler[0].data[5],DATA32);
SIGNAL(NTF06_2_S,vme.scaler[0].data[6],DATA32);
SIGNAL(NTF02_2_S,vme.scaler[0].data[7],DATA32);
SIGNAL(NTF03_1_S,vme.scaler[0].data[8],DATA32);
SIGNAL(NTF07_1_S,vme.scaler[0].data[9],DATA32);
SIGNAL(NTF03_2_S,vme.scaler[0].data[10],DATA32);
SIGNAL(NTF07_2_S,vme.scaler[0].data[11],DATA32);
SIGNAL(NTF08_1_S,vme.scaler[0].data[12],DATA32);
SIGNAL(NTF04_1_S,vme.scaler[0].data[13],DATA32);
SIGNAL(NTF08_2_S,vme.scaler[0].data[14],DATA32);
SIGNAL(NTF04_2_S,vme.scaler[0].data[15],DATA32);
SIGNAL(NTF09_1_S,vme.scaler[0].data[16],DATA32);
SIGNAL(NTF13_1_S,vme.scaler[0].data[17],DATA32);
SIGNAL(NTF09_2_S,vme.scaler[0].data[18],DATA32);
SIGNAL(NTF13_2_S,vme.scaler[0].data[19],DATA32);
SIGNAL(NTF14_1_S,vme.scaler[0].data[20],DATA32);
SIGNAL(NTF10_1_S,vme.scaler[0].data[21],DATA32);
SIGNAL(NTF14_2_S,vme.scaler[0].data[22],DATA32);
SIGNAL(NTF10_2_S,vme.scaler[0].data[23],DATA32);
SIGNAL(NTF11_1_S,vme.scaler[0].data[24],DATA32);
SIGNAL(NTF15_1_S,vme.scaler[0].data[25],DATA32);
SIGNAL(NTF11_2_S,vme.scaler[0].data[26],DATA32);
SIGNAL(NTF15_2_S,vme.scaler[0].data[27],DATA32);
SIGNAL(NTF16_1_S,vme.scaler[0].data[28],DATA32);
SIGNAL(NTF12_1_S,vme.scaler[0].data[29],DATA32);
SIGNAL(NTF16_2_S,vme.scaler[0].data[30],DATA32);
SIGNAL(NTF12_2_S,vme.scaler[0].data[31],DATA32);

SIGNAL(MASTER_ACCEPT,vme.scaler[1].data[0],DATA32);
SIGNAL(MASTER_WANTED,vme.scaler[1].data[1],DATA32);

SIGNAL(ZERO_SUPPRESS: N1_1); 
SIGNAL(ZERO_SUPPRESS: V1_1); 
SIGNAL(ZERO_SUPPRESS: TFW1); 
SIGNAL(ZERO_SUPPRESS: NTF1); 
SIGNAL(ZERO_SUPPRESS: XB1); 
SIGNAL(ZERO_SUPPRESS: CS1);
SIGNAL(ZERO_SUPPRESS: CV1);
SIGNAL(ZERO_SUPPRESS: GFI1_1);
SIGNAL(ZERO_SUPPRESS: FGR1_1);

