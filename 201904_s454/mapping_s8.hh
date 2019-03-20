// LOS VFTX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_VTF1);
SIGNAL(S8_VTF1, los_vme.data.vftx2.time_fine[12], DATA12);
SIGNAL(S8_VTF2, los_vme.data.vftx2.time_fine[13], DATA12);

// LOS VFTX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_VTC1);
SIGNAL(S8_VTC1, los_vme.data.vftx2.time_coarse[12], DATA16);
SIGNAL(S8_VTC2, los_vme.data.vftx2.time_coarse[13], DATA16);

// LOS FQT/TAMEX3 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTFT1);
SIGNAL(S8_TTFL1, los_tamex.data.tamex.time_fine[25], DATA12);
SIGNAL(S8_TTFT1, los_tamex.data.tamex.time_fine[26], DATA12);
SIGNAL(S8_TTFL2, los_tamex.data.tamex.time_fine[27], DATA12);
SIGNAL(S8_TTFT2, los_tamex.data.tamex.time_fine[28], DATA12);

// LOS FQT/TAMEX3 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): S8_TTCT1);
SIGNAL(S8_TTCL1, los_tamex.data.tamex.time_coarse[25], DATA12);
SIGNAL(S8_TTCT1, los_tamex.data.tamex.time_coarse[26], DATA12);
SIGNAL(S8_TTCL2, los_tamex.data.tamex.time_coarse[27], DATA12);
SIGNAL(S8_TTCT2, los_tamex.data.tamex.time_coarse[28], DATA12);
