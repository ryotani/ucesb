SIGNAL(ZERO_SUPPRESS: SAMPLOSH1);
SIGNAL(ZERO_SUPPRESS: SAMPLOSL1);
SIGNAL(ZERO_SUPPRESS: SAMPMSH1);
SIGNAL(ZERO_SUPPRESS: SAMPMSL1);
SIGNAL(SAMPLOSH1, los_sampler.los.sampler_hi[0], SAMPLOSH512, los_sampler.los.sampler_hi[511], DATA32);
SIGNAL(SAMPLOSL1, los_sampler.los.sampler_lo[0], SAMPLOSL512, los_sampler.los.sampler_lo[511], DATA32);
SIGNAL( SAMPMSH1,  los_sampler.ms.sampler_hi[0],  SAMPMSH512,  los_sampler.ms.sampler_hi[511], DATA32);
SIGNAL( SAMPMSL1,  los_sampler.ms.sampler_lo[0],  SAMPMSL512,  los_sampler.ms.sampler_lo[511], DATA32);
