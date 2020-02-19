//scintillator at S3 :  sofsci1            // not connected in eng run
// TF1 : PMT LEFT - FINE TIME
// TF2 : PMT RIGHT - FINE TIME
// TF3 : REFERENCE SIGNAL - FINE TIME
// TC1 : PMT LEFT - CLOCK COUNT
// TC2 : PMT RIGHT - CLOCK COUNT
// TC3 : REFERENCE SIGNAL - CLOCK COUNT

// scintillator at cave C : sofsci2      // sofsci1 in eng run
// TF1 : PMT LEFT - FINE TIME
// TF2 : PMT RIGHT - FINE TIME
// TF3 : REFERENCE SIGNAL - FINE TIME     
// TC1 : PMT LEFT - CLOCK COUNT
// TC2 : PMT RIGHT - CLOCK COUNT
// TC3 : REFERENCE SIGNAL - CLOCK COUNT   

SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFSCI1_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFSCI1_TC1);

// Cave C PMT RIGHT
SIGNAL(SOFSCI1_TF1,sofia_tof.data.vftx2[1].time_fine[15],DATA12);
SIGNAL(SOFSCI1_TC1,sofia_tof.data.vftx2[1].time_coarse[15],DATA16);

// Cave C PMT LEFT
SIGNAL(SOFSCI1_TF2,sofia_tof.data.vftx2[0].time_fine[15],DATA12);
SIGNAL(SOFSCI1_TC2,sofia_tof.data.vftx2[0].time_coarse[15],DATA16);

// Cave C REFERENCE SIGNAL
SIGNAL(SOFSCI1_TF3,sofia_tof.data.vftx2[2].time_fine[15],DATA12);
SIGNAL(SOFSCI1_TC3,sofia_tof.data.vftx2[2].time_coarse[15],DATA16);


