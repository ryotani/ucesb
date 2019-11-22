// P=PLASTIC
// P1: first on the left as labelled on the ToFwall   
// P28: first on the right as labelled on the ToFwall 
// TF1 : fine time of the PMT DOWN
// TF2 : fine time of the PMT UP
// TC1 : clock count of the PMT DOWN
// TC2 : clock count of the PMT UP
// E1  : energy of the PMT DOWN

SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFTOFW_TF1_P1);
SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFTOFW_TC1_P1);
SIGNAL(ZERO_SUPPRESS:SOFTOFW_E1_P1);

// PMTs DOWN - FINE TIME
SIGNAL(SOFTOFW_TF1_P1,sofia_tof.data.vftx2[0].time_fine[1],DATA12);
SIGNAL(SOFTOFW_TF1_P2,sofia_tof.data.vftx2[0].time_fine[3],DATA12);
SIGNAL(SOFTOFW_TF1_P3,sofia_tof.data.vftx2[0].time_fine[5],DATA12);
SIGNAL(SOFTOFW_TF1_P4,sofia_tof.data.vftx2[0].time_fine[7],DATA12);
SIGNAL(SOFTOFW_TF1_P5,sofia_tof.data.vftx2[0].time_fine[9],DATA12);
SIGNAL(SOFTOFW_TF1_P6,sofia_tof.data.vftx2[0].time_fine[11],DATA12);
SIGNAL(SOFTOFW_TF1_P7,sofia_tof.data.vftx2[0].time_fine[13],DATA12);
SIGNAL(SOFTOFW_TF1_P8,sofia_tof.data.vftx2[1].time_fine[1],DATA12);
SIGNAL(SOFTOFW_TF1_P9,sofia_tof.data.vftx2[1].time_fine[3],DATA12);
SIGNAL(SOFTOFW_TF1_P10,sofia_tof.data.vftx2[1].time_fine[5],DATA12);
SIGNAL(SOFTOFW_TF1_P11,sofia_tof.data.vftx2[1].time_fine[7],DATA12);
SIGNAL(SOFTOFW_TF1_P12,sofia_tof.data.vftx2[1].time_fine[9],DATA12);
SIGNAL(SOFTOFW_TF1_P13,sofia_tof.data.vftx2[1].time_fine[11],DATA12);
SIGNAL(SOFTOFW_TF1_P14,sofia_tof.data.vftx2[1].time_fine[13],DATA12);
SIGNAL(SOFTOFW_TF1_P15,sofia_tof.data.vftx2[2].time_fine[1],DATA12);
SIGNAL(SOFTOFW_TF1_P16,sofia_tof.data.vftx2[2].time_fine[3],DATA12);
SIGNAL(SOFTOFW_TF1_P17,sofia_tof.data.vftx2[2].time_fine[5],DATA12);
SIGNAL(SOFTOFW_TF1_P18,sofia_tof.data.vftx2[2].time_fine[7],DATA12);
SIGNAL(SOFTOFW_TF1_P19,sofia_tof.data.vftx2[2].time_fine[9],DATA12);
SIGNAL(SOFTOFW_TF1_P20,sofia_tof.data.vftx2[2].time_fine[11],DATA12);
SIGNAL(SOFTOFW_TF1_P21,sofia_tof.data.vftx2[2].time_fine[13],DATA12);
SIGNAL(SOFTOFW_TF1_P22,sofia_tof.data.vftx2[3].time_fine[1],DATA12);
SIGNAL(SOFTOFW_TF1_P23,sofia_tof.data.vftx2[3].time_fine[3],DATA12);
SIGNAL(SOFTOFW_TF1_P24,sofia_tof.data.vftx2[3].time_fine[5],DATA12);
SIGNAL(SOFTOFW_TF1_P25,sofia_tof.data.vftx2[3].time_fine[7],DATA12);
SIGNAL(SOFTOFW_TF1_P26,sofia_tof.data.vftx2[3].time_fine[9],DATA12);
SIGNAL(SOFTOFW_TF1_P27,sofia_tof.data.vftx2[3].time_fine[11],DATA12);
SIGNAL(SOFTOFW_TF1_P28,sofia_tof.data.vftx2[3].time_fine[13],DATA12);


// PMTs UP - FINE TIME
SIGNAL(SOFTOFW_TF2_P1,sofia_tof.data.vftx2[0].time_fine[0],DATA12);
SIGNAL(SOFTOFW_TF2_P2,sofia_tof.data.vftx2[0].time_fine[2],DATA12);
SIGNAL(SOFTOFW_TF2_P3,sofia_tof.data.vftx2[0].time_fine[4],DATA12);
SIGNAL(SOFTOFW_TF2_P4,sofia_tof.data.vftx2[0].time_fine[6],DATA12);
SIGNAL(SOFTOFW_TF2_P5,sofia_tof.data.vftx2[0].time_fine[8],DATA12);
SIGNAL(SOFTOFW_TF2_P6,sofia_tof.data.vftx2[0].time_fine[10],DATA12);
SIGNAL(SOFTOFW_TF2_P7,sofia_tof.data.vftx2[0].time_fine[12],DATA12);
SIGNAL(SOFTOFW_TF2_P8,sofia_tof.data.vftx2[1].time_fine[0],DATA12);
SIGNAL(SOFTOFW_TF2_P9,sofia_tof.data.vftx2[1].time_fine[2],DATA12);
SIGNAL(SOFTOFW_TF2_P10,sofia_tof.data.vftx2[1].time_fine[4],DATA12);
SIGNAL(SOFTOFW_TF2_P11,sofia_tof.data.vftx2[1].time_fine[6],DATA12);
SIGNAL(SOFTOFW_TF2_P12,sofia_tof.data.vftx2[1].time_fine[8],DATA12);
SIGNAL(SOFTOFW_TF2_P13,sofia_tof.data.vftx2[1].time_fine[10],DATA12);
SIGNAL(SOFTOFW_TF2_P14,sofia_tof.data.vftx2[1].time_fine[12],DATA12);
SIGNAL(SOFTOFW_TF2_P15,sofia_tof.data.vftx2[2].time_fine[0],DATA12);
SIGNAL(SOFTOFW_TF2_P16,sofia_tof.data.vftx2[2].time_fine[2],DATA12);
SIGNAL(SOFTOFW_TF2_P17,sofia_tof.data.vftx2[2].time_fine[4],DATA12);
SIGNAL(SOFTOFW_TF2_P18,sofia_tof.data.vftx2[2].time_fine[6],DATA12);
SIGNAL(SOFTOFW_TF2_P19,sofia_tof.data.vftx2[2].time_fine[8],DATA12);
SIGNAL(SOFTOFW_TF2_P20,sofia_tof.data.vftx2[2].time_fine[10],DATA12);
SIGNAL(SOFTOFW_TF2_P21,sofia_tof.data.vftx2[2].time_fine[12],DATA12);
SIGNAL(SOFTOFW_TF2_P22,sofia_tof.data.vftx2[3].time_fine[0],DATA12);
SIGNAL(SOFTOFW_TF2_P23,sofia_tof.data.vftx2[3].time_fine[2],DATA12);
SIGNAL(SOFTOFW_TF2_P24,sofia_tof.data.vftx2[3].time_fine[4],DATA12);
SIGNAL(SOFTOFW_TF2_P25,sofia_tof.data.vftx2[3].time_fine[6],DATA12);
SIGNAL(SOFTOFW_TF2_P26,sofia_tof.data.vftx2[3].time_fine[8],DATA12);
SIGNAL(SOFTOFW_TF2_P27,sofia_tof.data.vftx2[3].time_fine[10],DATA12);
SIGNAL(SOFTOFW_TF2_P28,sofia_tof.data.vftx2[3].time_fine[12],DATA12);

// PMTs DOWN - CLOCK COUNT
SIGNAL(SOFTOFW_TC1_P1,sofia_tof.data.vftx2[0].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_TC1_P2,sofia_tof.data.vftx2[0].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_TC1_P3,sofia_tof.data.vftx2[0].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_TC1_P4,sofia_tof.data.vftx2[0].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_TC1_P5,sofia_tof.data.vftx2[0].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_TC1_P6,sofia_tof.data.vftx2[0].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_TC1_P7,sofia_tof.data.vftx2[0].time_coarse[13],DATA16);
SIGNAL(SOFTOFW_TC1_P8,sofia_tof.data.vftx2[1].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_TC1_P9,sofia_tof.data.vftx2[1].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_TC1_P10,sofia_tof.data.vftx2[1].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_TC1_P11,sofia_tof.data.vftx2[1].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_TC1_P12,sofia_tof.data.vftx2[1].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_TC1_P13,sofia_tof.data.vftx2[1].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_TC1_P14,sofia_tof.data.vftx2[1].time_coarse[13],DATA16);
SIGNAL(SOFTOFW_TC1_P15,sofia_tof.data.vftx2[2].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_TC1_P16,sofia_tof.data.vftx2[2].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_TC1_P17,sofia_tof.data.vftx2[2].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_TC1_P18,sofia_tof.data.vftx2[2].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_TC1_P19,sofia_tof.data.vftx2[2].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_TC1_P20,sofia_tof.data.vftx2[2].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_TC1_P21,sofia_tof.data.vftx2[2].time_coarse[13],DATA16);
SIGNAL(SOFTOFW_TC1_P22,sofia_tof.data.vftx2[3].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_TC1_P23,sofia_tof.data.vftx2[3].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_TC1_P24,sofia_tof.data.vftx2[3].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_TC1_P25,sofia_tof.data.vftx2[3].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_TC1_P26,sofia_tof.data.vftx2[3].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_TC1_P27,sofia_tof.data.vftx2[3].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_TC1_P28,sofia_tof.data.vftx2[3].time_coarse[13],DATA16);


// PMTs UP - CLOCK COUNT
SIGNAL(SOFTOFW_TC2_P1,sofia_tof.data.vftx2[0].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_TC2_P2,sofia_tof.data.vftx2[0].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_TC2_P3,sofia_tof.data.vftx2[0].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_TC2_P4,sofia_tof.data.vftx2[0].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_TC2_P5,sofia_tof.data.vftx2[0].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_TC2_P6,sofia_tof.data.vftx2[0].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_TC2_P7,sofia_tof.data.vftx2[0].time_coarse[12],DATA16);
SIGNAL(SOFTOFW_TC2_P8,sofia_tof.data.vftx2[1].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_TC2_P9,sofia_tof.data.vftx2[1].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_TC2_P10,sofia_tof.data.vftx2[1].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_TC2_P11,sofia_tof.data.vftx2[1].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_TC2_P12,sofia_tof.data.vftx2[1].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_TC2_P13,sofia_tof.data.vftx2[1].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_TC2_P14,sofia_tof.data.vftx2[1].time_coarse[12],DATA16);
SIGNAL(SOFTOFW_TC2_P15,sofia_tof.data.vftx2[2].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_TC2_P16,sofia_tof.data.vftx2[2].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_TC2_P17,sofia_tof.data.vftx2[2].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_TC2_P18,sofia_tof.data.vftx2[2].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_TC2_P19,sofia_tof.data.vftx2[2].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_TC2_P20,sofia_tof.data.vftx2[2].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_TC2_P21,sofia_tof.data.vftx2[2].time_coarse[12],DATA16);
SIGNAL(SOFTOFW_TC2_P22,sofia_tof.data.vftx2[3].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_TC2_P23,sofia_tof.data.vftx2[3].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_TC2_P24,sofia_tof.data.vftx2[3].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_TC2_P25,sofia_tof.data.vftx2[3].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_TC2_P26,sofia_tof.data.vftx2[3].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_TC2_P27,sofia_tof.data.vftx2[3].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_TC2_P28,sofia_tof.data.vftx2[3].time_coarse[12],DATA16);

// PMTs DOWN - ENERGY
SIGNAL(SOFTOFW_E1_P1,sofia_mwpc.data.madc32[0].data[0],DATA14);
SIGNAL(SOFTOFW_E1_P2,sofia_mwpc.data.madc32[0].data[1],DATA14);
SIGNAL(SOFTOFW_E1_P3,sofia_mwpc.data.madc32[0].data[2],DATA14);
SIGNAL(SOFTOFW_E1_P4,sofia_mwpc.data.madc32[0].data[3],DATA14);
SIGNAL(SOFTOFW_E1_P5,sofia_mwpc.data.madc32[0].data[4],DATA14);
SIGNAL(SOFTOFW_E1_P6,sofia_mwpc.data.madc32[0].data[5],DATA14);
SIGNAL(SOFTOFW_E1_P7,sofia_mwpc.data.madc32[0].data[6],DATA14);
SIGNAL(SOFTOFW_E1_P8,sofia_mwpc.data.madc32[0].data[7],DATA14);
SIGNAL(SOFTOFW_E1_P9,sofia_mwpc.data.madc32[0].data[8],DATA14);
SIGNAL(SOFTOFW_E1_P10,sofia_mwpc.data.madc32[0].data[9],DATA14);
SIGNAL(SOFTOFW_E1_P11,sofia_mwpc.data.madc32[0].data[10],DATA14);
SIGNAL(SOFTOFW_E1_P12,sofia_mwpc.data.madc32[0].data[11],DATA14);
SIGNAL(SOFTOFW_E1_P13,sofia_mwpc.data.madc32[0].data[12],DATA14);
SIGNAL(SOFTOFW_E1_P14,sofia_mwpc.data.madc32[0].data[13],DATA14);
SIGNAL(SOFTOFW_E1_P15,sofia_mwpc.data.madc32[0].data[14],DATA14);
SIGNAL(SOFTOFW_E1_P16,sofia_mwpc.data.madc32[0].data[15],DATA14);
SIGNAL(SOFTOFW_E1_P17,sofia_mwpc.data.madc32[0].data[16],DATA14);
SIGNAL(SOFTOFW_E1_P18,sofia_mwpc.data.madc32[0].data[17],DATA14);
SIGNAL(SOFTOFW_E1_P19,sofia_mwpc.data.madc32[0].data[18],DATA14);
SIGNAL(SOFTOFW_E1_P20,sofia_mwpc.data.madc32[0].data[19],DATA14);
SIGNAL(SOFTOFW_E1_P21,sofia_mwpc.data.madc32[0].data[20],DATA14);
SIGNAL(SOFTOFW_E1_P22,sofia_mwpc.data.madc32[0].data[21],DATA14);
SIGNAL(SOFTOFW_E1_P23,sofia_mwpc.data.madc32[0].data[22],DATA14);
SIGNAL(SOFTOFW_E1_P24,sofia_mwpc.data.madc32[0].data[23],DATA14);
SIGNAL(SOFTOFW_E1_P25,sofia_mwpc.data.madc32[0].data[24],DATA14);
SIGNAL(SOFTOFW_E1_P26,sofia_mwpc.data.madc32[0].data[25],DATA14);
SIGNAL(SOFTOFW_E1_P27,sofia_mwpc.data.madc32[0].data[26],DATA14);
SIGNAL(SOFTOFW_E1_P28,sofia_mwpc.data.madc32[0].data[27],DATA14);


// PMTs UP - ENERGY
SIGNAL(SOFTOFW_E2_P1,sofia_mwpc.data.madc32[0].data[28],DATA14);
SIGNAL(SOFTOFW_E2_P2,sofia_mwpc.data.madc32[0].data[29],DATA14);
SIGNAL(SOFTOFW_E2_P3,sofia_mwpc.data.madc32[0].data[30],DATA14);
SIGNAL(SOFTOFW_E2_P4,sofia_mwpc.data.madc32[0].data[31],DATA14);
SIGNAL(SOFTOFW_E2_P5,sofia_mwpc.data.madc32[1].data[0],DATA14);
SIGNAL(SOFTOFW_E2_P6,sofia_mwpc.data.madc32[1].data[1],DATA14);
SIGNAL(SOFTOFW_E2_P7,sofia_mwpc.data.madc32[1].data[2],DATA14);
SIGNAL(SOFTOFW_E2_P8,sofia_mwpc.data.madc32[1].data[3],DATA14);
SIGNAL(SOFTOFW_E2_P9,sofia_mwpc.data.madc32[1].data[4],DATA14);
SIGNAL(SOFTOFW_E2_P10,sofia_mwpc.data.madc32[1].data[5],DATA14);
SIGNAL(SOFTOFW_E2_P11,sofia_mwpc.data.madc32[1].data[6],DATA14);
SIGNAL(SOFTOFW_E2_P12,sofia_mwpc.data.madc32[1].data[7],DATA14);
SIGNAL(SOFTOFW_E2_P13,sofia_mwpc.data.madc32[1].data[8],DATA14);
SIGNAL(SOFTOFW_E2_P14,sofia_mwpc.data.madc32[1].data[9],DATA14);
SIGNAL(SOFTOFW_E2_P15,sofia_mwpc.data.madc32[1].data[10],DATA14);
SIGNAL(SOFTOFW_E2_P16,sofia_mwpc.data.madc32[1].data[11],DATA14);
SIGNAL(SOFTOFW_E2_P17,sofia_mwpc.data.madc32[1].data[12],DATA14);
SIGNAL(SOFTOFW_E2_P18,sofia_mwpc.data.madc32[1].data[13],DATA14);
SIGNAL(SOFTOFW_E2_P19,sofia_mwpc.data.madc32[1].data[14],DATA14);
SIGNAL(SOFTOFW_E2_P20,sofia_mwpc.data.madc32[1].data[15],DATA14);
SIGNAL(SOFTOFW_E2_P21,sofia_mwpc.data.madc32[1].data[16],DATA14);
SIGNAL(SOFTOFW_E2_P22,sofia_mwpc.data.madc32[1].data[17],DATA14);
SIGNAL(SOFTOFW_E2_P23,sofia_mwpc.data.madc32[1].data[18],DATA14);
SIGNAL(SOFTOFW_E2_P24,sofia_mwpc.data.madc32[1].data[19],DATA14);
SIGNAL(SOFTOFW_E2_P25,sofia_mwpc.data.madc32[1].data[20],DATA14);
SIGNAL(SOFTOFW_E2_P26,sofia_mwpc.data.madc32[1].data[21],DATA14);
SIGNAL(SOFTOFW_E2_P27,sofia_mwpc.data.madc32[1].data[22],DATA14);
SIGNAL(SOFTOFW_E2_P28,sofia_mwpc.data.madc32[1].data[23],DATA14);
