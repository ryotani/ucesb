// P=PLASTIC
// P1: first on the left as labelled on the ToFwall   
// P28: first on the right as labelled on the ToFwall 
// TF1 : fine time of the PMT DOWN
// TF2 : fine time of the PMT UP
// TC1 : clock count of the PMT DOWN
// TC2 : clock count of the PMT UP
// E1  : energy of the PMT DOWN
// E2  : energy of the PMT UP

SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFTOFW_P1_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFTOFW_P1_TC1);
SIGNAL(ZERO_SUPPRESS:SOFTOFW_P1_E1);

// PMTs DOWN - FINE TIME
SIGNAL(SOFTOFW_P1_TF1,sofia_tof.data.vftx2[0].time_fine[1],DATA12);
SIGNAL(SOFTOFW_P2_TF1,sofia_tof.data.vftx2[0].time_fine[3],DATA12);
SIGNAL(SOFTOFW_P3_TF1,sofia_tof.data.vftx2[0].time_fine[5],DATA12);
SIGNAL(SOFTOFW_P4_TF1,sofia_tof.data.vftx2[0].time_fine[7],DATA12);
SIGNAL(SOFTOFW_P5_TF1,sofia_tof.data.vftx2[0].time_fine[9],DATA12);
SIGNAL(SOFTOFW_P6_TF1,sofia_tof.data.vftx2[0].time_fine[11],DATA12);
SIGNAL(SOFTOFW_P7_TF1,sofia_tof.data.vftx2[0].time_fine[13],DATA12);
SIGNAL(SOFTOFW_P8_TF1,sofia_tof.data.vftx2[1].time_fine[1],DATA12);
SIGNAL(SOFTOFW_P9_TF1,sofia_tof.data.vftx2[1].time_fine[3],DATA12);
SIGNAL(SOFTOFW_P10_TF1,sofia_tof.data.vftx2[1].time_fine[5],DATA12);
SIGNAL(SOFTOFW_P11_TF1,sofia_tof.data.vftx2[1].time_fine[7],DATA12);
SIGNAL(SOFTOFW_P12_TF1,sofia_tof.data.vftx2[1].time_fine[9],DATA12);
SIGNAL(SOFTOFW_P13_TF1,sofia_tof.data.vftx2[1].time_fine[11],DATA12);
SIGNAL(SOFTOFW_P14_TF1,sofia_tof.data.vftx2[1].time_fine[13],DATA12);
SIGNAL(SOFTOFW_P15_TF1,sofia_tof.data.vftx2[2].time_fine[1],DATA12);
SIGNAL(SOFTOFW_P16_TF1,sofia_tof.data.vftx2[2].time_fine[3],DATA12);
SIGNAL(SOFTOFW_P17_TF1,sofia_tof.data.vftx2[2].time_fine[5],DATA12);
SIGNAL(SOFTOFW_P18_TF1,sofia_tof.data.vftx2[2].time_fine[7],DATA12);
SIGNAL(SOFTOFW_P19_TF1,sofia_tof.data.vftx2[2].time_fine[9],DATA12);
SIGNAL(SOFTOFW_P20_TF1,sofia_tof.data.vftx2[2].time_fine[11],DATA12);
SIGNAL(SOFTOFW_P21_TF1,sofia_tof.data.vftx2[2].time_fine[13],DATA12);
SIGNAL(SOFTOFW_P22_TF1,sofia_tof.data.vftx2[3].time_fine[1],DATA12);
SIGNAL(SOFTOFW_P23_TF1,sofia_tof.data.vftx2[3].time_fine[3],DATA12);
SIGNAL(SOFTOFW_P24_TF1,sofia_tof.data.vftx2[3].time_fine[5],DATA12);
SIGNAL(SOFTOFW_P25_TF1,sofia_tof.data.vftx2[3].time_fine[7],DATA12);
SIGNAL(SOFTOFW_P26_TF1,sofia_tof.data.vftx2[3].time_fine[9],DATA12);
SIGNAL(SOFTOFW_P27_TF1,sofia_tof.data.vftx2[3].time_fine[11],DATA12);
SIGNAL(SOFTOFW_P28_TF1,sofia_tof.data.vftx2[3].time_fine[13],DATA12);


// PMTs UP - FINE TIME
SIGNAL(SOFTOFW_P1_TF2,sofia_tof.data.vftx2[0].time_fine[0],DATA12);
SIGNAL(SOFTOFW_P2_TF2,sofia_tof.data.vftx2[0].time_fine[2],DATA12);
SIGNAL(SOFTOFW_P3_TF2,sofia_tof.data.vftx2[0].time_fine[4],DATA12);
SIGNAL(SOFTOFW_P4_TF2,sofia_tof.data.vftx2[0].time_fine[6],DATA12);
SIGNAL(SOFTOFW_P5_TF2,sofia_tof.data.vftx2[0].time_fine[8],DATA12);
SIGNAL(SOFTOFW_P6_TF2,sofia_tof.data.vftx2[0].time_fine[10],DATA12);
SIGNAL(SOFTOFW_P7_TF2,sofia_tof.data.vftx2[0].time_fine[12],DATA12);
SIGNAL(SOFTOFW_P8_TF2,sofia_tof.data.vftx2[1].time_fine[0],DATA12);
SIGNAL(SOFTOFW_P9_TF2,sofia_tof.data.vftx2[1].time_fine[2],DATA12);
SIGNAL(SOFTOFW_P10_TF2,sofia_tof.data.vftx2[1].time_fine[4],DATA12);
SIGNAL(SOFTOFW_P11_TF2,sofia_tof.data.vftx2[1].time_fine[6],DATA12);
SIGNAL(SOFTOFW_P12_TF2,sofia_tof.data.vftx2[1].time_fine[8],DATA12);
SIGNAL(SOFTOFW_P13_TF2,sofia_tof.data.vftx2[1].time_fine[10],DATA12);
SIGNAL(SOFTOFW_P14_TF2,sofia_tof.data.vftx2[1].time_fine[12],DATA12);
SIGNAL(SOFTOFW_P15_TF2,sofia_tof.data.vftx2[2].time_fine[0],DATA12);
SIGNAL(SOFTOFW_P16_TF2,sofia_tof.data.vftx2[2].time_fine[2],DATA12);
SIGNAL(SOFTOFW_P17_TF2,sofia_tof.data.vftx2[2].time_fine[4],DATA12);
SIGNAL(SOFTOFW_P18_TF2,sofia_tof.data.vftx2[2].time_fine[6],DATA12);
SIGNAL(SOFTOFW_P19_TF2,sofia_tof.data.vftx2[2].time_fine[8],DATA12);
SIGNAL(SOFTOFW_P20_TF2,sofia_tof.data.vftx2[2].time_fine[10],DATA12);
SIGNAL(SOFTOFW_P21_TF2,sofia_tof.data.vftx2[2].time_fine[12],DATA12);
SIGNAL(SOFTOFW_P22_TF2,sofia_tof.data.vftx2[3].time_fine[0],DATA12);
SIGNAL(SOFTOFW_P23_TF2,sofia_tof.data.vftx2[3].time_fine[2],DATA12);
SIGNAL(SOFTOFW_P24_TF2,sofia_tof.data.vftx2[3].time_fine[4],DATA12);
SIGNAL(SOFTOFW_P25_TF2,sofia_tof.data.vftx2[3].time_fine[6],DATA12);
SIGNAL(SOFTOFW_P26_TF2,sofia_tof.data.vftx2[3].time_fine[8],DATA12);
SIGNAL(SOFTOFW_P27_TF2,sofia_tof.data.vftx2[3].time_fine[10],DATA12);
SIGNAL(SOFTOFW_P28_TF2,sofia_tof.data.vftx2[3].time_fine[12],DATA12);

// PMTs DOWN - CLOCK COUNT
SIGNAL(SOFTOFW_P1_TC1,sofia_tof.data.vftx2[0].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_P2_TC1,sofia_tof.data.vftx2[0].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_P3_TC1,sofia_tof.data.vftx2[0].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_P4_TC1,sofia_tof.data.vftx2[0].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_P5_TC1,sofia_tof.data.vftx2[0].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_P6_TC1,sofia_tof.data.vftx2[0].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_P7_TC1,sofia_tof.data.vftx2[0].time_coarse[13],DATA16);
SIGNAL(SOFTOFW_P8_TC1,sofia_tof.data.vftx2[1].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_P9_TC1,sofia_tof.data.vftx2[1].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_P10_TC1,sofia_tof.data.vftx2[1].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_P11_TC1,sofia_tof.data.vftx2[1].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_P12_TC1,sofia_tof.data.vftx2[1].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_P13_TC1,sofia_tof.data.vftx2[1].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_P14_TC1,sofia_tof.data.vftx2[1].time_coarse[13],DATA16);
SIGNAL(SOFTOFW_P15_TC1,sofia_tof.data.vftx2[2].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_P16_TC1,sofia_tof.data.vftx2[2].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_P17_TC1,sofia_tof.data.vftx2[2].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_P18_TC1,sofia_tof.data.vftx2[2].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_P19_TC1,sofia_tof.data.vftx2[2].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_P20_TC1,sofia_tof.data.vftx2[2].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_P21_TC1,sofia_tof.data.vftx2[2].time_coarse[13],DATA16);
SIGNAL(SOFTOFW_P22_TC1,sofia_tof.data.vftx2[3].time_coarse[1],DATA16);
SIGNAL(SOFTOFW_P23_TC1,sofia_tof.data.vftx2[3].time_coarse[3],DATA16);
SIGNAL(SOFTOFW_P24_TC1,sofia_tof.data.vftx2[3].time_coarse[5],DATA16);
SIGNAL(SOFTOFW_P25_TC1,sofia_tof.data.vftx2[3].time_coarse[7],DATA16);
SIGNAL(SOFTOFW_P26_TC1,sofia_tof.data.vftx2[3].time_coarse[9],DATA16);
SIGNAL(SOFTOFW_P27_TC1,sofia_tof.data.vftx2[3].time_coarse[11],DATA16);
SIGNAL(SOFTOFW_P28_TC1,sofia_tof.data.vftx2[3].time_coarse[13],DATA16);


// PMTs UP - CLOCK COUNT
SIGNAL(SOFTOFW_P1_TC2,sofia_tof.data.vftx2[0].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_P2_TC2,sofia_tof.data.vftx2[0].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_P3_TC2,sofia_tof.data.vftx2[0].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_P4_TC2,sofia_tof.data.vftx2[0].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_P5_TC2,sofia_tof.data.vftx2[0].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_P6_TC2,sofia_tof.data.vftx2[0].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_P7_TC2,sofia_tof.data.vftx2[0].time_coarse[12],DATA16);
SIGNAL(SOFTOFW_P8_TC2,sofia_tof.data.vftx2[1].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_P9_TC2,sofia_tof.data.vftx2[1].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_P10_TC2,sofia_tof.data.vftx2[1].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_P11_TC2,sofia_tof.data.vftx2[1].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_P12_TC2,sofia_tof.data.vftx2[1].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_P13_TC2,sofia_tof.data.vftx2[1].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_P14_TC2,sofia_tof.data.vftx2[1].time_coarse[12],DATA16);
SIGNAL(SOFTOFW_P15_TC2,sofia_tof.data.vftx2[2].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_P16_TC2,sofia_tof.data.vftx2[2].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_P17_TC2,sofia_tof.data.vftx2[2].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_P18_TC2,sofia_tof.data.vftx2[2].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_P19_TC2,sofia_tof.data.vftx2[2].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_P20_TC2,sofia_tof.data.vftx2[2].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_P21_TC2,sofia_tof.data.vftx2[2].time_coarse[12],DATA16);
SIGNAL(SOFTOFW_P22_TC2,sofia_tof.data.vftx2[3].time_coarse[0],DATA16);
SIGNAL(SOFTOFW_P23_TC2,sofia_tof.data.vftx2[3].time_coarse[2],DATA16);
SIGNAL(SOFTOFW_P24_TC2,sofia_tof.data.vftx2[3].time_coarse[4],DATA16);
SIGNAL(SOFTOFW_P25_TC2,sofia_tof.data.vftx2[3].time_coarse[6],DATA16);
SIGNAL(SOFTOFW_P26_TC2,sofia_tof.data.vftx2[3].time_coarse[8],DATA16);
SIGNAL(SOFTOFW_P27_TC2,sofia_tof.data.vftx2[3].time_coarse[10],DATA16);
SIGNAL(SOFTOFW_P28_TC2,sofia_tof.data.vftx2[3].time_coarse[12],DATA16);

// PMTs DOWN - ENERGY
SIGNAL(SOFTOFW_P1_E1,sofia_mwpc.data.madc32[0].data[0],DATA14);
SIGNAL(SOFTOFW_P2_E1,sofia_mwpc.data.madc32[0].data[1],DATA14);
SIGNAL(SOFTOFW_P3_E1,sofia_mwpc.data.madc32[0].data[2],DATA14);
SIGNAL(SOFTOFW_P4_E1,sofia_mwpc.data.madc32[0].data[3],DATA14);
SIGNAL(SOFTOFW_P5_E1,sofia_mwpc.data.madc32[0].data[4],DATA14);
SIGNAL(SOFTOFW_P6_E1,sofia_mwpc.data.madc32[0].data[5],DATA14);
SIGNAL(SOFTOFW_P7_E1,sofia_mwpc.data.madc32[0].data[6],DATA14);
SIGNAL(SOFTOFW_P8_E1,sofia_mwpc.data.madc32[0].data[7],DATA14);
SIGNAL(SOFTOFW_P9_E1,sofia_mwpc.data.madc32[0].data[8],DATA14);
SIGNAL(SOFTOFW_P10_E1,sofia_mwpc.data.madc32[0].data[9],DATA14);
SIGNAL(SOFTOFW_P11_E1,sofia_mwpc.data.madc32[0].data[10],DATA14);
SIGNAL(SOFTOFW_P12_E1,sofia_mwpc.data.madc32[0].data[11],DATA14);
SIGNAL(SOFTOFW_P13_E1,sofia_mwpc.data.madc32[0].data[12],DATA14);
SIGNAL(SOFTOFW_P14_E1,sofia_mwpc.data.madc32[0].data[13],DATA14);
SIGNAL(SOFTOFW_P15_E1,sofia_mwpc.data.madc32[0].data[14],DATA14);
SIGNAL(SOFTOFW_P16_E1,sofia_mwpc.data.madc32[0].data[15],DATA14);
SIGNAL(SOFTOFW_P17_E1,sofia_mwpc.data.madc32[0].data[16],DATA14);
SIGNAL(SOFTOFW_P18_E1,sofia_mwpc.data.madc32[0].data[17],DATA14);
SIGNAL(SOFTOFW_P19_E1,sofia_mwpc.data.madc32[0].data[18],DATA14);
SIGNAL(SOFTOFW_P20_E1,sofia_mwpc.data.madc32[0].data[19],DATA14);
SIGNAL(SOFTOFW_P21_E1,sofia_mwpc.data.madc32[0].data[20],DATA14);
SIGNAL(SOFTOFW_P22_E1,sofia_mwpc.data.madc32[0].data[21],DATA14);
SIGNAL(SOFTOFW_P23_E1,sofia_mwpc.data.madc32[0].data[22],DATA14);
SIGNAL(SOFTOFW_P24_E1,sofia_mwpc.data.madc32[0].data[23],DATA14);
SIGNAL(SOFTOFW_P25_E1,sofia_mwpc.data.madc32[0].data[24],DATA14);
SIGNAL(SOFTOFW_P26_E1,sofia_mwpc.data.madc32[0].data[25],DATA14);
SIGNAL(SOFTOFW_P27_E1,sofia_mwpc.data.madc32[0].data[26],DATA14);
SIGNAL(SOFTOFW_P28_E1,sofia_mwpc.data.madc32[0].data[27],DATA14);


// PMTs UP - ENERGY
SIGNAL(SOFTOFW_P1_E2,sofia_mwpc.data.madc32[0].data[28],DATA14);
SIGNAL(SOFTOFW_P2_E2,sofia_mwpc.data.madc32[0].data[29],DATA14);
SIGNAL(SOFTOFW_P3_E2,sofia_mwpc.data.madc32[0].data[30],DATA14);
SIGNAL(SOFTOFW_P4_E2,sofia_mwpc.data.madc32[0].data[31],DATA14);
SIGNAL(SOFTOFW_P5_E2,sofia_mwpc.data.madc32[1].data[0],DATA14);
SIGNAL(SOFTOFW_P6_E2,sofia_mwpc.data.madc32[1].data[1],DATA14);
SIGNAL(SOFTOFW_P7_E2,sofia_mwpc.data.madc32[1].data[2],DATA14);
SIGNAL(SOFTOFW_P8_E2,sofia_mwpc.data.madc32[1].data[3],DATA14);
SIGNAL(SOFTOFW_P9_E2,sofia_mwpc.data.madc32[1].data[4],DATA14);
SIGNAL(SOFTOFW_P10_E2,sofia_mwpc.data.madc32[1].data[5],DATA14);
SIGNAL(SOFTOFW_P11_E2,sofia_mwpc.data.madc32[1].data[6],DATA14);
SIGNAL(SOFTOFW_P12_E2,sofia_mwpc.data.madc32[1].data[7],DATA14);
SIGNAL(SOFTOFW_P13_E2,sofia_mwpc.data.madc32[1].data[8],DATA14);
SIGNAL(SOFTOFW_P14_E2,sofia_mwpc.data.madc32[1].data[9],DATA14);
SIGNAL(SOFTOFW_P15_E2,sofia_mwpc.data.madc32[1].data[10],DATA14);
SIGNAL(SOFTOFW_P16_E2,sofia_mwpc.data.madc32[1].data[11],DATA14);
SIGNAL(SOFTOFW_P17_E2,sofia_mwpc.data.madc32[1].data[12],DATA14);
SIGNAL(SOFTOFW_P18_E2,sofia_mwpc.data.madc32[1].data[13],DATA14);
SIGNAL(SOFTOFW_P19_E2,sofia_mwpc.data.madc32[1].data[14],DATA14);
SIGNAL(SOFTOFW_P20_E2,sofia_mwpc.data.madc32[1].data[15],DATA14);
SIGNAL(SOFTOFW_P21_E2,sofia_mwpc.data.madc32[1].data[16],DATA14);
SIGNAL(SOFTOFW_P22_E2,sofia_mwpc.data.madc32[1].data[17],DATA14);
SIGNAL(SOFTOFW_P23_E2,sofia_mwpc.data.madc32[1].data[18],DATA14);
SIGNAL(SOFTOFW_P24_E2,sofia_mwpc.data.madc32[1].data[19],DATA14);
SIGNAL(SOFTOFW_P25_E2,sofia_mwpc.data.madc32[1].data[20],DATA14);
SIGNAL(SOFTOFW_P26_E2,sofia_mwpc.data.madc32[1].data[21],DATA14);
SIGNAL(SOFTOFW_P27_E2,sofia_mwpc.data.madc32[1].data[22],DATA14);
SIGNAL(SOFTOFW_P28_E2,sofia_mwpc.data.madc32[1].data[23],DATA14);
