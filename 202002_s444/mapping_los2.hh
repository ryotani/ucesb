// LOS VFTX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS2_VTF1);
SIGNAL(LOS2_VTF1, los_vme.data.vftx21.time_fine[8], DATA12);
SIGNAL(LOS2_VTF2, los_vme.data.vftx21.time_fine[9], DATA12);
SIGNAL(LOS2_VTF3, los_vme.data.vftx21.time_fine[10], DATA12);
SIGNAL(LOS2_VTF4, los_vme.data.vftx21.time_fine[11], DATA12);
SIGNAL(LOS2_VTF5, los_vme.data.vftx21.time_fine[12], DATA12);
SIGNAL(LOS2_VTF6, los_vme.data.vftx21.time_fine[13], DATA12);
SIGNAL(LOS2_VTF7, los_vme.data.vftx21.time_fine[14], DATA12);
SIGNAL(LOS2_VTF8, los_vme.data.vftx21.time_fine[15], DATA12);

// LOS VFTX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS2_VTC1);
SIGNAL(LOS2_VTC1, los_vme.data.vftx21.time_coarse[8], DATA16);
SIGNAL(LOS2_VTC2, los_vme.data.vftx21.time_coarse[9], DATA16);
SIGNAL(LOS2_VTC3, los_vme.data.vftx21.time_coarse[10], DATA16);
SIGNAL(LOS2_VTC4, los_vme.data.vftx21.time_coarse[11], DATA16);
SIGNAL(LOS2_VTC5, los_vme.data.vftx21.time_coarse[12], DATA16);
SIGNAL(LOS2_VTC6, los_vme.data.vftx21.time_coarse[13], DATA16);
SIGNAL(LOS2_VTC7, los_vme.data.vftx21.time_coarse[14], DATA16);
SIGNAL(LOS2_VTC8, los_vme.data.vftx21.time_coarse[15], DATA16);

// LOS MTDC32.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS2_MT1);
SIGNAL(LOS2_MT1, los_vme.data.mtdc32.data[8], DATA16);
SIGNAL(LOS2_MT2, los_vme.data.mtdc32.data[9], DATA16);
SIGNAL(LOS2_MT3, los_vme.data.mtdc32.data[10], DATA16);
SIGNAL(LOS2_MT4, los_vme.data.mtdc32.data[11], DATA16);
SIGNAL(LOS2_MT5, los_vme.data.mtdc32.data[12], DATA16);
SIGNAL(LOS2_MT6, los_vme.data.mtdc32.data[13], DATA16);
SIGNAL(LOS2_MT7, los_vme.data.mtdc32.data[14], DATA16);
SIGNAL(LOS2_MT8, los_vme.data.mtdc32.data[15], DATA16);

// LOS FQT/TAMEX3 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS2_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS2_TTFT1);
SIGNAL(LOS2_TTFL1, los_tamex.data.tamex.time_fine[17], DATA12);
SIGNAL(LOS2_TTFT1, los_tamex.data.tamex.time_fine[18], DATA12);
SIGNAL(LOS2_TTFL2, los_tamex.data.tamex.time_fine[19], DATA12);
SIGNAL(LOS2_TTFT2, los_tamex.data.tamex.time_fine[20], DATA12);
SIGNAL(LOS2_TTFL3, los_tamex.data.tamex.time_fine[21], DATA12);
SIGNAL(LOS2_TTFT3, los_tamex.data.tamex.time_fine[22], DATA12);
SIGNAL(LOS2_TTFL4, los_tamex.data.tamex.time_fine[23], DATA12);
SIGNAL(LOS2_TTFT4, los_tamex.data.tamex.time_fine[24], DATA12);
SIGNAL(LOS2_TTFL5, los_tamex.data.tamex.time_fine[25], DATA12);
SIGNAL(LOS2_TTFT5, los_tamex.data.tamex.time_fine[26], DATA12);
SIGNAL(LOS2_TTFL6, los_tamex.data.tamex.time_fine[27], DATA12);
SIGNAL(LOS2_TTFT6, los_tamex.data.tamex.time_fine[28], DATA12);
SIGNAL(LOS2_TTFL7, los_tamex.data.tamex.time_fine[29], DATA12);
SIGNAL(LOS2_TTFT7, los_tamex.data.tamex.time_fine[30], DATA12);
SIGNAL(LOS2_TTFL8, los_tamex.data.tamex.time_fine[31], DATA12);
SIGNAL(LOS2_TTFT8, los_tamex.data.tamex.time_fine[32], DATA12);

// LOS FQT/TAMEX3 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS2_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS2_TTCT1);
SIGNAL(LOS2_TTCL1, los_tamex.data.tamex.time_coarse[17], DATA12);
SIGNAL(LOS2_TTCT1, los_tamex.data.tamex.time_coarse[18], DATA12);
SIGNAL(LOS2_TTCL2, los_tamex.data.tamex.time_coarse[19], DATA12);
SIGNAL(LOS2_TTCT2, los_tamex.data.tamex.time_coarse[20], DATA12);
SIGNAL(LOS2_TTCL3, los_tamex.data.tamex.time_coarse[21], DATA12);
SIGNAL(LOS2_TTCT3, los_tamex.data.tamex.time_coarse[22], DATA12);
SIGNAL(LOS2_TTCL4, los_tamex.data.tamex.time_coarse[23], DATA12);
SIGNAL(LOS2_TTCT4, los_tamex.data.tamex.time_coarse[24], DATA12);
SIGNAL(LOS2_TTCL5, los_tamex.data.tamex.time_coarse[25], DATA12);
SIGNAL(LOS2_TTCT5, los_tamex.data.tamex.time_coarse[26], DATA12);
SIGNAL(LOS2_TTCL6, los_tamex.data.tamex.time_coarse[27], DATA12);
SIGNAL(LOS2_TTCT6, los_tamex.data.tamex.time_coarse[28], DATA12);
SIGNAL(LOS2_TTCL7, los_tamex.data.tamex.time_coarse[29], DATA12);
SIGNAL(LOS2_TTCT7, los_tamex.data.tamex.time_coarse[30], DATA12);
SIGNAL(LOS2_TTCL8, los_tamex.data.tamex.time_coarse[31], DATA12);
SIGNAL(LOS2_TTCT8, los_tamex.data.tamex.time_coarse[32], DATA12);
