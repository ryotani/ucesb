// Twin MUSIC has 2 anode planes (LEFT/RIGHT) of 16 anodes
// each anode is segmented (down/up)
// therefore the twin music is segmented into 4 sections:
//    * SECTION 1 : RIGHT DOWN
//    * SECTION 2 : RIGHT UP
//    * SECTION 3 : LEFT DOWN
//    * SECTION 4 : LEFT UP
// in the eng run, only one quarter will be illuminated and cabled

SIGNAL(ZERO_SUPPRESS_MULTI(100):SOFTWIM_S1E1);
SIGNAL(ZERO_SUPPRESS_MULTI(100):SOFTWIM_S1T1);
SIGNAL(ZERO_SUPPRESS_MULTI(100):SOFTWIM_S1TREF1);
SIGNAL(ZERO_SUPPRESS_MULTI(100):SOFTWIM_S1TTRIG1);

// ENERGY - SECTION 1
SIGNAL(SOFTWIM_S1E1,sofia_twim.data.mdpp16[0].adc[0],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E2,sofia_twim.data.mdpp16[0].adc[2],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E3,sofia_twim.data.mdpp16[0].adc[4],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E4,sofia_twim.data.mdpp16[0].adc[6],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E5,sofia_twim.data.mdpp16[0].adc[8],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E6,sofia_twim.data.mdpp16[0].adc[10],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E7,sofia_twim.data.mdpp16[0].adc[12],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E8,sofia_twim.data.mdpp16[0].adc[14],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E9,sofia_twim.data.mdpp16[1].adc[0],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E10,sofia_twim.data.mdpp16[1].adc[2],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E11,sofia_twim.data.mdpp16[1].adc[4],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E12,sofia_twim.data.mdpp16[1].adc[6],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E13,sofia_twim.data.mdpp16[1].adc[8],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E14,sofia_twim.data.mdpp16[1].adc[10],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E15,sofia_twim.data.mdpp16[1].adc[12],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1E16,sofia_twim.data.mdpp16[1].adc[14],DATA16_OVERFLOW);

// TIME - SECTION 1
SIGNAL(SOFTWIM_S1T1,sofia_twim.data.mdpp16[0].tdc[0],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T2,sofia_twim.data.mdpp16[0].tdc[2],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T3,sofia_twim.data.mdpp16[0].tdc[4],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T4,sofia_twim.data.mdpp16[0].tdc[6],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T5,sofia_twim.data.mdpp16[0].tdc[8],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T6,sofia_twim.data.mdpp16[0].tdc[10],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T7,sofia_twim.data.mdpp16[0].tdc[12],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T8,sofia_twim.data.mdpp16[0].tdc[14],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T9,sofia_twim.data.mdpp16[1].tdc[0],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T10,sofia_twim.data.mdpp16[1].tdc[2],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T11,sofia_twim.data.mdpp16[1].tdc[4],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T12,sofia_twim.data.mdpp16[1].tdc[6],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T13,sofia_twim.data.mdpp16[1].tdc[8],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T14,sofia_twim.data.mdpp16[1].tdc[10],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T15,sofia_twim.data.mdpp16[1].tdc[12],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1T16,sofia_twim.data.mdpp16[1].tdc[14],DATA16_OVERFLOW);

// TIME REFERENCE - SECTION 1
SIGNAL(SOFTWIM_S1TREF1,sofia_twim.data.mdpp16[0].trig_tdc[0],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1TREF2,sofia_twim.data.mdpp16[1].trig_tdc[0],DATA16_OVERFLOW);

// TRIGGER TIME - SECTION 1
SIGNAL(SOFTWIM_S1TTRIG1,sofia_twim.data.mdpp16[0].trig_tdc[1],DATA16_OVERFLOW);
SIGNAL(SOFTWIM_S1TTRIG2,sofia_twim.data.mdpp16[1].trig_tdc[1],DATA16_OVERFLOW);

