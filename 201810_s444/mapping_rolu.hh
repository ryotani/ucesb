// ROLU VFTX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_VTF1);
SIGNAL(ROLU1_VTF1, los_vme.vftx2.time_fine[8], DATA12);
SIGNAL(ROLU1_VTF2, los_vme.vftx2.time_fine[9], DATA12);
SIGNAL(ROLU1_VTF3, los_vme.vftx2.time_fine[10], DATA12);
SIGNAL(ROLU1_VTF4, los_vme.vftx2.time_fine[11], DATA12);

// ROLU VFTX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_VTC1);
SIGNAL(ROLU1_VTC1, los_vme.vftx2.time_coarse[8], DATA16);
SIGNAL(ROLU1_VTC2, los_vme.vftx2.time_coarse[9], DATA16);
SIGNAL(ROLU1_VTC3, los_vme.vftx2.time_coarse[10], DATA16);
SIGNAL(ROLU1_VTC4, los_vme.vftx2.time_coarse[11], DATA16);

// ROLU FQT/TAMEX3 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTFT1);
SIGNAL(ROLU1_TTFL1, los_tamex.tamex.time_fine[17], DATA12);
SIGNAL(ROLU1_TTFT1, los_tamex.tamex.time_fine[18], DATA12);
SIGNAL(ROLU1_TTFL2, los_tamex.tamex.time_fine[19], DATA12);
SIGNAL(ROLU1_TTFT2, los_tamex.tamex.time_fine[20], DATA12);
SIGNAL(ROLU1_TTFL3, los_tamex.tamex.time_fine[21], DATA12);
SIGNAL(ROLU1_TTFT3, los_tamex.tamex.time_fine[22], DATA12);
SIGNAL(ROLU1_TTFL4, los_tamex.tamex.time_fine[23], DATA12);
SIGNAL(ROLU1_TTFT4, los_tamex.tamex.time_fine[24], DATA12);

// ROLU FQT/TAMEX3 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTCT1);
SIGNAL(ROLU1_TTCL1, los_tamex.tamex.time_coarse[17], DATA12);
SIGNAL(ROLU1_TTCT1, los_tamex.tamex.time_coarse[18], DATA12);
SIGNAL(ROLU1_TTCL2, los_tamex.tamex.time_coarse[19], DATA12);
SIGNAL(ROLU1_TTCT2, los_tamex.tamex.time_coarse[20], DATA12);
SIGNAL(ROLU1_TTCL3, los_tamex.tamex.time_coarse[21], DATA12);
SIGNAL(ROLU1_TTCT3, los_tamex.tamex.time_coarse[22], DATA12);
SIGNAL(ROLU1_TTCL4, los_tamex.tamex.time_coarse[23], DATA12);
SIGNAL(ROLU1_TTCT4, los_tamex.tamex.time_coarse[24], DATA12);
