// R3B MUSIC has 8 anodes readout by MDPP16 (multi-hit ADC / TDC)

SIGNAL(ZERO_SUPPRESS_MULTI(100):MUSIC_E_1);
SIGNAL(ZERO_SUPPRESS_MULTI(100):MUSIC_T_1);
SIGNAL(ZERO_SUPPRESS_MULTI(100):MUSIC_TREF_1);

// ENERGY SIGNALS
SIGNAL(MUSIC_E_1,sofia_trim.data.mdpp.data[0],DATA16_OVERFLOW);
SIGNAL(MUSIC_E_2,sofia_trim.data.mdpp.data[1],DATA16_OVERFLOW);
SIGNAL(MUSIC_E_3,sofia_trim.data.mdpp.data[2],DATA16_OVERFLOW);
SIGNAL(MUSIC_E_4,sofia_trim.data.mdpp.data[3],DATA16_OVERFLOW);
SIGNAL(MUSIC_E_5,sofia_trim.data.mdpp.data[4],DATA16_OVERFLOW);
SIGNAL(MUSIC_E_6,sofia_trim.data.mdpp.data[5],DATA16_OVERFLOW);
SIGNAL(MUSIC_E_7,sofia_trim.data.mdpp.data[6],DATA16_OVERFLOW);
SIGNAL(MUSIC_E_8,sofia_trim.data.mdpp.data[7],DATA16_OVERFLOW);

// TIME SIGNALS
SIGNAL(MUSIC_T_1,sofia_trim.data.mdpp.data[16],DATA16_OVERFLOW);
SIGNAL(MUSIC_T_2,sofia_trim.data.mdpp.data[17],DATA16_OVERFLOW);
SIGNAL(MUSIC_T_3,sofia_trim.data.mdpp.data[18],DATA16_OVERFLOW);
SIGNAL(MUSIC_T_4,sofia_trim.data.mdpp.data[19],DATA16_OVERFLOW);
SIGNAL(MUSIC_T_5,sofia_trim.data.mdpp.data[20],DATA16_OVERFLOW);
SIGNAL(MUSIC_T_6,sofia_trim.data.mdpp.data[21],DATA16_OVERFLOW);
SIGNAL(MUSIC_T_7,sofia_trim.data.mdpp.data[22],DATA16_OVERFLOW);
SIGNAL(MUSIC_T_8,sofia_trim.data.mdpp.data[23],DATA16_OVERFLOW);

// REFERENCE TIME SIGNAL
//SIGNAL(MUSIC1_TREF32,sofia_trim.data.mdpp.data[],DATA16_OVERFLOW);

SIGNAL(MUSIC_TREF_1,sofia_trim.data.mdpp.data[32],DATA16_OVERFLOW);
SIGNAL(MUSIC_TREF_2,sofia_trim.data.mdpp.data[33],DATA16_OVERFLOW);
