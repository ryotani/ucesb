#include "structures.hh"
#include <cstdint>
#include <iomanip>
#include <iostream>

#define NUM_SST 8 // 4 box detectors taken out

// Smallest coarse counter range among all electronics.
#define COARSE_MASK 0x7ff
#define COARSE_ADD(c, add) (COARSE_MASK & (c + add + COARSE_MASK + 1))

struct Time {
  Time():
    coarse(UINT32_MAX),
    fine(UINT32_MAX)
  {}
  char const *module; // Literal string to electronics channel.
  unsigned ch;        // E.g. 0 = trigger in TAMEX.
  uint32_t coarse;    // Coarse counter.
  uint32_t fine;      // Not used yet...
};
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
    void Track(Time const &a_trig, Time const &a_ref) {
      uint32_t const c_diff = COARSE_MASK & (a_ref.coarse - a_trig.coarse);
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
      fprintf(stderr, "\nTracking failed! range=%u..%u "
          "%s:%u=%u(%u) - %s:%u=%u(%u) -> %u\n", m_left, m_right,
          a_trig.module, a_trig.ch, a_trig.coarse, a_trig.fine,
          a_ref.module, a_ref.ch, a_ref.coarse, a_ref.fine, c_diff);
    }
    CoarseTracker operator+(CoarseTracker const &a_term) const {
      CoarseTracker ct;
      ct.m_left = m_left + a_term.m_left;
      return ct;
    }

  public:
    uint32_t m_left;
    uint32_t m_right;
};

namespace {
#define VECTOR_CT(dst, src) \
  std::vector<CoarseTracker> dst(countof(unpack_event::src))
CoarseTracker g_los_tamex_ms_ct;
VECTOR_CT(g_tofd_tamex0_tr_ct, tofd_tamex.data.tamex0);
VECTOR_CT(g_tofd_tamex2_tr_ct, tofd_tamex.data.tamex2);
CoarseTracker g_fib_tamex_ms_ct;
VECTOR_CT(g_fib_tamex_tr_ct, fib_tamex.data.tamex);
VECTOR_CT(g_fib7_ctdc_ct, fib_ctdc.data.fibseven);
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

void raw_user_function(unpack_event *event, raw_event *raw_event)
{
  // Do the mapping of the unpack->raw SST data

  unsigned int dest_det = 0;

  for (unsigned int det = 0; det < countof(event->ams_siderem.sst); det++)
    map_unpack_raw_sst(event->ams_siderem.sst[det],raw_event->SST[dest_det++]);

  assert (dest_det <= countof(raw_event->SST));
}

int unpack_user_function(unpack_event *event)
{
  if (1 != event->trigger) {
    return 1;
  }

#if 0
  //
  // Track coarse counter offsets on trigger=1.
  //

  //
  // Check for readout errors, that means we should reset tracking.
  //
  if (0 != event->los_vme.data.land_vme.failure.u32 ||
      0 != event->los_tamex.data.land_vme.failure.u32 ||
      0 != event->tofd_tamex.data.land_vme.failure.u32 ||
      0 != event->fib_tamex.data.land_vme.failure.u32 ||
      0 != event->fib_ctdc.data.land_vme.failure.u32) {
    g_los_tamex_ms_ct.Reset();
    for (auto it = g_tofd_tamex0_tr_ct.begin(); g_tofd_tamex0_tr_ct.end() !=
        it; ++it) {
      it->Reset();
    }
    for (auto it = g_tofd_tamex2_tr_ct.begin(); g_tofd_tamex2_tr_ct.end() !=
        it; ++it) {
      it->Reset();
    }
    g_fib_tamex_ms_ct.Reset();
    for (auto it = g_fib_tamex_tr_ct.begin(); g_fib_tamex_tr_ct.end() != it;
        ++it) {
      it->Reset();
    }
    for (auto it = g_fib7_ctdc_ct.begin(); g_fib7_ctdc_ct.end() != it;
        ++it) {
      it->Reset();
    }
    return 1;
  }

  //
  // No data -> probably out of the DAQ, just don't process it.
  //
  bool los_vftx2_exists = false;
  bool los_tamex_exists = false;
  bool tofd_tamex_exists = false;
  bool fib_tamex_exists = false;
  bool fib_ctdc_exists = false;

  //
  // Extract coarse counters.
  //
  Time los_vftx2_ms;
  Time los_tamex_trigger;
  Time los_tamex_ms;
  std::vector<Time>
      tofd_tamex0_trigger(countof(event->tofd_tamex.data.tamex0));
  std::vector<Time>
      tofd_tamex2_trigger(countof(event->tofd_tamex.data.tamex2));
  Time fib_tamex_ms;
  std::vector<Time> fib_tamex_trigger(countof(event->fib_tamex.data.tamex));
  std::vector<Time> fib7_trigger(countof(event->fib_ctdc.data.fibseven));

#define TIME_GET(a_module, a_trigger_ch, a_trigger, a_exists) do {\
    auto &mod = event->a_module;\
    a_trigger.module = #a_module;\
    a_trigger.ch = a_trigger_ch;\
    bitsone_iterator iter;\
    ssize_t i;\
    a_exists = false;\
    while ((i = mod.time_coarse._valid.next(iter)) >= 0) {\
      if (a_trigger_ch == i) {\
        a_trigger.coarse = mod.time_coarse._items[i][0].value & COARSE_MASK;\
        a_trigger.fine = mod.time_fine._items[i][0].value & COARSE_MASK;\
        break;\
      }\
      a_exists = true;\
    }\
    if (a_exists && UINT32_MAX == a_trigger.coarse) {\
      fprintf(stderr, "Missing time "#a_module"["#a_trigger_ch"]!\n");\
      return 1;\
    }\
  } while (0)
#define TIME_GET_ARRAY(a_array, a_trigger_array, a_trigger_ch, a_exists) do {\
    for (size_t card_i = 0; card_i < countof(event->a_array); ++card_i) {\
      auto &trigger = a_trigger_array.at(card_i);\
      bool exists;\
      TIME_GET(a_array[card_i], a_trigger_ch, trigger, exists);\
      a_exists |= exists;\
    }\
  } while (0)
#define CTDC_TIME_GET_ARRAY(a_ctdc_array, a_trigger_array, a_exists)\
  TIME_GET_ARRAY(a_ctdc_array, a_trigger_array, 256, a_exists)
#define TAMEX_TIME_GET_ARRAY(a_tamex_array, a_trigger_array, a_exists)\
  TIME_GET_ARRAY(a_tamex_array, a_trigger_array, 0, a_exists)

  TIME_GET(los_vme.data.vftx2, 15, los_vftx2_ms, los_vftx2_exists);
  if (!los_vftx2_exists) {
    return 1;
  }

  TIME_GET(los_tamex.data.tamex, 0, los_tamex_trigger, los_tamex_exists);
  TIME_GET(los_tamex.data.tamex, 31, los_tamex_ms, los_tamex_exists);

  TAMEX_TIME_GET_ARRAY(tofd_tamex.data.tamex0, tofd_tamex0_trigger,
      tofd_tamex_exists);
  TAMEX_TIME_GET_ARRAY(tofd_tamex.data.tamex2, tofd_tamex2_trigger,
      tofd_tamex_exists);

  TAMEX_TIME_GET_ARRAY(fib_tamex.data.tamex, fib_tamex_trigger,
      fib_tamex_exists);
  TIME_GET(fib_tamex.data.tamex[0], 31, fib_tamex_ms, fib_tamex_exists);

  CTDC_TIME_GET_ARRAY(fib_ctdc.data.fibseven, fib7_trigger, fib_ctdc_exists);

  //
  // Compare and alter coarse counters.
  //
#define TIME_SET(a_module, a_trigger) do {\
    auto &mod = event->a_module;\
    bitsone_iterator iter;\
    ssize_t i;\
    while ((i = mod.time_coarse._valid.next(iter)) >= 0) {\
      mod.time_coarse._items[i][0].value += a_trigger.m_left;\
    }\
  } while (0)
#define TIME_SET_ARRAY(a_array, a_trigger_array) do {\
    for (size_t card_i = 0; card_i < countof(event->a_array); ++card_i) {\
      auto &trigger = a_trigger_array.at(card_i);\
      TIME_SET(a_array[card_i], trigger);\
    }\
  } while (0)

  if (los_tamex_exists) {
    g_los_tamex_ms_ct.Track(los_tamex_ms, los_vftx2_ms);
    CoarseTracker los_tamex_diff;
    los_tamex_diff = g_los_tamex_ms_ct;
    TIME_SET(los_tamex.data.tamex, los_tamex_diff);
  }

  if (tofd_tamex_exists) {
    for (size_t i = 0; i < tofd_tamex0_trigger.size(); ++i) {
      g_tofd_tamex0_tr_ct[i].Track(tofd_tamex0_trigger[i],
          los_tamex_trigger);
    }
    std::vector<CoarseTracker>
        tofd_tamex0_diff(countof(event->tofd_tamex.data.tamex0));
    for (size_t i = 0; i < countof(event->tofd_tamex.data.tamex0); ++i) {
      tofd_tamex0_diff.at(i) = g_tofd_tamex0_tr_ct.at(i) + g_los_tamex_ms_ct;
    }
    TIME_SET_ARRAY(tofd_tamex.data.tamex0, tofd_tamex0_diff);

    for (size_t i = 0; i < tofd_tamex2_trigger.size(); ++i) {
      g_tofd_tamex2_tr_ct[i].Track(tofd_tamex2_trigger[i],
          los_tamex_trigger);
    }
    std::vector<CoarseTracker>
        tofd_tamex2_diff(countof(event->tofd_tamex.data.tamex2));
    for (size_t i = 0; i < countof(event->tofd_tamex.data.tamex2); ++i) {
      tofd_tamex2_diff.at(i) = g_tofd_tamex2_tr_ct.at(i) + g_los_tamex_ms_ct;
    }
    TIME_SET_ARRAY(tofd_tamex.data.tamex2, tofd_tamex2_diff);
  }

  if (fib_tamex_exists) {
    g_fib_tamex_ms_ct.Track(fib_tamex_ms, los_vftx2_ms);
    for (size_t i = 1; i < fib_tamex_trigger.size(); ++i) {
      g_fib_tamex_tr_ct[i].Track(fib_tamex_trigger[i],
          fib_tamex_trigger[0]);
    }
    std::vector<CoarseTracker>
        fib_tamex_diff(countof(event->fib_tamex.data.tamex));
    for (size_t i = 0; i < countof(event->fib_tamex.data.tamex); ++i) {
      fib_tamex_diff.at(i) = g_fib_tamex_tr_ct.at(i) + g_fib_tamex_ms_ct;
    }
    TIME_SET_ARRAY(fib_tamex.data.tamex, fib_tamex_diff);

    std::vector<CoarseTracker>
        fib7_diff(countof(event->fib_ctdc.data.fibseven));
  }

  if (0) {
    static unsigned counter = 0;
    ++counter;
    if (1000 == counter) {
      counter = 0;

      std::cout << "LOS:" << g_los_tamex_ms_ct.m_left << ' ' << g_los_tamex_ms_ct.m_right << '\n';

      for (size_t i = 0; i < tofd_tamex0_trigger.size(); ++i) {
        std::cout << "TOFD0_" << i << ':' << g_tofd_tamex0_tr_ct[i].m_left << ' ' << g_tofd_tamex0_tr_ct[i].m_left << ' ';
      }
      std::cout << '\n';
      for (size_t i = 0; i < tofd_tamex2_trigger.size(); ++i) {
        std::cout << "TOFD2_" << i << ':' << g_tofd_tamex2_tr_ct[i].m_left << ' ' << g_tofd_tamex2_tr_ct[i].m_left << ' ';
      }
      std::cout << '\n';

      std::cout << "FIBTMS:" << g_fib_tamex_ms_ct.m_left << ' ' << g_fib_tamex_ms_ct.m_left << '\n';
      for (size_t i = 1; i < fib_tamex_trigger.size(); ++i) {
        std::cout << "FIBTTR_" << i << ':' << g_fib_tamex_tr_ct[i].m_left << ' ' << g_fib_tamex_tr_ct[i].m_left << ' ';
      }
      std::cout << '\n';
    }
  }
#endif
  return 1;
}
