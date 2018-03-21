// TRLO master white rabbit timestamp
SIGNAL(TIMESTAMP_MASTER_ID, master_ts.ts100.subsystem_id, DATA12);
SIGNAL(TIMESTAMP_MASTER_WR_T1, master_ts.ts100.t1, DATA16);
SIGNAL(TIMESTAMP_MASTER_WR_T2, master_ts.ts100.t2, DATA16);
SIGNAL(TIMESTAMP_MASTER_WR_T3, master_ts.ts100.t3, DATA16);
SIGNAL(TIMESTAMP_MASTER_WR_T4, master_ts.ts100.t4, DATA16);
SIGNAL(TIMESTAMP_MASTER_HI, master_ts.multi_.time_hi, DATA32);
SIGNAL(TIMESTAMP_MASTER_LO, master_ts.multi_.time_lo, DATA32);

// TRLO sampler values (multi timestamp buffer)
SIGNAL(ZERO_SUPPRESS: TRLO_SAMPLER_S1);
SIGNAL(TRLO_SAMPLER_S1, los_sampler.sampler.sampler[0],
       TRLO_SAMPLER_S512, los_sampler.sampler.sampler[511], DATA32);
