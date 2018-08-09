#include "structures.hh"
#include <cstdint>
#include <iomanip>
#include <iostream>

#define NUM_SST 8 // 4 box detectors taken out

// Smallest coarse counter range among all electronics.
#define COARSE_MASK 0x7ff
#define COARSE_ADD(c, add) (COARSE_MASK & (c + add + COARSE_MASK + 1))

class CoarseTracker {
  public:
    CoarseTracker() {
      Reset();
    }
    uint32_t GetDiff() const {
      return m_left;
    }
    void Reset() {
      m_left = UINT32_MAX;
      m_right = UINT32_MAX;
    }
    void Track(uint32_t a_trig, uint32_t a_ref) {
      uint32_t const c_diff = COARSE_MASK & (a_trig - a_ref);
      if (UINT32_MAX == m_left) {
        m_right = m_left = c_diff;
        return;
      }
      for (unsigned i = 0; i <= 2; ++i) {
        if (COARSE_ADD(c_diff, i) == m_right) {
          if (1 == i && m_left == m_right) {
            m_left = COARSE_ADD(m_right, -1);
          } else if (2 == i && COARSE_ADD(m_left, 2) != m_right) {
            m_left = COARSE_ADD(m_right, -2);
          }
          return;
        }
      }
      for (unsigned i = 1; i <= 2; ++i) {
        if (c_diff == COARSE_ADD(m_left, i)) {
          if (1 == i && m_left == m_right) {
            m_right = COARSE_ADD(m_left, 1);
          } else if (2 == i && COARSE_ADD(m_left, 2) != m_right) {
            m_right = COARSE_ADD(m_left, 2);
          }
          return;
        }
      }
      fprintf(stderr, "\nTracking failed! range=%x..%x %x-%x=%x\n", m_left,
          m_right, a_trig, a_ref, c_diff);
    }

  public:
    uint32_t m_left;
    uint32_t m_right;
};

namespace {
#define VECTOR_CT(dst, src) \
  std::vector<CoarseTracker> dst(countof(unpack_event::src))
CoarseTracker g_los_tamex_ms_ct;
VECTOR_CT(g_tofd_tamex1_tr_ct, tofd_tamex.tamex1);
VECTOR_CT(g_tofd_tamex2_tr_ct, tofd_tamex.tamex2);
CoarseTracker g_fib_tamex_ms_ct;
VECTOR_CT(g_fib_tamex_tr_ct, fib_tamex.tamex);
VECTOR_CT(g_fib7_ctdc_ct, fib_ctdc.fibseven);
}

void map_unpack_raw_sst(EXT_SST &unpack,
			raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024> &raw)
{
  bitsone_iterator iter;
  int i;
  // int j = 0;
  
  while ((i = (int) unpack.data._valid.next(iter)) >= 0)
    {
      DATA12 value = unpack.data._items[i];

      raw.insert_index(-1,i).E = value;

      // j++;
    }

  // raw.header = unpack.header;
  /*
  printf ("%d %d %d %d %08x\n",
	  unpack.header.sam,unpack.header.gtb,unpack.header.siderem,j,
	  (int) raw._valid._bits[0]);
  */
}

void raw_user_function(unpack_event *event,
		       raw_event    *raw_event)
{
  // Do the mapping of the unpack->raw SST data

  unsigned int dest_det = 0;

  for (unsigned int det = 0; det < countof(event->ams_siderem.sst); det++)
    map_unpack_raw_sst(event->ams_siderem.sst[det],raw_event->SST[dest_det++]);

  assert (dest_det <= countof(raw_event->SST));

#if 0
  //
  // Track coarse counter offsets.
  //

  //
  // Check for readout errors, that means we should reset tracking.
  //
  if (0 != event->los_tamex.land_vme.failure.u32) {
    g_los_tamex_ms_ct.Reset();
  }
  if (0 != event->tofd_tamex.land_vme.failure.u32) {
    for (auto it = g_tofd_tamex1_tr_ct.begin(); g_tofd_tamex1_tr_ct.end() !=
        it; ++it) {
      it->Reset();
    }
    for (auto it = g_tofd_tamex2_tr_ct.begin(); g_tofd_tamex2_tr_ct.end() !=
        it; ++it) {
      it->Reset();
    }
  }
  if (0 != event->fib_tamex.land_vme.failure.u32) {
    g_fib_tamex_ms_ct.Reset();
    for (auto it = g_fib_tamex_tr_ct.begin(); g_fib_tamex_tr_ct.end() != it;
        ++it) {
      it->Reset();
    }
  }
  if (0 != event->fib_ctdc.land_vme.failure.u32) {
    for (auto it = g_fib7_ctdc_ct.begin(); g_fib7_ctdc_ct.end() != it;
        ++it) {
      it->Reset();
    }
  }

  //
  // Easy access.
  //
  uint32_t los_vftx2_trigger = UINT32_MAX;
  uint32_t los_vftx2_ms = UINT32_MAX;
  uint32_t los_tamex_trigger = UINT32_MAX;
  uint32_t los_tamex_ms = UINT32_MAX;
  std::vector<uint32_t> tofd_tamex1_trigger(countof(event->tofd_tamex.tamex1));
  std::vector<uint32_t> tofd_tamex2_trigger(countof(event->tofd_tamex.tamex2));
  uint32_t fib_tamex_ms = UINT32_MAX;
  std::vector<uint32_t> fib_tamex_trigger(countof(event->fib_tamex.tamex));
  std::vector<uint32_t> fib7_trigger(countof(event->fib_ctdc.fibseven));

#define TRIGGER_GET(name, module, trigger_ch, trigger) do {\
    bitsone_iterator iter;\
    ssize_t i;\
    while ((i = module.time_coarse._valid.next(iter)) >= 0) {\
      if (trigger_ch == i) {\
        trigger = module.time_coarse._items[i][0].value & COARSE_MASK;\
        break;\
      }\
    }\
    if (UINT32_MAX == trigger) {\
      fprintf(stderr, name": Missing trigger "#trigger"!\n");\
      return;\
    }\
  } while (0)
#define CTDC_ARRAY_TRIGGER_GET(name, ctdc_array, trigger_array) do {\
    for (size_t card_i = 0; card_i < countof(ctdc_array); ++card_i) {\
      auto const &ctdc = ctdc_array[card_i];\
      auto &trigger = trigger_array.at(card_i);\
      TRIGGER_GET(name, ctdc, 256, trigger);\
    }\
  } while (0)
#define TAMEX_ARRAY_TRIGGER_GET(name, tamex_array, trigger_array) do {\
    for (size_t card_i = 0; card_i < countof(tamex_array); ++card_i) {\
      auto const &tamex = tamex_array[card_i];\
      auto &trigger = trigger_array.at(card_i);\
      TRIGGER_GET(name, tamex, 0, trigger);\
    }\
  } while (0)

  los_vftx2_trigger = event->los_vme.vftx2.time_trigger.value;
  TRIGGER_GET("LOSV", event->los_vme.vftx2, 15, los_vftx2_ms);

  TRIGGER_GET("LOST", event->los_tamex.tamex, 0, los_tamex_trigger);
  TRIGGER_GET("LOST", event->los_tamex.tamex, 31, los_tamex_ms);

  TAMEX_ARRAY_TRIGGER_GET("TOFD1", event->tofd_tamex.tamex1,
      tofd_tamex1_trigger);
  TAMEX_ARRAY_TRIGGER_GET("TOFD2", event->tofd_tamex.tamex2,
      tofd_tamex2_trigger);

  TAMEX_ARRAY_TRIGGER_GET("FIBS", event->fib_tamex.tamex, fib_tamex_trigger);
  TRIGGER_GET("FIBS", event->fib_tamex.tamex[0], 31, fib_tamex_ms);

  CTDC_ARRAY_TRIGGER_GET("FIBM", event->fib_ctdc.fibseven, fib7_trigger);

  //
  // Compare various targets.
  //
  g_los_tamex_ms_ct.Track(los_tamex_ms, los_vftx2_ms);

  for (size_t i = 0; i < tofd_tamex1_trigger.size(); ++i) {
    g_tofd_tamex1_tr_ct[i].Track(tofd_tamex1_trigger[i], los_tamex_trigger);
  }
  for (size_t i = 0; i < tofd_tamex2_trigger.size(); ++i) {
    g_tofd_tamex2_tr_ct[i].Track(tofd_tamex2_trigger[i], los_tamex_trigger);
  }

  g_fib_tamex_ms_ct.Track(fib_tamex_ms, los_vftx2_ms);
//  for (size_t i = 1; i < fib_tamex_trigger.size(); ++i) {
//    g_fib_tamex_tr_ct[i].Track(fib_tamex_trigger[i], fib_tamex_trigger[0]);
//  }
#endif
}
