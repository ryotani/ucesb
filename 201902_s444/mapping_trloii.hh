SIGNAL(TPAT1, master_tpat.tpat.tpat, DATA16);
SIGNAL(NO_INDEX_LIST: TPAT170);

SIGNAL(ZERO_SUPPRESS: SAMPLOS1);
SIGNAL(ZERO_SUPPRESS: SAMPMS1);
SIGNAL(SAMPLOS1, los_sampler.los.sampler[0], SAMPLOS512, los_sampler.los.sampler[511], DATA32);
SIGNAL( SAMPMS1,  los_sampler.ms.sampler[0],  SAMPMS512,  los_sampler.ms.sampler[511], DATA32);
