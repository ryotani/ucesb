#include "mapping_los.hh"
#include "mapping_tofd.hh"
#include "mapping_pspx.hh"

#if defined(UNPACKER_IS_jun16_ptof) || defined(UNPACKER_IS_jun16Xe)
#include "mapping_timestamp.hh"
#endif

#if defined(UNPACKER_IS_jun16_ptof)
#include "mapping_ptof.hh"
#endif

#if defined(UNPACKER_IS_jun16C)
#include "mapping_fifilter.hh"
#include "mapping_fitrace.hh"
#endif

#if defined(UNPACKER_IS_jun16C) || defined(UNPACKER_IS_jun16_ptof) || defined(UNPACKER_IS_jun16Xe)
#include "mapping_fitest.hh"
#include "mapping_fitrack.hh"
#endif

#if defined(UNPACKER_IS_jun16C) || defined(UNPACKER_IS_jun16_ptof)
#include "mapping_sipd.hh"
#include "mapping_strawtubes.hh"
#endif

