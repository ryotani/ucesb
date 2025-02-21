// SCITWO timestamps.
SIGNAL(TIMESTAMP_SCITWO_ID, s2_ts.ts.subsystem_id, DATA12);
SIGNAL(TIMESTAMP_SCITWO_WR_T1, s2_ts.ts.t1, DATA16);
SIGNAL(TIMESTAMP_SCITWO_WR_T2, s2_ts.ts.t2, DATA16);
SIGNAL(TIMESTAMP_SCITWO_WR_T3, s2_ts.ts.t3, DATA16);
SIGNAL(TIMESTAMP_SCITWO_WR_T4, s2_ts.ts.t4, DATA16);

/* Trigger logic scalers */
SIGNAL(TRLORAW_SCITWO_1, s2_scalers.data.scalers.before_lmu[0],
    TRLORAW_SCITWO_16, s2_scalers.data.scalers.before_lmu[15], DATA32);
SIGNAL(TRLOBDT_SCITWO_1, s2_scalers.data.scalers.before_dt[0],
    TRLOBDT_SCITWO_16, s2_scalers.data.scalers.before_dt[15], DATA32);
SIGNAL(TRLOADT_SCITWO_1, s2_scalers.data.scalers.after_dt[0],
    TRLOADT_SCITWO_16, s2_scalers.data.scalers.after_dt[15], DATA32);
SIGNAL(TRLOARD_SCITWO_1, s2_scalers.data.scalers.after_reduction[0],
    TRLOARD_SCITWO_16, s2_scalers.data.scalers.after_reduction[15], DATA32);


// SCITWO VFTX2 fine (TDC) values.
//SIGNAL(ZERO_SUPPRESS_MULTI(32): SCITWO_VTF1);
//SIGNAL(SCITWO_VTF1, s2_vme.data.vftx21.time_fine[0], DATA12); // SC21L
//SIGNAL(SCITWO_VTF2, s2_vme.data.vftx21.time_fine[1], DATA12); // SC21R
//SIGNAL(SCITWO_VTF3, s2_vme.data.vftx21.time_fine[2], DATA12); // SC41L
//SIGNAL(SCITWO_VTF4, s2_vme.data.vftx21.time_fine[3], DATA12); // SC41R
//SIGNAL(SCITWO_VTF5, s2_vme.data.vftx21.time_fine[4], DATA12); // SC81L
//SIGNAL(SCITWO_VTF6, s2_vme.data.vftx21.time_fine[5], DATA12); // SC81R
//SIGNAL(SCITWO_VTF7, s2_vme.data.vftx21.time_fine[6], DATA12); // SC11
//SIGNAL(SCITWO_VTF8, s2_vme.data.vftx21.time_fine[7], DATA12);

//SIGNAL(SCITWO_VTF10, s2_vme.data.vftx21.time_fine[9], DATA12); // CaveC MS
//SIGNAL(SCITWO_VTF11, s2_vme.data.vftx21.time_fine[10], DATA12); // CaveC MS

// SCITWO VFTX2 coarse (clock) values.
//SIGNAL(ZERO_SUPPRESS_MULTI(32): SCITWO_VTC1);
//SIGNAL(SCITWO_VTC1, s2_vme.data.vftx21.time_coarse[0], DATA16);
//SIGNAL(SCITWO_VTC2, s2_vme.data.vftx21.time_coarse[1], DATA16);
//SIGNAL(SCITWO_VTC3, s2_vme.data.vftx21.time_coarse[2], DATA16);
//SIGNAL(SCITWO_VTC4, s2_vme.data.vftx21.time_coarse[3], DATA16);
//SIGNAL(SCITWO_VTC5, s2_vme.data.vftx21.time_coarse[4], DATA16);
//SIGNAL(SCITWO_VTC6, s2_vme.data.vftx21.time_coarse[5], DATA16);
//SIGNAL(SCITWO_VTC7, s2_vme.data.vftx21.time_coarse[6], DATA16);
//SIGNAL(SCITWO_VTC8, s2_vme.data.vftx21.time_coarse[7], DATA16);

//SIGNAL(SCITWO_VTC10, s2_vme.data.vftx21.time_coarse[9], DATA16);
//SIGNAL(SCITWO_VTC11, s2_vme.data.vftx21.time_coarse[10], DATA16);
