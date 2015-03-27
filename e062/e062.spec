// -*- C++ -*-
 
//#include "spec/midas32.spec"
#include "spec/midas.spec"

SUBEVENT(EV_EVENT)
{
  select several
    {
      adc[0] = MIDAS_CAEN_V785(group=0x01);
      adc[1] = MIDAS_CAEN_V785(group=0x02);
      adc[2] = MIDAS_CAEN_V785(group=0x03);

      tdc[0] = MIDAS_CAEN_V1190(group=24/*24*/);

      scaler = MIDAS_CAEN_V830(group=31); 
    }
}


EVENT
{
  ev = EV_EVENT();
}


SIGNAL(ADC1_1, ev.adc[0].data[0],
       ADC1_32,ev.adc[0].data[31],DATA12);
SIGNAL(ADC2_1, ev.adc[1].data[0],
       ADC2_32,ev.adc[1].data[31],DATA12);
SIGNAL(ADC3_1, ev.adc[2].data[0],
       ADC3_32,ev.adc[2].data[31],DATA12);


SIGNAL(TDC_1  ,ev.tdc[0].data[0],
       TDC_128,ev.tdc[0].data[127],DATA16);


SIGNAL(SCA_1, ev.scaler.data[0],
       SCA_32,ev.scaler.data[31], DATA32);

SIGNAL(ZERO_SUPPRESS: ADC1_1);
SIGNAL(ZERO_SUPPRESS: TDC1);
SIGNAL(ZERO_SUPPRESS: SCA1);

