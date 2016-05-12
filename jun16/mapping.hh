// define multi hit arrays for LOS:
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TC1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS02_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS02_TC1);

// LOS fine (TDC) values.
SIGNAL(LOS01_TF1, los.vftx2.time_fine[0], DATA12);
SIGNAL(LOS01_TF2, los.vftx2.time_fine[1], DATA12);
SIGNAL(LOS01_TF3, los.vftx2.time_fine[2], DATA12);
SIGNAL(LOS01_TF4, los.vftx2.time_fine[3], DATA12);

// LOS coarse (clock) values.
SIGNAL(LOS01_TC1, los.vftx2.time_coarse[0], DATA16);
SIGNAL(LOS01_TC2, los.vftx2.time_coarse[1], DATA16);
SIGNAL(LOS01_TC3, los.vftx2.time_coarse[2], DATA16);
SIGNAL(LOS01_TC4, los.vftx2.time_coarse[3], DATA16);

// test:
SIGNAL(LOS01_TF5,  los.vftx2.time_fine[4],   DATA12);
SIGNAL(LOS01_TC5,  los.vftx2.time_coarse[4], DATA16);




/* TOFD can deliver multi hit but is not yet implemented as multi hit. ToDo!
 * 
 * 
 * convenction from Neuland:
 * tcl time coarse leading
 * tfl time fine leading
 * tct time coarse leading
 * tft time fine leading
 */

SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T1_TFL1); // Plane 1, Tube 1, fine time leading, all bars
SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T2_TFL1); // Plane 1, Tube 2, fine time leading, all bars
SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T1_TFT1); // Plane 1, Tube 1, fine time trailing, all bars
SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T2_TFT1); // Plane 1, Tube 2, fine time trailing, all bars

SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T1_TCL1); // Plane 1, Tube 1, coarse time leading, all bars
SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T2_TCL1); // Plane 1, Tube 2, coarse time leading, all bars
SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T1_TCT1); // Plane 1, Tube 1, coarse time trailing, all bars
SIGNAL(ZERO_SUPPRESS_MULTI(10): TOFD_P1T2_TCT1); // Plane 1, Tube 2, coarse time trailing, all bars

// paddle #1 (fine time only)
SIGNAL(TOFD_P1T1_TFL1,  tofd_vme.vftx2_1.time_fine[0],   DATA12);
SIGNAL(TOFD_P1T1_TFT1,  tofd_vme.vftx2_1.time_fine[1],   DATA12);
SIGNAL(TOFD_P1T2_TFL1,  tofd_vme.vftx2_1.time_fine[2],   DATA12);
SIGNAL(TOFD_P1T2_TFT1,  tofd_vme.vftx2_1.time_fine[3],   DATA12);

// paddle #2 ...
SIGNAL(TOFD_P1T1_TFL2,  tofd_vme.vftx2_1.time_fine[4],   DATA12);
SIGNAL(TOFD_P1T1_TFT2,  tofd_vme.vftx2_1.time_fine[5],   DATA12);
SIGNAL(TOFD_P1T2_TFL2,  tofd_vme.vftx2_1.time_fine[6],   DATA12);
SIGNAL(TOFD_P1T2_TFT2,  tofd_vme.vftx2_1.time_fine[7],   DATA12);

SIGNAL(TOFD_P1T1_TFL3,  tofd_vme.vftx2_1.time_fine[8],   DATA12);
SIGNAL(TOFD_P1T1_TFT3,  tofd_vme.vftx2_1.time_fine[9],   DATA12);
SIGNAL(TOFD_P1T2_TFL3,  tofd_vme.vftx2_1.time_fine[10],  DATA12);
SIGNAL(TOFD_P1T2_TFT3,  tofd_vme.vftx2_1.time_fine[11],  DATA12);

SIGNAL(TOFD_P1T1_TFL4,  tofd_vme.vftx2_1.time_fine[12],  DATA12);
SIGNAL(TOFD_P1T1_TFT4,  tofd_vme.vftx2_1.time_fine[13],  DATA12);
SIGNAL(TOFD_P1T2_TFL4,  tofd_vme.vftx2_1.time_fine[14],  DATA12);
SIGNAL(TOFD_P1T2_TFT4,  tofd_vme.vftx2_1.time_fine[15],  DATA12);


// next vftx
SIGNAL(TOFD_P1T1_TFL5,  tofd_vme.vftx2_2.time_fine[0],   DATA12);
SIGNAL(TOFD_P1T1_TFT5,  tofd_vme.vftx2_2.time_fine[1],   DATA12);
SIGNAL(TOFD_P1T2_TFL5,  tofd_vme.vftx2_2.time_fine[2],   DATA12);
SIGNAL(TOFD_P1T2_TFT5,  tofd_vme.vftx2_2.time_fine[3],   DATA12);

SIGNAL(TOFD_P1T1_TFL6,  tofd_vme.vftx2_2.time_fine[4],   DATA12);
SIGNAL(TOFD_P1T1_TFT6,  tofd_vme.vftx2_2.time_fine[5],   DATA12);
SIGNAL(TOFD_P1T2_TFL6,  tofd_vme.vftx2_2.time_fine[6],   DATA12);
SIGNAL(TOFD_P1T2_TFT6,  tofd_vme.vftx2_2.time_fine[7],   DATA12);

SIGNAL(TOFD_P2T1_TFL1,  tofd_vme.vftx2_2.time_fine[8],   DATA12);
SIGNAL(TOFD_P2T1_TFT1,  tofd_vme.vftx2_2.time_fine[9],   DATA12);
SIGNAL(TOFD_P2T2_TFL1,  tofd_vme.vftx2_2.time_fine[10],  DATA12);
SIGNAL(TOFD_P2T2_TFT1,  tofd_vme.vftx2_2.time_fine[11],  DATA12);

SIGNAL(TOFD_P2T1_TFL2,  tofd_vme.vftx2_2.time_fine[12],  DATA12);
SIGNAL(TOFD_P2T1_TFT2,  tofd_vme.vftx2_2.time_fine[13],  DATA12);
SIGNAL(TOFD_P2T2_TFL2,  tofd_vme.vftx2_2.time_fine[14],  DATA12);
SIGNAL(TOFD_P2T2_TFT2,  tofd_vme.vftx2_2.time_fine[15],  DATA12);

// next vftx
SIGNAL(TOFD_P2T1_TFL3,  tofd_vme.vftx2_3.time_fine[0],   DATA12);
SIGNAL(TOFD_P2T1_TFT3,  tofd_vme.vftx2_3.time_fine[1],   DATA12);
SIGNAL(TOFD_P2T2_TFL3,  tofd_vme.vftx2_3.time_fine[2],   DATA12);
SIGNAL(TOFD_P2T2_TFT3,  tofd_vme.vftx2_3.time_fine[3],   DATA12);

SIGNAL(TOFD_P2T1_TFL4,  tofd_vme.vftx2_3.time_fine[4],   DATA12);
SIGNAL(TOFD_P2T1_TFT4,  tofd_vme.vftx2_3.time_fine[5],   DATA12);
SIGNAL(TOFD_P2T2_TFL4,  tofd_vme.vftx2_3.time_fine[6],   DATA12);
SIGNAL(TOFD_P2T2_TFT4,  tofd_vme.vftx2_3.time_fine[7],   DATA12);

SIGNAL(TOFD_P2T1_TFL5,  tofd_vme.vftx2_3.time_fine[8],   DATA12);
SIGNAL(TOFD_P2T1_TFT5,  tofd_vme.vftx2_3.time_fine[9],   DATA12);
SIGNAL(TOFD_P2T2_TFL5,  tofd_vme.vftx2_3.time_fine[10],  DATA12);
SIGNAL(TOFD_P2T2_TFT5,  tofd_vme.vftx2_3.time_fine[11],  DATA12);

SIGNAL(TOFD_P2T1_TFL6,  tofd_vme.vftx2_3.time_fine[12],  DATA12);
SIGNAL(TOFD_P2T1_TFT6,  tofd_vme.vftx2_3.time_fine[13],  DATA12);
SIGNAL(TOFD_P2T2_TFL6,  tofd_vme.vftx2_3.time_fine[14],  DATA12);
SIGNAL(TOFD_P2T2_TFT6,  tofd_vme.vftx2_3.time_fine[15],  DATA12);




// Plane 3 via Tamex
SIGNAL(TOFD_P3T1_TFL1,  tofd_tamex.tamex_1.time_fine[0],   DATA12);
SIGNAL(TOFD_P3T1_TFT1,  tofd_tamex.tamex_1.time_fine[1],   DATA12);
SIGNAL(TOFD_P3T2_TFL1,  tofd_tamex.tamex_1.time_fine[2],   DATA12);
SIGNAL(TOFD_P3T2_TFT1,  tofd_tamex.tamex_1.time_fine[3],   DATA12);

SIGNAL(TOFD_P3T1_TFL2,  tofd_tamex.tamex_1.time_fine[4],   DATA12);
SIGNAL(TOFD_P3T1_TFT2,  tofd_tamex.tamex_1.time_fine[5],   DATA12);
SIGNAL(TOFD_P3T2_TFL2,  tofd_tamex.tamex_1.time_fine[6],   DATA12);
SIGNAL(TOFD_P3T2_TFT2,  tofd_tamex.tamex_1.time_fine[7],   DATA12);

SIGNAL(TOFD_P3T1_TFL3,  tofd_tamex.tamex_1.time_fine[8],   DATA12);
SIGNAL(TOFD_P3T1_TFT3,  tofd_tamex.tamex_1.time_fine[9],   DATA12);
SIGNAL(TOFD_P3T2_TFL3,  tofd_tamex.tamex_1.time_fine[10],  DATA12);
SIGNAL(TOFD_P3T2_TFT3,  tofd_tamex.tamex_1.time_fine[11],  DATA12);

SIGNAL(TOFD_P3T1_TFL4,  tofd_tamex.tamex_1.time_fine[12],  DATA12);
SIGNAL(TOFD_P3T1_TFT4,  tofd_tamex.tamex_1.time_fine[13],  DATA12);
SIGNAL(TOFD_P3T2_TFL4,  tofd_tamex.tamex_1.time_fine[14],  DATA12);
SIGNAL(TOFD_P3T2_TFT4,  tofd_tamex.tamex_1.time_fine[15],  DATA12);

SIGNAL(TOFD_P3T1_TFL5,  tofd_tamex.tamex_1.time_fine[16],   DATA12);
SIGNAL(TOFD_P3T1_TFT5,  tofd_tamex.tamex_1.time_fine[17],   DATA12);
SIGNAL(TOFD_P3T2_TFL5,  tofd_tamex.tamex_1.time_fine[18],   DATA12);
SIGNAL(TOFD_P3T2_TFT5,  tofd_tamex.tamex_1.time_fine[19],   DATA12);

SIGNAL(TOFD_P3T1_TFL6,  tofd_tamex.tamex_1.time_fine[20],   DATA12);
SIGNAL(TOFD_P3T1_TFT6,  tofd_tamex.tamex_1.time_fine[21],   DATA12);
SIGNAL(TOFD_P3T2_TFL6,  tofd_tamex.tamex_1.time_fine[22],   DATA12);
SIGNAL(TOFD_P3T2_TFT6,  tofd_tamex.tamex_1.time_fine[23],   DATA12);


// Plane 4
/*
SIGNAL(TOFD_P4T1_TFL1,  tofd_tamex.tamex_1.time_fine[8],   DATA12);
SIGNAL(TOFD_P4T1_TFT1,  tofd_tamex.tamex_1.time_fine[9],   DATA12);
SIGNAL(TOFD_P4T2_TFL1,  tofd_tamex.tamex_1.time_fine[10],  DATA12);
SIGNAL(TOFD_P4T2_TFT1,  tofd_tamex.tamex_1.time_fine[11],  DATA12);

SIGNAL(TOFD_P4T1_TFL2,  tofd_tamex.tamex_1.time_fine[12],  DATA12);
SIGNAL(TOFD_P4T1_TFT2,  tofd_tamex.tamex_1.time_fine[13],  DATA12);
SIGNAL(TOFD_P4T2_TFL2,  tofd_tamex.tamex_1.time_fine[14],  DATA12);
SIGNAL(TOFD_P4T2_TFT2,  tofd_tamex.tamex_1.time_fine[15],  DATA12);

SIGNAL(TOFD_P4T1_TFL3,  tofd_tamex.tamex_1.time_fine[0],   DATA12);
SIGNAL(TOFD_P4T1_TFT3,  tofd_tamex.tamex_1.time_fine[1],   DATA12);
SIGNAL(TOFD_P4T2_TFL3,  tofd_tamex.tamex_1.time_fine[2],   DATA12);
SIGNAL(TOFD_P4T2_TFT3,  tofd_tamex.tamex_1.time_fine[3],   DATA12);

SIGNAL(TOFD_P4T1_TFL4,  tofd_tamex.tamex_1.time_fine[4],   DATA12);
SIGNAL(TOFD_P4T1_TFT4,  tofd_tamex.tamex_1.time_fine[5],   DATA12);
SIGNAL(TOFD_P4T2_TFL4,  tofd_tamex.tamex_1.time_fine[6],   DATA12);
SIGNAL(TOFD_P4T2_TFT4,  tofd_tamex.tamex_1.time_fine[7],   DATA12);

SIGNAL(TOFD_P4T1_TFL5,  tofd_tamex.tamex_1.time_fine[8],   DATA12);
SIGNAL(TOFD_P4T1_TFT5,  tofd_tamex.tamex_1.time_fine[9],   DATA12);
SIGNAL(TOFD_P4T2_TFL5,  tofd_tamex.tamex_1.time_fine[10],  DATA12);
SIGNAL(TOFD_P4T2_TFT5,  tofd_tamex.tamex_1.time_fine[11],  DATA12);

SIGNAL(TOFD_P4T1_TFL6,  tofd_tamex.tamex_1.time_fine[12],  DATA12);
SIGNAL(TOFD_P4T1_TFT6,  tofd_tamex.tamex_1.time_fine[13],  DATA12);
SIGNAL(TOFD_P4T2_TFL6,  tofd_tamex.tamex_1.time_fine[14],  DATA12);
SIGNAL(TOFD_P4T2_TFT6,  tofd_tamex.tamex_1.time_fine[15],  DATA12);
*/





// now coarse times
// paddle #1
SIGNAL(TOFD_P1T1_TCL1,  tofd_vme.vftx2_1.time_coarse[0],   DATA16);
SIGNAL(TOFD_P1T1_TCT1,  tofd_vme.vftx2_1.time_coarse[1],   DATA16);
SIGNAL(TOFD_P1T2_TCL1,  tofd_vme.vftx2_1.time_coarse[2],   DATA16);
SIGNAL(TOFD_P1T2_TCT1,  tofd_vme.vftx2_1.time_coarse[3],   DATA16);

// paddle #2 ...
SIGNAL(TOFD_P1T1_TCL2,  tofd_vme.vftx2_1.time_coarse[4],   DATA16);
SIGNAL(TOFD_P1T1_TCT2,  tofd_vme.vftx2_1.time_coarse[5],   DATA16);
SIGNAL(TOFD_P1T2_TCL2,  tofd_vme.vftx2_1.time_coarse[6],   DATA16);
SIGNAL(TOFD_P1T2_TCT2,  tofd_vme.vftx2_1.time_coarse[7],   DATA16);

SIGNAL(TOFD_P1T1_TCL3,  tofd_vme.vftx2_1.time_coarse[8],   DATA16);
SIGNAL(TOFD_P1T1_TCT3,  tofd_vme.vftx2_1.time_coarse[9],   DATA16);
SIGNAL(TOFD_P1T2_TCL3,  tofd_vme.vftx2_1.time_coarse[10],  DATA16);
SIGNAL(TOFD_P1T2_TCT3,  tofd_vme.vftx2_1.time_coarse[11],  DATA16);

SIGNAL(TOFD_P1T1_TCL4,  tofd_vme.vftx2_1.time_coarse[12],  DATA16);
SIGNAL(TOFD_P1T1_TCT4,  tofd_vme.vftx2_1.time_coarse[13],  DATA16);
SIGNAL(TOFD_P1T2_TCL4,  tofd_vme.vftx2_1.time_coarse[14],  DATA16);
SIGNAL(TOFD_P1T2_TCT4,  tofd_vme.vftx2_1.time_coarse[15],  DATA16);

// next vftx
SIGNAL(TOFD_P1T1_TCL5,  tofd_vme.vftx2_2.time_coarse[0],   DATA16);
SIGNAL(TOFD_P1T1_TCT5,  tofd_vme.vftx2_2.time_coarse[1],   DATA16);
SIGNAL(TOFD_P1T2_TCL5,  tofd_vme.vftx2_2.time_coarse[2],   DATA16);
SIGNAL(TOFD_P1T2_TCT5,  tofd_vme.vftx2_2.time_coarse[3],   DATA16);

SIGNAL(TOFD_P1T1_TCL6,  tofd_vme.vftx2_2.time_coarse[4],   DATA16);
SIGNAL(TOFD_P1T1_TCT6,  tofd_vme.vftx2_2.time_coarse[5],   DATA16);
SIGNAL(TOFD_P1T2_TCL6,  tofd_vme.vftx2_2.time_coarse[6],   DATA16);
SIGNAL(TOFD_P1T2_TCT6,  tofd_vme.vftx2_2.time_coarse[7],   DATA16);

SIGNAL(TOFD_P2T1_TCL1,  tofd_vme.vftx2_2.time_coarse[8],   DATA16);
SIGNAL(TOFD_P2T1_TCT1,  tofd_vme.vftx2_2.time_coarse[9],   DATA16);
SIGNAL(TOFD_P2T2_TCL1,  tofd_vme.vftx2_2.time_coarse[10],  DATA16);
SIGNAL(TOFD_P2T2_TCT1,  tofd_vme.vftx2_2.time_coarse[11],  DATA16);

SIGNAL(TOFD_P2T1_TCL2,  tofd_vme.vftx2_2.time_coarse[12],  DATA16);
SIGNAL(TOFD_P2T1_TCT2,  tofd_vme.vftx2_2.time_coarse[13],  DATA16);
SIGNAL(TOFD_P2T2_TCL2,  tofd_vme.vftx2_2.time_coarse[14],  DATA16);
SIGNAL(TOFD_P2T2_TCT2,  tofd_vme.vftx2_2.time_coarse[15],  DATA16);

// next vftx
SIGNAL(TOFD_P2T1_TCL3,  tofd_vme.vftx2_3.time_coarse[0],   DATA16);
SIGNAL(TOFD_P2T1_TCT3,  tofd_vme.vftx2_3.time_coarse[1],   DATA16);
SIGNAL(TOFD_P2T2_TCL3,  tofd_vme.vftx2_3.time_coarse[2],   DATA16);
SIGNAL(TOFD_P2T2_TCT3,  tofd_vme.vftx2_3.time_coarse[3],   DATA16);

SIGNAL(TOFD_P2T1_TCL4,  tofd_vme.vftx2_3.time_coarse[4],   DATA16);
SIGNAL(TOFD_P2T1_TCT4,  tofd_vme.vftx2_3.time_coarse[5],   DATA16);
SIGNAL(TOFD_P2T2_TCL4,  tofd_vme.vftx2_3.time_coarse[6],   DATA16);
SIGNAL(TOFD_P2T2_TCT4,  tofd_vme.vftx2_3.time_coarse[7],   DATA16);

SIGNAL(TOFD_P2T1_TCL5,  tofd_vme.vftx2_3.time_coarse[8],   DATA16);
SIGNAL(TOFD_P2T1_TCT5,  tofd_vme.vftx2_3.time_coarse[9],   DATA16);
SIGNAL(TOFD_P2T2_TCL5,  tofd_vme.vftx2_3.time_coarse[10],  DATA16);
SIGNAL(TOFD_P2T2_TCT5,  tofd_vme.vftx2_3.time_coarse[11],  DATA16);

SIGNAL(TOFD_P2T1_TCL6,  tofd_vme.vftx2_3.time_coarse[12],  DATA16);
SIGNAL(TOFD_P2T1_TCT6,  tofd_vme.vftx2_3.time_coarse[13],  DATA16);
SIGNAL(TOFD_P2T2_TCL6,  tofd_vme.vftx2_3.time_coarse[14],  DATA16);
SIGNAL(TOFD_P2T2_TCT6,  tofd_vme.vftx2_3.time_coarse[15],  DATA16);

// Now Tamex
SIGNAL(TOFD_P3T1_TCL1,  tofd_tamex.tamex_1.time_coarse[0],   DATA16);
SIGNAL(TOFD_P3T1_TCT1,  tofd_tamex.tamex_1.time_coarse[1],   DATA16);
SIGNAL(TOFD_P3T2_TCL1,  tofd_tamex.tamex_1.time_coarse[2],   DATA16);
SIGNAL(TOFD_P3T2_TCT1,  tofd_tamex.tamex_1.time_coarse[3],   DATA16);

SIGNAL(TOFD_P3T1_TCL2,  tofd_tamex.tamex_1.time_coarse[4],   DATA16);
SIGNAL(TOFD_P3T1_TCT2,  tofd_tamex.tamex_1.time_coarse[5],   DATA16);
SIGNAL(TOFD_P3T2_TCL2,  tofd_tamex.tamex_1.time_coarse[6],   DATA16);
SIGNAL(TOFD_P3T2_TCT2,  tofd_tamex.tamex_1.time_coarse[7],   DATA16);

SIGNAL(TOFD_P3T1_TCL3,  tofd_tamex.tamex_1.time_coarse[8],   DATA16);
SIGNAL(TOFD_P3T1_TCT3,  tofd_tamex.tamex_1.time_coarse[9],   DATA16);
SIGNAL(TOFD_P3T2_TCL3,  tofd_tamex.tamex_1.time_coarse[10],  DATA16);
SIGNAL(TOFD_P3T2_TCT3,  tofd_tamex.tamex_1.time_coarse[11],  DATA16);

SIGNAL(TOFD_P3T1_TCL4,  tofd_tamex.tamex_1.time_coarse[12],  DATA16);
SIGNAL(TOFD_P3T1_TCT4,  tofd_tamex.tamex_1.time_coarse[13],  DATA16);
SIGNAL(TOFD_P3T2_TCL4,  tofd_tamex.tamex_1.time_coarse[14],  DATA16);
SIGNAL(TOFD_P3T2_TCT4,  tofd_tamex.tamex_1.time_coarse[15],  DATA16);

SIGNAL(TOFD_P3T1_TCL5,  tofd_tamex.tamex_1.time_coarse[16],   DATA16);
SIGNAL(TOFD_P3T1_TCT5,  tofd_tamex.tamex_1.time_coarse[17],   DATA16);
SIGNAL(TOFD_P3T2_TCL5,  tofd_tamex.tamex_1.time_coarse[18],   DATA16);
SIGNAL(TOFD_P3T2_TCT5,  tofd_tamex.tamex_1.time_coarse[19],   DATA16);

SIGNAL(TOFD_P3T1_TCL6,  tofd_tamex.tamex_1.time_coarse[20],   DATA16);
SIGNAL(TOFD_P3T1_TCT6,  tofd_tamex.tamex_1.time_coarse[21],   DATA16);
SIGNAL(TOFD_P3T2_TCL6,  tofd_tamex.tamex_1.time_coarse[22],   DATA16);
SIGNAL(TOFD_P3T2_TCT6,  tofd_tamex.tamex_1.time_coarse[23],   DATA16);
