SIGNAL(TIMESTAMP_HI, master_ts.multi_.time_hi, DATA32);
SIGNAL(TIMESTAMP_LO, master_ts.multi_.time_lo, DATA32);

// TRLO sampler values (multi timestamp buffer)
SIGNAL(ZERO_SUPPRESS: TRLO_SAMPLER_S1);
SIGNAL(TRLO_SAMPLER_S1, los_sampler.sampler.sampler[0],
       TRLO_SAMPLER_S512, los_sampler.sampler.sampler[511], DATA32);
