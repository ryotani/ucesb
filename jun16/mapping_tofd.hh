/*
 * TOFD can deliver multi hit but is not yet implemented as multi hit. ToDo!
 * 
 * Convention from Neuland:
 * tcl = time coarse leading.
 * tfl = time fine leading.
 * tct = time coarse trailing.
 * tft = time fine trailing.
 */

#if !defined(UNPACKER_IS_jun16_ptof)
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TFL1); // Plane 1, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TFT1); // Plane 1, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TFL1); // Plane 1, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TFT1); // Plane 1, Tube 2, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TFL1); // Plane 2, Tube 1, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TFT1); // Plane 2, Tube 1, fine time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TFL1); // Plane 2, Tube 2, fine time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TFT1); // Plane 2, Tube 2, fine time trailing, all bars.
#endif
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

#if !defined(UNPACKER_IS_jun16_ptof)
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TCL1); // Plane 1, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T1_TCT1); // Plane 1, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TCL1); // Plane 1, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P1T2_TCT1); // Plane 1, Tube 2, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TCL1); // Plane 2, Tube 1, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T1_TCT1); // Plane 2, Tube 1, coarse time trailing, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TCL1); // Plane 2, Tube 2, coarse time leading, all bars.
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFD_P2T2_TCT1); // Plane 2, Tube 2, coarse time trailing, all bars.
#endif
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

#if !defined(UNPACKER_IS_jun16_C) && !defined(UNPACKER_IS_jun16_ptof)
// Plane 1 with VFTX2.
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

// Plane 2 with VFTX2.
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
#endif

#if defined(UNPACKER_IS_jun16_C)
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

// Plane 2 with TAMEX2 + PADI.
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
#endif

// Plane 3 with TAMEX.
SIGNAL(TOFD_P3T1_TFL1, tofd_tamex.tamex_1.time_fine[1],  DATA12);
SIGNAL(TOFD_P3T1_TFT1, tofd_tamex.tamex_1.time_fine[2],  DATA12);
SIGNAL(TOFD_P3T2_TFL1, tofd_tamex.tamex_1.time_fine[3],  DATA12);
SIGNAL(TOFD_P3T2_TFT1, tofd_tamex.tamex_1.time_fine[4],  DATA12);

SIGNAL(TOFD_P3T1_TFL2, tofd_tamex.tamex_1.time_fine[5],  DATA12);
SIGNAL(TOFD_P3T1_TFT2, tofd_tamex.tamex_1.time_fine[6],  DATA12);
SIGNAL(TOFD_P3T2_TFL2, tofd_tamex.tamex_1.time_fine[7],  DATA12);
SIGNAL(TOFD_P3T2_TFT2, tofd_tamex.tamex_1.time_fine[8],  DATA12);

SIGNAL(TOFD_P3T1_TFL3, tofd_tamex.tamex_1.time_fine[9],  DATA12);
SIGNAL(TOFD_P3T1_TFT3, tofd_tamex.tamex_1.time_fine[10], DATA12);
SIGNAL(TOFD_P3T2_TFL3, tofd_tamex.tamex_1.time_fine[11], DATA12);
SIGNAL(TOFD_P3T2_TFT3, tofd_tamex.tamex_1.time_fine[12], DATA12);

SIGNAL(TOFD_P3T1_TFL4, tofd_tamex.tamex_1.time_fine[13], DATA12);
SIGNAL(TOFD_P3T1_TFT4, tofd_tamex.tamex_1.time_fine[14], DATA12);
SIGNAL(TOFD_P3T2_TFL4, tofd_tamex.tamex_1.time_fine[15], DATA12);
SIGNAL(TOFD_P3T2_TFT4, tofd_tamex.tamex_1.time_fine[16], DATA12);

SIGNAL(TOFD_P3T1_TFL5, tofd_tamex.tamex_1.time_fine[17], DATA12);
SIGNAL(TOFD_P3T1_TFT5, tofd_tamex.tamex_1.time_fine[18], DATA12);
SIGNAL(TOFD_P3T2_TFL5, tofd_tamex.tamex_1.time_fine[19], DATA12);
SIGNAL(TOFD_P3T2_TFT5, tofd_tamex.tamex_1.time_fine[20], DATA12);

SIGNAL(TOFD_P3T1_TFL6, tofd_tamex.tamex_1.time_fine[21], DATA12);
SIGNAL(TOFD_P3T1_TFT6, tofd_tamex.tamex_1.time_fine[22], DATA12);
SIGNAL(TOFD_P3T2_TFL6, tofd_tamex.tamex_1.time_fine[23], DATA12);
SIGNAL(TOFD_P3T2_TFT6, tofd_tamex.tamex_1.time_fine[24], DATA12);

// Plane 4.
SIGNAL(TOFD_P4T1_TFL1, tofd_tamex.tamex_2.time_fine[1],  DATA12);
SIGNAL(TOFD_P4T1_TFT1, tofd_tamex.tamex_2.time_fine[2],  DATA12);
SIGNAL(TOFD_P4T2_TFL1, tofd_tamex.tamex_2.time_fine[3],  DATA12);
SIGNAL(TOFD_P4T2_TFT1, tofd_tamex.tamex_2.time_fine[4],  DATA12);

SIGNAL(TOFD_P4T1_TFL2, tofd_tamex.tamex_2.time_fine[5],  DATA12);
SIGNAL(TOFD_P4T1_TFT2, tofd_tamex.tamex_2.time_fine[6],  DATA12);
SIGNAL(TOFD_P4T2_TFL2, tofd_tamex.tamex_2.time_fine[7],  DATA12);
SIGNAL(TOFD_P4T2_TFT2, tofd_tamex.tamex_2.time_fine[8],  DATA12);

SIGNAL(TOFD_P4T1_TFL3, tofd_tamex.tamex_2.time_fine[9],  DATA12);
SIGNAL(TOFD_P4T1_TFT3, tofd_tamex.tamex_2.time_fine[10], DATA12);
SIGNAL(TOFD_P4T2_TFL3, tofd_tamex.tamex_2.time_fine[11], DATA12);
SIGNAL(TOFD_P4T2_TFT3, tofd_tamex.tamex_2.time_fine[12], DATA12);

SIGNAL(TOFD_P4T1_TFL4, tofd_tamex.tamex_2.time_fine[13], DATA12);
SIGNAL(TOFD_P4T1_TFT4, tofd_tamex.tamex_2.time_fine[14], DATA12);
SIGNAL(TOFD_P4T2_TFL4, tofd_tamex.tamex_2.time_fine[15], DATA12);
SIGNAL(TOFD_P4T2_TFT4, tofd_tamex.tamex_2.time_fine[16], DATA12);

SIGNAL(TOFD_P4T1_TFL5, tofd_tamex.tamex_2.time_fine[17], DATA12);
SIGNAL(TOFD_P4T1_TFT5, tofd_tamex.tamex_2.time_fine[18], DATA12);
SIGNAL(TOFD_P4T2_TFL5, tofd_tamex.tamex_2.time_fine[19], DATA12);
SIGNAL(TOFD_P4T2_TFT5, tofd_tamex.tamex_2.time_fine[20], DATA12);

SIGNAL(TOFD_P4T1_TFL6, tofd_tamex.tamex_2.time_fine[21], DATA12);
SIGNAL(TOFD_P4T1_TFT6, tofd_tamex.tamex_2.time_fine[22], DATA12);
SIGNAL(TOFD_P4T2_TFL6, tofd_tamex.tamex_2.time_fine[23], DATA12);
SIGNAL(TOFD_P4T2_TFT6, tofd_tamex.tamex_2.time_fine[24], DATA12);

#if !defined(UNPACKER_IS_jun16_C) && !defined(UNPACKER_IS_jun16_ptof)
// Plane 5 with TAMEX2 + PADI.
SIGNAL(TOFD_P5T1_TFL1, tofd_tamex.tamex_3.time_fine[1],  DATA12);
SIGNAL(TOFD_P5T1_TFT1, tofd_tamex.tamex_3.time_fine[2],  DATA12);
SIGNAL(TOFD_P5T2_TFL1, tofd_tamex.tamex_3.time_fine[3],  DATA12);
SIGNAL(TOFD_P5T2_TFT1, tofd_tamex.tamex_3.time_fine[4],  DATA12);

SIGNAL(TOFD_P5T1_TFL2, tofd_tamex.tamex_3.time_fine[5],  DATA12);
SIGNAL(TOFD_P5T1_TFT2, tofd_tamex.tamex_3.time_fine[6],  DATA12);
SIGNAL(TOFD_P5T2_TFL2, tofd_tamex.tamex_3.time_fine[7],  DATA12);
SIGNAL(TOFD_P5T2_TFT2, tofd_tamex.tamex_3.time_fine[8],  DATA12);

SIGNAL(TOFD_P5T1_TFL3, tofd_tamex.tamex_3.time_fine[9],  DATA12);
SIGNAL(TOFD_P5T1_TFT3, tofd_tamex.tamex_3.time_fine[10], DATA12);
SIGNAL(TOFD_P5T2_TFL3, tofd_tamex.tamex_3.time_fine[11], DATA12);
SIGNAL(TOFD_P5T2_TFT3, tofd_tamex.tamex_3.time_fine[12], DATA12);

SIGNAL(TOFD_P5T1_TFL4, tofd_tamex.tamex_3.time_fine[13], DATA12);
SIGNAL(TOFD_P5T1_TFT4, tofd_tamex.tamex_3.time_fine[14], DATA12);
SIGNAL(TOFD_P5T2_TFL4, tofd_tamex.tamex_3.time_fine[15], DATA12);
SIGNAL(TOFD_P5T2_TFT4, tofd_tamex.tamex_3.time_fine[16], DATA12);

SIGNAL(TOFD_P5T1_TFL5, tofd_tamex.tamex_3.time_fine[17], DATA12);
SIGNAL(TOFD_P5T1_TFT5, tofd_tamex.tamex_3.time_fine[18], DATA12);
SIGNAL(TOFD_P5T2_TFL5, tofd_tamex.tamex_3.time_fine[19], DATA12);
SIGNAL(TOFD_P5T2_TFT5, tofd_tamex.tamex_3.time_fine[20], DATA12);

SIGNAL(TOFD_P5T1_TFL6, tofd_tamex.tamex_3.time_fine[21], DATA12);
SIGNAL(TOFD_P5T1_TFT6, tofd_tamex.tamex_3.time_fine[22], DATA12);
SIGNAL(TOFD_P5T2_TFL6, tofd_tamex.tamex_3.time_fine[23], DATA12);
SIGNAL(TOFD_P5T2_TFT6, tofd_tamex.tamex_3.time_fine[24], DATA12);

// Plane 6.
SIGNAL(TOFD_P6T1_TFL1, tofd_tamex.tamex_4.time_fine[1],  DATA12);
SIGNAL(TOFD_P6T1_TFT1, tofd_tamex.tamex_4.time_fine[2],  DATA12);
SIGNAL(TOFD_P6T2_TFL1, tofd_tamex.tamex_4.time_fine[3],  DATA12);
SIGNAL(TOFD_P6T2_TFT1, tofd_tamex.tamex_4.time_fine[4],  DATA12);

SIGNAL(TOFD_P6T1_TFL2, tofd_tamex.tamex_4.time_fine[5],  DATA12);
SIGNAL(TOFD_P6T1_TFT2, tofd_tamex.tamex_4.time_fine[6],  DATA12);
SIGNAL(TOFD_P6T2_TFL2, tofd_tamex.tamex_4.time_fine[7],  DATA12);
SIGNAL(TOFD_P6T2_TFT2, tofd_tamex.tamex_4.time_fine[8],  DATA12);

SIGNAL(TOFD_P6T1_TFL3, tofd_tamex.tamex_4.time_fine[9],  DATA12);
SIGNAL(TOFD_P6T1_TFT3, tofd_tamex.tamex_4.time_fine[10], DATA12);
SIGNAL(TOFD_P6T2_TFL3, tofd_tamex.tamex_4.time_fine[11], DATA12);
SIGNAL(TOFD_P6T2_TFT3, tofd_tamex.tamex_4.time_fine[12], DATA12);

SIGNAL(TOFD_P6T1_TFL4, tofd_tamex.tamex_4.time_fine[13], DATA12);
SIGNAL(TOFD_P6T1_TFT4, tofd_tamex.tamex_4.time_fine[14], DATA12);
SIGNAL(TOFD_P6T2_TFL4, tofd_tamex.tamex_4.time_fine[15], DATA12);
SIGNAL(TOFD_P6T2_TFT4, tofd_tamex.tamex_4.time_fine[16], DATA12);

SIGNAL(TOFD_P6T1_TFL5, tofd_tamex.tamex_4.time_fine[17], DATA12);
SIGNAL(TOFD_P6T1_TFT5, tofd_tamex.tamex_4.time_fine[18], DATA12);
SIGNAL(TOFD_P6T2_TFL5, tofd_tamex.tamex_4.time_fine[19], DATA12);
SIGNAL(TOFD_P6T2_TFT5, tofd_tamex.tamex_4.time_fine[20], DATA12);

SIGNAL(TOFD_P6T1_TFL6, tofd_tamex.tamex_4.time_fine[21], DATA12);
SIGNAL(TOFD_P6T1_TFT6, tofd_tamex.tamex_4.time_fine[22], DATA12);
SIGNAL(TOFD_P6T2_TFL6, tofd_tamex.tamex_4.time_fine[23], DATA12);
SIGNAL(TOFD_P6T2_TFT6, tofd_tamex.tamex_4.time_fine[24], DATA12);
#endif

// Coarse times.

#if !defined(UNPACKER_IS_jun16_C) && !defined(UNPACKER_IS_jun16_ptof)
// Plane 1 with VFTX2.
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

// Plane 2 with VFTX2.
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
#endif

#if defined(UNPACKER_IS_jun16_C)
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
#endif

// Plane 3 with TAMEX.
SIGNAL(TOFD_P3T1_TCL1, tofd_tamex.tamex_1.time_coarse[1],  DATA16);
SIGNAL(TOFD_P3T1_TCT1, tofd_tamex.tamex_1.time_coarse[2],  DATA16);
SIGNAL(TOFD_P3T2_TCL1, tofd_tamex.tamex_1.time_coarse[3],  DATA16);
SIGNAL(TOFD_P3T2_TCT1, tofd_tamex.tamex_1.time_coarse[4],  DATA16);

SIGNAL(TOFD_P3T1_TCL2, tofd_tamex.tamex_1.time_coarse[5],  DATA16);
SIGNAL(TOFD_P3T1_TCT2, tofd_tamex.tamex_1.time_coarse[6],  DATA16);
SIGNAL(TOFD_P3T2_TCL2, tofd_tamex.tamex_1.time_coarse[7],  DATA16);
SIGNAL(TOFD_P3T2_TCT2, tofd_tamex.tamex_1.time_coarse[8],  DATA16);

SIGNAL(TOFD_P3T1_TCL3, tofd_tamex.tamex_1.time_coarse[9],  DATA16);
SIGNAL(TOFD_P3T1_TCT3, tofd_tamex.tamex_1.time_coarse[10], DATA16);
SIGNAL(TOFD_P3T2_TCL3, tofd_tamex.tamex_1.time_coarse[11], DATA16);
SIGNAL(TOFD_P3T2_TCT3, tofd_tamex.tamex_1.time_coarse[12], DATA16);

SIGNAL(TOFD_P3T1_TCL4, tofd_tamex.tamex_1.time_coarse[13], DATA16);
SIGNAL(TOFD_P3T1_TCT4, tofd_tamex.tamex_1.time_coarse[14], DATA16);
SIGNAL(TOFD_P3T2_TCL4, tofd_tamex.tamex_1.time_coarse[15], DATA16);
SIGNAL(TOFD_P3T2_TCT4, tofd_tamex.tamex_1.time_coarse[16], DATA16);

SIGNAL(TOFD_P3T1_TCL5, tofd_tamex.tamex_1.time_coarse[17], DATA16);
SIGNAL(TOFD_P3T1_TCT5, tofd_tamex.tamex_1.time_coarse[18], DATA16);
SIGNAL(TOFD_P3T2_TCL5, tofd_tamex.tamex_1.time_coarse[19], DATA16);
SIGNAL(TOFD_P3T2_TCT5, tofd_tamex.tamex_1.time_coarse[20], DATA16);

SIGNAL(TOFD_P3T1_TCL6, tofd_tamex.tamex_1.time_coarse[21], DATA16);
SIGNAL(TOFD_P3T1_TCT6, tofd_tamex.tamex_1.time_coarse[22], DATA16);
SIGNAL(TOFD_P3T2_TCL6, tofd_tamex.tamex_1.time_coarse[23], DATA16);
SIGNAL(TOFD_P3T2_TCT6, tofd_tamex.tamex_1.time_coarse[24], DATA16);

// Plane 4.
SIGNAL(TOFD_P4T1_TCL1, tofd_tamex.tamex_2.time_coarse[1],  DATA16);
SIGNAL(TOFD_P4T1_TCT1, tofd_tamex.tamex_2.time_coarse[2],  DATA16);
SIGNAL(TOFD_P4T2_TCL1, tofd_tamex.tamex_2.time_coarse[3],  DATA16);
SIGNAL(TOFD_P4T2_TCT1, tofd_tamex.tamex_2.time_coarse[4],  DATA16);

SIGNAL(TOFD_P4T1_TCL2, tofd_tamex.tamex_2.time_coarse[5],  DATA16);
SIGNAL(TOFD_P4T1_TCT2, tofd_tamex.tamex_2.time_coarse[6],  DATA16);
SIGNAL(TOFD_P4T2_TCL2, tofd_tamex.tamex_2.time_coarse[7],  DATA16);
SIGNAL(TOFD_P4T2_TCT2, tofd_tamex.tamex_2.time_coarse[8],  DATA16);

SIGNAL(TOFD_P4T1_TCL3, tofd_tamex.tamex_2.time_coarse[9],  DATA16);
SIGNAL(TOFD_P4T1_TCT3, tofd_tamex.tamex_2.time_coarse[10], DATA16);
SIGNAL(TOFD_P4T2_TCL3, tofd_tamex.tamex_2.time_coarse[11], DATA16);
SIGNAL(TOFD_P4T2_TCT3, tofd_tamex.tamex_2.time_coarse[12], DATA16);

SIGNAL(TOFD_P4T1_TCL4, tofd_tamex.tamex_2.time_coarse[13], DATA16);
SIGNAL(TOFD_P4T1_TCT4, tofd_tamex.tamex_2.time_coarse[14], DATA16);
SIGNAL(TOFD_P4T2_TCL4, tofd_tamex.tamex_2.time_coarse[15], DATA16);
SIGNAL(TOFD_P4T2_TCT4, tofd_tamex.tamex_2.time_coarse[16], DATA16);

SIGNAL(TOFD_P4T1_TCL5, tofd_tamex.tamex_2.time_coarse[17], DATA16);
SIGNAL(TOFD_P4T1_TCT5, tofd_tamex.tamex_2.time_coarse[18], DATA16);
SIGNAL(TOFD_P4T2_TCL5, tofd_tamex.tamex_2.time_coarse[19], DATA16);
SIGNAL(TOFD_P4T2_TCT5, tofd_tamex.tamex_2.time_coarse[20], DATA16);

SIGNAL(TOFD_P4T1_TCL6, tofd_tamex.tamex_2.time_coarse[21], DATA16);
SIGNAL(TOFD_P4T1_TCT6, tofd_tamex.tamex_2.time_coarse[22], DATA16);
SIGNAL(TOFD_P4T2_TCL6, tofd_tamex.tamex_2.time_coarse[23], DATA16);
SIGNAL(TOFD_P4T2_TCT6, tofd_tamex.tamex_2.time_coarse[24], DATA16);

#if !defined(UNPACKER_IS_jun16_C) && !defined(UNPACKER_IS_jun16_ptof)
// Plane 5 with TAMEX.
SIGNAL(TOFD_P5T1_TCL1, tofd_tamex.tamex_3.time_coarse[1],  DATA16);
SIGNAL(TOFD_P5T1_TCT1, tofd_tamex.tamex_3.time_coarse[2],  DATA16);
SIGNAL(TOFD_P5T2_TCL1, tofd_tamex.tamex_3.time_coarse[3],  DATA16);
SIGNAL(TOFD_P5T2_TCT1, tofd_tamex.tamex_3.time_coarse[4],  DATA16);

SIGNAL(TOFD_P5T1_TCL2, tofd_tamex.tamex_3.time_coarse[5],  DATA16);
SIGNAL(TOFD_P5T1_TCT2, tofd_tamex.tamex_3.time_coarse[6],  DATA16);
SIGNAL(TOFD_P5T2_TCL2, tofd_tamex.tamex_3.time_coarse[7],  DATA16);
SIGNAL(TOFD_P5T2_TCT2, tofd_tamex.tamex_3.time_coarse[8],  DATA16);

SIGNAL(TOFD_P5T1_TCL3, tofd_tamex.tamex_3.time_coarse[9],  DATA16);
SIGNAL(TOFD_P5T1_TCT3, tofd_tamex.tamex_3.time_coarse[10], DATA16);
SIGNAL(TOFD_P5T2_TCL3, tofd_tamex.tamex_3.time_coarse[11], DATA16);
SIGNAL(TOFD_P5T2_TCT3, tofd_tamex.tamex_3.time_coarse[12], DATA16);

SIGNAL(TOFD_P5T1_TCL4, tofd_tamex.tamex_3.time_coarse[13], DATA16);
SIGNAL(TOFD_P5T1_TCT4, tofd_tamex.tamex_3.time_coarse[14], DATA16);
SIGNAL(TOFD_P5T2_TCL4, tofd_tamex.tamex_3.time_coarse[15], DATA16);
SIGNAL(TOFD_P5T2_TCT4, tofd_tamex.tamex_3.time_coarse[16], DATA16);

SIGNAL(TOFD_P5T1_TCL5, tofd_tamex.tamex_3.time_coarse[17], DATA16);
SIGNAL(TOFD_P5T1_TCT5, tofd_tamex.tamex_3.time_coarse[18], DATA16);
SIGNAL(TOFD_P5T2_TCL5, tofd_tamex.tamex_3.time_coarse[19], DATA16);
SIGNAL(TOFD_P5T2_TCT5, tofd_tamex.tamex_3.time_coarse[20], DATA16);

SIGNAL(TOFD_P5T1_TCL6, tofd_tamex.tamex_3.time_coarse[21], DATA16);
SIGNAL(TOFD_P5T1_TCT6, tofd_tamex.tamex_3.time_coarse[22], DATA16);
SIGNAL(TOFD_P5T2_TCL6, tofd_tamex.tamex_3.time_coarse[23], DATA16);
SIGNAL(TOFD_P5T2_TCT6, tofd_tamex.tamex_3.time_coarse[24], DATA16);

// Plane 6.
SIGNAL(TOFD_P6T1_TCL1, tofd_tamex.tamex_4.time_coarse[1],  DATA16);
SIGNAL(TOFD_P6T1_TCT1, tofd_tamex.tamex_4.time_coarse[2],  DATA16);
SIGNAL(TOFD_P6T2_TCL1, tofd_tamex.tamex_4.time_coarse[3],  DATA16);
SIGNAL(TOFD_P6T2_TCT1, tofd_tamex.tamex_4.time_coarse[4],  DATA16);

SIGNAL(TOFD_P6T1_TCL2, tofd_tamex.tamex_4.time_coarse[5],  DATA16);
SIGNAL(TOFD_P6T1_TCT2, tofd_tamex.tamex_4.time_coarse[6],  DATA16);
SIGNAL(TOFD_P6T2_TCL2, tofd_tamex.tamex_4.time_coarse[7],  DATA16);
SIGNAL(TOFD_P6T2_TCT2, tofd_tamex.tamex_4.time_coarse[8],  DATA16);

SIGNAL(TOFD_P6T1_TCL3, tofd_tamex.tamex_4.time_coarse[9],  DATA16);
SIGNAL(TOFD_P6T1_TCT3, tofd_tamex.tamex_4.time_coarse[10], DATA16);
SIGNAL(TOFD_P6T2_TCL3, tofd_tamex.tamex_4.time_coarse[11], DATA16);
SIGNAL(TOFD_P6T2_TCT3, tofd_tamex.tamex_4.time_coarse[12], DATA16);

SIGNAL(TOFD_P6T1_TCL4, tofd_tamex.tamex_4.time_coarse[13], DATA16);
SIGNAL(TOFD_P6T1_TCT4, tofd_tamex.tamex_4.time_coarse[14], DATA16);
SIGNAL(TOFD_P6T2_TCL4, tofd_tamex.tamex_4.time_coarse[15], DATA16);
SIGNAL(TOFD_P6T2_TCT4, tofd_tamex.tamex_4.time_coarse[16], DATA16);

SIGNAL(TOFD_P6T1_TCL5, tofd_tamex.tamex_4.time_coarse[17], DATA16);
SIGNAL(TOFD_P6T1_TCT5, tofd_tamex.tamex_4.time_coarse[18], DATA16);
SIGNAL(TOFD_P6T2_TCL5, tofd_tamex.tamex_4.time_coarse[19], DATA16);
SIGNAL(TOFD_P6T2_TCT5, tofd_tamex.tamex_4.time_coarse[20], DATA16);

SIGNAL(TOFD_P6T1_TCL6, tofd_tamex.tamex_4.time_coarse[21], DATA16);
SIGNAL(TOFD_P6T1_TCT6, tofd_tamex.tamex_4.time_coarse[22], DATA16);
SIGNAL(TOFD_P6T2_TCL6, tofd_tamex.tamex_4.time_coarse[23], DATA16);
SIGNAL(TOFD_P6T2_TCT6, tofd_tamex.tamex_4.time_coarse[24], DATA16);
#endif

