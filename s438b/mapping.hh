// define multi hit arrays for LOS:
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TC1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS02_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS02_TC1);

// LOS fine (tdc) values:
SIGNAL(LOS01_TF1,  los_psp.vftx2_1.time_fine[0],   DATA12);
SIGNAL(LOS01_TF2,  los_psp.vftx2_1.time_fine[1],   DATA12);
SIGNAL(LOS01_TF3,  los_psp.vftx2_1.time_fine[2],   DATA12);
SIGNAL(LOS01_TF4,  los_psp.vftx2_1.time_fine[3],   DATA12);

SIGNAL(LOS02_TF1,  los_psp.vftx2_2.time_fine[0],   DATA12); // the actual LOS channels
SIGNAL(LOS02_TF2,  los_psp.vftx2_2.time_fine[1],   DATA12); // ...
SIGNAL(LOS02_TF3,  los_psp.vftx2_2.time_fine[2],   DATA12);
SIGNAL(LOS02_TF4,  los_psp.vftx2_2.time_fine[3],   DATA12);
SIGNAL(LOS02_TF5,  los_psp.vftx2_2.time_fine[7],   DATA12); // master trigger

// LOS coarse (clock) values:
SIGNAL(LOS01_TC1,  los_psp.vftx2_1.time_coarse[0],   DATA16);
SIGNAL(LOS01_TC2,  los_psp.vftx2_1.time_coarse[1],   DATA16);
SIGNAL(LOS01_TC3,  los_psp.vftx2_1.time_coarse[2],   DATA16);
SIGNAL(LOS01_TC4,  los_psp.vftx2_1.time_coarse[3],   DATA16);

SIGNAL(LOS02_TC1,  los_psp.vftx2_2.time_coarse[0],   DATA16); // the actual LOS channels
SIGNAL(LOS02_TC2,  los_psp.vftx2_2.time_coarse[1],   DATA16); // ...
SIGNAL(LOS02_TC3,  los_psp.vftx2_2.time_coarse[2],   DATA16);
SIGNAL(LOS02_TC4,  los_psp.vftx2_2.time_coarse[3],   DATA16);
SIGNAL(LOS02_TC5,  los_psp.vftx2_2.time_coarse[7],   DATA16); // master trigger

// ROLU
SIGNAL(ROLU01_1T, los_psp.vftx2_1.time_coarse[8],   DATA16);
SIGNAL(ROLU01_2T, los_psp.vftx2_1.time_coarse[9],   DATA16);
SIGNAL(ROLU01_3T, los_psp.vftx2_1.time_coarse[10],  DATA16);
SIGNAL(ROLU01_4T, los_psp.vftx2_1.time_coarse[11],  DATA16);
SIGNAL(ROLU02_1T, los_psp.vftx2_1.time_coarse[12],  DATA16);
SIGNAL(ROLU02_2T, los_psp.vftx2_1.time_coarse[13],  DATA16);
SIGNAL(ROLU02_3T, los_psp.vftx2_1.time_coarse[14],  DATA16);
SIGNAL(ROLU02_4T, los_psp.vftx2_1.time_coarse[15],  DATA16);

// TOFD via VFTX (vftx2_3 and vftx2_4)
// Note: Paddle 13, 14, 15 or special. 15 probably being the master trigger
SIGNAL(TOFD_01_1TF,  tof13.vftx2_3.time_fine[0],   DATA12);
SIGNAL(TOFD_02_1TF,  tof13.vftx2_3.time_fine[1],   DATA12);
SIGNAL(TOFD_03_1TF,  tof13.vftx2_3.time_fine[2],   DATA12);
SIGNAL(TOFD_04_1TF,  tof13.vftx2_3.time_fine[3],   DATA12);
SIGNAL(TOFD_05_1TF,  tof13.vftx2_3.time_fine[4],   DATA12);
SIGNAL(TOFD_06_1TF,  tof13.vftx2_3.time_fine[5],   DATA12);
SIGNAL(TOFD_07_1TF,  tof13.vftx2_3.time_fine[6],   DATA12);
SIGNAL(TOFD_08_1TF,  tof13.vftx2_3.time_fine[7],   DATA12);
SIGNAL(TOFD_09_1TF,  tof13.vftx2_3.time_fine[8],   DATA12);
SIGNAL(TOFD_10_1TF,  tof13.vftx2_3.time_fine[9],   DATA12);
SIGNAL(TOFD_11_1TF,  tof13.vftx2_3.time_fine[10],  DATA12);
SIGNAL(TOFD_12_1TF,  tof13.vftx2_3.time_fine[12],  DATA12);
SIGNAL(TOFD_13_1TF,  tof13.vftx2_3.time_fine[13],  DATA12);
SIGNAL(TOFD_14_1TF,  tof13.vftx2_3.time_fine[14],  DATA12);

SIGNAL(TOFD_01_1TC,  tof13.vftx2_3.time_coarse[0], DATA16);
SIGNAL(TOFD_02_1TC,  tof13.vftx2_3.time_coarse[1], DATA16);
SIGNAL(TOFD_03_1TC,  tof13.vftx2_3.time_coarse[2], DATA16);
SIGNAL(TOFD_04_1TC,  tof13.vftx2_3.time_coarse[3], DATA16);
SIGNAL(TOFD_05_1TC,  tof13.vftx2_3.time_coarse[4], DATA16);
SIGNAL(TOFD_06_1TC,  tof13.vftx2_3.time_coarse[5], DATA16);
SIGNAL(TOFD_07_1TC,  tof13.vftx2_3.time_coarse[6], DATA16);
SIGNAL(TOFD_08_1TC,  tof13.vftx2_3.time_coarse[7], DATA16);
SIGNAL(TOFD_09_1TC,  tof13.vftx2_3.time_coarse[8], DATA16);
SIGNAL(TOFD_10_1TC,  tof13.vftx2_3.time_coarse[9], DATA16);
SIGNAL(TOFD_11_1TC,  tof13.vftx2_3.time_coarse[10], DATA16);
SIGNAL(TOFD_12_1TC,  tof13.vftx2_3.time_coarse[12], DATA16);
SIGNAL(TOFD_13_1TC,  tof13.vftx2_3.time_coarse[13], DATA16);
SIGNAL(TOFD_14_1TC,  tof13.vftx2_3.time_coarse[14], DATA16);

// and PM2
SIGNAL(TOFD_01_2TF,  tof13.vftx2_4.time_fine[0],   DATA12);
SIGNAL(TOFD_02_2TF,  tof13.vftx2_4.time_fine[1],   DATA12);
SIGNAL(TOFD_03_2TF,  tof13.vftx2_4.time_fine[2],   DATA12);
SIGNAL(TOFD_04_2TF,  tof13.vftx2_4.time_fine[3],   DATA12);
SIGNAL(TOFD_05_2TF,  tof13.vftx2_4.time_fine[4],   DATA12);
SIGNAL(TOFD_06_2TF,  tof13.vftx2_4.time_fine[5],   DATA12);
SIGNAL(TOFD_07_2TF,  tof13.vftx2_4.time_fine[6],   DATA12);
SIGNAL(TOFD_08_2TF,  tof13.vftx2_4.time_fine[7],   DATA12);
SIGNAL(TOFD_09_2TF,  tof13.vftx2_4.time_fine[8],   DATA12);
SIGNAL(TOFD_10_2TF,  tof13.vftx2_4.time_fine[9],   DATA12);
SIGNAL(TOFD_11_2TF,  tof13.vftx2_4.time_fine[10],  DATA12);
SIGNAL(TOFD_12_2TF,  tof13.vftx2_4.time_fine[12],  DATA12);
SIGNAL(TOFD_13_2TF,  tof13.vftx2_4.time_fine[13],  DATA12);
SIGNAL(TOFD_14_2TF,  tof13.vftx2_4.time_fine[14],  DATA12);
SIGNAL(TOFD_15_2TF,  tof13.vftx2_4.time_fine[15],  DATA12);

SIGNAL(TOFD_01_2TC,  tof13.vftx2_4.time_coarse[0],  DATA16);
SIGNAL(TOFD_02_2TC,  tof13.vftx2_4.time_coarse[1],  DATA16);
SIGNAL(TOFD_03_2TC,  tof13.vftx2_4.time_coarse[2],  DATA16);
SIGNAL(TOFD_04_2TC,  tof13.vftx2_4.time_coarse[3],  DATA16);
SIGNAL(TOFD_05_2TC,  tof13.vftx2_4.time_coarse[4],  DATA16);
SIGNAL(TOFD_06_2TC,  tof13.vftx2_4.time_coarse[5],  DATA16);
SIGNAL(TOFD_07_2TC,  tof13.vftx2_4.time_coarse[6],  DATA16);
SIGNAL(TOFD_08_2TC,  tof13.vftx2_4.time_coarse[7],  DATA16);
SIGNAL(TOFD_09_2TC,  tof13.vftx2_4.time_coarse[8],  DATA16);
SIGNAL(TOFD_10_2TC,  tof13.vftx2_4.time_coarse[9],  DATA16);
SIGNAL(TOFD_11_2TC,  tof13.vftx2_4.time_coarse[10], DATA16);
SIGNAL(TOFD_12_2TC,  tof13.vftx2_4.time_coarse[12], DATA16);
SIGNAL(TOFD_13_2TC,  tof13.vftx2_4.time_coarse[13], DATA16);
SIGNAL(TOFD_14_2TC,  tof13.vftx2_4.time_coarse[14], DATA16);
SIGNAL(TOFD_15_2TC,  tof13.vftx2_4.time_coarse[15], DATA16);

/* // from land02:
SIG_BEAM( TOFD01_01_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   0, CRT1_VFTX01, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_02_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   1, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_03_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   2, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_04_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   3, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_05_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   4, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_06_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   5, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_07_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   6, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_08_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   7, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_09_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   8, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_10_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,   9, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_11_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,  10, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_12_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,  12, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_21_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,  13, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_22_1, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX02,  14, NONE, 2, PM_IDENT, 1, CABLE, -1);


SIG_BEAM( TOFD01_01_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   0, CRT1_VFTX01, 3, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_02_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   1, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_03_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   2, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_04_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   3, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_05_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   4, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_06_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   5, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_07_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   6, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_08_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   7, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_09_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   8, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_10_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,   9, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_11_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,  10, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_12_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,  12, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_21_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,  13, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_22_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,  14, NONE, 2, PM_IDENT, 1, CABLE, -1);
SIG_BEAM( TOFD01_25_2, TOFD01_01, NIM, -1, -1, -1, -1, TOF_VFTX03,  15, NONE, 2, PM_IDENT, 1, CABLE, -1);
*/


/*
// TOFD via v1290 / QTC
SIGNAL(TOF_1,  tof13.v1290_1.data[ 0], DATA24);
SIGNAL(TOF_2,  tof13.v1290_1.data[ 1], DATA24);
SIGNAL(TOF_3,  tof13.v1290_1.data[ 2], DATA24);
SIGNAL(TOF_4,  tof13.v1290_1.data[ 3], DATA24);
SIGNAL(TOF_5,  tof13.v1290_1.data[ 4], DATA24);
SIGNAL(TOF_6,  tof13.v1290_1.data[ 5], DATA24);
SIGNAL(TOF_7,  tof13.v1290_1.data[ 6], DATA24);
SIGNAL(TOF_8,  tof13.v1290_1.data[ 7], DATA24);
SIGNAL(TOF_9,  tof13.v1290_1.data[ 8], DATA24);
SIGNAL(TOF_10, tof13.v1290_1.data[ 9], DATA24);
SIGNAL(TOF_11, tof13.v1290_1.data[10], DATA24);
SIGNAL(TOF_12, tof13.v1290_1.data[11], DATA24);
SIGNAL(TOF_13, tof13.v1290_1.data[12], DATA24);
SIGNAL(TOF_14, tof13.v1290_1.data[13], DATA24);
SIGNAL(TOF_15, tof13.v1290_1.data[14], DATA24);
SIGNAL(TOF_16, tof13.v1290_1.data[15], DATA24);
SIGNAL(TOF_17, tof13.v1290_1.data[16], DATA24);
SIGNAL(TOF_18, tof13.v1290_1.data[17], DATA24);
SIGNAL(TOF_19, tof13.v1290_1.data[18], DATA24);
SIGNAL(TOF_20, tof13.v1290_1.data[19], DATA24);
SIGNAL(TOF_21, tof13.v1290_1.data[20], DATA24);
SIGNAL(TOF_22, tof13.v1290_1.data[21], DATA24);
SIGNAL(TOF_23, tof13.v1290_1.data[22], DATA24);
SIGNAL(TOF_24, tof13.v1290_1.data[23], DATA24);
SIGNAL(TOF_25, tof13.v1290_1.data[24], DATA24);
SIGNAL(TOF_26, tof13.v1290_1.data[25], DATA24);
SIGNAL(TOF_27, tof13.v1290_1.data[26], DATA24);
SIGNAL(TOF_28, tof13.v1290_1.data[27], DATA24);
SIGNAL(TOF_29, tof13.v1290_1.data[28], DATA24);
SIGNAL(TOF_30, tof13.v1290_1.data[29], DATA24);
SIGNAL(TOF_31, tof13.v1290_1.data[30], DATA24);
SIGNAL(TOF_32, tof13.v1290_1.data[31], DATA24);
*/
