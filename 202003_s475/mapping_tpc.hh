//-----------------
// TPC1: TPC21
// TPC2: TPC22
// TPC3: TPC23
// TPC4: TPC24
//-----------------
//TPC: drift times
SIGNAL(TPC_1_DT_1, tpc_s2.tdc0.data[0],DATA12);
SIGNAL(TPC_1_DT_2, tpc_s2.tdc0.data[1],DATA12);
SIGNAL(TPC_1_DT_3, tpc_s2.tdc0.data[2],DATA12);
SIGNAL(TPC_1_DT_4, tpc_s2.tdc0.data[3],DATA12);
SIGNAL(TPC_1_LT_1, tpc_s2.tdc0.data[4],DATA12);
SIGNAL(TPC_1_RT_1, tpc_s2.tdc0.data[5],DATA12);
SIGNAL(TPC_1_LT_2, tpc_s2.tdc0.data[6],DATA12);
SIGNAL(TPC_1_RT_2, tpc_s2.tdc0.data[7],DATA12);

SIGNAL(TPC_2_DT_1, tpc_s2.tdc0.data[8],DATA12);
SIGNAL(TPC_2_DT_2, tpc_s2.tdc0.data[9],DATA12);
SIGNAL(TPC_2_DT_3, tpc_s2.tdc0.data[10],DATA12);
SIGNAL(TPC_2_DT_4, tpc_s2.tdc0.data[11],DATA12);
SIGNAL(TPC_2_LT_1, tpc_s2.tdc0.data[12],DATA12);
SIGNAL(TPC_2_RT_1, tpc_s2.tdc0.data[13],DATA12);
SIGNAL(TPC_2_LT_2, tpc_s2.tdc0.data[14],DATA12);
SIGNAL(TPC_2_RT_2, tpc_s2.tdc0.data[15],DATA12);

SIGNAL(TPC_3_DT_1, tpc_s2.tdc0.data[16],DATA12);
SIGNAL(TPC_3_DT_2, tpc_s2.tdc0.data[17],DATA12);
SIGNAL(TPC_3_DT_3, tpc_s2.tdc0.data[18],DATA12);
SIGNAL(TPC_3_DT_4, tpc_s2.tdc0.data[19],DATA12);
SIGNAL(TPC_3_LT_1, tpc_s2.tdc0.data[20],DATA12);
SIGNAL(TPC_3_RT_1, tpc_s2.tdc0.data[21],DATA12);
SIGNAL(TPC_3_LT_2, tpc_s2.tdc0.data[22],DATA12);
SIGNAL(TPC_3_RT_2, tpc_s2.tdc0.data[23],DATA12);

SIGNAL(TPC_4_DT_1, tpc_s2.tdc0.data[24],DATA12);
SIGNAL(TPC_4_DT_2, tpc_s2.tdc0.data[25],DATA12);
SIGNAL(TPC_4_DT_3, tpc_s2.tdc0.data[26],DATA12);
SIGNAL(TPC_4_DT_4, tpc_s2.tdc0.data[27],DATA12);
SIGNAL(TPC_4_LT_1, tpc_s2.tdc0.data[28],DATA12);
SIGNAL(TPC_4_RT_1, tpc_s2.tdc0.data[29],DATA12);
SIGNAL(TPC_4_LT_2, tpc_s2.tdc0.data[30],DATA12);
SIGNAL(TPC_4_RT_2, tpc_s2.tdc0.data[31],DATA12);

SIGNAL(TPC_5_DT_1, tpc_s4.tdc0.data[0],DATA12);
SIGNAL(TPC_5_DT_2, tpc_s4.tdc0.data[1],DATA12);
SIGNAL(TPC_5_DT_3, tpc_s4.tdc0.data[2],DATA12);
SIGNAL(TPC_5_DT_4, tpc_s4.tdc0.data[3],DATA12);
SIGNAL(TPC_5_LT_1, tpc_s4.tdc0.data[4],DATA12);
SIGNAL(TPC_5_RT_1, tpc_s4.tdc0.data[5],DATA12);
SIGNAL(TPC_5_LT_2, tpc_s4.tdc0.data[6],DATA12);
SIGNAL(TPC_5_RT_2, tpc_s4.tdc0.data[7],DATA12);

SIGNAL(TPC_6_DT_1, tpc_s4.tdc0.data[8],DATA12);
SIGNAL(TPC_6_DT_2, tpc_s4.tdc0.data[9],DATA12);
SIGNAL(TPC_6_DT_3, tpc_s4.tdc0.data[10],DATA12);
SIGNAL(TPC_6_DT_4, tpc_s4.tdc0.data[11],DATA12);
SIGNAL(TPC_6_LT_1, tpc_s4.tdc0.data[12],DATA12);
SIGNAL(TPC_6_RT_1, tpc_s4.tdc0.data[13],DATA12);
SIGNAL(TPC_6_LT_2, tpc_s4.tdc0.data[14],DATA12);
SIGNAL(TPC_6_RT_2, tpc_s4.tdc0.data[15],DATA12);

//TPC: energy per anode
SIGNAL(TPC_1_A_1, tpc_s2.adc0.data[0],DATA12);
SIGNAL(TPC_1_A_2, tpc_s2.adc0.data[1],DATA12);
SIGNAL(TPC_1_A_3, tpc_s2.adc0.data[2],DATA12);
SIGNAL(TPC_1_A_4, tpc_s2.adc0.data[3],DATA12);
SIGNAL(TPC_1_AL_1, tpc_s2.adc0.data[4],DATA12);
SIGNAL(TPC_1_AR_1, tpc_s2.adc0.data[5],DATA12);
SIGNAL(TPC_1_AL_2, tpc_s2.adc0.data[6],DATA12);
SIGNAL(TPC_1_AR_2, tpc_s2.adc0.data[7],DATA12);

SIGNAL(TPC_2_A_1, tpc_s2.adc0.data[8],DATA12);
SIGNAL(TPC_2_A_2, tpc_s2.adc0.data[9],DATA12);
SIGNAL(TPC_2_A_3, tpc_s2.adc0.data[10],DATA12);
SIGNAL(TPC_2_A_4, tpc_s2.adc0.data[11],DATA12);
SIGNAL(TPC_2_AL_1, tpc_s2.adc0.data[12],DATA12);
SIGNAL(TPC_2_AR_1, tpc_s2.adc0.data[13],DATA12);
SIGNAL(TPC_2_AL_2, tpc_s2.adc0.data[14],DATA12);
SIGNAL(TPC_2_AR_2, tpc_s2.adc0.data[15],DATA12);

SIGNAL(TPC_3_A_1, tpc_s2.adc0.data[16],DATA12);
SIGNAL(TPC_3_A_2, tpc_s2.adc0.data[17],DATA12);
SIGNAL(TPC_3_A_3, tpc_s2.adc0.data[18],DATA12);
SIGNAL(TPC_3_A_4, tpc_s2.adc0.data[19],DATA12);
SIGNAL(TPC_3_AL_1, tpc_s2.adc0.data[20],DATA12);
SIGNAL(TPC_3_AR_1, tpc_s2.adc0.data[21],DATA12);
SIGNAL(TPC_3_AL_2, tpc_s2.adc0.data[22],DATA12);
SIGNAL(TPC_3_AR_2, tpc_s2.adc0.data[23],DATA12);

SIGNAL(TPC_4_A_1, tpc_s2.adc0.data[24],DATA12);
SIGNAL(TPC_4_A_2, tpc_s2.adc0.data[25],DATA12);
SIGNAL(TPC_4_A_3, tpc_s2.adc0.data[26],DATA12);
SIGNAL(TPC_4_A_4, tpc_s2.adc0.data[27],DATA12);
SIGNAL(TPC_4_AL_1, tpc_s2.adc0.data[28],DATA12);
SIGNAL(TPC_4_AR_1, tpc_s2.adc0.data[29],DATA12);
SIGNAL(TPC_4_AL_2, tpc_s2.adc0.data[30],DATA12);
SIGNAL(TPC_4_AR_2, tpc_s2.adc0.data[31],DATA12);

SIGNAL(TPC_5_A_1, tpc_s4.adc0.data[0],DATA12);
SIGNAL(TPC_5_A_2, tpc_s4.adc0.data[1],DATA12);
SIGNAL(TPC_5_A_3, tpc_s4.adc0.data[2],DATA12);
SIGNAL(TPC_5_A_4, tpc_s4.adc0.data[3],DATA12);
SIGNAL(TPC_5_AL_1, tpc_s4.adc0.data[4],DATA12);
SIGNAL(TPC_5_AR_1, tpc_s4.adc0.data[5],DATA12);
SIGNAL(TPC_5_AL_2, tpc_s4.adc0.data[6],DATA12);
SIGNAL(TPC_5_AR_2, tpc_s4.adc0.data[7],DATA12);

SIGNAL(TPC_6_A_1, tpc_s4.adc0.data[8],DATA12);
SIGNAL(TPC_6_A_2, tpc_s4.adc0.data[9],DATA12);
SIGNAL(TPC_6_A_3, tpc_s4.adc0.data[10],DATA12);
SIGNAL(TPC_6_A_4, tpc_s4.adc0.data[11],DATA12);
SIGNAL(TPC_6_AL_1, tpc_s4.adc0.data[12],DATA12);
SIGNAL(TPC_6_AR_1, tpc_s4.adc0.data[13],DATA12);
SIGNAL(TPC_6_AL_2, tpc_s4.adc0.data[14],DATA12);
SIGNAL(TPC_6_AR_2, tpc_s4.adc0.data[15],DATA12);



