// LOS VFTX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_VTF1);
SIGNAL(S8_VTF1, los_vme.vftx2.time_fine[8], DATA12);
SIGNAL(S8_VTF2, los_vme.vftx2.time_fine[9], DATA12);

// LOS VFTX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_VTC1);
SIGNAL(S8_VTC1, los_vme.vftx2.time_coarse[8], DATA16);
SIGNAL(S8_VTC2, los_vme.vftx2.time_coarse[9], DATA16);

// LOS FQT/TAMEX3 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTFT1);
SIGNAL(S8_TTFL1, los_tamex.tamex.time_fine[17], DATA12);
SIGNAL(S8_TTFT1, los_tamex.tamex.time_fine[18], DATA12);
SIGNAL(S8_TTFL2, los_tamex.tamex.time_fine[19], DATA12);
SIGNAL(S8_TTFT2, los_tamex.tamex.time_fine[20], DATA12);

// LOS FQT/TAMEX3 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTCT1);
SIGNAL(S8_TTCL1, los_tamex.tamex.time_coarse[17], DATA12);
SIGNAL(S8_TTCT1, los_tamex.tamex.time_coarse[18], DATA12);
SIGNAL(S8_TTCL2, los_tamex.tamex.time_coarse[19], DATA12);
SIGNAL(S8_TTCT2, los_tamex.tamex.time_coarse[20], DATA12);
