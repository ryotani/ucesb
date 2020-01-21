// SCITWO timestamps.
SIGNAL(TIMESTAMP_SCITWO_ID, s2_ts.ts.subsystem_id, DATA12);
SIGNAL(TIMESTAMP_SCITWO_WR_T1, s2_ts.ts.t1, DATA16);
SIGNAL(TIMESTAMP_SCITWO_WR_T2, s2_ts.ts.t2, DATA16);
SIGNAL(TIMESTAMP_SCITWO_WR_T3, s2_ts.ts.t3, DATA16);
SIGNAL(TIMESTAMP_SCITWO_WR_T4, s2_ts.ts.t4, DATA16);

// SCITWO VFTX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): SCITWO_VTF1);
SIGNAL(SCITWO_VTF1, s2_vme.data.vftx21.time_fine[0], DATA12); // SC21L
SIGNAL(SCITWO_VTF2, s2_vme.data.vftx21.time_fine[1], DATA12); // SC21R
SIGNAL(SCITWO_VTF3, s2_vme.data.vftx21.time_fine[2], DATA12); // SC41L
SIGNAL(SCITWO_VTF4, s2_vme.data.vftx21.time_fine[3], DATA12); // SC41R
SIGNAL(SCITWO_VTF5, s2_vme.data.vftx21.time_fine[4], DATA12); // SC81L
SIGNAL(SCITWO_VTF6, s2_vme.data.vftx21.time_fine[5], DATA12); // SC81R
SIGNAL(SCITWO_VTF7, s2_vme.data.vftx21.time_fine[6], DATA12); // SC11
SIGNAL(SCITWO_VTF8, s2_vme.data.vftx21.time_fine[7], DATA12);

// SCITWO VFTX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): SCITWO_VTC1);
SIGNAL(SCITWO_VTC1, s2_vme.data.vftx21.time_coarse[0], DATA16);
SIGNAL(SCITWO_VTC2, s2_vme.data.vftx21.time_coarse[1], DATA16);
SIGNAL(SCITWO_VTC3, s2_vme.data.vftx21.time_coarse[2], DATA16);
SIGNAL(SCITWO_VTC4, s2_vme.data.vftx21.time_coarse[3], DATA16);
SIGNAL(SCITWO_VTC5, s2_vme.data.vftx21.time_coarse[4], DATA16);
SIGNAL(SCITWO_VTC6, s2_vme.data.vftx21.time_coarse[5], DATA16);
SIGNAL(SCITWO_VTC7, s2_vme.data.vftx21.time_coarse[6], DATA16);
SIGNAL(SCITWO_VTC8, s2_vme.data.vftx21.time_coarse[7], DATA16);

