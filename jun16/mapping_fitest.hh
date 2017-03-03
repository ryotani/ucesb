// FiTest fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(64): FITEST_TF1);
SIGNAL(FITEST_TF1 , tbm_vme.vftx2.time_fine[0],
FITEST_TF64, tbm_vme.vftx2.time_fine[63], DATA12);

// FiTest coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(64): FITEST_TC1);
SIGNAL(FITEST_TC1 , tbm_vme.vftx2.time_coarse[0],
FITEST_TC64, tbm_vme.vftx2.time_coarse[63], DATA16);

