// R3B MUSIC has 8 anodes readout by MDPP16 (multi-hit ADC / TDC)

SIGNAL(ZERO_SUPPRESS_MULTI(10):MUSIC1_E1);
SIGNAL(ZERO_SUPPRESS_MULTI(10):MUSIC1_T1);
SIGNAL(ZERO_SUPPRESS_MULTI(10):MUSIC1_TREF1);

// ENERGY SIGNALS
SIGNAL(MUSIC1_E1,sofia_trim.data.mdpp.data[0],DATA16_OVERFLOW);
SIGNAL(MUSIC1_E2,sofia_trim.data.mdpp.data[1],DATA16_OVERFLOW);
SIGNAL(MUSIC1_E3,sofia_trim.data.mdpp.data[2],DATA16_OVERFLOW);
SIGNAL(MUSIC1_E4,sofia_trim.data.mdpp.data[3],DATA16_OVERFLOW);
SIGNAL(MUSIC1_E5,sofia_trim.data.mdpp.data[4],DATA16_OVERFLOW);
SIGNAL(MUSIC1_E6,sofia_trim.data.mdpp.data[5],DATA16_OVERFLOW);
SIGNAL(MUSIC1_E7,sofia_trim.data.mdpp.data[6],DATA16_OVERFLOW);
SIGNAL(MUSIC1_E8,sofia_trim.data.mdpp.data[7],DATA16_OVERFLOW);

// TIME SIGNALS
SIGNAL(MUSIC1_T1,sofia_trim.data.mdpp.data[16],DATA16_OVERFLOW);
SIGNAL(MUSIC1_T2,sofia_trim.data.mdpp.data[17],DATA16_OVERFLOW);
SIGNAL(MUSIC1_T3,sofia_trim.data.mdpp.data[18],DATA16_OVERFLOW);
SIGNAL(MUSIC1_T4,sofia_trim.data.mdpp.data[19],DATA16_OVERFLOW);
SIGNAL(MUSIC1_T5,sofia_trim.data.mdpp.data[20],DATA16_OVERFLOW);
SIGNAL(MUSIC1_T6,sofia_trim.data.mdpp.data[21],DATA16_OVERFLOW);
SIGNAL(MUSIC1_T7,sofia_trim.data.mdpp.data[22],DATA16_OVERFLOW);
SIGNAL(MUSIC1_T8,sofia_trim.data.mdpp.data[23],DATA16_OVERFLOW);

// REFERENCE TIME SIGNAL
SIGNAL(MUSIC1_TREF1,sofia_trim.data.mdpp.data[32],DATA16_OVERFLOW);
