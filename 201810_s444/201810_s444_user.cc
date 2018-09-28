#include "structures.hh"
#include <cstdint>
#include <iomanip>
#include <iostream>

#define NUM_SST 8 // 4 box detectors taken out

#define TAMEX_MASK 0x7ff
#define VFTX2_MASK 0x1fff
// Smallest coarse counter range among all electronics.
#define COARSE_MASK 0x7ff
#define COARSE_ADD(a, b) (COARSE_MASK & (a + b))
#define COARSE_SUB(a, b) (COARSE_MASK & (a - b + (1 << 16)))

namespace {
int g_error_delay = 0;
bool g_do_stat = false;
time_t g_stat_time_prev = 0;
};

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
    CoarseTracker():
      m_name("Unknown"),
      m_left(),
      m_right() {
      Reset();
    }
    uint32_t GetDiff() const {
      return m_left;
    }
    void Reset() {
      m_left = UINT32_MAX;
      m_right = UINT32_MAX;
    }
    void SetName(char const *a_name) {
      m_name = a_name;
    }
    void Track(Time const &a_trig, Time const &a_ref) {
      uint32_t const c_diff = COARSE_SUB(a_ref.coarse, a_trig.coarse);
      if (UINT32_MAX == m_left) {
        m_right = m_left = c_diff;
	fprintf(stderr, "\n%s:%s: Tracking started at %u.", __func__,
	    m_name.c_str(), m_left);
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
      fprintf(stderr, "\n%s:%s: Tracking failed! "
	  "Range=%u..%u %s:%u=%u(%u) - %s:%u=%u(%u) -> %u\n", __func__,
	  m_name.c_str(), m_left, m_right, a_trig.module, a_trig.ch,
	  a_trig.coarse, a_trig.fine, a_ref.module, a_ref.ch, a_ref.coarse,
	  a_ref.fine, c_diff);
      {
        static int counter = 0;
        ++counter;
        if (10 < counter) {
          abort();
        }
      }
    }
    CoarseTracker operator+(CoarseTracker const &a_term) const {
      CoarseTracker ct;
      ct.m_left = m_left + a_term.m_left;
      return ct;
    }

  public:
    std::string m_name;
    // These can be two apart, e.g. (10,12), because one clocked TDC fires on
    // n,n+1 while the other fires on m,m+1, so the maximum difference is for
    // n=m+1 and m+2=n.
    uint32_t m_left;
    uint32_t m_right;
};

// Mostly persistent coarse counter offsets, reset when a failure bit from a
// DAQ node has been seen.
namespace {
#define VECTOR_CT(dst, src) \
  std::vector<CoarseTracker> dst(countof(unpack_event::src))
CoarseTracker g_los_tamex_ms_ct;
VECTOR_CT(g_tofd_tamex0_trig_ct, tofd_tamex_1.data.tamex);
VECTOR_CT(g_tofd_tamex2_trig_ct, tofd_tamex_2.data.tamex);
CoarseTracker g_fib_tamex_ms_ct;
VECTOR_CT(g_fib_tamex_trig_ct, fib_tamex.data.tamex);
VECTOR_CT(g_fi7_ctdc_trig_ct, fib_ctdc.data.fibseven);
VECTOR_CT(g_fi10_ctdc_trig_ct, fib_ctdc.data.fibseven);
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

void init_user_function()
{
#define SET_NAME(ct) \
  g_##ct##_ct.SetName(#ct)
#define SET_NAME_ARRAY(ct) do {\
    for (auto it = g_##ct##_ct.begin(); g_##ct##_ct.end() != it; ++it) {\
      it->SetName(#ct);\
    }\
  } while (0)
  SET_NAME(los_tamex_ms);
  SET_NAME_ARRAY(tofd_tamex0_trig);
  SET_NAME_ARRAY(tofd_tamex2_trig);
  SET_NAME(fib_tamex_ms);
  SET_NAME_ARRAY(fib_tamex_trig);
  SET_NAME_ARRAY(fi7_ctdc_trig);
  SET_NAME_ARRAY(fi10_ctdc_trig);
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

#if 1
  //
  // Track coarse counter offsets on trigger=1.
  //
  // There are several trigger domains (the trigger in one domain jitters
  // against the others due to ~100 MHz digital electronics in the chain):
  //  1) VULOM -> VME
  //  2) VULOM -> EXPLODER -> TAMEX2
  //  3) VULOM -> EXPLODER -> CLKTRG -> TAMEX3 + CTDC
  // The VULOM master start is sent to:
  //  1) LOS VFTX2
  //  2) LOS TAMEX3
  //  3) FIB TAMEX2
  // So the sync happens in a few ways:
  //  1) Master start between LOS VFTX2 and TAMEX3.
  //     Sync between trigger domains 1 and 3.
  //  2) Twigger between all cards in domain 3.
  //  3) Master start between LOS VFTX2 and FIB TAMEX2.
  //     Sync between trigger domains 1 and 2.
  //  4) Trigger between all cards in domain 2.
  // Everything is synced w.r.t. LOS VFTX2, i.e. that particular coarse
  // counter runs by itself while we track the offsets for every other clocked
  // TDC.
  //

  //
  // Check for readout errors, that means we should reset tracking.
  // In principle we only need to reset tracking for dependent trackers, but
  // screw that, just reset everything...
  //
  if (0 != event->los_vme.data.land_vme.failure.u32 ||
      0 != event->los_tamex.data.land_vme.failure.u32 ||
      0 != event->tofd_tamex_1.data.land_vme.failure.u32 ||
      0 != event->tofd_tamex_2.data.land_vme.failure.u32 ||
      0 != event->fib_tamex.data.land_vme.failure.u32 ||
      0 != event->fib_ctdc.data.land_vme.failure.u32) {
#define RESET_ARRAY(array) do {\
    for (auto it = array.begin(); array.end() != it; ++it) {\
      it->Reset();\
    }\
  } while (0)
    g_los_tamex_ms_ct.Reset();
    RESET_ARRAY(g_tofd_tamex0_trig_ct);
    RESET_ARRAY(g_tofd_tamex2_trig_ct);
    g_fib_tamex_ms_ct.Reset();
    RESET_ARRAY(g_fib_tamex_trig_ct);
    RESET_ARRAY(g_fi7_ctdc_trig_ct);
    RESET_ARRAY(g_fi10_ctdc_trig_ct);
    // 1 erronous + 2 more events will be skipped, we're trying to wait until
    // the electronics has recovered.
    g_error_delay = 3;
  }

  if (g_error_delay > 0) {
    --g_error_delay;
    return 1;
  }

  //
  // Extract coarse counters.
  //
#define TIME_GET(a_time, a_exists, a_module, a_ref_ch) do {\
    auto &mod = event->a_module;\
    a_time.module = #a_module;\
    a_time.ch = a_ref_ch;\
    bitsone_iterator iter;\
    ssize_t i;\
    a_exists = false;\
    while ((i = mod.time_coarse._valid.next(iter)) >= 0) {\
      a_exists = true;\
      if (a_ref_ch == i) {\
        a_time.coarse = mod.time_coarse._items[i][0].value;\
        a_time.fine = mod.time_fine._items[i][0].value;\
        break;\
      }\
    }\
    if (a_exists && UINT32_MAX == a_time.coarse) {\
      fprintf(stderr, "%s: Missing time ref "#a_module"["#a_ref_ch"]!\n",\
	  __func__);\
      return 1;\
    }\
  } while (0)
#define TIME_GET_SINGLE(_name, a_module, a_ref_ch)\
  bool _name##_exists = false;\
  Time _name##_time;\
  TIME_GET(_name##_time, _name##_exists, a_module, a_ref_ch)
#define TIME_GET_ARRAY(a_name, a_module, a_ref_ch)\
  bool a_name##_exists = false;\
  std::vector<Time> a_name##_time(countof(event->a_module));\
  for (size_t card_i = 0; card_i < countof(event->a_module); ++card_i) {\
    auto &time = a_name##_time.at(card_i);\
    bool exists;\
    TIME_GET(time, exists, a_module[card_i], a_ref_ch);\
    a_name##_exists |= exists;\
  }
#define CTDC_TIME_GET_ARRAY(_name, a_module)\
  TIME_GET_ARRAY(_name, a_module, 256)
#define TAMEX_TIME_GET_ARRAY(_name, a_module)\
  TIME_GET_ARRAY(_name, a_module, 0)

  TIME_GET_SINGLE(los_vftx2_ms, los_vme.data.vftx2, 15);
  if (!los_vftx2_ms_exists) {
    // We sync against LOS VFTX2, plus we do this tracking for ToF from LOS,
    // so we must have it!
    return 1;
  }

  TIME_GET_SINGLE(los_tamex_trig, los_tamex.data.tamex, 0);
  TIME_GET_SINGLE(los_tamex_ms, los_tamex.data.tamex, 31);

  TAMEX_TIME_GET_ARRAY(tofd_tamex0_trig, tofd_tamex_1.data.tamex);
  TAMEX_TIME_GET_ARRAY(tofd_tamex2_trig, tofd_tamex_2.data.tamex);

  TAMEX_TIME_GET_ARRAY(fib_tamex_trig, fib_tamex.data.tamex);
  TIME_GET_SINGLE(fib_tamex_ms, fib_tamex.data.tamex[0], 31);

  CTDC_TIME_GET_ARRAY(fi7_ctdc_trig, fib_ctdc.data.fibseven);
  CTDC_TIME_GET_ARRAY(fi10_ctdc_trig, fib_ctdc.data.fibten);

  //
  // Compare and alter coarse counters.
  //
#define TIME_SET(a_module, a_ct, a_mask) do {\
    auto &mod = event->a_module;\
    bitsone_iterator iter;\
    ssize_t i;\
    while ((i = mod.time_coarse._valid.next(iter)) >= 0) {\
      auto &coarse = mod.time_coarse._items[i][0];\
      coarse.value = a_mask & (coarse.value + a_ct.m_left);\
    }\
  } while (0)
#define TRACK_ADJUST_SINGLE(a_name, a_module, a_mask, a_ref_name) do {\
    if (a_name##_exists && a_ref_name##_exists) {\
      g_##a_name##_ct.Track(a_name##_time, a_ref_name##_time);\
      TIME_SET(a_module, g_##a_name##_ct, a_mask);\
    }\
  } while (0)
#define TRACK_ADJUST_ARRAY(a_name, a_module_array, a_mask, a_ref_name,\
    a_ofs_ct) do {\
    if (a_name##_exists && a_ref_name##_exists) {\
      for (size_t i = 0; i < a_name##_time.size(); ++i) {\
        g_##a_name##_ct[i].Track(a_name##_time[i], a_ref_name##_time);\
      }\
      auto ofs = a_ofs_ct;\
      for (size_t i = 0; i < countof(event->a_module_array); ++i) {\
        CoarseTracker diff = g_##a_name##_ct.at(i) + ofs;\
        TIME_SET(a_module_array[i], diff, a_mask);\
      }\
    }\
  } while (0)

  // DANGER: Adjust the mask to the HW ranges!

  // (LOS TAMEX3 MS -- LOS VFTX2 MS)
  TRACK_ADJUST_SINGLE(los_tamex_ms, los_tamex.data.tamex, TAMEX_MASK,
      los_vftx2_ms);

  // (TOFD TAMEX3 Trig -- LOS TAMEX3 Trig) + (LOS TAMEX3 MS -- LOS VFTX2 MS)
  TRACK_ADJUST_ARRAY(tofd_tamex0_trig, tofd_tamex_1.data.tamex, TAMEX_MASK,
      los_tamex_trig, g_los_tamex_ms_ct);
  TRACK_ADJUST_ARRAY(tofd_tamex2_trig, tofd_tamex_2.data.tamex, TAMEX_MASK,
      los_tamex_trig, g_los_tamex_ms_ct);

  // (FIB TAMEX3 MS -- LOS VFTX2 MS)
  TRACK_ADJUST_SINGLE(fib_tamex_ms, fib_tamex.data.tamex[0], TAMEX_MASK,
      los_vftx2_ms);
  // (FIB TAMEX3 Trig -- LOS TAMEX3 Trig) + (LOS TAMEX3 MS -- LOS VFTX2 MS)
  TRACK_ADJUST_ARRAY(fib_tamex_trig, fib_tamex.data.tamex, TAMEX_MASK,
      los_tamex_trig, g_los_tamex_ms_ct);

  // (FI7 CTDC Trig -- LOS TAMEX3 Trig) + (LOS TAMEX3 MS -- LOS VFTX2 MS)
//  TRACK_ADJUST_ARRAY(fi7_ctdc_trig, fib_ctdc.data.fibseven, 0xfff,
//      los_tamex_trig_time, g_los_tamex_ms_ct);

  if (g_do_stat) {
    time_t time_now = time(NULL);
    if (0 == g_stat_time_prev) {
      g_stat_time_prev = time_now;
    }
    if (time_now > g_stat_time_prev + 5) {
      g_stat_time_prev += 5;
      std::cerr << '\n';

      std::cerr << "LOS:" << g_los_tamex_ms_ct.m_left << ' ' << g_los_tamex_ms_ct.m_right << '\n';

      for (size_t i = 0; i < tofd_tamex0_trig_time.size(); ++i) {
        std::cerr << "TOFD0_" << i << ':' << g_tofd_tamex0_trig_ct[i].m_left << ' ' << g_tofd_tamex0_trig_ct[i].m_left << ' ';
      }
      std::cerr << '\n';
      for (size_t i = 0; i < tofd_tamex2_trig_time.size(); ++i) {
        std::cerr << "TOFD2_" << i << ':' << g_tofd_tamex2_trig_ct[i].m_left << ' ' << g_tofd_tamex2_trig_ct[i].m_left << ' ';
      }
      std::cerr << '\n';

      std::cerr << "FIBTMS:" << g_fib_tamex_ms_ct.m_left << ' ' << g_fib_tamex_ms_ct.m_left << '\n';
      for (size_t i = 1; i < fib_tamex_trig_time.size(); ++i) {
        std::cerr << "FIBTTR_" << i << ':' << g_fib_tamex_trig_ct[i].m_left << ' ' << g_fib_tamex_trig_ct[i].m_left << ' ';
      }
      std::cerr << '\n';
    }
  }
#endif
  return 1;
}

bool handle_command_line_option(const char *arg)
{
  if (0 == strcmp(arg, "--ct-stat")) {
    g_do_stat = true;
    return true;
  }
  return false;
}

void usage_command_line_options()
{
  printf("  --ct-stat           Print coarse counter tracking stats.\n");
}
