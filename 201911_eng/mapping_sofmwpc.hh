SIGNAL(ZERO_SUPPRESS: SOFMWPC1_Plane1_Q1);

// UCESB starts at 1 and not 0
// MWPC0 dedicated to beam : MWPC1
#include "mapping_mwpc/mapping_MWPC1_X.h" 
#include "mapping_mwpc/mapping_MWPC1_Y.h"
// MWPC1 before the TwiM : MWPC2
#include "mapping_mwpc/mapping_MWPC2_Xup.h"
#include "mapping_mwpc/mapping_MWPC2_Xdown.h"
#include "mapping_mwpc/mapping_MWPC2_Y.h"
// MWPC2 after the TwiM : MWPC3
#include "mapping_mwpc/mapping_MWPC3_Xup.h"
#include "mapping_mwpc/mapping_MWPC3_Xdown.h"
#include "mapping_mwpc/mapping_MWPC3_Y.h"
