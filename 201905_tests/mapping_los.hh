// LOS VFTX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS1_VTF1);
SIGNAL(LOS1_VTF1, los_vme.data.vftx2.time_fine[0], DATA12);
SIGNAL(LOS1_VTF2, los_vme.data.vftx2.time_fine[1], DATA12);
SIGNAL(LOS1_VTF3, los_vme.data.vftx2.time_fine[2], DATA12);
SIGNAL(LOS1_VTF4, los_vme.data.vftx2.time_fine[3], DATA12);
SIGNAL(LOS1_VTF5, los_vme.data.vftx2.time_fine[4], DATA12);
SIGNAL(LOS1_VTF6, los_vme.data.vftx2.time_fine[5], DATA12);
SIGNAL(LOS1_VTF7, los_vme.data.vftx2.time_fine[6], DATA12);
SIGNAL(LOS1_VTF8, los_vme.data.vftx2.time_fine[7], DATA12);

// LOS VFTX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS1_VTC1);
SIGNAL(LOS1_VTC1, los_vme.data.vftx2.time_coarse[0], DATA16);
SIGNAL(LOS1_VTC2, los_vme.data.vftx2.time_coarse[1], DATA16);
SIGNAL(LOS1_VTC3, los_vme.data.vftx2.time_coarse[2], DATA16);
SIGNAL(LOS1_VTC4, los_vme.data.vftx2.time_coarse[3], DATA16);
SIGNAL(LOS1_VTC5, los_vme.data.vftx2.time_coarse[4], DATA16);
SIGNAL(LOS1_VTC6, los_vme.data.vftx2.time_coarse[5], DATA16);
SIGNAL(LOS1_VTC7, los_vme.data.vftx2.time_coarse[6], DATA16);
SIGNAL(LOS1_VTC8, los_vme.data.vftx2.time_coarse[7], DATA16);

// LOS FQT/TAMEX3 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS1_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS1_TTFT1);
SIGNAL(LOS1_TTFL1, los_tamex.data.tamex.time_fine[1], DATA12);
SIGNAL(LOS1_TTFT1, los_tamex.data.tamex.time_fine[2], DATA12);
SIGNAL(LOS1_TTFL2, los_tamex.data.tamex.time_fine[3], DATA12);
SIGNAL(LOS1_TTFT2, los_tamex.data.tamex.time_fine[4], DATA12);
SIGNAL(LOS1_TTFL3, los_tamex.data.tamex.time_fine[5], DATA12);
SIGNAL(LOS1_TTFT3, los_tamex.data.tamex.time_fine[6], DATA12);
SIGNAL(LOS1_TTFL4, los_tamex.data.tamex.time_fine[7], DATA12);
SIGNAL(LOS1_TTFT4, los_tamex.data.tamex.time_fine[8], DATA12);
SIGNAL(LOS1_TTFL5, los_tamex.data.tamex.time_fine[9], DATA12);
SIGNAL(LOS1_TTFT5, los_tamex.data.tamex.time_fine[10], DATA12);
SIGNAL(LOS1_TTFL6, los_tamex.data.tamex.time_fine[11], DATA12);
SIGNAL(LOS1_TTFT6, los_tamex.data.tamex.time_fine[12], DATA12);
SIGNAL(LOS1_TTFL7, los_tamex.data.tamex.time_fine[13], DATA12);
SIGNAL(LOS1_TTFT7, los_tamex.data.tamex.time_fine[14], DATA12);
SIGNAL(LOS1_TTFL8, los_tamex.data.tamex.time_fine[15], DATA12);
SIGNAL(LOS1_TTFT8, los_tamex.data.tamex.time_fine[16], DATA12);

// LOS FQT/TAMEX3 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS1_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS1_TTCT1);
SIGNAL(LOS1_TTCL1, los_tamex.data.tamex.time_coarse[1], DATA12);
SIGNAL(LOS1_TTCT1, los_tamex.data.tamex.time_coarse[2], DATA12);
SIGNAL(LOS1_TTCL2, los_tamex.data.tamex.time_coarse[3], DATA12);
SIGNAL(LOS1_TTCT2, los_tamex.data.tamex.time_coarse[4], DATA12);
SIGNAL(LOS1_TTCL3, los_tamex.data.tamex.time_coarse[5], DATA12);
SIGNAL(LOS1_TTCT3, los_tamex.data.tamex.time_coarse[6], DATA12);
SIGNAL(LOS1_TTCL4, los_tamex.data.tamex.time_coarse[7], DATA12);
SIGNAL(LOS1_TTCT4, los_tamex.data.tamex.time_coarse[8], DATA12);
SIGNAL(LOS1_TTCL5, los_tamex.data.tamex.time_coarse[9], DATA12);
SIGNAL(LOS1_TTCT5, los_tamex.data.tamex.time_coarse[10], DATA12);
SIGNAL(LOS1_TTCL6, los_tamex.data.tamex.time_coarse[11], DATA12);
SIGNAL(LOS1_TTCT6, los_tamex.data.tamex.time_coarse[12], DATA12);
SIGNAL(LOS1_TTCL7, los_tamex.data.tamex.time_coarse[13], DATA12);
SIGNAL(LOS1_TTCT7, los_tamex.data.tamex.time_coarse[14], DATA12);
SIGNAL(LOS1_TTCL8, los_tamex.data.tamex.time_coarse[15], DATA12);
SIGNAL(LOS1_TTCT8, los_tamex.data.tamex.time_coarse[16], DATA12);
