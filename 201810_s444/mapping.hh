#include "mapping_timestamp.hh"
#include "mapping_los.hh"
#include "mapping_rolu.hh"
#include "mapping_s8.hh"
#include "mapping_sst.hh"
#include "gen/mapping_fiber.hh"
#include "gen/mapping_tofd.hh"
#include "mapping_CALIFA.hh"

SIGNAL(FIBSEVEN_TSLC10, fib_tamex.tamex[0].time_coarse[1], DATA12);
SIGNAL(FIBSEVEN_TSLF10, fib_tamex.tamex[0].time_fine  [1], DATA12);
SIGNAL(FIBSEVEN_TSTC10, fib_tamex.tamex[0].time_coarse[2], DATA12);
SIGNAL(FIBSEVEN_TSTF10, fib_tamex.tamex[0].time_fine  [2], DATA12);
SIGNAL(FIBSEVEN_TSLC11, fib_tamex.tamex[0].time_coarse[3], DATA12);
SIGNAL(FIBSEVEN_TSLF11, fib_tamex.tamex[0].time_fine  [3], DATA12);
SIGNAL(FIBSEVEN_TSTC11, fib_tamex.tamex[0].time_coarse[4], DATA12);
SIGNAL(FIBSEVEN_TSTF11, fib_tamex.tamex[0].time_fine  [4], DATA12);
SIGNAL(FIBSEVEN_TSLC12, fib_tamex.tamex[0].time_coarse[5], DATA12);
SIGNAL(FIBSEVEN_TSLF12, fib_tamex.tamex[0].time_fine  [5], DATA12);
SIGNAL(FIBSEVEN_TSTC12, fib_tamex.tamex[0].time_coarse[6], DATA12);
SIGNAL(FIBSEVEN_TSTF12, fib_tamex.tamex[0].time_fine  [6], DATA12);
SIGNAL(FIBSEVEN_TSLC13, fib_tamex.tamex[0].time_coarse[7], DATA12);
SIGNAL(FIBSEVEN_TSLF13, fib_tamex.tamex[0].time_fine  [7], DATA12);
SIGNAL(FIBSEVEN_TSTC13, fib_tamex.tamex[0].time_coarse[8], DATA12);
SIGNAL(FIBSEVEN_TSTF13, fib_tamex.tamex[0].time_fine  [8], DATA12);
SIGNAL(FIBSEVEN_TSLC14, fib_tamex.tamex[0].time_coarse[9], DATA12);
SIGNAL(FIBSEVEN_TSLF14, fib_tamex.tamex[0].time_fine  [9], DATA12);
SIGNAL(FIBSEVEN_TSTC14, fib_tamex.tamex[0].time_coarse[10], DATA12);
SIGNAL(FIBSEVEN_TSTF14, fib_tamex.tamex[0].time_fine  [10], DATA12);
SIGNAL(FIBSEVEN_TSLC15, fib_tamex.tamex[0].time_coarse[11], DATA12);
SIGNAL(FIBSEVEN_TSLF15, fib_tamex.tamex[0].time_fine  [11], DATA12);
SIGNAL(FIBSEVEN_TSTC15, fib_tamex.tamex[0].time_coarse[12], DATA12);
SIGNAL(FIBSEVEN_TSTF15, fib_tamex.tamex[0].time_fine  [12], DATA12);
SIGNAL(FIBSEVEN_TSLC16, fib_tamex.tamex[0].time_coarse[13], DATA12);
SIGNAL(FIBSEVEN_TSLF16, fib_tamex.tamex[0].time_fine  [13], DATA12);
SIGNAL(FIBSEVEN_TSTC16, fib_tamex.tamex[0].time_coarse[14], DATA12);
SIGNAL(FIBSEVEN_TSTF16, fib_tamex.tamex[0].time_fine  [14], DATA12);
SIGNAL(FIBSEVEN_TSLC17, fib_tamex.tamex[0].time_coarse[15], DATA12);
SIGNAL(FIBSEVEN_TSLF17, fib_tamex.tamex[0].time_fine  [15], DATA12);
SIGNAL(FIBSEVEN_TSTC17, fib_tamex.tamex[0].time_coarse[16], DATA12);
SIGNAL(FIBSEVEN_TSTF17, fib_tamex.tamex[0].time_fine  [16], DATA12);
SIGNAL(FIBSEVEN_TSLC18, fib_tamex.tamex[0].time_coarse[21], DATA12);
SIGNAL(FIBSEVEN_TSLF18, fib_tamex.tamex[0].time_fine  [21], DATA12);
SIGNAL(FIBSEVEN_TSTC18, fib_tamex.tamex[0].time_coarse[22], DATA12);
SIGNAL(FIBSEVEN_TSTF18, fib_tamex.tamex[0].time_fine  [22], DATA12);
SIGNAL(FIBSEVEN_TSLC19, fib_tamex.tamex[0].time_coarse[23], DATA12);
SIGNAL(FIBSEVEN_TSLF19, fib_tamex.tamex[0].time_fine  [23], DATA12);
SIGNAL(FIBSEVEN_TSTC19, fib_tamex.tamex[0].time_coarse[24], DATA12);
SIGNAL(FIBSEVEN_TSTF19, fib_tamex.tamex[0].time_fine  [24], DATA12);
SIGNAL(FIBSEVEN_TSLC20, fib_tamex.tamex[0].time_coarse[25], DATA12);
SIGNAL(FIBSEVEN_TSLF20, fib_tamex.tamex[0].time_fine  [25], DATA12);
SIGNAL(FIBSEVEN_TSTC20, fib_tamex.tamex[0].time_coarse[26], DATA12);
SIGNAL(FIBSEVEN_TSTF20, fib_tamex.tamex[0].time_fine  [26], DATA12);
SIGNAL(FIBSEVEN_TSLC21, fib_tamex.tamex[0].time_coarse[27], DATA12);
SIGNAL(FIBSEVEN_TSLF21, fib_tamex.tamex[0].time_fine  [27], DATA12);
SIGNAL(FIBSEVEN_TSTC21, fib_tamex.tamex[0].time_coarse[28], DATA12);
SIGNAL(FIBSEVEN_TSTF21, fib_tamex.tamex[0].time_fine  [28], DATA12);
SIGNAL(FIBSEVEN_TSLC22, fib_tamex.tamex[0].time_coarse[29], DATA12);
SIGNAL(FIBSEVEN_TSLF22, fib_tamex.tamex[0].time_fine  [29], DATA12);
SIGNAL(FIBSEVEN_TSTC22, fib_tamex.tamex[0].time_coarse[30], DATA12);
SIGNAL(FIBSEVEN_TSTF22, fib_tamex.tamex[0].time_fine  [30], DATA12);
SIGNAL(FIBSEVEN_TSLC23, fib_tamex.tamex[0].time_coarse[31], DATA12);
SIGNAL(FIBSEVEN_TSLF23, fib_tamex.tamex[0].time_fine  [31], DATA12);
SIGNAL(FIBSEVEN_TSTC23, fib_tamex.tamex[0].time_coarse[32], DATA12);
SIGNAL(FIBSEVEN_TSTF23, fib_tamex.tamex[0].time_fine  [32], DATA12);
