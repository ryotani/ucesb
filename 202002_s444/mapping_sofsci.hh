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

// S2 PMT LEFT
SIGNAL(SOFSCI1_TF1,s2_vme.data.vftx21.time_fine[8],DATA12);
SIGNAL(SOFSCI1_TC1,s2_vme.data.vftx21.time_coarse[8],DATA16);

// S2 PMT RIGHT
SIGNAL(SOFSCI1_TF2,s2_vme.data.vftx21.time_fine[9],DATA12);
SIGNAL(SOFSCI1_TC2,s2_vme.data.vftx21.time_coarse[9],DATA16);

// S2 REFERENCE SIGNAL
SIGNAL(SOFSCI1_TF3,s2_vme.data.vftx21.time_fine[10],DATA12);
SIGNAL(SOFSCI1_TC3,s2_vme.data.vftx21.time_coarse[10],DATA16);

// Cave C PMT LEFT
SIGNAL(SOFSCI2_TF1,sofia_tof.data.vftx2[0].time_fine[15],DATA12);
SIGNAL(SOFSCI2_TC1,sofia_tof.data.vftx2[0].time_coarse[15],DATA16);

// Cave C PMT RIGHT
SIGNAL(SOFSCI2_TF2,sofia_tof.data.vftx2[1].time_fine[15],DATA12);
SIGNAL(SOFSCI2_TC2,sofia_tof.data.vftx2[1].time_coarse[15],DATA16);

// Cave C REFERENCE SIGNAL
SIGNAL(SOFSCI2_TF3,sofia_tof.data.vftx2[3].time_fine[15],DATA12);
SIGNAL(SOFSCI2_TC3,sofia_tof.data.vftx2[3].time_coarse[15],DATA16);


