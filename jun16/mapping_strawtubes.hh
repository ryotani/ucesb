/* Strawtubes. */
SIGNAL(ZERO_SUPPRESS_MULTI(200): STRAW1_S1_TF1);
SIGNAL(STRAW1_S1_TF1 , straw.vftx2.time_fine[ 0],
       STRAW1_S1_TF32, straw.vftx2.time_fine[31], DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(200): STRAW1_S1_TC1);
SIGNAL(STRAW1_S1_TC1 , straw.vftx2.time_coarse[ 0],
       STRAW1_S1_TC32, straw.vftx2.time_coarse[31], DATA16);
SIGNAL(STRAW1_S1_TRIG, straw.vftx2.time_trigger, DATA16);
/* Strawtubes. */

