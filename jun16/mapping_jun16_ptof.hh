SIGNAL(TIMESTAMP_HI, master_ts.multi_.time_hi, DATA32);
SIGNAL(TIMESTAMP_LO, master_ts.multi_.time_lo, DATA32);

// TRLO sampler values (multi timestamp buffer)
SIGNAL(ZERO_SUPPRESS: TRLO_SAMPLER_S1);
SIGNAL(TRLO_SAMPLER_S1, los_sampler.sampler.sampler[0],
       TRLO_SAMPLER_S512, los_sampler.sampler.sampler[511], DATA32);

// LOS fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TF1);
SIGNAL(LOS01_TF1, los.vftx2.time_fine[0],
LOS01_TF4, los.vftx2.time_fine[3], DATA12);

// LOS coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TC1);
SIGNAL(LOS01_TC1, los.vftx2.time_coarse[0],
LOS01_TC4, los.vftx2.time_coarse[3], DATA16);

// LOS fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS02_TF1);
SIGNAL(LOS02_TF1, los.vftx2.time_fine[4],
LOS02_TF4, los.vftx2.time_fine[7], DATA12);

// LOS coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS02_TC1);
SIGNAL(LOS02_TC1, los.vftx2.time_coarse[4],
LOS02_TC4, los.vftx2.time_coarse[7], DATA16);


/*
* TOFD can deliver multi hit but is not yet implemented as multi hit. ToDo!
*
* Convention from Neuland:
* tcl = time coarse leading.
* tfl = time fine leading.
* tct = time coarse trailing.
* tft = time fine trailing.
*/

SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TFL1); // Plane 1, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TFT1); // Plane 1, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TFL1); // Plane 1, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TFT1); // Plane 1, Tube 2, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TFL1); // Plane 2, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TFT1); // Plane 2, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TFL1); // Plane 2, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TFT1); // Plane 2, Tube 2, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T1_TFL1); // Plane 3, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T1_TFT1); // Plane 3, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T2_TFL1); // Plane 3, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T2_TFT1); // Plane 3, Tube 2, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T1_TFL1); // Plane 4, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T1_TFT1); // Plane 4, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T2_TFL1); // Plane 4, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T2_TFT1); // Plane 4, Tube 2, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T1_TFL1); // Plane 5, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T1_TFT1); // Plane 5, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T2_TFL1); // Plane 5, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T2_TFT1); // Plane 5, Tube 2, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T1_TFL1); // Plane 6, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T1_TFT1); // Plane 6, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T2_TFL1); // Plane 6, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T2_TFT1); // Plane 6, Tube 2, fine time trailing, all bars.

SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TCL1); // Plane 1, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TCT1); // Plane 1, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TCL1); // Plane 1, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TCT1); // Plane 1, Tube 2, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TCL1); // Plane 2, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TCT1); // Plane 2, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TCL1); // Plane 2, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TCT1); // Plane 2, Tube 2, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T1_TCL1); // Plane 3, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T1_TCT1); // Plane 3, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T2_TCL1); // Plane 3, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P3T2_TCT1); // Plane 3, Tube 2, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T1_TCL1); // Plane 4, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T1_TCT1); // Plane 4, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T2_TCL1); // Plane 4, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P4T2_TCT1); // Plane 4, Tube 2, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T1_TCL1); // Plane 5, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T1_TCT1); // Plane 5, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T2_TCL1); // Plane 5, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P5T2_TCT1); // Plane 5, Tube 2, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T1_TCL1); // Plane 6, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T1_TCT1); // Plane 6, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T2_TCL1); // Plane 6, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P6T2_TCT1); // Plane 6, Tube 2, coarse time trailing, all bars.

SIGNAL(TOFD_VFTX2_T1,  tofd_vme.vftx2_1.time_trigger, DATA16);
SIGNAL(TOFD_VFTX2_T2,  tofd_vme.vftx2_2.time_trigger, DATA16);
SIGNAL(TOFD_VFTX2_T3,  tofd_vme.vftx2_3.time_trigger, DATA16);

// Fine times.

// Plane 1 with VFTX2.
/*
SIGNAL(TOFD_P1T1_TFL1,  tofd_vme.vftx2_1.time_fine[0],  DATA12);
SIGNAL(TOFD_P1T1_TFT1,  tofd_vme.vftx2_1.time_fine[1],  DATA12);
SIGNAL(TOFD_P1T2_TFL1,  tofd_vme.vftx2_1.time_fine[2],  DATA12);
SIGNAL(TOFD_P1T2_TFT1,  tofd_vme.vftx2_1.time_fine[3],  DATA12);

SIGNAL(TOFD_P1T1_TFL2,  tofd_vme.vftx2_1.time_fine[4],  DATA12);
SIGNAL(TOFD_P1T1_TFT2,  tofd_vme.vftx2_1.time_fine[5],  DATA12);
SIGNAL(TOFD_P1T2_TFL2,  tofd_vme.vftx2_1.time_fine[6],  DATA12);
SIGNAL(TOFD_P1T2_TFT2,  tofd_vme.vftx2_1.time_fine[7],  DATA12);

SIGNAL(TOFD_P1T1_TFL3,  tofd_vme.vftx2_1.time_fine[8],  DATA12);
SIGNAL(TOFD_P1T1_TFT3,  tofd_vme.vftx2_1.time_fine[9],  DATA12);
SIGNAL(TOFD_P1T2_TFL3,  tofd_vme.vftx2_1.time_fine[10], DATA12);
SIGNAL(TOFD_P1T2_TFT3,  tofd_vme.vftx2_1.time_fine[11], DATA12);

SIGNAL(TOFD_P1T1_TFL4,  tofd_vme.vftx2_1.time_fine[12], DATA12);
SIGNAL(TOFD_P1T1_TFT4,  tofd_vme.vftx2_1.time_fine[13], DATA12);
SIGNAL(TOFD_P1T2_TFL4,  tofd_vme.vftx2_1.time_fine[14], DATA12);
SIGNAL(TOFD_P1T2_TFT4,  tofd_vme.vftx2_1.time_fine[15], DATA12);

SIGNAL(TOFD_P1T1_TFL5,  tofd_vme.vftx2_2.time_fine[0],  DATA12);
SIGNAL(TOFD_P1T1_TFT5,  tofd_vme.vftx2_2.time_fine[1],  DATA12);
SIGNAL(TOFD_P1T2_TFL5,  tofd_vme.vftx2_2.time_fine[2],  DATA12);
SIGNAL(TOFD_P1T2_TFT5,  tofd_vme.vftx2_2.time_fine[3],  DATA12);

SIGNAL(TOFD_P1T1_TFL6,  tofd_vme.vftx2_2.time_fine[4],  DATA12);
SIGNAL(TOFD_P1T1_TFT6,  tofd_vme.vftx2_2.time_fine[5],  DATA12);
SIGNAL(TOFD_P1T2_TFL6,  tofd_vme.vftx2_2.time_fine[6],  DATA12);
SIGNAL(TOFD_P1T2_TFT6,  tofd_vme.vftx2_2.time_fine[7],  DATA12);
*/
// Plane 2 with VFTX2.
/*
SIGNAL(TOFD_P2T1_TFL1,  tofd_vme.vftx2_2.time_fine[8],  DATA12);
SIGNAL(TOFD_P2T1_TFT1,  tofd_vme.vftx2_2.time_fine[9],  DATA12);
SIGNAL(TOFD_P2T2_TFL1,  tofd_vme.vftx2_2.time_fine[10], DATA12);
SIGNAL(TOFD_P2T2_TFT1,  tofd_vme.vftx2_2.time_fine[11], DATA12);

SIGNAL(TOFD_P2T1_TFL2,  tofd_vme.vftx2_2.time_fine[12], DATA12);
SIGNAL(TOFD_P2T1_TFT2,  tofd_vme.vftx2_2.time_fine[13], DATA12);
SIGNAL(TOFD_P2T2_TFL2,  tofd_vme.vftx2_2.time_fine[14], DATA12);
SIGNAL(TOFD_P2T2_TFT2,  tofd_vme.vftx2_2.time_fine[15], DATA12);

SIGNAL(TOFD_P2T1_TFL3,  tofd_vme.vftx2_3.time_fine[0],  DATA12);
SIGNAL(TOFD_P2T1_TFT3,  tofd_vme.vftx2_3.time_fine[1],  DATA12);
SIGNAL(TOFD_P2T2_TFL3,  tofd_vme.vftx2_3.time_fine[2],  DATA12);
SIGNAL(TOFD_P2T2_TFT3,  tofd_vme.vftx2_3.time_fine[3],  DATA12);

SIGNAL(TOFD_P2T1_TFL4,  tofd_vme.vftx2_3.time_fine[4],  DATA12);
SIGNAL(TOFD_P2T1_TFT4,  tofd_vme.vftx2_3.time_fine[5],  DATA12);
SIGNAL(TOFD_P2T2_TFL4,  tofd_vme.vftx2_3.time_fine[6],  DATA12);
SIGNAL(TOFD_P2T2_TFT4,  tofd_vme.vftx2_3.time_fine[7],  DATA12);

SIGNAL(TOFD_P2T1_TFL5,  tofd_vme.vftx2_3.time_fine[8],  DATA12);
SIGNAL(TOFD_P2T1_TFT5,  tofd_vme.vftx2_3.time_fine[9],  DATA12);
SIGNAL(TOFD_P2T2_TFL5,  tofd_vme.vftx2_3.time_fine[10], DATA12);
SIGNAL(TOFD_P2T2_TFT5,  tofd_vme.vftx2_3.time_fine[11], DATA12);

SIGNAL(TOFD_P2T1_TFL6,  tofd_vme.vftx2_3.time_fine[12], DATA12);
SIGNAL(TOFD_P2T1_TFT6,  tofd_vme.vftx2_3.time_fine[13], DATA12);
SIGNAL(TOFD_P2T2_TFL6,  tofd_vme.vftx2_3.time_fine[14], DATA12);
SIGNAL(TOFD_P2T2_TFT6,  tofd_vme.vftx2_3.time_fine[15], DATA12);
*/
// Plane 3 with TAMEX.
SIGNAL(TOFD_P3T1_TFL1, tofd_tamex.tamex_1.time_fine[1],  DATA12);
SIGNAL(TOFD_P3T1_TFT1, tofd_tamex.tamex_1.time_fine[2],  DATA12);
SIGNAL(TOFD_P3T2_TFL1, tofd_tamex.tamex_1.time_fine[17],  DATA12);
SIGNAL(TOFD_P3T2_TFT1, tofd_tamex.tamex_1.time_fine[18],  DATA12);

SIGNAL(TOFD_P3T1_TFL2, tofd_tamex.tamex_1.time_fine[3],  DATA12);
SIGNAL(TOFD_P3T1_TFT2, tofd_tamex.tamex_1.time_fine[4],  DATA12);
SIGNAL(TOFD_P3T2_TFL2, tofd_tamex.tamex_1.time_fine[19],  DATA12);
SIGNAL(TOFD_P3T2_TFT2, tofd_tamex.tamex_1.time_fine[20],  DATA12);

SIGNAL(TOFD_P3T1_TFL3, tofd_tamex.tamex_1.time_fine[5],  DATA12);
SIGNAL(TOFD_P3T1_TFT3, tofd_tamex.tamex_1.time_fine[6], DATA12);
SIGNAL(TOFD_P3T2_TFL3, tofd_tamex.tamex_1.time_fine[21], DATA12);
SIGNAL(TOFD_P3T2_TFT3, tofd_tamex.tamex_1.time_fine[22], DATA12);

SIGNAL(TOFD_P3T1_TFL4, tofd_tamex.tamex_1.time_fine[7], DATA12);
SIGNAL(TOFD_P3T1_TFT4, tofd_tamex.tamex_1.time_fine[8], DATA12);
SIGNAL(TOFD_P3T2_TFL4, tofd_tamex.tamex_1.time_fine[23], DATA12);
SIGNAL(TOFD_P3T2_TFT4, tofd_tamex.tamex_1.time_fine[24], DATA12);

SIGNAL(TOFD_P3T1_TFL5, tofd_tamex.tamex_1.time_fine[9], DATA12);
SIGNAL(TOFD_P3T1_TFT5, tofd_tamex.tamex_1.time_fine[10], DATA12);
SIGNAL(TOFD_P3T2_TFL5, tofd_tamex.tamex_1.time_fine[25], DATA12);
SIGNAL(TOFD_P3T2_TFT5, tofd_tamex.tamex_1.time_fine[26], DATA12);

SIGNAL(TOFD_P3T1_TFL6, tofd_tamex.tamex_1.time_fine[11], DATA12);
SIGNAL(TOFD_P3T1_TFT6, tofd_tamex.tamex_1.time_fine[12], DATA12);
SIGNAL(TOFD_P3T2_TFL6, tofd_tamex.tamex_1.time_fine[27], DATA12);
SIGNAL(TOFD_P3T2_TFT6, tofd_tamex.tamex_1.time_fine[28], DATA12);

// Plane 4.
SIGNAL(TOFD_P4T1_TFL1, tofd_tamex.tamex_2.time_fine[1],  DATA12);
SIGNAL(TOFD_P4T1_TFT1, tofd_tamex.tamex_2.time_fine[2],  DATA12);
SIGNAL(TOFD_P4T2_TFL1, tofd_tamex.tamex_2.time_fine[17],  DATA12);
SIGNAL(TOFD_P4T2_TFT1, tofd_tamex.tamex_2.time_fine[18],  DATA12);

SIGNAL(TOFD_P4T1_TFL2, tofd_tamex.tamex_2.time_fine[3],  DATA12);
SIGNAL(TOFD_P4T1_TFT2, tofd_tamex.tamex_2.time_fine[4],  DATA12);
SIGNAL(TOFD_P4T2_TFL2, tofd_tamex.tamex_2.time_fine[19],  DATA12);
SIGNAL(TOFD_P4T2_TFT2, tofd_tamex.tamex_2.time_fine[20],  DATA12);

SIGNAL(TOFD_P4T1_TFL3, tofd_tamex.tamex_2.time_fine[5],  DATA12);
SIGNAL(TOFD_P4T1_TFT3, tofd_tamex.tamex_2.time_fine[6], DATA12);
SIGNAL(TOFD_P4T2_TFL3, tofd_tamex.tamex_2.time_fine[21], DATA12);
SIGNAL(TOFD_P4T2_TFT3, tofd_tamex.tamex_2.time_fine[22], DATA12);

SIGNAL(TOFD_P4T1_TFL4, tofd_tamex.tamex_2.time_fine[7], DATA12);
SIGNAL(TOFD_P4T1_TFT4, tofd_tamex.tamex_2.time_fine[8], DATA12);
SIGNAL(TOFD_P4T2_TFL4, tofd_tamex.tamex_2.time_fine[23], DATA12);
SIGNAL(TOFD_P4T2_TFT4, tofd_tamex.tamex_2.time_fine[24], DATA12);

SIGNAL(TOFD_P4T1_TFL5, tofd_tamex.tamex_2.time_fine[9], DATA12);
SIGNAL(TOFD_P4T1_TFT5, tofd_tamex.tamex_2.time_fine[10], DATA12);
SIGNAL(TOFD_P4T2_TFL5, tofd_tamex.tamex_2.time_fine[25], DATA12);
SIGNAL(TOFD_P4T2_TFT5, tofd_tamex.tamex_2.time_fine[26], DATA12);

SIGNAL(TOFD_P4T1_TFL6, tofd_tamex.tamex_2.time_fine[11], DATA12);
SIGNAL(TOFD_P4T1_TFT6, tofd_tamex.tamex_2.time_fine[12], DATA12);
SIGNAL(TOFD_P4T2_TFL6, tofd_tamex.tamex_2.time_fine[27], DATA12);
SIGNAL(TOFD_P4T2_TFT6, tofd_tamex.tamex_2.time_fine[28], DATA12);

// Plane 1 with TAMEX2 + PADI.
SIGNAL(TOFD_P1T1_TFL1, tofd_tamex.tamex_3.time_fine[1],  DATA12);
SIGNAL(TOFD_P1T1_TFT1, tofd_tamex.tamex_3.time_fine[2],  DATA12);
SIGNAL(TOFD_P1T2_TFL1, tofd_tamex.tamex_3.time_fine[3],  DATA12);
SIGNAL(TOFD_P1T2_TFT1, tofd_tamex.tamex_3.time_fine[4],  DATA12);

SIGNAL(TOFD_P1T1_TFL2, tofd_tamex.tamex_3.time_fine[5],  DATA12);
SIGNAL(TOFD_P1T1_TFT2, tofd_tamex.tamex_3.time_fine[6],  DATA12);
SIGNAL(TOFD_P1T2_TFL2, tofd_tamex.tamex_3.time_fine[7],  DATA12);
SIGNAL(TOFD_P1T2_TFT2, tofd_tamex.tamex_3.time_fine[8],  DATA12);

SIGNAL(TOFD_P1T1_TFL3, tofd_tamex.tamex_3.time_fine[9],  DATA12);
SIGNAL(TOFD_P1T1_TFT3, tofd_tamex.tamex_3.time_fine[10], DATA12);
SIGNAL(TOFD_P1T2_TFL3, tofd_tamex.tamex_3.time_fine[11], DATA12);
SIGNAL(TOFD_P1T2_TFT3, tofd_tamex.tamex_3.time_fine[12], DATA12);

SIGNAL(TOFD_P1T1_TFL4, tofd_tamex.tamex_3.time_fine[13], DATA12);
SIGNAL(TOFD_P1T1_TFT4, tofd_tamex.tamex_3.time_fine[14], DATA12);
SIGNAL(TOFD_P1T2_TFL4, tofd_tamex.tamex_3.time_fine[15], DATA12);
SIGNAL(TOFD_P1T2_TFT4, tofd_tamex.tamex_3.time_fine[16], DATA12);

SIGNAL(TOFD_P1T1_TFL5, tofd_tamex.tamex_3.time_fine[17], DATA12);
SIGNAL(TOFD_P1T1_TFT5, tofd_tamex.tamex_3.time_fine[18], DATA12);
SIGNAL(TOFD_P1T2_TFL5, tofd_tamex.tamex_3.time_fine[19], DATA12);
SIGNAL(TOFD_P1T2_TFT5, tofd_tamex.tamex_3.time_fine[20], DATA12);

SIGNAL(TOFD_P1T1_TFL6, tofd_tamex.tamex_3.time_fine[21], DATA12);
SIGNAL(TOFD_P1T1_TFT6, tofd_tamex.tamex_3.time_fine[22], DATA12);
SIGNAL(TOFD_P1T2_TFL6, tofd_tamex.tamex_3.time_fine[23], DATA12);
SIGNAL(TOFD_P1T2_TFT6, tofd_tamex.tamex_3.time_fine[24], DATA12);

// Plane 6.
SIGNAL(TOFD_P2T1_TFL1, tofd_tamex.tamex_4.time_fine[1],  DATA12);
SIGNAL(TOFD_P2T1_TFT1, tofd_tamex.tamex_4.time_fine[2],  DATA12);
SIGNAL(TOFD_P2T2_TFL1, tofd_tamex.tamex_4.time_fine[3],  DATA12);
SIGNAL(TOFD_P2T2_TFT1, tofd_tamex.tamex_4.time_fine[4],  DATA12);

SIGNAL(TOFD_P2T1_TFL2, tofd_tamex.tamex_4.time_fine[5],  DATA12);
SIGNAL(TOFD_P2T1_TFT2, tofd_tamex.tamex_4.time_fine[6],  DATA12);
SIGNAL(TOFD_P2T2_TFL2, tofd_tamex.tamex_4.time_fine[7],  DATA12);
SIGNAL(TOFD_P2T2_TFT2, tofd_tamex.tamex_4.time_fine[8],  DATA12);

SIGNAL(TOFD_P2T1_TFL3, tofd_tamex.tamex_4.time_fine[9],  DATA12);
SIGNAL(TOFD_P2T1_TFT3, tofd_tamex.tamex_4.time_fine[10], DATA12);
SIGNAL(TOFD_P2T2_TFL3, tofd_tamex.tamex_4.time_fine[11], DATA12);
SIGNAL(TOFD_P2T2_TFT3, tofd_tamex.tamex_4.time_fine[12], DATA12);

SIGNAL(TOFD_P2T1_TFL4, tofd_tamex.tamex_4.time_fine[13], DATA12);
SIGNAL(TOFD_P2T1_TFT4, tofd_tamex.tamex_4.time_fine[14], DATA12);
SIGNAL(TOFD_P2T2_TFL4, tofd_tamex.tamex_4.time_fine[15], DATA12);
SIGNAL(TOFD_P2T2_TFT4, tofd_tamex.tamex_4.time_fine[16], DATA12);

SIGNAL(TOFD_P2T1_TFL5, tofd_tamex.tamex_4.time_fine[17], DATA12);
SIGNAL(TOFD_P2T1_TFT5, tofd_tamex.tamex_4.time_fine[18], DATA12);
SIGNAL(TOFD_P2T2_TFL5, tofd_tamex.tamex_4.time_fine[19], DATA12);
SIGNAL(TOFD_P2T2_TFT5, tofd_tamex.tamex_4.time_fine[20], DATA12);

SIGNAL(TOFD_P2T1_TFL6, tofd_tamex.tamex_4.time_fine[21], DATA12);
SIGNAL(TOFD_P2T1_TFT6, tofd_tamex.tamex_4.time_fine[22], DATA12);
SIGNAL(TOFD_P2T2_TFL6, tofd_tamex.tamex_4.time_fine[23], DATA12);
SIGNAL(TOFD_P2T2_TFT6, tofd_tamex.tamex_4.time_fine[24], DATA12);


// Coarse times.

// Plane 1 with VFTX2.
/*
SIGNAL(TOFD_P1T1_TCL1,  tofd_vme.vftx2_1.time_coarse[0],  DATA16);
SIGNAL(TOFD_P1T1_TCT1,  tofd_vme.vftx2_1.time_coarse[1],  DATA16);
SIGNAL(TOFD_P1T2_TCL1,  tofd_vme.vftx2_1.time_coarse[2],  DATA16);
SIGNAL(TOFD_P1T2_TCT1,  tofd_vme.vftx2_1.time_coarse[3],  DATA16);

SIGNAL(TOFD_P1T1_TCL2,  tofd_vme.vftx2_1.time_coarse[4],  DATA16);
SIGNAL(TOFD_P1T1_TCT2,  tofd_vme.vftx2_1.time_coarse[5],  DATA16);
SIGNAL(TOFD_P1T2_TCL2,  tofd_vme.vftx2_1.time_coarse[6],  DATA16);
SIGNAL(TOFD_P1T2_TCT2,  tofd_vme.vftx2_1.time_coarse[7],  DATA16);

SIGNAL(TOFD_P1T1_TCL3,  tofd_vme.vftx2_1.time_coarse[8],  DATA16);
SIGNAL(TOFD_P1T1_TCT3,  tofd_vme.vftx2_1.time_coarse[9],  DATA16);
SIGNAL(TOFD_P1T2_TCL3,  tofd_vme.vftx2_1.time_coarse[10], DATA16);
SIGNAL(TOFD_P1T2_TCT3,  tofd_vme.vftx2_1.time_coarse[11], DATA16);

SIGNAL(TOFD_P1T1_TCL4,  tofd_vme.vftx2_1.time_coarse[12], DATA16);
SIGNAL(TOFD_P1T1_TCT4,  tofd_vme.vftx2_1.time_coarse[13], DATA16);
SIGNAL(TOFD_P1T2_TCL4,  tofd_vme.vftx2_1.time_coarse[14], DATA16);
SIGNAL(TOFD_P1T2_TCT4,  tofd_vme.vftx2_1.time_coarse[15], DATA16);

SIGNAL(TOFD_P1T1_TCL5,  tofd_vme.vftx2_2.time_coarse[0],  DATA16);
SIGNAL(TOFD_P1T1_TCT5,  tofd_vme.vftx2_2.time_coarse[1],  DATA16);
SIGNAL(TOFD_P1T2_TCL5,  tofd_vme.vftx2_2.time_coarse[2],  DATA16);
SIGNAL(TOFD_P1T2_TCT5,  tofd_vme.vftx2_2.time_coarse[3],  DATA16);

SIGNAL(TOFD_P1T1_TCL6,  tofd_vme.vftx2_2.time_coarse[4],  DATA16);
SIGNAL(TOFD_P1T1_TCT6,  tofd_vme.vftx2_2.time_coarse[5],  DATA16);
SIGNAL(TOFD_P1T2_TCL6,  tofd_vme.vftx2_2.time_coarse[6],  DATA16);
SIGNAL(TOFD_P1T2_TCT6,  tofd_vme.vftx2_2.time_coarse[7],  DATA16);
*/
// Plane 2 with VFTX2.
/*
SIGNAL(TOFD_P2T1_TCL1,  tofd_vme.vftx2_2.time_coarse[8],  DATA16);
SIGNAL(TOFD_P2T1_TCT1,  tofd_vme.vftx2_2.time_coarse[9],  DATA16);
SIGNAL(TOFD_P2T2_TCL1,  tofd_vme.vftx2_2.time_coarse[10], DATA16);
SIGNAL(TOFD_P2T2_TCT1,  tofd_vme.vftx2_2.time_coarse[11], DATA16);

SIGNAL(TOFD_P2T1_TCL2,  tofd_vme.vftx2_2.time_coarse[12], DATA16);
SIGNAL(TOFD_P2T1_TCT2,  tofd_vme.vftx2_2.time_coarse[13], DATA16);
SIGNAL(TOFD_P2T2_TCL2,  tofd_vme.vftx2_2.time_coarse[14], DATA16);
SIGNAL(TOFD_P2T2_TCT2,  tofd_vme.vftx2_2.time_coarse[15], DATA16);

SIGNAL(TOFD_P2T1_TCL3,  tofd_vme.vftx2_3.time_coarse[0],  DATA16);
SIGNAL(TOFD_P2T1_TCT3,  tofd_vme.vftx2_3.time_coarse[1],  DATA16);
SIGNAL(TOFD_P2T2_TCL3,  tofd_vme.vftx2_3.time_coarse[2],  DATA16);
SIGNAL(TOFD_P2T2_TCT3,  tofd_vme.vftx2_3.time_coarse[3],  DATA16);

SIGNAL(TOFD_P2T1_TCL4,  tofd_vme.vftx2_3.time_coarse[4],  DATA16);
SIGNAL(TOFD_P2T1_TCT4,  tofd_vme.vftx2_3.time_coarse[5],  DATA16);
SIGNAL(TOFD_P2T2_TCL4,  tofd_vme.vftx2_3.time_coarse[6],  DATA16);
SIGNAL(TOFD_P2T2_TCT4,  tofd_vme.vftx2_3.time_coarse[7],  DATA16);

SIGNAL(TOFD_P2T1_TCL5,  tofd_vme.vftx2_3.time_coarse[8],  DATA16);
SIGNAL(TOFD_P2T1_TCT5,  tofd_vme.vftx2_3.time_coarse[9],  DATA16);
SIGNAL(TOFD_P2T2_TCL5,  tofd_vme.vftx2_3.time_coarse[10], DATA16);
SIGNAL(TOFD_P2T2_TCT5,  tofd_vme.vftx2_3.time_coarse[11], DATA16);

SIGNAL(TOFD_P2T1_TCL6,  tofd_vme.vftx2_3.time_coarse[12], DATA16);
SIGNAL(TOFD_P2T1_TCT6,  tofd_vme.vftx2_3.time_coarse[13], DATA16);
SIGNAL(TOFD_P2T2_TCL6,  tofd_vme.vftx2_3.time_coarse[14], DATA16);
SIGNAL(TOFD_P2T2_TCT6,  tofd_vme.vftx2_3.time_coarse[15], DATA16);
*/
// Plane 3 with TAMEX.
SIGNAL(TOFD_P3T1_TCL1, tofd_tamex.tamex_1.time_coarse[1],  DATA16);
SIGNAL(TOFD_P3T1_TCT1, tofd_tamex.tamex_1.time_coarse[2],  DATA16);
SIGNAL(TOFD_P3T2_TCL1, tofd_tamex.tamex_1.time_coarse[17],  DATA16);
SIGNAL(TOFD_P3T2_TCT1, tofd_tamex.tamex_1.time_coarse[18],  DATA16);

SIGNAL(TOFD_P3T1_TCL2, tofd_tamex.tamex_1.time_coarse[3],  DATA16);
SIGNAL(TOFD_P3T1_TCT2, tofd_tamex.tamex_1.time_coarse[4],  DATA16);
SIGNAL(TOFD_P3T2_TCL2, tofd_tamex.tamex_1.time_coarse[19],  DATA16);
SIGNAL(TOFD_P3T2_TCT2, tofd_tamex.tamex_1.time_coarse[20],  DATA16);

SIGNAL(TOFD_P3T1_TCL3, tofd_tamex.tamex_1.time_coarse[5],  DATA16);
SIGNAL(TOFD_P3T1_TCT3, tofd_tamex.tamex_1.time_coarse[6], DATA16);
SIGNAL(TOFD_P3T2_TCL3, tofd_tamex.tamex_1.time_coarse[21], DATA16);
SIGNAL(TOFD_P3T2_TCT3, tofd_tamex.tamex_1.time_coarse[22], DATA16);

SIGNAL(TOFD_P3T1_TCL4, tofd_tamex.tamex_1.time_coarse[7], DATA16);
SIGNAL(TOFD_P3T1_TCT4, tofd_tamex.tamex_1.time_coarse[8], DATA16);
SIGNAL(TOFD_P3T2_TCL4, tofd_tamex.tamex_1.time_coarse[23], DATA16);
SIGNAL(TOFD_P3T2_TCT4, tofd_tamex.tamex_1.time_coarse[24], DATA16);

SIGNAL(TOFD_P3T1_TCL5, tofd_tamex.tamex_1.time_coarse[9], DATA16);
SIGNAL(TOFD_P3T1_TCT5, tofd_tamex.tamex_1.time_coarse[10], DATA16);
SIGNAL(TOFD_P3T2_TCL5, tofd_tamex.tamex_1.time_coarse[25], DATA16);
SIGNAL(TOFD_P3T2_TCT5, tofd_tamex.tamex_1.time_coarse[26], DATA16);

SIGNAL(TOFD_P3T1_TCL6, tofd_tamex.tamex_1.time_coarse[11], DATA16);
SIGNAL(TOFD_P3T1_TCT6, tofd_tamex.tamex_1.time_coarse[12], DATA16);
SIGNAL(TOFD_P3T2_TCL6, tofd_tamex.tamex_1.time_coarse[27], DATA16);
SIGNAL(TOFD_P3T2_TCT6, tofd_tamex.tamex_1.time_coarse[28], DATA16);

// Plane 4.
SIGNAL(TOFD_P4T1_TCL1, tofd_tamex.tamex_2.time_coarse[1],  DATA16);
SIGNAL(TOFD_P4T1_TCT1, tofd_tamex.tamex_2.time_coarse[2],  DATA16);
SIGNAL(TOFD_P4T2_TCL1, tofd_tamex.tamex_2.time_coarse[17],  DATA16);
SIGNAL(TOFD_P4T2_TCT1, tofd_tamex.tamex_2.time_coarse[18],  DATA16);

SIGNAL(TOFD_P4T1_TCL2, tofd_tamex.tamex_2.time_coarse[3],  DATA16);
SIGNAL(TOFD_P4T1_TCT2, tofd_tamex.tamex_2.time_coarse[4],  DATA16);
SIGNAL(TOFD_P4T2_TCL2, tofd_tamex.tamex_2.time_coarse[19],  DATA16);
SIGNAL(TOFD_P4T2_TCT2, tofd_tamex.tamex_2.time_coarse[20],  DATA16);

SIGNAL(TOFD_P4T1_TCL3, tofd_tamex.tamex_2.time_coarse[5],  DATA16);
SIGNAL(TOFD_P4T1_TCT3, tofd_tamex.tamex_2.time_coarse[6], DATA16);
SIGNAL(TOFD_P4T2_TCL3, tofd_tamex.tamex_2.time_coarse[21], DATA16);
SIGNAL(TOFD_P4T2_TCT3, tofd_tamex.tamex_2.time_coarse[22], DATA16);

SIGNAL(TOFD_P4T1_TCL4, tofd_tamex.tamex_2.time_coarse[7], DATA16);
SIGNAL(TOFD_P4T1_TCT4, tofd_tamex.tamex_2.time_coarse[8], DATA16);
SIGNAL(TOFD_P4T2_TCL4, tofd_tamex.tamex_2.time_coarse[23], DATA16);
SIGNAL(TOFD_P4T2_TCT4, tofd_tamex.tamex_2.time_coarse[24], DATA16);

SIGNAL(TOFD_P4T1_TCL5, tofd_tamex.tamex_2.time_coarse[9], DATA16);
SIGNAL(TOFD_P4T1_TCT5, tofd_tamex.tamex_2.time_coarse[10], DATA16);
SIGNAL(TOFD_P4T2_TCL5, tofd_tamex.tamex_2.time_coarse[25], DATA16);
SIGNAL(TOFD_P4T2_TCT5, tofd_tamex.tamex_2.time_coarse[26], DATA16);

SIGNAL(TOFD_P4T1_TCL6, tofd_tamex.tamex_2.time_coarse[11], DATA16);
SIGNAL(TOFD_P4T1_TCT6, tofd_tamex.tamex_2.time_coarse[12], DATA16);
SIGNAL(TOFD_P4T2_TCL6, tofd_tamex.tamex_2.time_coarse[27], DATA16);
SIGNAL(TOFD_P4T2_TCT6, tofd_tamex.tamex_2.time_coarse[28], DATA16);

// Plane 1 with PADI and TAMEX.
SIGNAL(TOFD_P1T1_TCL1, tofd_tamex.tamex_3.time_coarse[1],  DATA16);
SIGNAL(TOFD_P1T1_TCT1, tofd_tamex.tamex_3.time_coarse[2],  DATA16);
SIGNAL(TOFD_P1T2_TCL1, tofd_tamex.tamex_3.time_coarse[3],  DATA16);
SIGNAL(TOFD_P1T2_TCT1, tofd_tamex.tamex_3.time_coarse[4],  DATA16);

SIGNAL(TOFD_P1T1_TCL2, tofd_tamex.tamex_3.time_coarse[5],  DATA16);
SIGNAL(TOFD_P1T1_TCT2, tofd_tamex.tamex_3.time_coarse[6],  DATA16);
SIGNAL(TOFD_P1T2_TCL2, tofd_tamex.tamex_3.time_coarse[7],  DATA16);
SIGNAL(TOFD_P1T2_TCT2, tofd_tamex.tamex_3.time_coarse[8],  DATA16);

SIGNAL(TOFD_P1T1_TCL3, tofd_tamex.tamex_3.time_coarse[9],  DATA16);
SIGNAL(TOFD_P1T1_TCT3, tofd_tamex.tamex_3.time_coarse[10], DATA16);
SIGNAL(TOFD_P1T2_TCL3, tofd_tamex.tamex_3.time_coarse[11], DATA16);
SIGNAL(TOFD_P1T2_TCT3, tofd_tamex.tamex_3.time_coarse[12], DATA16);

SIGNAL(TOFD_P1T1_TCL4, tofd_tamex.tamex_3.time_coarse[13], DATA16);
SIGNAL(TOFD_P1T1_TCT4, tofd_tamex.tamex_3.time_coarse[14], DATA16);
SIGNAL(TOFD_P1T2_TCL4, tofd_tamex.tamex_3.time_coarse[15], DATA16);
SIGNAL(TOFD_P1T2_TCT4, tofd_tamex.tamex_3.time_coarse[16], DATA16);

SIGNAL(TOFD_P1T1_TCL5, tofd_tamex.tamex_3.time_coarse[17], DATA16);
SIGNAL(TOFD_P1T1_TCT5, tofd_tamex.tamex_3.time_coarse[18], DATA16);
SIGNAL(TOFD_P1T2_TCL5, tofd_tamex.tamex_3.time_coarse[19], DATA16);
SIGNAL(TOFD_P1T2_TCT5, tofd_tamex.tamex_3.time_coarse[20], DATA16);

SIGNAL(TOFD_P1T1_TCL6, tofd_tamex.tamex_3.time_coarse[21], DATA16);
SIGNAL(TOFD_P1T1_TCT6, tofd_tamex.tamex_3.time_coarse[22], DATA16);
SIGNAL(TOFD_P1T2_TCL6, tofd_tamex.tamex_3.time_coarse[23], DATA16);
SIGNAL(TOFD_P1T2_TCT6, tofd_tamex.tamex_3.time_coarse[24], DATA16);

// Plane 2 with PADI TAMEX.
SIGNAL(TOFD_P2T1_TCL1, tofd_tamex.tamex_4.time_coarse[1],  DATA16);
SIGNAL(TOFD_P2T1_TCT1, tofd_tamex.tamex_4.time_coarse[2],  DATA16);
SIGNAL(TOFD_P2T2_TCL1, tofd_tamex.tamex_4.time_coarse[3],  DATA16);
SIGNAL(TOFD_P2T2_TCT1, tofd_tamex.tamex_4.time_coarse[4],  DATA16);

SIGNAL(TOFD_P2T1_TCL2, tofd_tamex.tamex_4.time_coarse[5],  DATA16);
SIGNAL(TOFD_P2T1_TCT2, tofd_tamex.tamex_4.time_coarse[6],  DATA16);
SIGNAL(TOFD_P2T2_TCL2, tofd_tamex.tamex_4.time_coarse[7],  DATA16);
SIGNAL(TOFD_P2T2_TCT2, tofd_tamex.tamex_4.time_coarse[8],  DATA16);

SIGNAL(TOFD_P2T1_TCL3, tofd_tamex.tamex_4.time_coarse[9],  DATA16);
SIGNAL(TOFD_P2T1_TCT3, tofd_tamex.tamex_4.time_coarse[10], DATA16);
SIGNAL(TOFD_P2T2_TCL3, tofd_tamex.tamex_4.time_coarse[11], DATA16);
SIGNAL(TOFD_P2T2_TCT3, tofd_tamex.tamex_4.time_coarse[12], DATA16);

SIGNAL(TOFD_P2T1_TCL4, tofd_tamex.tamex_4.time_coarse[13], DATA16);
SIGNAL(TOFD_P2T1_TCT4, tofd_tamex.tamex_4.time_coarse[14], DATA16);
SIGNAL(TOFD_P2T2_TCL4, tofd_tamex.tamex_4.time_coarse[15], DATA16);
SIGNAL(TOFD_P2T2_TCT4, tofd_tamex.tamex_4.time_coarse[16], DATA16);

SIGNAL(TOFD_P2T1_TCL5, tofd_tamex.tamex_4.time_coarse[17], DATA16);
SIGNAL(TOFD_P2T1_TCT5, tofd_tamex.tamex_4.time_coarse[18], DATA16);
SIGNAL(TOFD_P2T2_TCL5, tofd_tamex.tamex_4.time_coarse[19], DATA16);
SIGNAL(TOFD_P2T2_TCT5, tofd_tamex.tamex_4.time_coarse[20], DATA16);

SIGNAL(TOFD_P2T1_TCL6, tofd_tamex.tamex_4.time_coarse[21], DATA16);
SIGNAL(TOFD_P2T1_TCT6, tofd_tamex.tamex_4.time_coarse[22], DATA16);
SIGNAL(TOFD_P2T2_TCL6, tofd_tamex.tamex_4.time_coarse[23], DATA16);
SIGNAL(TOFD_P2T2_TCT6, tofd_tamex.tamex_4.time_coarse[24], DATA16);


// FiTest fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(64): FITEST_TF1);
SIGNAL(FITEST_TF1 , tbm_vme.vftx2.time_fine[0],
FITEST_TF64, tbm_vme.vftx2.time_fine[63], DATA12);

// FiTest coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(64): FITEST_TC1);
SIGNAL(FITEST_TC1 , tbm_vme.vftx2.time_coarse[0],
FITEST_TC64, tbm_vme.vftx2.time_coarse[63], DATA16);


// PSPX, final mapping, 11.07.2016
/*
SIGNAL(ZERO_SUPPRESS_MULTI(20): PSPX01_01);
SIGNAL(ZERO_SUPPRESS_MULTI(20): PSPX02_01);
SIGNAL(ZERO_SUPPRESS_MULTI(20): PSPX03_01);
SIGNAL(ZERO_SUPPRESS_MULTI(20): PSPX04_01);
SIGNAL(ZERO_SUPPRESS_MULTI(20): PSPX05_01);

// filling the declared variables:
SIGNAL(PSPX01_33, tracking_febex.febex_0[9].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_33_Tr1);
SIGNAL(PSPXT01_33_Tr1  , tracking_febex.febextrace_0[9].trace[0][0],
       PSPXT01_33_Tr400, tracking_febex.febextrace_0[9].trace[0][399], DATA16);
SIGNAL(PSPX01_34, tracking_febex.febex_0[9].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_34_Tr1);
SIGNAL(PSPXT01_34_Tr1  , tracking_febex.febextrace_0[9].trace[1][0],
       PSPXT01_34_Tr400, tracking_febex.febextrace_0[9].trace[1][399], DATA16);
SIGNAL(PSPX01_35, tracking_febex.febex_0[9].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_35_Tr1);
SIGNAL(PSPXT01_35_Tr1  , tracking_febex.febextrace_0[9].trace[2][0],
       PSPXT01_35_Tr400, tracking_febex.febextrace_0[9].trace[2][399], DATA16);
SIGNAL(PSPX01_36, tracking_febex.febex_0[9].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_36_Tr1);
SIGNAL(PSPXT01_36_Tr1  , tracking_febex.febextrace_0[9].trace[3][0],
       PSPXT01_36_Tr400, tracking_febex.febextrace_0[9].trace[3][399], DATA16);
SIGNAL(PSPX01_37, tracking_febex.febex_0[9].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_37_Tr1);
SIGNAL(PSPXT01_37_Tr1  , tracking_febex.febextrace_0[9].trace[4][0],
       PSPXT01_37_Tr400, tracking_febex.febextrace_0[9].trace[4][399], DATA16);
SIGNAL(PSPX01_38, tracking_febex.febex_0[9].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_38_Tr1);
SIGNAL(PSPXT01_38_Tr1  , tracking_febex.febextrace_0[9].trace[5][0],
       PSPXT01_38_Tr400, tracking_febex.febextrace_0[9].trace[5][399], DATA16);
SIGNAL(PSPX01_39, tracking_febex.febex_0[9].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_39_Tr1);
SIGNAL(PSPXT01_39_Tr1  , tracking_febex.febextrace_0[9].trace[6][0],
       PSPXT01_39_Tr400, tracking_febex.febextrace_0[9].trace[6][399], DATA16);
SIGNAL(PSPX01_40, tracking_febex.febex_0[9].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_40_Tr1);
SIGNAL(PSPXT01_40_Tr1  , tracking_febex.febextrace_0[9].trace[7][0],
       PSPXT01_40_Tr400, tracking_febex.febextrace_0[9].trace[7][399], DATA16);
SIGNAL(PSPX01_41, tracking_febex.febex_0[9].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_41_Tr1);
SIGNAL(PSPXT01_41_Tr1  , tracking_febex.febextrace_0[9].trace[9][0],
       PSPXT01_41_Tr400, tracking_febex.febextrace_0[9].trace[9][399], DATA16);
SIGNAL(PSPX01_42, tracking_febex.febex_0[9].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_42_Tr1);
SIGNAL(PSPXT01_42_Tr1  , tracking_febex.febextrace_0[9].trace[8][0],
       PSPXT01_42_Tr400, tracking_febex.febextrace_0[9].trace[8][399], DATA16);
SIGNAL(PSPX01_43, tracking_febex.febex_0[9].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_43_Tr1);
SIGNAL(PSPXT01_43_Tr1  , tracking_febex.febextrace_0[9].trace[11][0],
       PSPXT01_43_Tr400, tracking_febex.febextrace_0[9].trace[11][399], DATA16);
SIGNAL(PSPX01_44, tracking_febex.febex_0[9].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_44_Tr1);
SIGNAL(PSPXT01_44_Tr1  , tracking_febex.febextrace_0[9].trace[10][0],
       PSPXT01_44_Tr400, tracking_febex.febextrace_0[9].trace[10][399], DATA16);
SIGNAL(PSPX01_45, tracking_febex.febex_0[9].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_45_Tr1);
SIGNAL(PSPXT01_45_Tr1  , tracking_febex.febextrace_0[9].trace[13][0],
       PSPXT01_45_Tr400, tracking_febex.febextrace_0[9].trace[13][399], DATA16);
SIGNAL(PSPX01_46, tracking_febex.febex_0[9].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_46_Tr1);
SIGNAL(PSPXT01_46_Tr1  , tracking_febex.febextrace_0[9].trace[12][0],
       PSPXT01_46_Tr400, tracking_febex.febextrace_0[9].trace[12][399], DATA16);
SIGNAL(PSPX01_47, tracking_febex.febex_0[9].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_47_Tr1);
SIGNAL(PSPXT01_47_Tr1  , tracking_febex.febextrace_0[9].trace[15][0],
       PSPXT01_47_Tr400, tracking_febex.febextrace_0[9].trace[15][399], DATA16);
SIGNAL(PSPX01_48, tracking_febex.febex_0[9].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_48_Tr1);
SIGNAL(PSPXT01_48_Tr1  , tracking_febex.febextrace_0[9].trace[14][0],
       PSPXT01_48_Tr400, tracking_febex.febextrace_0[9].trace[14][399], DATA16);
SIGNAL(PSPX01_49, tracking_febex.febex_0[1].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_49_Tr1);
SIGNAL(PSPXT01_49_Tr1  , tracking_febex.febextrace_0[1].trace[0][0],
       PSPXT01_49_Tr400, tracking_febex.febextrace_0[1].trace[0][399], DATA16);
SIGNAL(PSPX01_50, tracking_febex.febex_0[1].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_50_Tr1);
SIGNAL(PSPXT01_50_Tr1  , tracking_febex.febextrace_0[1].trace[1][0],
       PSPXT01_50_Tr400, tracking_febex.febextrace_0[1].trace[1][399], DATA16);
SIGNAL(PSPX01_51, tracking_febex.febex_0[1].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_51_Tr1);
SIGNAL(PSPXT01_51_Tr1  , tracking_febex.febextrace_0[1].trace[2][0],
       PSPXT01_51_Tr400, tracking_febex.febextrace_0[1].trace[2][399], DATA16);
SIGNAL(PSPX01_52, tracking_febex.febex_0[1].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_52_Tr1);
SIGNAL(PSPXT01_52_Tr1  , tracking_febex.febextrace_0[1].trace[3][0],
       PSPXT01_52_Tr400, tracking_febex.febextrace_0[1].trace[3][399], DATA16);
SIGNAL(PSPX01_53, tracking_febex.febex_0[1].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_53_Tr1);
SIGNAL(PSPXT01_53_Tr1  , tracking_febex.febextrace_0[1].trace[4][0],
       PSPXT01_53_Tr400, tracking_febex.febextrace_0[1].trace[4][399], DATA16);
SIGNAL(PSPX01_54, tracking_febex.febex_0[1].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_54_Tr1);
SIGNAL(PSPXT01_54_Tr1  , tracking_febex.febextrace_0[1].trace[5][0],
       PSPXT01_54_Tr400, tracking_febex.febextrace_0[1].trace[5][399], DATA16);
SIGNAL(PSPX01_55, tracking_febex.febex_0[1].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_55_Tr1);
SIGNAL(PSPXT01_55_Tr1  , tracking_febex.febextrace_0[1].trace[6][0],
       PSPXT01_55_Tr400, tracking_febex.febextrace_0[1].trace[6][399], DATA16);
SIGNAL(PSPX01_56, tracking_febex.febex_0[1].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_56_Tr1);
SIGNAL(PSPXT01_56_Tr1  , tracking_febex.febextrace_0[1].trace[7][0],
       PSPXT01_56_Tr400, tracking_febex.febextrace_0[1].trace[7][399], DATA16);
SIGNAL(PSPX01_57, tracking_febex.febex_0[1].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_57_Tr1);
SIGNAL(PSPXT01_57_Tr1  , tracking_febex.febextrace_0[1].trace[9][0],
       PSPXT01_57_Tr400, tracking_febex.febextrace_0[1].trace[9][399], DATA16);
SIGNAL(PSPX01_58, tracking_febex.febex_0[1].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_58_Tr1);
SIGNAL(PSPXT01_58_Tr1  , tracking_febex.febextrace_0[1].trace[8][0],
       PSPXT01_58_Tr400, tracking_febex.febextrace_0[1].trace[8][399], DATA16);
SIGNAL(PSPX01_59, tracking_febex.febex_0[1].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_59_Tr1);
SIGNAL(PSPXT01_59_Tr1  , tracking_febex.febextrace_0[1].trace[11][0],
       PSPXT01_59_Tr400, tracking_febex.febextrace_0[1].trace[11][399], DATA16);
SIGNAL(PSPX01_60, tracking_febex.febex_0[1].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_60_Tr1);
SIGNAL(PSPXT01_60_Tr1  , tracking_febex.febextrace_0[1].trace[10][0],
       PSPXT01_60_Tr400, tracking_febex.febextrace_0[1].trace[10][399], DATA16);
SIGNAL(PSPX01_61, tracking_febex.febex_0[1].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_61_Tr1);
SIGNAL(PSPXT01_61_Tr1  , tracking_febex.febextrace_0[1].trace[13][0],
       PSPXT01_61_Tr400, tracking_febex.febextrace_0[1].trace[13][399], DATA16);
SIGNAL(PSPX01_62, tracking_febex.febex_0[1].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_62_Tr1);
SIGNAL(PSPXT01_62_Tr1  , tracking_febex.febextrace_0[1].trace[12][0],
       PSPXT01_62_Tr400, tracking_febex.febextrace_0[1].trace[12][399], DATA16);
SIGNAL(PSPX01_63, tracking_febex.febex_0[1].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_63_Tr1);
SIGNAL(PSPXT01_63_Tr1  , tracking_febex.febextrace_0[1].trace[15][0],
       PSPXT01_63_Tr400, tracking_febex.febextrace_0[1].trace[15][399], DATA16);
SIGNAL(PSPX01_64, tracking_febex.febex_0[1].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_64_Tr1);
SIGNAL(PSPXT01_64_Tr1  , tracking_febex.febextrace_0[1].trace[14][0],
       PSPXT01_64_Tr400, tracking_febex.febextrace_0[1].trace[14][399], DATA16);
SIGNAL(PSPX01_65, tracking_febex.febex_0[8].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT01_65_Tr1);
SIGNAL(PSPXT01_65_Tr1  , tracking_febex.febextrace_0[8].trace[7][0],
       PSPXT01_65_Tr400, tracking_febex.febextrace_0[8].trace[7][399], DATA16);

SIGNAL(PSPX02_01, tracking_febex.febex_0[3].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_01_Tr1);
SIGNAL(PSPXT02_01_Tr1  , tracking_febex.febextrace_0[3].trace[0][0],
       PSPXT02_01_Tr400, tracking_febex.febextrace_0[3].trace[0][399], DATA16);
SIGNAL(PSPX02_02, tracking_febex.febex_0[3].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_02_Tr1);
SIGNAL(PSPXT02_02_Tr1  , tracking_febex.febextrace_0[3].trace[1][0],
       PSPXT02_02_Tr400, tracking_febex.febextrace_0[3].trace[1][399], DATA16);
SIGNAL(PSPX02_03, tracking_febex.febex_0[3].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_03_Tr1);
SIGNAL(PSPXT02_03_Tr1  , tracking_febex.febextrace_0[3].trace[2][0],
       PSPXT02_03_Tr400, tracking_febex.febextrace_0[3].trace[2][399], DATA16);
SIGNAL(PSPX02_04, tracking_febex.febex_0[3].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_04_Tr1);
SIGNAL(PSPXT02_04_Tr1  , tracking_febex.febextrace_0[3].trace[3][0],
       PSPXT02_04_Tr400, tracking_febex.febextrace_0[3].trace[3][399], DATA16);
SIGNAL(PSPX02_05, tracking_febex.febex_0[3].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_05_Tr1);
SIGNAL(PSPXT02_05_Tr1  , tracking_febex.febextrace_0[3].trace[4][0],
       PSPXT02_05_Tr400, tracking_febex.febextrace_0[3].trace[4][399], DATA16);
SIGNAL(PSPX02_06, tracking_febex.febex_0[3].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_06_Tr1);
SIGNAL(PSPXT02_06_Tr1  , tracking_febex.febextrace_0[3].trace[5][0],
       PSPXT02_06_Tr400, tracking_febex.febextrace_0[3].trace[5][399], DATA16);
SIGNAL(PSPX02_07, tracking_febex.febex_0[3].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_07_Tr1);
SIGNAL(PSPXT02_07_Tr1  , tracking_febex.febextrace_0[3].trace[6][0],
       PSPXT02_07_Tr400, tracking_febex.febextrace_0[3].trace[6][399], DATA16);
SIGNAL(PSPX02_08, tracking_febex.febex_0[3].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_08_Tr1);
SIGNAL(PSPXT02_08_Tr1  , tracking_febex.febextrace_0[3].trace[7][0],
       PSPXT02_08_Tr400, tracking_febex.febextrace_0[3].trace[7][399], DATA16);
SIGNAL(PSPX02_09, tracking_febex.febex_0[3].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_09_Tr1);
SIGNAL(PSPXT02_09_Tr1  , tracking_febex.febextrace_0[3].trace[9][0],
       PSPXT02_09_Tr400, tracking_febex.febextrace_0[3].trace[9][399], DATA16);
SIGNAL(PSPX02_10, tracking_febex.febex_0[3].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_10_Tr1);
SIGNAL(PSPXT02_10_Tr1  , tracking_febex.febextrace_0[3].trace[8][0],
       PSPXT02_10_Tr400, tracking_febex.febextrace_0[3].trace[8][399], DATA16);
SIGNAL(PSPX02_11, tracking_febex.febex_0[3].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_11_Tr1);
SIGNAL(PSPXT02_11_Tr1  , tracking_febex.febextrace_0[3].trace[11][0],
       PSPXT02_11_Tr400, tracking_febex.febextrace_0[3].trace[11][399], DATA16);
SIGNAL(PSPX02_12, tracking_febex.febex_0[3].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_12_Tr1);
SIGNAL(PSPXT02_12_Tr1  , tracking_febex.febextrace_0[3].trace[10][0],
       PSPXT02_12_Tr400, tracking_febex.febextrace_0[3].trace[10][399], DATA16);
SIGNAL(PSPX02_13, tracking_febex.febex_0[3].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_13_Tr1);
SIGNAL(PSPXT02_13_Tr1  , tracking_febex.febextrace_0[3].trace[13][0],
       PSPXT02_13_Tr400, tracking_febex.febextrace_0[3].trace[13][399], DATA16);
SIGNAL(PSPX02_14, tracking_febex.febex_0[3].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_14_Tr1);
SIGNAL(PSPXT02_14_Tr1  , tracking_febex.febextrace_0[3].trace[12][0],
       PSPXT02_14_Tr400, tracking_febex.febextrace_0[3].trace[12][399], DATA16);
SIGNAL(PSPX02_15, tracking_febex.febex_0[3].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_15_Tr1);
SIGNAL(PSPXT02_15_Tr1  , tracking_febex.febextrace_0[3].trace[15][0],
       PSPXT02_15_Tr400, tracking_febex.febextrace_0[3].trace[15][399], DATA16);
SIGNAL(PSPX02_16, tracking_febex.febex_0[3].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_16_Tr1);
SIGNAL(PSPXT02_16_Tr1  , tracking_febex.febextrace_0[3].trace[14][0],
       PSPXT02_16_Tr400, tracking_febex.febextrace_0[3].trace[14][399], DATA16);
SIGNAL(PSPX02_17, tracking_febex.febex_0[2].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_17_Tr1);
SIGNAL(PSPXT02_17_Tr1  , tracking_febex.febextrace_0[2].trace[0][0],
       PSPXT02_17_Tr400, tracking_febex.febextrace_0[2].trace[0][399], DATA16);
SIGNAL(PSPX02_18, tracking_febex.febex_0[2].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_18_Tr1);
SIGNAL(PSPXT02_18_Tr1  , tracking_febex.febextrace_0[2].trace[1][0],
       PSPXT02_18_Tr400, tracking_febex.febextrace_0[2].trace[1][399], DATA16);
SIGNAL(PSPX02_19, tracking_febex.febex_0[2].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_19_Tr1);
SIGNAL(PSPXT02_19_Tr1  , tracking_febex.febextrace_0[2].trace[2][0],
       PSPXT02_19_Tr400, tracking_febex.febextrace_0[2].trace[2][399], DATA16);
SIGNAL(PSPX02_20, tracking_febex.febex_0[2].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_20_Tr1);
SIGNAL(PSPXT02_20_Tr1  , tracking_febex.febextrace_0[2].trace[3][0],
       PSPXT02_20_Tr400, tracking_febex.febextrace_0[2].trace[3][399], DATA16);
SIGNAL(PSPX02_21, tracking_febex.febex_0[2].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_21_Tr1);
SIGNAL(PSPXT02_21_Tr1  , tracking_febex.febextrace_0[2].trace[4][0],
       PSPXT02_21_Tr400, tracking_febex.febextrace_0[2].trace[4][399], DATA16);
SIGNAL(PSPX02_22, tracking_febex.febex_0[2].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_22_Tr1);
SIGNAL(PSPXT02_22_Tr1  , tracking_febex.febextrace_0[2].trace[5][0],
       PSPXT02_22_Tr400, tracking_febex.febextrace_0[2].trace[5][399], DATA16);
SIGNAL(PSPX02_23, tracking_febex.febex_0[2].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_23_Tr1);
SIGNAL(PSPXT02_23_Tr1  , tracking_febex.febextrace_0[2].trace[6][0],
       PSPXT02_23_Tr400, tracking_febex.febextrace_0[2].trace[6][399], DATA16);
SIGNAL(PSPX02_24, tracking_febex.febex_0[2].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_24_Tr1);
SIGNAL(PSPXT02_24_Tr1  , tracking_febex.febextrace_0[2].trace[7][0],
       PSPXT02_24_Tr400, tracking_febex.febextrace_0[2].trace[7][399], DATA16);
SIGNAL(PSPX02_25, tracking_febex.febex_0[2].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_25_Tr1);
SIGNAL(PSPXT02_25_Tr1  , tracking_febex.febextrace_0[2].trace[9][0],
       PSPXT02_25_Tr400, tracking_febex.febextrace_0[2].trace[9][399], DATA16);
SIGNAL(PSPX02_26, tracking_febex.febex_0[2].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_26_Tr1);
SIGNAL(PSPXT02_26_Tr1  , tracking_febex.febextrace_0[2].trace[8][0],
       PSPXT02_26_Tr400, tracking_febex.febextrace_0[2].trace[8][399], DATA16);
SIGNAL(PSPX02_27, tracking_febex.febex_0[2].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_27_Tr1);
SIGNAL(PSPXT02_27_Tr1  , tracking_febex.febextrace_0[2].trace[11][0],
       PSPXT02_27_Tr400, tracking_febex.febextrace_0[2].trace[11][399], DATA16);
SIGNAL(PSPX02_28, tracking_febex.febex_0[2].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_28_Tr1);
SIGNAL(PSPXT02_28_Tr1  , tracking_febex.febextrace_0[2].trace[10][0],
       PSPXT02_28_Tr400, tracking_febex.febextrace_0[2].trace[10][399], DATA16);
SIGNAL(PSPX02_29, tracking_febex.febex_0[2].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_29_Tr1);
SIGNAL(PSPXT02_29_Tr1  , tracking_febex.febextrace_0[2].trace[13][0],
       PSPXT02_29_Tr400, tracking_febex.febextrace_0[2].trace[13][399], DATA16);
SIGNAL(PSPX02_30, tracking_febex.febex_0[2].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_30_Tr1);
SIGNAL(PSPXT02_30_Tr1  , tracking_febex.febextrace_0[2].trace[12][0],
       PSPXT02_30_Tr400, tracking_febex.febextrace_0[2].trace[12][399], DATA16);
SIGNAL(PSPX02_31, tracking_febex.febex_0[2].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_31_Tr1);
SIGNAL(PSPXT02_31_Tr1  , tracking_febex.febextrace_0[2].trace[15][0],
       PSPXT02_31_Tr400, tracking_febex.febextrace_0[2].trace[15][399], DATA16);
SIGNAL(PSPX02_32, tracking_febex.febex_0[2].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_32_Tr1);
SIGNAL(PSPXT02_32_Tr1  , tracking_febex.febextrace_0[2].trace[14][0],
       PSPXT02_32_Tr400, tracking_febex.febextrace_0[2].trace[14][399], DATA16);
SIGNAL(PSPX02_65, tracking_febex.febex_0[8].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT02_65_Tr1);
SIGNAL(PSPXT02_65_Tr1  , tracking_febex.febextrace_0[8].trace[6][0],
       PSPXT02_65_Tr400, tracking_febex.febextrace_0[8].trace[6][399], DATA16);

SIGNAL(PSPX03_33, tracking_febex.febex_0[5].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_33_Tr1);
SIGNAL(PSPXT03_33_Tr1  , tracking_febex.febextrace_0[5].trace[0][0],
       PSPXT03_33_Tr400, tracking_febex.febextrace_0[5].trace[0][399], DATA16);
SIGNAL(PSPX03_34, tracking_febex.febex_0[5].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_34_Tr1);
SIGNAL(PSPXT03_34_Tr1  , tracking_febex.febextrace_0[5].trace[1][0],
       PSPXT03_34_Tr400, tracking_febex.febextrace_0[5].trace[1][399], DATA16);
SIGNAL(PSPX03_35, tracking_febex.febex_0[5].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_35_Tr1);
SIGNAL(PSPXT03_35_Tr1  , tracking_febex.febextrace_0[5].trace[2][0],
       PSPXT03_35_Tr400, tracking_febex.febextrace_0[5].trace[2][399], DATA16);
SIGNAL(PSPX03_36, tracking_febex.febex_0[5].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_36_Tr1);
SIGNAL(PSPXT03_36_Tr1  , tracking_febex.febextrace_0[5].trace[3][0],
       PSPXT03_36_Tr400, tracking_febex.febextrace_0[5].trace[3][399], DATA16);
SIGNAL(PSPX03_37, tracking_febex.febex_0[5].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_37_Tr1);
SIGNAL(PSPXT03_37_Tr1  , tracking_febex.febextrace_0[5].trace[4][0],
       PSPXT03_37_Tr400, tracking_febex.febextrace_0[5].trace[4][399], DATA16);
SIGNAL(PSPX03_38, tracking_febex.febex_0[5].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_38_Tr1);
SIGNAL(PSPXT03_38_Tr1  , tracking_febex.febextrace_0[5].trace[5][0],
       PSPXT03_38_Tr400, tracking_febex.febextrace_0[5].trace[5][399], DATA16);
SIGNAL(PSPX03_39, tracking_febex.febex_0[5].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_39_Tr1);
SIGNAL(PSPXT03_39_Tr1  , tracking_febex.febextrace_0[5].trace[6][0],
       PSPXT03_39_Tr400, tracking_febex.febextrace_0[5].trace[6][399], DATA16);
SIGNAL(PSPX03_40, tracking_febex.febex_0[5].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_40_Tr1);
SIGNAL(PSPXT03_40_Tr1  , tracking_febex.febextrace_0[5].trace[7][0],
       PSPXT03_40_Tr400, tracking_febex.febextrace_0[5].trace[7][399], DATA16);
SIGNAL(PSPX03_41, tracking_febex.febex_0[5].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_41_Tr1);
SIGNAL(PSPXT03_41_Tr1  , tracking_febex.febextrace_0[5].trace[9][0],
       PSPXT03_41_Tr400, tracking_febex.febextrace_0[5].trace[9][399], DATA16);
SIGNAL(PSPX03_42, tracking_febex.febex_0[5].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_42_Tr1);
SIGNAL(PSPXT03_42_Tr1  , tracking_febex.febextrace_0[5].trace[8][0],
       PSPXT03_42_Tr400, tracking_febex.febextrace_0[5].trace[8][399], DATA16);
SIGNAL(PSPX03_43, tracking_febex.febex_0[5].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_43_Tr1);
SIGNAL(PSPXT03_43_Tr1  , tracking_febex.febextrace_0[5].trace[11][0],
       PSPXT03_43_Tr400, tracking_febex.febextrace_0[5].trace[11][399], DATA16);
SIGNAL(PSPX03_44, tracking_febex.febex_0[5].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_44_Tr1);
SIGNAL(PSPXT03_44_Tr1  , tracking_febex.febextrace_0[5].trace[10][0],
       PSPXT03_44_Tr400, tracking_febex.febextrace_0[5].trace[10][399], DATA16);
SIGNAL(PSPX03_45, tracking_febex.febex_0[5].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_45_Tr1);
SIGNAL(PSPXT03_45_Tr1  , tracking_febex.febextrace_0[5].trace[13][0],
       PSPXT03_45_Tr400, tracking_febex.febextrace_0[5].trace[13][399], DATA16);
SIGNAL(PSPX03_46, tracking_febex.febex_0[5].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_46_Tr1);
SIGNAL(PSPXT03_46_Tr1  , tracking_febex.febextrace_0[5].trace[12][0],
       PSPXT03_46_Tr400, tracking_febex.febextrace_0[5].trace[12][399], DATA16);
SIGNAL(PSPX03_47, tracking_febex.febex_0[5].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_47_Tr1);
SIGNAL(PSPXT03_47_Tr1  , tracking_febex.febextrace_0[5].trace[15][0],
       PSPXT03_47_Tr400, tracking_febex.febextrace_0[5].trace[15][399], DATA16);
SIGNAL(PSPX03_48, tracking_febex.febex_0[5].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_48_Tr1);
SIGNAL(PSPXT03_48_Tr1  , tracking_febex.febextrace_0[5].trace[14][0],
       PSPXT03_48_Tr400, tracking_febex.febextrace_0[5].trace[14][399], DATA16);
SIGNAL(PSPX03_49, tracking_febex.febex_0[4].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_49_Tr1);
SIGNAL(PSPXT03_49_Tr1  , tracking_febex.febextrace_0[4].trace[0][0],
       PSPXT03_49_Tr400, tracking_febex.febextrace_0[4].trace[0][399], DATA16);
SIGNAL(PSPX03_50, tracking_febex.febex_0[4].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_50_Tr1);
SIGNAL(PSPXT03_50_Tr1  , tracking_febex.febextrace_0[4].trace[1][0],
       PSPXT03_50_Tr400, tracking_febex.febextrace_0[4].trace[1][399], DATA16);
SIGNAL(PSPX03_51, tracking_febex.febex_0[4].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_51_Tr1);
SIGNAL(PSPXT03_51_Tr1  , tracking_febex.febextrace_0[4].trace[2][0],
       PSPXT03_51_Tr400, tracking_febex.febextrace_0[4].trace[2][399], DATA16);
SIGNAL(PSPX03_52, tracking_febex.febex_0[4].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_52_Tr1);
SIGNAL(PSPXT03_52_Tr1  , tracking_febex.febextrace_0[4].trace[3][0],
       PSPXT03_52_Tr400, tracking_febex.febextrace_0[4].trace[3][399], DATA16);
SIGNAL(PSPX03_53, tracking_febex.febex_0[4].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_53_Tr1);
SIGNAL(PSPXT03_53_Tr1  , tracking_febex.febextrace_0[4].trace[4][0],
       PSPXT03_53_Tr400, tracking_febex.febextrace_0[4].trace[4][399], DATA16);
SIGNAL(PSPX03_54, tracking_febex.febex_0[4].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_54_Tr1);
SIGNAL(PSPXT03_54_Tr1  , tracking_febex.febextrace_0[4].trace[5][0],
       PSPXT03_54_Tr400, tracking_febex.febextrace_0[4].trace[5][399], DATA16);
SIGNAL(PSPX03_55, tracking_febex.febex_0[4].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_55_Tr1);
SIGNAL(PSPXT03_55_Tr1  , tracking_febex.febextrace_0[4].trace[6][0],
       PSPXT03_55_Tr400, tracking_febex.febextrace_0[4].trace[6][399], DATA16);
SIGNAL(PSPX03_56, tracking_febex.febex_0[4].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_56_Tr1);
SIGNAL(PSPXT03_56_Tr1  , tracking_febex.febextrace_0[4].trace[7][0],
       PSPXT03_56_Tr400, tracking_febex.febextrace_0[4].trace[7][399], DATA16);
SIGNAL(PSPX03_57, tracking_febex.febex_0[4].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_57_Tr1);
SIGNAL(PSPXT03_57_Tr1  , tracking_febex.febextrace_0[4].trace[9][0],
       PSPXT03_57_Tr400, tracking_febex.febextrace_0[4].trace[9][399], DATA16);
SIGNAL(PSPX03_58, tracking_febex.febex_0[4].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_58_Tr1);
SIGNAL(PSPXT03_58_Tr1  , tracking_febex.febextrace_0[4].trace[8][0],
       PSPXT03_58_Tr400, tracking_febex.febextrace_0[4].trace[8][399], DATA16);
SIGNAL(PSPX03_59, tracking_febex.febex_0[4].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_59_Tr1);
SIGNAL(PSPXT03_59_Tr1  , tracking_febex.febextrace_0[4].trace[11][0],
       PSPXT03_59_Tr400, tracking_febex.febextrace_0[4].trace[11][399], DATA16);
SIGNAL(PSPX03_60, tracking_febex.febex_0[4].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_60_Tr1);
SIGNAL(PSPXT03_60_Tr1  , tracking_febex.febextrace_0[4].trace[10][0],
       PSPXT03_60_Tr400, tracking_febex.febextrace_0[4].trace[10][399], DATA16);
SIGNAL(PSPX03_61, tracking_febex.febex_0[4].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_61_Tr1);
SIGNAL(PSPXT03_61_Tr1  , tracking_febex.febextrace_0[4].trace[13][0],
       PSPXT03_61_Tr400, tracking_febex.febextrace_0[4].trace[13][399], DATA16);
SIGNAL(PSPX03_62, tracking_febex.febex_0[4].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_62_Tr1);
SIGNAL(PSPXT03_62_Tr1  , tracking_febex.febextrace_0[4].trace[12][0],
       PSPXT03_62_Tr400, tracking_febex.febextrace_0[4].trace[12][399], DATA16);
SIGNAL(PSPX03_63, tracking_febex.febex_0[4].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_63_Tr1);
SIGNAL(PSPXT03_63_Tr1  , tracking_febex.febextrace_0[4].trace[15][0],
       PSPXT03_63_Tr400, tracking_febex.febextrace_0[4].trace[15][399], DATA16);
SIGNAL(PSPX03_64, tracking_febex.febex_0[4].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_64_Tr1);
SIGNAL(PSPXT03_64_Tr1  , tracking_febex.febextrace_0[4].trace[14][0],
       PSPXT03_64_Tr400, tracking_febex.febextrace_0[4].trace[14][399], DATA16);
SIGNAL(PSPX03_65, tracking_febex.febex_0[8].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT03_65_Tr1);
SIGNAL(PSPXT03_65_Tr1  , tracking_febex.febextrace_0[8].trace[15][0],
       PSPXT03_65_Tr400, tracking_febex.febextrace_0[8].trace[15][399], DATA16);

SIGNAL(PSPX04_01, tracking_febex.febex_0[6].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_01_Tr1);
SIGNAL(PSPXT04_01_Tr1  , tracking_febex.febextrace_0[6].trace[15][0],
       PSPXT04_01_Tr400, tracking_febex.febextrace_0[6].trace[15][399], DATA16);
SIGNAL(PSPX04_02, tracking_febex.febex_0[6].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_02_Tr1);
SIGNAL(PSPXT04_02_Tr1  , tracking_febex.febextrace_0[6].trace[14][0],
       PSPXT04_02_Tr400, tracking_febex.febextrace_0[6].trace[14][399], DATA16);
SIGNAL(PSPX04_03, tracking_febex.febex_0[6].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_03_Tr1);
SIGNAL(PSPXT04_03_Tr1  , tracking_febex.febextrace_0[6].trace[13][0],
       PSPXT04_03_Tr400, tracking_febex.febextrace_0[6].trace[13][399], DATA16);
SIGNAL(PSPX04_04, tracking_febex.febex_0[6].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_04_Tr1);
SIGNAL(PSPXT04_04_Tr1  , tracking_febex.febextrace_0[6].trace[12][0],
       PSPXT04_04_Tr400, tracking_febex.febextrace_0[6].trace[12][399], DATA16);
SIGNAL(PSPX04_05, tracking_febex.febex_0[6].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_05_Tr1);
SIGNAL(PSPXT04_05_Tr1  , tracking_febex.febextrace_0[6].trace[11][0],
       PSPXT04_05_Tr400, tracking_febex.febextrace_0[6].trace[11][399], DATA16);
SIGNAL(PSPX04_06, tracking_febex.febex_0[6].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_06_Tr1);
SIGNAL(PSPXT04_06_Tr1  , tracking_febex.febextrace_0[6].trace[10][0],
       PSPXT04_06_Tr400, tracking_febex.febextrace_0[6].trace[10][399], DATA16);
SIGNAL(PSPX04_07, tracking_febex.febex_0[6].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_07_Tr1);
SIGNAL(PSPXT04_07_Tr1  , tracking_febex.febextrace_0[6].trace[9][0],
       PSPXT04_07_Tr400, tracking_febex.febextrace_0[6].trace[9][399], DATA16);
SIGNAL(PSPX04_08, tracking_febex.febex_0[6].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_08_Tr1);
SIGNAL(PSPXT04_08_Tr1  , tracking_febex.febextrace_0[6].trace[8][0],
       PSPXT04_08_Tr400, tracking_febex.febextrace_0[6].trace[8][399], DATA16);
SIGNAL(PSPX04_09, tracking_febex.febex_0[6].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_09_Tr1);
SIGNAL(PSPXT04_09_Tr1  , tracking_febex.febextrace_0[6].trace[6][0],
       PSPXT04_09_Tr400, tracking_febex.febextrace_0[6].trace[6][399], DATA16);
SIGNAL(PSPX04_10, tracking_febex.febex_0[6].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_10_Tr1);
SIGNAL(PSPXT04_10_Tr1  , tracking_febex.febextrace_0[6].trace[7][0],
       PSPXT04_10_Tr400, tracking_febex.febextrace_0[6].trace[7][399], DATA16);
SIGNAL(PSPX04_11, tracking_febex.febex_0[6].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_11_Tr1);
SIGNAL(PSPXT04_11_Tr1  , tracking_febex.febextrace_0[6].trace[4][0],
       PSPXT04_11_Tr400, tracking_febex.febextrace_0[6].trace[4][399], DATA16);
SIGNAL(PSPX04_12, tracking_febex.febex_0[6].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_12_Tr1);
SIGNAL(PSPXT04_12_Tr1  , tracking_febex.febextrace_0[6].trace[5][0],
       PSPXT04_12_Tr400, tracking_febex.febextrace_0[6].trace[5][399], DATA16);
SIGNAL(PSPX04_13, tracking_febex.febex_0[6].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_13_Tr1);
SIGNAL(PSPXT04_13_Tr1  , tracking_febex.febextrace_0[6].trace[2][0],
       PSPXT04_13_Tr400, tracking_febex.febextrace_0[6].trace[2][399], DATA16);
SIGNAL(PSPX04_14, tracking_febex.febex_0[6].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_14_Tr1);
SIGNAL(PSPXT04_14_Tr1  , tracking_febex.febextrace_0[6].trace[3][0],
       PSPXT04_14_Tr400, tracking_febex.febextrace_0[6].trace[3][399], DATA16);
SIGNAL(PSPX04_15, tracking_febex.febex_0[6].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_15_Tr1);
SIGNAL(PSPXT04_15_Tr1  , tracking_febex.febextrace_0[6].trace[0][0],
       PSPXT04_15_Tr400, tracking_febex.febextrace_0[6].trace[0][399], DATA16);
SIGNAL(PSPX04_16, tracking_febex.febex_0[6].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_16_Tr1);
SIGNAL(PSPXT04_16_Tr1  , tracking_febex.febextrace_0[6].trace[1][0],
       PSPXT04_16_Tr400, tracking_febex.febextrace_0[6].trace[1][399], DATA16);
SIGNAL(PSPX04_17, tracking_febex.febex_0[7].e[15], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_17_Tr1);
SIGNAL(PSPXT04_17_Tr1  , tracking_febex.febextrace_0[7].trace[15][0],
       PSPXT04_17_Tr400, tracking_febex.febextrace_0[7].trace[15][399], DATA16);
SIGNAL(PSPX04_18, tracking_febex.febex_0[7].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_18_Tr1);
SIGNAL(PSPXT04_18_Tr1  , tracking_febex.febextrace_0[7].trace[14][0],
       PSPXT04_18_Tr400, tracking_febex.febextrace_0[7].trace[14][399], DATA16);
SIGNAL(PSPX04_19, tracking_febex.febex_0[7].e[13], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_19_Tr1);
SIGNAL(PSPXT04_19_Tr1  , tracking_febex.febextrace_0[7].trace[13][0],
       PSPXT04_19_Tr400, tracking_febex.febextrace_0[7].trace[13][399], DATA16);
SIGNAL(PSPX04_20, tracking_febex.febex_0[7].e[12], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_20_Tr1);
SIGNAL(PSPXT04_20_Tr1  , tracking_febex.febextrace_0[7].trace[12][0],
       PSPXT04_20_Tr400, tracking_febex.febextrace_0[7].trace[12][399], DATA16);
SIGNAL(PSPX04_21, tracking_febex.febex_0[7].e[11], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_21_Tr1);
SIGNAL(PSPXT04_21_Tr1  , tracking_febex.febextrace_0[7].trace[11][0],
       PSPXT04_21_Tr400, tracking_febex.febextrace_0[7].trace[11][399], DATA16);
SIGNAL(PSPX04_22, tracking_febex.febex_0[7].e[10], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_22_Tr1);
SIGNAL(PSPXT04_22_Tr1  , tracking_febex.febextrace_0[7].trace[10][0],
       PSPXT04_22_Tr400, tracking_febex.febextrace_0[7].trace[10][399], DATA16);
SIGNAL(PSPX04_23, tracking_febex.febex_0[7].e[9], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_23_Tr1);
SIGNAL(PSPXT04_23_Tr1  , tracking_febex.febextrace_0[7].trace[9][0],
       PSPXT04_23_Tr400, tracking_febex.febextrace_0[7].trace[9][399], DATA16);
SIGNAL(PSPX04_24, tracking_febex.febex_0[7].e[8], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_24_Tr1);
SIGNAL(PSPXT04_24_Tr1  , tracking_febex.febextrace_0[7].trace[8][0],
       PSPXT04_24_Tr400, tracking_febex.febextrace_0[7].trace[8][399], DATA16);
SIGNAL(PSPX04_25, tracking_febex.febex_0[7].e[6], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_25_Tr1);
SIGNAL(PSPXT04_25_Tr1  , tracking_febex.febextrace_0[7].trace[6][0],
       PSPXT04_25_Tr400, tracking_febex.febextrace_0[7].trace[6][399], DATA16);
SIGNAL(PSPX04_26, tracking_febex.febex_0[7].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_26_Tr1);
SIGNAL(PSPXT04_26_Tr1  , tracking_febex.febextrace_0[7].trace[7][0],
       PSPXT04_26_Tr400, tracking_febex.febextrace_0[7].trace[7][399], DATA16);
SIGNAL(PSPX04_27, tracking_febex.febex_0[7].e[4], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_27_Tr1);
SIGNAL(PSPXT04_27_Tr1  , tracking_febex.febextrace_0[7].trace[4][0],
       PSPXT04_27_Tr400, tracking_febex.febextrace_0[7].trace[4][399], DATA16);
SIGNAL(PSPX04_28, tracking_febex.febex_0[7].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_28_Tr1);
SIGNAL(PSPXT04_28_Tr1  , tracking_febex.febextrace_0[7].trace[5][0],
       PSPXT04_28_Tr400, tracking_febex.febextrace_0[7].trace[5][399], DATA16);
SIGNAL(PSPX04_29, tracking_febex.febex_0[7].e[2], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_29_Tr1);
SIGNAL(PSPXT04_29_Tr1  , tracking_febex.febextrace_0[7].trace[2][0],
       PSPXT04_29_Tr400, tracking_febex.febextrace_0[7].trace[2][399], DATA16);
SIGNAL(PSPX04_30, tracking_febex.febex_0[7].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_30_Tr1);
SIGNAL(PSPXT04_30_Tr1  , tracking_febex.febextrace_0[7].trace[3][0],
       PSPXT04_30_Tr400, tracking_febex.febextrace_0[7].trace[3][399], DATA16);
SIGNAL(PSPX04_31, tracking_febex.febex_0[7].e[0], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_31_Tr1);
SIGNAL(PSPXT04_31_Tr1  , tracking_febex.febextrace_0[7].trace[0][0],
       PSPXT04_31_Tr400, tracking_febex.febextrace_0[7].trace[0][399], DATA16);
SIGNAL(PSPX04_32, tracking_febex.febex_0[7].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_32_Tr1);
SIGNAL(PSPXT04_32_Tr1  , tracking_febex.febextrace_0[7].trace[1][0],
       PSPXT04_32_Tr400, tracking_febex.febextrace_0[7].trace[1][399], DATA16);
SIGNAL(PSPX04_65, tracking_febex.febex_0[8].e[14], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT04_65_Tr1);
SIGNAL(PSPXT04_65_Tr1  , tracking_febex.febextrace_0[8].trace[14][0],
       PSPXT04_65_Tr400, tracking_febex.febextrace_0[8].trace[14][399], DATA16);
*/

//SIPDs
/*
SIGNAL(PSPX05_2, tracking_febex.febex_0[0].e[1], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT05_2_Tr1);
SIGNAL(PSPXT05_2_Tr1  , tracking_febex.febextrace_0[0].trace[1][0],
       PSPXT05_2_Tr400, tracking_febex.febextrace_0[0].trace[1][399], DATA16);

SIGNAL(PSPX05_4, tracking_febex.febex_0[0].e[3], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT05_4_Tr1);
SIGNAL(PSPXT05_4_Tr1  , tracking_febex.febextrace_0[0].trace[3][0],
       PSPXT05_4_Tr400, tracking_febex.febextrace_0[0].trace[3][399], DATA16);

SIGNAL(PSPX05_6, tracking_febex.febex_0[0].e[5], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT05_6_Tr1);
SIGNAL(PSPXT05_6_Tr1  , tracking_febex.febextrace_0[0].trace[5][0],
       PSPXT05_6_Tr400, tracking_febex.febextrace_0[0].trace[5][399], DATA16);

SIGNAL(PSPX05_8, tracking_febex.febex_0[0].e[7], DATA32);
SIGNAL(ZERO_SUPPRESS: PSPXT05_8_Tr1);
SIGNAL(PSPXT05_8_Tr1  , tracking_febex.febextrace_0[0].trace[7][0],
       PSPXT05_8_Tr400, tracking_febex.febextrace_0[0].trace[7][399], DATA16);
*/

/******** tracking fiber called FITRACK *********/
//card 1/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_1t1);
SIGNAL(FITRACK_3t1, fitest_febex.febex[0].t[0],
       FITRACK_3t16,fitest_febex.febex[0].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_1E1);
SIGNAL(FITRACK_3E1, fitest_febex.febex[0].e[0],
       FITRACK_3E16,fitest_febex.febex[0].e[15],DATA32);
//card 2/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_2t1);
SIGNAL(FITRACK_4t1, fitest_febex.febex[1].t[0],
       FITRACK_4t16,fitest_febex.febex[1].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_2E1);
SIGNAL(FITRACK_4E1, fitest_febex.febex[1].e[0],
       FITRACK_4E16,fitest_febex.febex[1].e[15],DATA32);
//card 3/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_3t1);
SIGNAL(FITRACK_5t1, fitest_febex.febex[2].t[0],
       FITRACK_5t16,fitest_febex.febex[2].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_3E1);
SIGNAL(FITRACK_5E1, fitest_febex.febex[2].e[0],
       FITRACK_5E16,fitest_febex.febex[2].e[15],DATA32);
//card 4/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_4t1);
SIGNAL(FITRACK_6t1, fitest_febex.febex[3].t[0],
       FITRACK_6t16,fitest_febex.febex[3].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_4E1);
SIGNAL(FITRACK_6E1, fitest_febex.febex[3].e[0],
       FITRACK_6E16,fitest_febex.febex[3].e[15],DATA32);
//card 5/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_5t1);
SIGNAL(FITRACK_7t1, fitest_febex.febex[4].t[0],
       FITRACK_7t16,fitest_febex.febex[4].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_5E1);
SIGNAL(FITRACK_7E1, fitest_febex.febex[4].e[0],
       FITRACK_7E16,fitest_febex.febex[4].e[15],DATA32);
//card 6/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_6t1);
SIGNAL(FITRACK_8t1, fitest_febex.febex[5].t[0],
       FITRACK_8t16,fitest_febex.febex[5].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_6E1);
SIGNAL(FITRACK_8E1, fitest_febex.febex[5].e[0],
       FITRACK_8E16,fitest_febex.febex[5].e[15],DATA32);
//card 7/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_7t1);
SIGNAL(FITRACK_9t1, fitest_febex.febex[6].t[0],
       FITRACK_9t16,fitest_febex.febex[6].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_7E1);
SIGNAL(FITRACK_9E1, fitest_febex.febex[6].e[0],
       FITRACK_9E16,fitest_febex.febex[6].e[15],DATA32);
//card 8/8 third card on the crate
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_8t1);
SIGNAL(FITRACK_10t1, fitest_febex.febex[7].t[0],
       FITRACK_10t16,fitest_febex.febex[7].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(32): FITRACK_8E1);
SIGNAL(FITRACK_10E1, fitest_febex.febex[7].e[0],
       FITRACK_10E16,fitest_febex.febex[7].e[15],DATA32);
/**********end FITRACK  ************/

/* FITRACEs. */
/*
SIGNAL(ZERO_SUPPRESS: FITRACE3_1_E1);
SIGNAL(FITRACE3_1_E1, fitest_febex.febextrace[0].trace[0][0], FITRACE3_1_E200, fitest_febex.febextrace[0].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_2_E1);
SIGNAL(FITRACE3_2_E1, fitest_febex.febextrace[0].trace[1][0], FITRACE3_2_E200, fitest_febex.febextrace[0].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_3_E1);
SIGNAL(FITRACE3_3_E1, fitest_febex.febextrace[0].trace[2][0], FITRACE3_3_E200, fitest_febex.febextrace[0].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_4_E1);
SIGNAL(FITRACE3_4_E1, fitest_febex.febextrace[0].trace[3][0], FITRACE3_4_E200, fitest_febex.febextrace[0].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_5_E1);
SIGNAL(FITRACE3_5_E1, fitest_febex.febextrace[0].trace[4][0], FITRACE3_5_E200, fitest_febex.febextrace[0].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_6_E1);
SIGNAL(FITRACE3_6_E1, fitest_febex.febextrace[0].trace[5][0], FITRACE3_6_E200, fitest_febex.febextrace[0].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_7_E1);
SIGNAL(FITRACE3_7_E1, fitest_febex.febextrace[0].trace[6][0], FITRACE3_7_E200, fitest_febex.febextrace[0].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_8_E1);
SIGNAL(FITRACE3_8_E1, fitest_febex.febextrace[0].trace[7][0], FITRACE3_8_E200, fitest_febex.febextrace[0].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_9_E1);
SIGNAL(FITRACE3_9_E1, fitest_febex.febextrace[0].trace[8][0], FITRACE3_9_E200, fitest_febex.febextrace[0].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_10_E1);
SIGNAL(FITRACE3_10_E1, fitest_febex.febextrace[0].trace[9][0], FITRACE3_10_E200, fitest_febex.febextrace[0].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_11_E1);
SIGNAL(FITRACE3_11_E1, fitest_febex.febextrace[0].trace[10][0], FITRACE3_11_E200, fitest_febex.febextrace[0].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_12_E1);
SIGNAL(FITRACE3_12_E1, fitest_febex.febextrace[0].trace[11][0], FITRACE3_12_E200, fitest_febex.febextrace[0].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_13_E1);
SIGNAL(FITRACE3_13_E1, fitest_febex.febextrace[0].trace[12][0], FITRACE3_13_E200, fitest_febex.febextrace[0].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_14_E1);
SIGNAL(FITRACE3_14_E1, fitest_febex.febextrace[0].trace[13][0], FITRACE3_14_E200, fitest_febex.febextrace[0].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_15_E1);
SIGNAL(FITRACE3_15_E1, fitest_febex.febextrace[0].trace[14][0], FITRACE3_15_E200, fitest_febex.febextrace[0].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE3_16_E1);
SIGNAL(FITRACE3_16_E1, fitest_febex.febextrace[0].trace[15][0], FITRACE3_16_E200, fitest_febex.febextrace[0].trace[15][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_1_E1);
SIGNAL(FITRACE4_1_E1, fitest_febex.febextrace[1].trace[0][0], FITRACE4_1_E200, fitest_febex.febextrace[1].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_2_E1);
SIGNAL(FITRACE4_2_E1, fitest_febex.febextrace[1].trace[1][0], FITRACE4_2_E200, fitest_febex.febextrace[1].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_3_E1);
SIGNAL(FITRACE4_3_E1, fitest_febex.febextrace[1].trace[2][0], FITRACE4_3_E200, fitest_febex.febextrace[1].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_4_E1);
SIGNAL(FITRACE4_4_E1, fitest_febex.febextrace[1].trace[3][0], FITRACE4_4_E200, fitest_febex.febextrace[1].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_5_E1);
SIGNAL(FITRACE4_5_E1, fitest_febex.febextrace[1].trace[4][0], FITRACE4_5_E200, fitest_febex.febextrace[1].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_6_E1);
SIGNAL(FITRACE4_6_E1, fitest_febex.febextrace[1].trace[5][0], FITRACE4_6_E200, fitest_febex.febextrace[1].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_7_E1);
SIGNAL(FITRACE4_7_E1, fitest_febex.febextrace[1].trace[6][0], FITRACE4_7_E200, fitest_febex.febextrace[1].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_8_E1);
SIGNAL(FITRACE4_8_E1, fitest_febex.febextrace[1].trace[7][0], FITRACE4_8_E200, fitest_febex.febextrace[1].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_9_E1);
SIGNAL(FITRACE4_9_E1, fitest_febex.febextrace[1].trace[8][0], FITRACE4_9_E200, fitest_febex.febextrace[1].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_10_E1);
SIGNAL(FITRACE4_10_E1, fitest_febex.febextrace[1].trace[9][0], FITRACE4_10_E200, fitest_febex.febextrace[1].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_11_E1);
SIGNAL(FITRACE4_11_E1, fitest_febex.febextrace[1].trace[10][0], FITRACE4_11_E200, fitest_febex.febextrace[1].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_12_E1);
SIGNAL(FITRACE4_12_E1, fitest_febex.febextrace[1].trace[11][0], FITRACE4_12_E200, fitest_febex.febextrace[1].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_13_E1);
SIGNAL(FITRACE4_13_E1, fitest_febex.febextrace[1].trace[12][0], FITRACE4_13_E200, fitest_febex.febextrace[1].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_14_E1);
SIGNAL(FITRACE4_14_E1, fitest_febex.febextrace[1].trace[13][0], FITRACE4_14_E200, fitest_febex.febextrace[1].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_15_E1);
SIGNAL(FITRACE4_15_E1, fitest_febex.febextrace[1].trace[14][0], FITRACE4_15_E200, fitest_febex.febextrace[1].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE4_16_E1);
SIGNAL(FITRACE4_16_E1, fitest_febex.febextrace[1].trace[15][0], FITRACE4_16_E200, fitest_febex.febextrace[1].trace[15][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_1_E1);
SIGNAL(FITRACE5_1_E1, fitest_febex.febextrace[2].trace[0][0], FITRACE5_1_E200, fitest_febex.febextrace[2].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_2_E1);
SIGNAL(FITRACE5_2_E1, fitest_febex.febextrace[2].trace[1][0], FITRACE5_2_E200, fitest_febex.febextrace[2].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_3_E1);
SIGNAL(FITRACE5_3_E1, fitest_febex.febextrace[2].trace[2][0], FITRACE5_3_E200, fitest_febex.febextrace[2].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_4_E1);
SIGNAL(FITRACE5_4_E1, fitest_febex.febextrace[2].trace[3][0], FITRACE5_4_E200, fitest_febex.febextrace[2].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_5_E1);
SIGNAL(FITRACE5_5_E1, fitest_febex.febextrace[2].trace[4][0], FITRACE5_5_E200, fitest_febex.febextrace[2].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_6_E1);
SIGNAL(FITRACE5_6_E1, fitest_febex.febextrace[2].trace[5][0], FITRACE5_6_E200, fitest_febex.febextrace[2].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_7_E1);
SIGNAL(FITRACE5_7_E1, fitest_febex.febextrace[2].trace[6][0], FITRACE5_7_E200, fitest_febex.febextrace[2].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_8_E1);
SIGNAL(FITRACE5_8_E1, fitest_febex.febextrace[2].trace[7][0], FITRACE5_8_E200, fitest_febex.febextrace[2].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_9_E1);
SIGNAL(FITRACE5_9_E1, fitest_febex.febextrace[2].trace[8][0], FITRACE5_9_E200, fitest_febex.febextrace[2].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_10_E1);
SIGNAL(FITRACE5_10_E1, fitest_febex.febextrace[2].trace[9][0], FITRACE5_10_E200, fitest_febex.febextrace[2].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_11_E1);
SIGNAL(FITRACE5_11_E1, fitest_febex.febextrace[2].trace[10][0], FITRACE5_11_E200, fitest_febex.febextrace[2].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_12_E1);
SIGNAL(FITRACE5_12_E1, fitest_febex.febextrace[2].trace[11][0], FITRACE5_12_E200, fitest_febex.febextrace[2].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_13_E1);
SIGNAL(FITRACE5_13_E1, fitest_febex.febextrace[2].trace[12][0], FITRACE5_13_E200, fitest_febex.febextrace[2].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_14_E1);
SIGNAL(FITRACE5_14_E1, fitest_febex.febextrace[2].trace[13][0], FITRACE5_14_E200, fitest_febex.febextrace[2].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_15_E1);
SIGNAL(FITRACE5_15_E1, fitest_febex.febextrace[2].trace[14][0], FITRACE5_15_E200, fitest_febex.febextrace[2].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE5_16_E1);
SIGNAL(FITRACE5_16_E1, fitest_febex.febextrace[2].trace[15][0], FITRACE5_16_E200, fitest_febex.febextrace[2].trace[15][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_1_E1);
SIGNAL(FITRACE6_1_E1, fitest_febex.febextrace[3].trace[0][0], FITRACE6_1_E200, fitest_febex.febextrace[3].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_2_E1);
SIGNAL(FITRACE6_2_E1, fitest_febex.febextrace[3].trace[1][0], FITRACE6_2_E200, fitest_febex.febextrace[3].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_3_E1);
SIGNAL(FITRACE6_3_E1, fitest_febex.febextrace[3].trace[2][0], FITRACE6_3_E200, fitest_febex.febextrace[3].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_4_E1);
SIGNAL(FITRACE6_4_E1, fitest_febex.febextrace[3].trace[3][0], FITRACE6_4_E200, fitest_febex.febextrace[3].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_5_E1);
SIGNAL(FITRACE6_5_E1, fitest_febex.febextrace[3].trace[4][0], FITRACE6_5_E200, fitest_febex.febextrace[3].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_6_E1);
SIGNAL(FITRACE6_6_E1, fitest_febex.febextrace[3].trace[5][0], FITRACE6_6_E200, fitest_febex.febextrace[3].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_7_E1);
SIGNAL(FITRACE6_7_E1, fitest_febex.febextrace[3].trace[6][0], FITRACE6_7_E200, fitest_febex.febextrace[3].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_8_E1);
SIGNAL(FITRACE6_8_E1, fitest_febex.febextrace[3].trace[7][0], FITRACE6_8_E200, fitest_febex.febextrace[3].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_9_E1);
SIGNAL(FITRACE6_9_E1, fitest_febex.febextrace[3].trace[8][0], FITRACE6_9_E200, fitest_febex.febextrace[3].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_10_E1);
SIGNAL(FITRACE6_10_E1, fitest_febex.febextrace[3].trace[9][0], FITRACE6_10_E200, fitest_febex.febextrace[3].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_11_E1);
SIGNAL(FITRACE6_11_E1, fitest_febex.febextrace[3].trace[10][0], FITRACE6_11_E200, fitest_febex.febextrace[3].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_12_E1);
SIGNAL(FITRACE6_12_E1, fitest_febex.febextrace[3].trace[11][0], FITRACE6_12_E200, fitest_febex.febextrace[3].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_13_E1);
SIGNAL(FITRACE6_13_E1, fitest_febex.febextrace[3].trace[12][0], FITRACE6_13_E200, fitest_febex.febextrace[3].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_14_E1);
SIGNAL(FITRACE6_14_E1, fitest_febex.febextrace[3].trace[13][0], FITRACE6_14_E200, fitest_febex.febextrace[3].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_15_E1);
SIGNAL(FITRACE6_15_E1, fitest_febex.febextrace[3].trace[14][0], FITRACE6_15_E200, fitest_febex.febextrace[3].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE6_16_E1);
SIGNAL(FITRACE6_16_E1, fitest_febex.febextrace[3].trace[15][0], FITRACE6_16_E200, fitest_febex.febextrace[3].trace[15][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_1_E1);
SIGNAL(FITRACE7_1_E1, fitest_febex.febextrace[4].trace[0][0], FITRACE7_1_E200, fitest_febex.febextrace[4].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_2_E1);
SIGNAL(FITRACE7_2_E1, fitest_febex.febextrace[4].trace[1][0], FITRACE7_2_E200, fitest_febex.febextrace[4].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_3_E1);
SIGNAL(FITRACE7_3_E1, fitest_febex.febextrace[4].trace[2][0], FITRACE7_3_E200, fitest_febex.febextrace[4].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_4_E1);
SIGNAL(FITRACE7_4_E1, fitest_febex.febextrace[4].trace[3][0], FITRACE7_4_E200, fitest_febex.febextrace[4].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_5_E1);
SIGNAL(FITRACE7_5_E1, fitest_febex.febextrace[4].trace[4][0], FITRACE7_5_E200, fitest_febex.febextrace[4].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_6_E1);
SIGNAL(FITRACE7_6_E1, fitest_febex.febextrace[4].trace[5][0], FITRACE7_6_E200, fitest_febex.febextrace[4].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_7_E1);
SIGNAL(FITRACE7_7_E1, fitest_febex.febextrace[4].trace[6][0], FITRACE7_7_E200, fitest_febex.febextrace[4].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_8_E1);
SIGNAL(FITRACE7_8_E1, fitest_febex.febextrace[4].trace[7][0], FITRACE7_8_E200, fitest_febex.febextrace[4].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_9_E1);
SIGNAL(FITRACE7_9_E1, fitest_febex.febextrace[4].trace[8][0], FITRACE7_9_E200, fitest_febex.febextrace[4].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_10_E1);
SIGNAL(FITRACE7_10_E1, fitest_febex.febextrace[4].trace[9][0], FITRACE7_10_E200, fitest_febex.febextrace[4].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_11_E1);
SIGNAL(FITRACE7_11_E1, fitest_febex.febextrace[4].trace[10][0], FITRACE7_11_E200, fitest_febex.febextrace[4].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_12_E1);
SIGNAL(FITRACE7_12_E1, fitest_febex.febextrace[4].trace[11][0], FITRACE7_12_E200, fitest_febex.febextrace[4].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_13_E1);
SIGNAL(FITRACE7_13_E1, fitest_febex.febextrace[4].trace[12][0], FITRACE7_13_E200, fitest_febex.febextrace[4].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_14_E1);
SIGNAL(FITRACE7_14_E1, fitest_febex.febextrace[4].trace[13][0], FITRACE7_14_E200, fitest_febex.febextrace[4].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_15_E1);
SIGNAL(FITRACE7_15_E1, fitest_febex.febextrace[4].trace[14][0], FITRACE7_15_E200, fitest_febex.febextrace[4].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE7_16_E1);
SIGNAL(FITRACE7_16_E1, fitest_febex.febextrace[4].trace[15][0], FITRACE7_16_E200, fitest_febex.febextrace[4].trace[15][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_1_E1);
SIGNAL(FITRACE8_1_E1, fitest_febex.febextrace[5].trace[0][0], FITRACE8_1_E200, fitest_febex.febextrace[5].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_2_E1);
SIGNAL(FITRACE8_2_E1, fitest_febex.febextrace[5].trace[1][0], FITRACE8_2_E200, fitest_febex.febextrace[5].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_3_E1);
SIGNAL(FITRACE8_3_E1, fitest_febex.febextrace[5].trace[2][0], FITRACE8_3_E200, fitest_febex.febextrace[5].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_4_E1);
SIGNAL(FITRACE8_4_E1, fitest_febex.febextrace[5].trace[3][0], FITRACE8_4_E200, fitest_febex.febextrace[5].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_5_E1);
SIGNAL(FITRACE8_5_E1, fitest_febex.febextrace[5].trace[4][0], FITRACE8_5_E200, fitest_febex.febextrace[5].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_6_E1);
SIGNAL(FITRACE8_6_E1, fitest_febex.febextrace[5].trace[5][0], FITRACE8_6_E200, fitest_febex.febextrace[5].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_7_E1);
SIGNAL(FITRACE8_7_E1, fitest_febex.febextrace[5].trace[6][0], FITRACE8_7_E200, fitest_febex.febextrace[5].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_8_E1);
SIGNAL(FITRACE8_8_E1, fitest_febex.febextrace[5].trace[7][0], FITRACE8_8_E200, fitest_febex.febextrace[5].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_9_E1);
SIGNAL(FITRACE8_9_E1, fitest_febex.febextrace[5].trace[8][0], FITRACE8_9_E200, fitest_febex.febextrace[5].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_10_E1);
SIGNAL(FITRACE8_10_E1, fitest_febex.febextrace[5].trace[9][0], FITRACE8_10_E200, fitest_febex.febextrace[5].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_11_E1);
SIGNAL(FITRACE8_11_E1, fitest_febex.febextrace[5].trace[10][0], FITRACE8_11_E200, fitest_febex.febextrace[5].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_12_E1);
SIGNAL(FITRACE8_12_E1, fitest_febex.febextrace[5].trace[11][0], FITRACE8_12_E200, fitest_febex.febextrace[5].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_13_E1);
SIGNAL(FITRACE8_13_E1, fitest_febex.febextrace[5].trace[12][0], FITRACE8_13_E200, fitest_febex.febextrace[5].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_14_E1);
SIGNAL(FITRACE8_14_E1, fitest_febex.febextrace[5].trace[13][0], FITRACE8_14_E200, fitest_febex.febextrace[5].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_15_E1);
SIGNAL(FITRACE8_15_E1, fitest_febex.febextrace[5].trace[14][0], FITRACE8_15_E200, fitest_febex.febextrace[5].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE8_16_E1);
SIGNAL(FITRACE8_16_E1, fitest_febex.febextrace[5].trace[15][0], FITRACE8_16_E200, fitest_febex.febextrace[5].trace[15][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_1_E1);
SIGNAL(FITRACE9_1_E1, fitest_febex.febextrace[6].trace[0][0], FITRACE9_1_E200, fitest_febex.febextrace[6].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_2_E1);
SIGNAL(FITRACE9_2_E1, fitest_febex.febextrace[6].trace[1][0], FITRACE9_2_E200, fitest_febex.febextrace[6].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_3_E1);
SIGNAL(FITRACE9_3_E1, fitest_febex.febextrace[6].trace[2][0], FITRACE9_3_E200, fitest_febex.febextrace[6].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_4_E1);
SIGNAL(FITRACE9_4_E1, fitest_febex.febextrace[6].trace[3][0], FITRACE9_4_E200, fitest_febex.febextrace[6].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_5_E1);
SIGNAL(FITRACE9_5_E1, fitest_febex.febextrace[6].trace[4][0], FITRACE9_5_E200, fitest_febex.febextrace[6].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_6_E1);
SIGNAL(FITRACE9_6_E1, fitest_febex.febextrace[6].trace[5][0], FITRACE9_6_E200, fitest_febex.febextrace[6].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_7_E1);
SIGNAL(FITRACE9_7_E1, fitest_febex.febextrace[6].trace[6][0], FITRACE9_7_E200, fitest_febex.febextrace[6].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_8_E1);
SIGNAL(FITRACE9_8_E1, fitest_febex.febextrace[6].trace[7][0], FITRACE9_8_E200, fitest_febex.febextrace[6].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_9_E1);
SIGNAL(FITRACE9_9_E1, fitest_febex.febextrace[6].trace[8][0], FITRACE9_9_E200, fitest_febex.febextrace[6].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_10_E1);
SIGNAL(FITRACE9_10_E1, fitest_febex.febextrace[6].trace[9][0], FITRACE9_10_E200, fitest_febex.febextrace[6].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_11_E1);
SIGNAL(FITRACE9_11_E1, fitest_febex.febextrace[6].trace[10][0], FITRACE9_11_E200, fitest_febex.febextrace[6].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_12_E1);
SIGNAL(FITRACE9_12_E1, fitest_febex.febextrace[6].trace[11][0], FITRACE9_12_E200, fitest_febex.febextrace[6].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_13_E1);
SIGNAL(FITRACE9_13_E1, fitest_febex.febextrace[6].trace[12][0], FITRACE9_13_E200, fitest_febex.febextrace[6].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_14_E1);
SIGNAL(FITRACE9_14_E1, fitest_febex.febextrace[6].trace[13][0], FITRACE9_14_E200, fitest_febex.febextrace[6].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_15_E1);
SIGNAL(FITRACE9_15_E1, fitest_febex.febextrace[6].trace[14][0], FITRACE9_15_E200, fitest_febex.febextrace[6].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE9_16_E1);
SIGNAL(FITRACE9_16_E1, fitest_febex.febextrace[6].trace[15][0], FITRACE9_16_E200, fitest_febex.febextrace[6].trace[15][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_1_E1);
SIGNAL(FITRACE10_1_E1, fitest_febex.febextrace[7].trace[0][0], FITRACE10_1_E200, fitest_febex.febextrace[7].trace[0][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_2_E1);
SIGNAL(FITRACE10_2_E1, fitest_febex.febextrace[7].trace[1][0], FITRACE10_2_E200, fitest_febex.febextrace[7].trace[1][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_3_E1);
SIGNAL(FITRACE10_3_E1, fitest_febex.febextrace[7].trace[2][0], FITRACE10_3_E200, fitest_febex.febextrace[7].trace[2][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_4_E1);
SIGNAL(FITRACE10_4_E1, fitest_febex.febextrace[7].trace[3][0], FITRACE10_4_E200, fitest_febex.febextrace[7].trace[3][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_5_E1);
SIGNAL(FITRACE10_5_E1, fitest_febex.febextrace[7].trace[4][0], FITRACE10_5_E200, fitest_febex.febextrace[7].trace[4][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_6_E1);
SIGNAL(FITRACE10_6_E1, fitest_febex.febextrace[7].trace[5][0], FITRACE10_6_E200, fitest_febex.febextrace[7].trace[5][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_7_E1);
SIGNAL(FITRACE10_7_E1, fitest_febex.febextrace[7].trace[6][0], FITRACE10_7_E200, fitest_febex.febextrace[7].trace[6][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_8_E1);
SIGNAL(FITRACE10_8_E1, fitest_febex.febextrace[7].trace[7][0], FITRACE10_8_E200, fitest_febex.febextrace[7].trace[7][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_9_E1);
SIGNAL(FITRACE10_9_E1, fitest_febex.febextrace[7].trace[8][0], FITRACE10_9_E200, fitest_febex.febextrace[7].trace[8][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_10_E1);
SIGNAL(FITRACE10_10_E1, fitest_febex.febextrace[7].trace[9][0], FITRACE10_10_E200, fitest_febex.febextrace[7].trace[9][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_11_E1);
SIGNAL(FITRACE10_11_E1, fitest_febex.febextrace[7].trace[10][0], FITRACE10_11_E200, fitest_febex.febextrace[7].trace[10][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_12_E1);
SIGNAL(FITRACE10_12_E1, fitest_febex.febextrace[7].trace[11][0], FITRACE10_12_E200, fitest_febex.febextrace[7].trace[11][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_13_E1);
SIGNAL(FITRACE10_13_E1, fitest_febex.febextrace[7].trace[12][0], FITRACE10_13_E200, fitest_febex.febextrace[7].trace[12][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_14_E1);
SIGNAL(FITRACE10_14_E1, fitest_febex.febextrace[7].trace[13][0], FITRACE10_14_E200, fitest_febex.febextrace[7].trace[13][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_15_E1);
SIGNAL(FITRACE10_15_E1, fitest_febex.febextrace[7].trace[14][0], FITRACE10_15_E200, fitest_febex.febextrace[7].trace[14][199], DATA16);
SIGNAL(ZERO_SUPPRESS: FITRACE10_16_E1);
SIGNAL(FITRACE10_16_E1, fitest_febex.febextrace[7].trace[15][0], FITRACE10_16_E200, fitest_febex.febextrace[7].trace[15][199], DATA16);
*/
/* FITRACEs. */

/* FIFILTERs. */
/* Generate with: echo '1' | awk 'END{for (c=0;c<8;++c) { for (i=0;i<16;++i) { printf "SIGNAL(ZERO_SUPPRESS: FIFILTER%d_%d_E1);\n",c+3,i+1; printf "SIGNAL(FIFILTER%d_%d_E1, fitest_febex.febextrace[%d].filter[%d][0], FIFILTER%d_%d_E200, fitest_febex.febextrace[%d].filter[%d][199], DATA32);\n",c+3,i+1,c,i,c+3,i+1,c,i; }}}' > mapping_fifilter.hh
 */
/* #include "mapping_fifilter.hh" */

/* Silicon PD. */
SIGNAL(ZERO_SUPPRESS: SIPD_E1);
SIGNAL(SIPD_E1 , tbm_vme.madc32.data[0],
       SIPD_E8, tbm_vme.madc32.data[7], DATA14_OVERFLOW);

/* Strawtubes. */
SIGNAL(ZERO_SUPPRESS_MULTI(200): STRAW1_S1_TF1);
SIGNAL(STRAW1_S1_TF1 , straw.vftx2.time_fine[ 0],
       STRAW1_S1_TF32, straw.vftx2.time_fine[31], DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(200): STRAW1_S1_TC1);
SIGNAL(STRAW1_S1_TC1 , straw.vftx2.time_coarse[ 0],
       STRAW1_S1_TC32, straw.vftx2.time_coarse[31], DATA16);
SIGNAL(STRAW1_S1_TRIG, straw.vftx2.time_trigger, DATA16);
/* Strawtubes. */
