#if defined(UNPACKER_IS_jun16_C) || defined(UNPACKER_IS_jun16_ptof) || defined(UNPACKER_IS_jun16_Xe)
// LOS fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TF1);
SIGNAL(LOS01_TF1, los.vftx2.time_fine[0],
       LOS01_TF4, los.vftx2.time_fine[3], DATA12);

// LOS coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TC1);
SIGNAL(LOS01_TC1, los.vftx2.time_coarse[0],
       LOS01_TC4, los.vftx2.time_coarse[3], DATA16);
#endif
#if defined(UNPACKER_IS_jun16_C) || defined(UNPACKER_IS_jun16_ptof)
// LOS fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS02_TF1);
SIGNAL(LOS02_TF1, los.vftx2.time_fine[4],
       LOS02_TF4, los.vftx2.time_fine[7], DATA12);

// LOS coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS02_TC1);
SIGNAL(LOS02_TC1, los.vftx2.time_coarse[4],
       LOS02_TC4, los.vftx2.time_coarse[7], DATA16);
#endif

#if defined(UNPACKER_IS_jun16)
// LOS fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TF1);
SIGNAL(LOS01_TF1, los.vftx2.time_fine[0], DATA12);
SIGNAL(LOS01_TF2, los.vftx2.time_fine[1], DATA12);
SIGNAL(LOS01_TF3, los.vftx2.time_fine[2], DATA12);
SIGNAL(LOS01_TF4, los.vftx2.time_fine[3], DATA12);

// LOS coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TC1);
SIGNAL(LOS01_TC1, los.vftx2.time_coarse[0], DATA16);
SIGNAL(LOS01_TC2, los.vftx2.time_coarse[1], DATA16);
SIGNAL(LOS01_TC3, los.vftx2.time_coarse[2], DATA16);
SIGNAL(LOS01_TC4, los.vftx2.time_coarse[3], DATA16);
#endif

