// ROLU FQT/TAMEX3 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTFT1);
SIGNAL(ROLU1_TTFL1, fib_tamex.data.tamex[3].time_fine[17], DATA12);
SIGNAL(ROLU1_TTFT1, fib_tamex.data.tamex[3].time_fine[18], DATA12);
SIGNAL(ROLU1_TTFL2, fib_tamex.data.tamex[3].time_fine[19], DATA12);
SIGNAL(ROLU1_TTFT2, fib_tamex.data.tamex[3].time_fine[20], DATA12);
SIGNAL(ROLU1_TTFL3, fib_tamex.data.tamex[3].time_fine[21], DATA12);
SIGNAL(ROLU1_TTFT3, fib_tamex.data.tamex[3].time_fine[22], DATA12);
SIGNAL(ROLU1_TTFL4, fib_tamex.data.tamex[3].time_fine[23], DATA12);
SIGNAL(ROLU1_TTFT4, fib_tamex.data.tamex[3].time_fine[24], DATA12);

// ROLU FQT/TAMEX3 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): ROLU1_TTCT1);
SIGNAL(ROLU1_TTCL1, fib_tamex.data.tamex[3].time_coarse[17], DATA12);
SIGNAL(ROLU1_TTCT1, fib_tamex.data.tamex[3].time_coarse[18], DATA12);
SIGNAL(ROLU1_TTCL2, fib_tamex.data.tamex[3].time_coarse[19], DATA12);
SIGNAL(ROLU1_TTCT2, fib_tamex.data.tamex[3].time_coarse[20], DATA12);
SIGNAL(ROLU1_TTCL3, fib_tamex.data.tamex[3].time_coarse[21], DATA12);
SIGNAL(ROLU1_TTCT3, fib_tamex.data.tamex[3].time_coarse[22], DATA12);
SIGNAL(ROLU1_TTCL4, fib_tamex.data.tamex[3].time_coarse[23], DATA12);
SIGNAL(ROLU1_TTCT4, fib_tamex.data.tamex[3].time_coarse[24], DATA12);
