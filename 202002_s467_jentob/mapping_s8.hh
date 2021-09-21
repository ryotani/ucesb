// SCIEIGHT timestamps.
SIGNAL(TIMESTAMP_SCIEIGHT_ID, s8_ts.ts.subsystem_id, DATA12);
SIGNAL(TIMESTAMP_SCIEIGHT_WR_T1, s8_ts.ts.t1, DATA16);
SIGNAL(TIMESTAMP_SCIEIGHT_WR_T2, s8_ts.ts.t2, DATA16);
SIGNAL(TIMESTAMP_SCIEIGHT_WR_T3, s8_ts.ts.t3, DATA16);
SIGNAL(TIMESTAMP_SCIEIGHT_WR_T4, s8_ts.ts.t4, DATA16);

/* Trigger logic scalers */
SIGNAL(TRLORAW_SCIEIGHT_1, s8_scalers.data.scalers.before_lmu[0],
    TRLORAW_SCIEIGHT_16, s8_scalers.data.scalers.before_lmu[15], DATA32);
SIGNAL(TRLOBDT_SCIEIGHT_1, s8_scalers.data.scalers.before_dt[0],
    TRLOBDT_SCIEIGHT_16, s8_scalers.data.scalers.before_dt[15], DATA32);
SIGNAL(TRLOADT_SCIEIGHT_1, s8_scalers.data.scalers.after_dt[0],
    TRLOADT_SCIEIGHT_16, s8_scalers.data.scalers.after_dt[15], DATA32);
SIGNAL(TRLOARD_SCIEIGHT_1, s8_scalers.data.scalers.after_reduction[0],
    TRLOARD_SCIEIGHT_16, s8_scalers.data.scalers.after_reduction[15], DATA32);

// SCIEIGHT VFTX2 fine (TDC) values.
//SIGNAL(ZERO_SUPPRESS_MULTI(32): SCIEIGHT_VTF1);
//SIGNAL(SCIEIGHT_VTF1, s8_vme.data.vftx21.time_fine[0], DATA12);
//SIGNAL(SCIEIGHT_VTF2, s8_vme.data.vftx21.time_fine[1], DATA12);
//SIGNAL(SCIEIGHT_VTF3, s8_vme.data.vftx21.time_fine[2], DATA12);
//SIGNAL(SCIEIGHT_VTF4, s8_vme.data.vftx21.time_fine[3], DATA12);
//SIGNAL(SCIEIGHT_VTF5, s8_vme.data.vftx21.time_fine[4], DATA12);
//SIGNAL(SCIEIGHT_VTF6, s8_vme.data.vftx21.time_fine[5], DATA12);
//SIGNAL(SCIEIGHT_VTF7, s8_vme.data.vftx21.time_fine[6], DATA12);
//SIGNAL(SCIEIGHT_VTF8, s8_vme.data.vftx21.time_fine[7], DATA12);

// SCIEIGHT VFTX2 coarse (clock) values.
//SIGNAL(ZERO_SUPPRESS_MULTI(32): SCIEIGHT_VTC1);
//SIGNAL(SCIEIGHT_VTC1, s8_vme.data.vftx21.time_coarse[0], DATA16);
//SIGNAL(SCIEIGHT_VTC2, s8_vme.data.vftx21.time_coarse[1], DATA16);
//SIGNAL(SCIEIGHT_VTC3, s8_vme.data.vftx21.time_coarse[2], DATA16);
//SIGNAL(SCIEIGHT_VTC4, s8_vme.data.vftx21.time_coarse[3], DATA16);
//SIGNAL(SCIEIGHT_VTC5, s8_vme.data.vftx21.time_coarse[4], DATA16);
//SIGNAL(SCIEIGHT_VTC6, s8_vme.data.vftx21.time_coarse[5], DATA16);
//SIGNAL(SCIEIGHT_VTC7, s8_vme.data.vftx21.time_coarse[6], DATA16);
//SIGNAL(SCIEIGHT_VTC8, s8_vme.data.vftx21.time_coarse[7], DATA16);

