// SCALERS at Cave C :
//   * one scaler for the detectors upstream GLAD
//   * two scalers dedicated to the ToF wall


// 1 SCALER UPSTREAM GLAD : SOFSCALERS1
//  * [0]: SofSci1 LEFT
//  * [1]: SofSci1 RIGHT
//  * [2]: SofSci1 REFERENCE (MASTER START)
//  * [3]: OR (SofMwpc0, SofMwpc1, SofMwpc2)
//  * [4]: OR (Anodes R3B-Music)
//  * [5]: OR (Anodes 1..8 Twin-Music)
//  * [6]: OR (Anodes 9..16 Twin-Music)

//SIGNAL(ZERO_SUPPRESS:SOFSCALERS_UPSTREAM1);

SIGNAL(SOFSCALERS_UPSTREAM1,sofia_twim.data.sis3820scaler.data[0],DATA32);
SIGNAL(SOFSCALERS_UPSTREAM2,sofia_twim.data.sis3820scaler.data[1],DATA32);
SIGNAL(SOFSCALERS_UPSTREAM3,sofia_twim.data.sis3820scaler.data[2],DATA32);
SIGNAL(SOFSCALERS_UPSTREAM4,sofia_twim.data.sis3820scaler.data[3],DATA32);
SIGNAL(SOFSCALERS_UPSTREAM5,sofia_twim.data.sis3820scaler.data[4],DATA32);
SIGNAL(SOFSCALERS_UPSTREAM6,sofia_twim.data.sis3820scaler.data[5],DATA32);
SIGNAL(SOFSCALERS_UPSTREAM7,sofia_twim.data.sis3820scaler.data[6],DATA32);

// 2 SCALERS SOFTOFW GLAD : SOFSCALERS
//  * [2*i]   : Pi PMT-UP
//  * [2*i+1] : Pi PMT-DOWN

//SIGNAL(ZERO_SUPPRESS:SOFSCALERS_TOFW1);

SIGNAL(SOFSCALERS_TOFW1,sofia_tof.data.sis3820scaler[0].data[0],DATA32);
SIGNAL(SOFSCALERS_TOFW2,sofia_tof.data.sis3820scaler[0].data[1],DATA32);
SIGNAL(SOFSCALERS_TOFW3,sofia_tof.data.sis3820scaler[0].data[2],DATA32);
SIGNAL(SOFSCALERS_TOFW4,sofia_tof.data.sis3820scaler[0].data[3],DATA32);
SIGNAL(SOFSCALERS_TOFW5,sofia_tof.data.sis3820scaler[0].data[4],DATA32);
SIGNAL(SOFSCALERS_TOFW6,sofia_tof.data.sis3820scaler[0].data[5],DATA32);
SIGNAL(SOFSCALERS_TOFW7,sofia_tof.data.sis3820scaler[0].data[6],DATA32);
SIGNAL(SOFSCALERS_TOFW8,sofia_tof.data.sis3820scaler[0].data[7],DATA32);
SIGNAL(SOFSCALERS_TOFW9,sofia_tof.data.sis3820scaler[0].data[8],DATA32);
SIGNAL(SOFSCALERS_TOFW10,sofia_tof.data.sis3820scaler[0].data[9],DATA32);
SIGNAL(SOFSCALERS_TOFW11,sofia_tof.data.sis3820scaler[0].data[10],DATA32);
SIGNAL(SOFSCALERS_TOFW12,sofia_tof.data.sis3820scaler[0].data[11],DATA32);
SIGNAL(SOFSCALERS_TOFW13,sofia_tof.data.sis3820scaler[0].data[12],DATA32);
SIGNAL(SOFSCALERS_TOFW14,sofia_tof.data.sis3820scaler[0].data[13],DATA32);
SIGNAL(SOFSCALERS_TOFW15,sofia_tof.data.sis3820scaler[0].data[14],DATA32);
SIGNAL(SOFSCALERS_TOFW16,sofia_tof.data.sis3820scaler[0].data[15],DATA32);
SIGNAL(SOFSCALERS_TOFW17,sofia_tof.data.sis3820scaler[0].data[16],DATA32);
SIGNAL(SOFSCALERS_TOFW18,sofia_tof.data.sis3820scaler[0].data[17],DATA32);
SIGNAL(SOFSCALERS_TOFW19,sofia_tof.data.sis3820scaler[0].data[18],DATA32);
SIGNAL(SOFSCALERS_TOFW20,sofia_tof.data.sis3820scaler[0].data[19],DATA32);
SIGNAL(SOFSCALERS_TOFW21,sofia_tof.data.sis3820scaler[0].data[20],DATA32);
SIGNAL(SOFSCALERS_TOFW22,sofia_tof.data.sis3820scaler[0].data[21],DATA32);
SIGNAL(SOFSCALERS_TOFW23,sofia_tof.data.sis3820scaler[0].data[22],DATA32);
SIGNAL(SOFSCALERS_TOFW24,sofia_tof.data.sis3820scaler[0].data[23],DATA32);
SIGNAL(SOFSCALERS_TOFW25,sofia_tof.data.sis3820scaler[0].data[24],DATA32);
SIGNAL(SOFSCALERS_TOFW26,sofia_tof.data.sis3820scaler[0].data[25],DATA32);
SIGNAL(SOFSCALERS_TOFW27,sofia_tof.data.sis3820scaler[0].data[26],DATA32);
SIGNAL(SOFSCALERS_TOFW28,sofia_tof.data.sis3820scaler[0].data[27],DATA32);
SIGNAL(SOFSCALERS_TOFW29,sofia_tof.data.sis3820scaler[0].data[28],DATA32);
SIGNAL(SOFSCALERS_TOFW30,sofia_tof.data.sis3820scaler[0].data[29],DATA32);
SIGNAL(SOFSCALERS_TOFW31,sofia_tof.data.sis3820scaler[0].data[30],DATA32);
SIGNAL(SOFSCALERS_TOFW32,sofia_tof.data.sis3820scaler[0].data[31],DATA32);
SIGNAL(SOFSCALERS_TOFW33,sofia_tof.data.sis3820scaler[1].data[0],DATA32);
SIGNAL(SOFSCALERS_TOFW34,sofia_tof.data.sis3820scaler[1].data[1],DATA32);
SIGNAL(SOFSCALERS_TOFW35,sofia_tof.data.sis3820scaler[1].data[2],DATA32);
SIGNAL(SOFSCALERS_TOFW36,sofia_tof.data.sis3820scaler[1].data[3],DATA32);
SIGNAL(SOFSCALERS_TOFW37,sofia_tof.data.sis3820scaler[1].data[4],DATA32);
SIGNAL(SOFSCALERS_TOFW38,sofia_tof.data.sis3820scaler[1].data[5],DATA32);
SIGNAL(SOFSCALERS_TOFW39,sofia_tof.data.sis3820scaler[1].data[6],DATA32);
SIGNAL(SOFSCALERS_TOFW40,sofia_tof.data.sis3820scaler[1].data[7],DATA32);
SIGNAL(SOFSCALERS_TOFW41,sofia_tof.data.sis3820scaler[1].data[8],DATA32);
SIGNAL(SOFSCALERS_TOFW42,sofia_tof.data.sis3820scaler[1].data[9],DATA32);
SIGNAL(SOFSCALERS_TOFW43,sofia_tof.data.sis3820scaler[1].data[10],DATA32);
SIGNAL(SOFSCALERS_TOFW44,sofia_tof.data.sis3820scaler[1].data[11],DATA32);
SIGNAL(SOFSCALERS_TOFW45,sofia_tof.data.sis3820scaler[1].data[12],DATA32);
SIGNAL(SOFSCALERS_TOFW46,sofia_tof.data.sis3820scaler[1].data[13],DATA32);
SIGNAL(SOFSCALERS_TOFW47,sofia_tof.data.sis3820scaler[1].data[14],DATA32);
SIGNAL(SOFSCALERS_TOFW48,sofia_tof.data.sis3820scaler[1].data[15],DATA32);
SIGNAL(SOFSCALERS_TOFW49,sofia_tof.data.sis3820scaler[1].data[16],DATA32);
SIGNAL(SOFSCALERS_TOFW50,sofia_tof.data.sis3820scaler[1].data[17],DATA32);
SIGNAL(SOFSCALERS_TOFW51,sofia_tof.data.sis3820scaler[1].data[18],DATA32);
SIGNAL(SOFSCALERS_TOFW52,sofia_tof.data.sis3820scaler[1].data[19],DATA32);
SIGNAL(SOFSCALERS_TOFW53,sofia_tof.data.sis3820scaler[1].data[20],DATA32);
SIGNAL(SOFSCALERS_TOFW54,sofia_tof.data.sis3820scaler[1].data[21],DATA32);
SIGNAL(SOFSCALERS_TOFW55,sofia_tof.data.sis3820scaler[1].data[22],DATA32);
SIGNAL(SOFSCALERS_TOFW56,sofia_tof.data.sis3820scaler[1].data[23],DATA32);


