// -*- C++ -*-

//          Specification file for FRS experiment S341
//
//(Matthias Holl, Dr. Haik Simon, Vasily Volkov, 31 October 2008) 
//

//#include "spec/land_std_vme.spec"

// Include specification files for the FRS electronic modules
#include "spec/frs_vme_caen_v259.spec"
#include "spec/frs_vme_caen_v830.spec"
#include "spec/frs_vme_caen_v775.spec"

// Dummy modules. Used for processing the 'Invalid data' header word.
#include "spec/frs_empty_32bit_word_v830.spec"
#include "spec/frs_empty_32bit_word_v775.spec"


// Our event consists of two subevents which are two VME crates that were used
// The subevents are separated by the VME processor ID 
EVENT
{
  vme0 = FRS_CRATE(type=10,subtype=1,procid=10);
  vme1 = TPC_CRATE(type=10,subtype=1,procid=20);
}

SUBEVENT(FRS_CRATE)
{
  // header = LAND_STD_VME(); //To be changed to FRS_STD_VME for the beautification reasons

  select several
    {
      scaler0 = VME_CAEN_V820_FRS(geom=6);
      pattern = VME_CAEN_V259_FRS(geom=5);     
      tdc0 = VME_CAEN_V775_FRS(geom=8);
      tdc1 = VME_CAEN_V775_FRS(geom=9);
      qdc0 = VME_CAEN_V792_FRS(geom=11);
      adc0 = VME_CAEN_V785_FRS(geom=13);  


      
           
      dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=6);
      dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
      dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
      dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=11);
      dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=13);
    }
}

SUBEVENT(TPC_CRATE)
{
  // header = LAND_STD_VME();

  select several
    {
      
      tdc0 = VME_CAEN_V775_FRS(geom=8);
      tdc1 = VME_CAEN_V775_FRS(geom=9);
      adc0 = VME_CAEN_V785_FRS(geom=16);
      adc1 = VME_CAEN_V785_FRS(geom=17); 
      scaler0 = VME_CAEN_V830_FRS(geom=5);
      dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=5);
      dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
      dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
      dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=16);
      dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=17);

    }
}

// Signals that are read out and written to the PAW ntuple





//MWPC anodes


SIGNAL(MW_1_AN,vme0.tdc0.data[1],(DATA12_OVERFLOW,float));
SIGNAL(MW_2_AN,vme0.tdc0.data[2],(DATA12_OVERFLOW,float));

//MWPC cathodes

SIGNAL(MW_1_XR,vme0.tdc0.data[24],(DATA12_OVERFLOW,float));
SIGNAL(MW_1_XL,vme0.tdc0.data[25],(DATA12_OVERFLOW,float));
SIGNAL(MW_1_YU,vme0.tdc0.data[26],(DATA12_OVERFLOW,float));
SIGNAL(MW_1_YD,vme0.tdc0.data[27],(DATA12_OVERFLOW,float));
SIGNAL(MW_2_XR,vme0.tdc0.data[28],(DATA12_OVERFLOW,float));
SIGNAL(MW_2_XL,vme0.tdc0.data[29],(DATA12_OVERFLOW,float));
SIGNAL(MW_2_YU,vme0.tdc0.data[30],(DATA12_OVERFLOW,float));
SIGNAL(MW_2_YD,vme0.tdc0.data[31],(DATA12_OVERFLOW,float));

//Pattern unit

SIGNAL(PATTERN, vme0.pattern.data[0],DATA32);
SIGNAL(MULTIP, vme0.pattern.data[1],DATA32);

//FRS crate scaler

SIGNAL(SCALER_1_1, vme0.scaler0.data[0],DATA32);
SIGNAL(SCALER_1_2, vme0.scaler0.data[1],DATA32);
SIGNAL(SCALER_1_3, vme0.scaler0.data[2],DATA32);
SIGNAL(SCALER_1_4, vme0.scaler0.data[3],DATA32);
SIGNAL(SCALER_1_5, vme0.scaler0.data[4],DATA32);
SIGNAL(SCALER_1_6, vme0.scaler0.data[5],DATA32);
SIGNAL(SCALER_1_7, vme0.scaler0.data[6],DATA32);
SIGNAL(SCALER_1_8, vme0.scaler0.data[7],DATA32);
SIGNAL(SCALER_1_9, vme0.scaler0.data[8],DATA32);
SIGNAL(SCALER_1_10, vme0.scaler0.data[9],DATA32);
SIGNAL(SCALER_1_11, vme0.scaler0.data[10],DATA32);
SIGNAL(SCALER_1_12, vme0.scaler0.data[11],DATA32);
SIGNAL(SCALER_1_13, vme0.scaler0.data[12],DATA32);
SIGNAL(SCALER_1_14, vme0.scaler0.data[13],DATA32);
SIGNAL(SCALER_1_15, vme0.scaler0.data[14],DATA32);
SIGNAL(SCALER_1_16, vme0.scaler0.data[15],DATA32);
SIGNAL(SCALER_1_17, vme0.scaler0.data[16],DATA32);
SIGNAL(SCALER_1_18, vme0.scaler0.data[17],DATA32);


SIGNAL(SCALER_2_1, vme1.scaler0.data[0],DATA32);
SIGNAL(SCALER_2_2, vme1.scaler0.data[1],DATA32);
SIGNAL(SCALER_2_3, vme1.scaler0.data[2],DATA32);
SIGNAL(SCALER_2_4, vme1.scaler0.data[3],DATA32);
SIGNAL(SCALER_2_5, vme1.scaler0.data[4],DATA32);
SIGNAL(SCALER_2_6, vme1.scaler0.data[5],DATA32);
SIGNAL(SCALER_2_7, vme1.scaler0.data[6],DATA32);
SIGNAL(SCALER_2_8, vme1.scaler0.data[7],DATA32);


//Scintillators left-right

SIGNAL(SC_1_DT, vme0.adc0.data[0],(DATA12_OVERFLOW,float));
SIGNAL(SC_2_DT, vme0.adc0.data[4],(DATA12_OVERFLOW,float));
SIGNAL(SC_3_DT, vme0.adc0.data[7],(DATA12_OVERFLOW,float));

//TOF S2-S3

SIGNAL(TOF_L, vme0.adc0.data[5],(DATA12_OVERFLOW,float));
SIGNAL(TOF_R, vme0.adc0.data[6],(DATA12_OVERFLOW,float));

//TPC anodes

SIGNAL(TPC_3_A_1, vme1.adc0.data[8],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_A_2, vme1.adc0.data[9],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_A_3, vme1.adc0.data[10],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_A_4, vme1.adc0.data[11],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_AL_1, vme1.adc0.data[12],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_AR_1, vme1.adc0.data[13],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_AL_2, vme1.adc0.data[14],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_AR_2, vme1.adc0.data[15],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_A_1, vme1.adc0.data[16],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_A_2, vme1.adc0.data[17],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_A_3, vme1.adc0.data[18],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_A_4, vme1.adc0.data[19],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_AL_1, vme1.adc0.data[20],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_AR_1, vme1.adc0.data[21],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_AL_2, vme1.adc0.data[22],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_AR_2, vme1.adc0.data[23],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_A_1, vme1.adc0.data[24],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_A_2, vme1.adc0.data[25],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_A_3, vme1.adc0.data[26],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_A_4, vme1.adc0.data[27],(DATA12_OVERFLOW,float));
SIGNAL(TPC2_AL_1, vme1.adc0.data[28],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_AR_1, vme1.adc0.data[29],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_AL_2, vme1.adc0.data[30],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_AR_2, vme1.adc0.data[31],(DATA12_OVERFLOW,float));

//TPC cathodes

SIGNAL(TPC_3_DT_1, vme1.tdc0.data[8],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_DT_2, vme1.tdc0.data[9],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_DT_3, vme1.tdc0.data[10],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_DT_4, vme1.tdc0.data[11],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_LT_1, vme1.tdc0.data[12],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_RT_1, vme1.tdc0.data[13],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_LT_2, vme1.tdc0.data[14],(DATA12_OVERFLOW,float));
SIGNAL(TPC_3_RT_2, vme1.tdc0.data[15],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_DT_1, vme1.tdc0.data[16],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_DT_2, vme1.tdc0.data[17],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_DT_3, vme1.tdc0.data[18],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_DT_4, vme1.tdc0.data[19],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_LT_1, vme1.tdc0.data[20],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_RT_1, vme1.tdc0.data[21],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_LT_2, vme1.tdc0.data[22],(DATA12_OVERFLOW,float));
SIGNAL(TPC_1_RT_2, vme1.tdc0.data[23],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_DT_1, vme1.tdc0.data[24],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_DT_2, vme1.tdc0.data[25],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_DT_3, vme1.tdc0.data[26],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_DT_4, vme1.tdc0.data[27],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_LT_1, vme1.tdc0.data[28],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_RT_1, vme1.tdc0.data[29],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_LT_2, vme1.tdc0.data[30],(DATA12_OVERFLOW,float));
SIGNAL(TPC_2_RT_2, vme1.tdc0.data[31],(DATA12_OVERFLOW,float));

//Scintillators dE, QDC signals

SIGNAL(SC_1_DEL,vme0.qdc0.data[0],(DATA12_OVERFLOW,float));
SIGNAL(SC_1_DER,vme0.qdc0.data[1],(DATA12_OVERFLOW,float));
SIGNAL(SC_3_DEL,vme0.qdc0.data[2],(DATA12_OVERFLOW,float));
SIGNAL(SC_3_DER,vme0.qdc0.data[3],(DATA12_OVERFLOW,float));
SIGNAL(SC_2_DEL,vme0.qdc0.data[4],(DATA12_OVERFLOW,float));
SIGNAL(SC_2_DER,vme0.qdc0.data[5],(DATA12_OVERFLOW,float));

