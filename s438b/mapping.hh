SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS02_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TC1);
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS02_TC1);

// LOS fine (tdc) values:
SIGNAL(LOS01_TF1,  los_psp.vftx2_1.time_fine[0],   DATA32);
SIGNAL(LOS01_TF2,  los_psp.vftx2_1.time_fine[1],   DATA32);
SIGNAL(LOS01_TF3,  los_psp.vftx2_1.time_fine[2],   DATA32);
SIGNAL(LOS01_TF4,  los_psp.vftx2_1.time_fine[3],   DATA32);

SIGNAL(LOS02_TF1,  los_psp.vftx2_2.time_fine[0],   DATA32); // the actual LOS channels
SIGNAL(LOS02_TF2,  los_psp.vftx2_2.time_fine[1],   DATA32); // ...
SIGNAL(LOS02_TF3,  los_psp.vftx2_2.time_fine[2],   DATA32);
SIGNAL(LOS02_TF4,  los_psp.vftx2_2.time_fine[3],   DATA32);
SIGNAL(LOS02_TF5,  los_psp.vftx2_2.time_fine[15],  DATA32); // master trigger

// LOS coarse (clock) values:
SIGNAL(LOS01_TC1,  los_psp.vftx2_1.time_coarse[0],   DATA32);
SIGNAL(LOS01_TC2,  los_psp.vftx2_1.time_coarse[1],   DATA32);
SIGNAL(LOS01_TC3,  los_psp.vftx2_1.time_coarse[2],   DATA32);
SIGNAL(LOS01_TC4,  los_psp.vftx2_1.time_coarse[3],   DATA32);

SIGNAL(LOS02_TC1,  los_psp.vftx2_2.time_coarse[0],   DATA32); // the actual LOS channels
SIGNAL(LOS02_TC2,  los_psp.vftx2_2.time_coarse[1],   DATA32); // ...
SIGNAL(LOS02_TC3,  los_psp.vftx2_2.time_coarse[2],   DATA32);
SIGNAL(LOS02_TC4,  los_psp.vftx2_2.time_coarse[3],   DATA32);
SIGNAL(LOS02_TC5,  los_psp.vftx2_2.time_coarse[15],  DATA32); // master trigger

SIGNAL(ROLU01_1T, los_psp.vftx2_1.time_coarse[8],   DATA32);
SIGNAL(ROLU01_2T, los_psp.vftx2_1.time_coarse[9],   DATA32);
SIGNAL(ROLU01_3T, los_psp.vftx2_1.time_coarse[10],  DATA32);
SIGNAL(ROLU01_4T, los_psp.vftx2_1.time_coarse[11],  DATA32);
SIGNAL(ROLU02_1T, los_psp.vftx2_1.time_coarse[12],  DATA32);
SIGNAL(ROLU02_2T, los_psp.vftx2_1.time_coarse[13],  DATA32);
SIGNAL(ROLU02_3T, los_psp.vftx2_1.time_coarse[14],  DATA32);
SIGNAL(ROLU02_4T, los_psp.vftx2_1.time_coarse[15],  DATA32);

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
