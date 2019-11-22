//scintillator at S2 :  sofsci1            // not connected in eng run
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

SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFSCI_TF1_SCI1);
SIGNAL(ZERO_SUPPRESS_MULTI(10):SOFSCI_TC1_SCI1);

// PMT LEFT
SIGNAL(SOFSCI_TF1_SCI1,sofia_tof.data.vftx2[0].time_fine[15],DATA12);
SIGNAL(SOFSCI_TC1_SCI1,sofia_tof.data.vftx2[0].time_coarse[15],DATA16);

// PMT RIGH
SIGNAL(SOFSCI_TF2_SCI1,sofia_tof.data.vftx2[1].time_fine[15],DATA12);
SIGNAL(SOFSCI_TC2_SCI1,sofia_tof.data.vftx2[1].time_coarse[15],DATA16);

// REFERENCE SIGNAL
SIGNAL(SOFSCI_TF3_SCI1,sofia_tof.data.vftx2[3].time_fine[15],DATA12);
SIGNAL(SOFSCI_TC3_SCI1,sofia_tof.data.vftx2[3].time_coarse[15],DATA16);


