#include "structures.hh"
#include <sys/file.h>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <list>
#include <sstream>

#define NUM_SST 8 // 4 box detectors taken out

#define TAMEX_MASK 0x7ff
#define VFTX2_MASK 0x1fff
// Smallest coarse counter range among all electronics.
#define COARSE_MASK 0x7ff
#define COARSE_ADD(a, b) (COARSE_MASK & (a + b))
#define COARSE_SUB(a, b) (COARSE_MASK & (a - b + (1 << 16)))

static struct {
  bool yes;
  uint32_t map[3][32 * 32];
} g_psp;

namespace {
class Range {
  public:
    Range(std::string const &a_name, unsigned a_left, unsigned a_right):
      name(a_name),
      left(a_left),
      right(a_right),
      is_touched(false)
    {}
    std::string const &GetName() const {
      return name;
    }
    unsigned const &GetLeft() {
      is_touched = true;
      return left;
    }
    unsigned const &GetRight() {
      is_touched = true;
      return right;
    }
    bool IsTouched() const {
      return is_touched;
    }
    void PushLeft(unsigned a_left) {
      is_touched = true;
      left = std::min(left, a_left);
    }
    void PushRight(unsigned a_right) {
      is_touched = true;
      right = std::max(right, a_right);
    }
  private:
    std::string name;
    unsigned left;
    unsigned right;
    bool is_touched;
};
std::list<Range> g_range_list;

int g_error_delay = 0;
bool g_do_stat = false;
struct {
  bool yes;
  uint64_t wr;
  unsigned ch[2][2];
} g_ics;
time_t g_stat_time_prev = 0;

// If there were 10 errors in the last 1 s, abort!
unsigned const g_error_limit_n = 100;
unsigned const g_error_limit_s = 1;
time_t g_error_time;
unsigned g_error_n;

std::string g_path = std::string(getenv("HOME")) + "/.201902_s444_ranges";

Range *FindRange(std::string const &a_name)
{
  for (auto it = g_range_list.begin(); g_range_list.end() != it; ++it) {
    if (0 == it->GetName().compare(a_name)) {
      return &*it;
    }
  }
  g_range_list.push_back(Range(a_name, 1e9, 0));
  return &g_range_list.back();
}
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
    bool Track(Time const &a_trig, Time const &a_ref) {
      uint32_t const c_diff = COARSE_SUB(a_ref.coarse, a_trig.coarse);
      if (UINT32_MAX == m_left) {
        m_right = m_left = c_diff;
        fprintf(stderr, "%s:%s: Tracking started at %u.\n", __func__,
            m_name.c_str(), m_left);
        return true;
      }
      for (unsigned i = 0; i <= 2; ++i) {
        if (COARSE_ADD(c_diff, i) == m_right) {
          if (1 == i && m_left == m_right) {
            m_left = COARSE_ADD(m_right, -1);
          } else if (2 == i && COARSE_ADD(m_left, 2) != m_right) {
            m_left = COARSE_ADD(m_right, -2);
          }
          return true;
        }
      }
      for (unsigned i = 1; i <= 2; ++i) {
        if (c_diff == COARSE_ADD(m_left, i)) {
          if (1 == i && m_left == m_right) {
            m_right = COARSE_ADD(m_left, 1);
          } else if (2 == i && COARSE_ADD(m_left, 2) != m_right) {
            m_right = COARSE_ADD(m_left, 2);
          }
          return true;
        }
      }
      fprintf(stderr, "%s:%s: Tracking failed! "
          "Range=%u..%u %s:%u=%u(%u) - %s:%u=%u(%u) -> %u, resetting.\n",
          __func__, m_name.c_str(), m_left, m_right, a_trig.module, a_trig.ch,
          a_trig.coarse, a_trig.fine, a_ref.module, a_ref.ch, a_ref.coarse,
          a_ref.fine, c_diff);
      Reset();
      return false;
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
    // n=m+1 and n+1=m.
    uint32_t m_left;
    uint32_t m_right;
};

// Mostly persistent coarse counter offsets, reset when a failure bit from a
// DAQ node has been seen, sometimes also when the range is whack for a short
// time, happens for whatever reason...
namespace {
#define CT_SINGLE(dst) CoarseTracker g_##dst##_ct
#define CT_VECTOR(dst, src) \
  std::vector<CoarseTracker> g_##dst##_ct(countof(unpack_event::src))
CT_SINGLE(los_tamex_ms);
CT_VECTOR(tofd_tamex1_trig, tofd_tamex_1.data.tamex);
CT_VECTOR(tofd_tamex2_trig, tofd_tamex_2.data.tamex);
CT_SINGLE(fib_tamex_ms);
CT_VECTOR(fib_tamex_trig, fib_tamex.data.tamex);
//CT_VECTOR(fi3a_ctdc_trig, fib_ctdc.data.fibthreea);
//CT_VECTOR(fi3b_ctdc_trig, fib_ctdc.data.fibthreeb);
CT_VECTOR(fi12_ctdc_trig, fib12_ctdc.data.ctdc);
CT_VECTOR(fi13_ctdc_trig, fib13_ctdc.data.ctdc);
CT_VECTOR(fi10_ctdc_trig, fib10_ctdc.data.ctdc);
CT_VECTOR(fi11_ctdc_trig, fib11_ctdc.data.ctdc);
CT_SINGLE(nl_tamex_ms);
CT_VECTOR(nl10_tamex_trig, neuland_tamex_1.data.sfp[0].card);
CT_VECTOR(nl11_tamex_trig, neuland_tamex_1.data.sfp[1].card);
CT_VECTOR(nl20_tamex_trig, neuland_tamex_2.data.sfp[0].card);
CT_VECTOR(nl21_tamex_trig, neuland_tamex_2.data.sfp[1].card);
// HAXX!!!
//CT_SINGLE(tofd_tjo_ms);
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
  auto file = fopen(g_path.c_str(), "rb");
  if (file) {
    auto fno = fileno(file);
    flock(fno, LOCK_SH);
    for (unsigned line_no = 1;; ++line_no) {
      char line[80];
      if (NULL == fgets(line, sizeof line, file)) {
        break;
      }
      char *s;
      auto name = strtok_r(line, " \t", &s);
      auto left = strtok_r(nullptr, " \t", &s);
      auto right = strtok_r(nullptr, " \t", &s);
      if (!name || !left || !right) {
        fprintf(stderr, "%s:%u: Missing tokens on line.\n", g_path.c_str(),
            line_no);
        break;
      }
      auto left_i = strtol(left, &s, 10);
      if (s == left) {
        fprintf(stderr, "%s:%u: Corrupt left value '%s'.\n", g_path.c_str(),
            line_no, left);
        break;
      }
      auto right_i = strtol(right, &s, 10);
      if (s == right) {
        fprintf(stderr, "%s:%u: Corrupt right value '%s'.\n", g_path.c_str(),
            line_no, right);
        break;
      }
      if (left >= right) {
        fprintf(stderr, "%s:%u: Left='%s' >= right='%s'.\n", g_path.c_str(),
            line_no, left, right);
        break;
      }
      g_range_list.push_back(Range(name, (unsigned)left_i,
          (unsigned)right_i));
    }
    flock(fno, LOCK_UN);
    fclose(file);
  }

#define SET_NAME(ct) \
  g_##ct##_ct.SetName(#ct)
#define SET_NAME_ARRAY(ct) do {\
    unsigned i = 0;\
    for (auto it = g_##ct##_ct.begin(); g_##ct##_ct.end() != it; ++it, ++i) {\
      std::ostringstream oss;\
      oss << #ct << i;\
      it->SetName(oss.str().c_str());\
    }\
  } while (0)
  SET_NAME(los_tamex_ms);
  SET_NAME_ARRAY(tofd_tamex1_trig);
  SET_NAME_ARRAY(tofd_tamex2_trig);
  SET_NAME(fib_tamex_ms);
  SET_NAME_ARRAY(fib_tamex_trig);
//  SET_NAME_ARRAY(fi3a_ctdc_trig);
//  SET_NAME_ARRAY(fi3b_ctdc_trig);
  SET_NAME_ARRAY(fi12_ctdc_trig);
  SET_NAME_ARRAY(fi13_ctdc_trig);
  SET_NAME_ARRAY(fi10_ctdc_trig);
  SET_NAME_ARRAY(fi11_ctdc_trig);
  SET_NAME(nl_tamex_ms);
  SET_NAME_ARRAY(nl10_tamex_trig);
  SET_NAME_ARRAY(nl11_tamex_trig);
  SET_NAME_ARRAY(nl20_tamex_trig);
  SET_NAME_ARRAY(nl21_tamex_trig);
// HAXX!!!
//SET_NAME(tofd_tjo_ms);
}

void exit_user_function()
{
  auto file = fopen(g_path.c_str(), "wb");
  if (!file) {
    return;
  }
  auto fno = fileno(file);
  flock(fno, LOCK_EX);
  for (auto it = g_range_list.begin(); g_range_list.end() != it; ++it) {
    if (it->IsTouched()) {
      fprintf(file, "%s %u %u\n", it->GetName().c_str(), it->GetLeft(),
          it->GetRight());
    }
  }
  flock(fno, LOCK_UN);
  fclose(file);
}

void raw_user_function(unpack_event *event, raw_event *raw_event)
{
  // Do the mapping of the unpack->raw SST data

  unsigned int dest_det = 0;

  for (unsigned int det = 0; det < countof(event->ams_siderem.sst); det++)
    map_unpack_raw_sst(event->ams_siderem.sst[det],raw_event->SST[dest_det++]);

  assert (dest_det <= countof(raw_event->SST));

  if (g_psp.yes) {
    unsigned i;

    // Collect PSPX hits in heat maps.
    if (1 == event->trigger) {
      for (i = 0; i < 3; ++i) {
	// Get edges per strip.
	char mask[64];
	memset(mask, 0, sizeof mask);
	auto &pspx = raw_event->PSPX[2 * i];
	bitsone_iterator iter;
	ssize_t ch;
	while ((ch = pspx._valid.next(iter)) >= 0) {
	  auto strip_i = ch / 2;
	  auto strip_e = ch & 1;
	  assert((unsigned)strip_i < countof(mask));
	  mask[strip_i] |= (char)(1 << strip_e);
	}
	// Zero-suppress strips.
	unsigned strip[2][64];
	unsigned strip_num[2] = {0, 0};
	for (unsigned strip_i = 0; strip_i < 64; ++strip_i) {
	  if (mask[strip_i] == 3) {
	    auto side = strip_i / 32;
	    strip[side][strip_num[side]++] = 31 & strip_i;
	  }
	}
	// Fill map.
	for (unsigned j = 0; j < strip_num[0]; ++j) {
	  auto strip_0 = strip[0][j];
	  unsigned x;
	  switch (i) {
	    case 0: x = 31 - strip_0; break;
	    case 1:
	    case 2: x = strip_0; break;
	  }
	  for (unsigned k = 0; k < strip_num[1]; ++k) {
	    auto strip_1 = strip[1][k];
	    unsigned y;
	    switch (i) {
	      case 0: y = 31 - strip_1; break;
	      case 1:
	      case 2: y = strip_1; break;
	    }
	    ++g_psp.map[i][x + 32 * y];
	  }
	}
      }
    } else if (13 == event->trigger) {
      // Publish new maps when we've finished on-spill.

      // End of spill, heat maps have been accumulated during the spill, write
      // images in /u/land/web-docs/r3bbm and clear.
      for (i = 0; i < countof(g_psp.map); ++i) {
        char path[256];

        snprintf(path, sizeof path, "/u/land/web-docs/r3bbm/psp%u.txt", i);
	FILE *file = fopen(path, "wb");
	if (NULL == file) {
	  fprintf(stderr, "%s: Failed to write.\n", path);
	} else {
	  uint32_t *p32;
	  unsigned ofs;

	  p32 = g_psp.map[i];
	  for (ofs = 0; ofs < countof(g_psp.map[i]); ++ofs) {
	    fprintf(file, " %u", *p32++);
	    if (31 == (31 & ofs)) {
	      fprintf(file, "\n");
	    }
	  }
	  fclose(file);
	}
	memset(g_psp.map[i], 0, sizeof g_psp.map[i]);
      }
    }
  }
}

int unpack_user_function(unpack_event *event)
{
  auto &ts100 = event->master_ts.ts100;
  uint64_t wr =
      ((uint64_t)ts100.t4.value << 48) |
      ((uint64_t)ts100.t3.value << 32) |
      ((uint64_t)ts100.t2.value << 16) |
      ((uint64_t)ts100.t1.value);

  if (g_ics.yes) {
    uint32_t mask = 0x03ffffff;
    if (12 == event->trigger || 13 == event->trigger) {
      printf("\nTrig=%u\n", event->trigger);
      for (unsigned i = 0; i < 2; ++i) {
        printf(" %u = %g\n", i, 1e9 * (double)(mask & (g_ics.ch[1][i] -
	    g_ics.ch[0][i] + mask + 1)) / (double)(wr - g_ics.wr));
      }
      g_ics.wr = wr;
      memcpy(g_ics.ch[0], g_ics.ch[1], sizeof g_ics.ch[0]);
      return 1;
    }
    bitsone_iterator iter;
    ssize_t i;
    auto &array = event->master_monitor.data.v830.data;
    while ((i = array._valid.next(iter)) >= 0) {
      if (2 > i) {
        g_ics.ch[1][i] = mask & array._items[i].value;
      }
    }
  }

  if (1 != event->trigger) {
    return 1;
  }

#if 0
// Fiber SPMT Tamex multiplicity testing.
{
  static int m[2];
  auto &tamex2 = event->fib_tamex.data.tamex[2];
  bitsone_iterator iter;
  ssize_t i;
  bool printed = false;
  int count = 0;
  while ((i = tamex2.time_coarse._valid.next(iter)) >= 0) {
    auto ch = (i - 1) / 2;
    if (8 <= ch && ch <= 11) {
      if (!printed) {
        printf("Event!\n");
        printed = true;
      }
      printf("%u\n", ch);
      ++count;
    }
  }
  if (count) {
    ++m[count > 2];
    printf("m: %u %u\n", m[0], m[1]);
  }
}
#endif

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
  // counter runs by itself while move all other clocked TDC:s with an offset
  // that should only change on DAQ re-inits.
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
      0 != event->fib12_ctdc.data.land_vme.failure.u32 ||
      0 != event->fib13_ctdc.data.land_vme.failure.u32 ||
      0 != event->fib10_ctdc.data.land_vme.failure.u32 ||
      0 != event->fib11_ctdc.data.land_vme.failure.u32 ||
      0 != event->neuland_tamex_1.data.land_vme.failure.u32 ||
      0 != event->neuland_tamex_2.data.land_vme.failure.u32) {
    fprintf(stderr, "%s: DAQ failure, tracking reset.\n", __func__);
#define RESET_ARRAY(array) do {\
    for (auto it = array.begin(); array.end() != it; ++it) {\
      it->Reset();\
    }\
  } while (0)
    g_los_tamex_ms_ct.Reset();
    RESET_ARRAY(g_tofd_tamex1_trig_ct);
    RESET_ARRAY(g_tofd_tamex2_trig_ct);
    g_fib_tamex_ms_ct.Reset();
    RESET_ARRAY(g_fib_tamex_trig_ct);
//    RESET_ARRAY(g_fi3a_ctdc_trig_ct);
//    RESET_ARRAY(g_fi3b_ctdc_trig_ct);
    RESET_ARRAY(g_fi12_ctdc_trig_ct);
    RESET_ARRAY(g_fi13_ctdc_trig_ct);
    RESET_ARRAY(g_fi10_ctdc_trig_ct);
    RESET_ARRAY(g_fi11_ctdc_trig_ct);
    g_nl_tamex_ms_ct.Reset();
    RESET_ARRAY(g_nl10_tamex_trig_ct);
    RESET_ARRAY(g_nl11_tamex_trig_ct);
    RESET_ARRAY(g_nl20_tamex_trig_ct);
    RESET_ARRAY(g_nl21_tamex_trig_ct);
    // 1 erronous + 2 more events will be skipped, we're trying to wait until
    // the electronics have recovered.
    g_error_delay = 3;
// HAXX!!!
//g_tofd_tjo_ms_ct.Reset();
  }

  if (g_error_delay > 0) {
    --g_error_delay;
    return 1;
  }

  //
  // Extract coarse counters.
  //
#define TIME_GET(a_time, a_exists, a_module, a_ref_ch, a_range) do {\
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
    (a_range)->PushLeft(a_time.fine);\
    (a_range)->PushRight(a_time.fine);\
  } while (0)
#define TIME_GET_SINGLE(a_name, a_module, a_ref_ch)\
  bool a_name##_exists = false;\
  Time a_name##_time;\
  static Range *s_##a_name##_range = nullptr;\
  if (!s_##a_name##_range) s_##a_name##_range = FindRange(#a_name);\
  TIME_GET(a_name##_time, a_name##_exists, a_module, a_ref_ch,\
      s_##a_name##_range)
#define TIME_GET_ARRAY(a_name, a_module, a_ref_ch)\
  std::vector<std::pair<bool, Time>> a_name##_time(countof(event->a_module));\
  static std::vector<Range *>\
      s_##a_name##_range_vector(countof(event->a_module));\
  for (size_t card_i = 0; card_i < countof(event->a_module); ++card_i) {\
    auto &pair = a_name##_time.at(card_i);\
    auto range = &s_##a_name##_range_vector.at(card_i);\
    if (!*range) {\
      std::ostringstream oss;\
      oss << #a_name << card_i;\
      *range = FindRange(oss.str());\
    }\
    TIME_GET(pair.second, pair.first, a_module[card_i], a_ref_ch, *range);\
  }
#define CTDC_TIME_GET_ARRAY(_name, a_module)\
  TIME_GET_ARRAY(_name, a_module, 256)
#define TAMEX_TIME_GET_ARRAY(_name, a_module)\
  TIME_GET_ARRAY(_name, a_module, 0)

  TIME_GET_SINGLE(los_vftx2_ms, los_vme.data.vftx2, 15);
  if (!los_vftx2_ms_exists) {
    // We sync against LOS VFTX2, plus we do all this work because we want the
    // ToF from LOS, so we must have it!
//    return 1;
  }

  TIME_GET_SINGLE(los_tamex_trig, los_tamex.data.tamex, 0);
  TIME_GET_SINGLE(los_tamex_ms, los_tamex.data.tamex, 31);

  TAMEX_TIME_GET_ARRAY(tofd_tamex1_trig, tofd_tamex_1.data.tamex);
  TAMEX_TIME_GET_ARRAY(tofd_tamex2_trig, tofd_tamex_2.data.tamex);

  TAMEX_TIME_GET_ARRAY(fib_tamex_trig, fib_tamex.data.tamex);
  TIME_GET_SINGLE(fib_tamex_ms, fib_tamex.data.tamex[3], 1);

//  CTDC_TIME_GET_ARRAY(fi3a_ctdc_trig, fib_ctdc2.data.fibthreea);
//  CTDC_TIME_GET_ARRAY(fi3b_ctdc_trig, fib_ctdc2.data.fibthreeb);
  CTDC_TIME_GET_ARRAY(fi12_ctdc_trig, fib12_ctdc.data.ctdc);
  CTDC_TIME_GET_ARRAY(fi13_ctdc_trig, fib13_ctdc.data.ctdc);
  CTDC_TIME_GET_ARRAY(fi10_ctdc_trig, fib10_ctdc.data.ctdc);
  CTDC_TIME_GET_ARRAY(fi11_ctdc_trig, fib11_ctdc.data.ctdc);

  // 17 = last channel, because the FQT 8-fold connectors are swapped, like
  // they always were with Tacquila:s.
//  TIME_GET_SINGLE(nl_tamex_ms, neuland_tamex_2.data.sfp[0].card[11], 17);
  TAMEX_TIME_GET_ARRAY(nl10_tamex_trig, neuland_tamex_1.data.sfp[0].card);
  TAMEX_TIME_GET_ARRAY(nl11_tamex_trig, neuland_tamex_1.data.sfp[1].card);
  TAMEX_TIME_GET_ARRAY(nl20_tamex_trig, neuland_tamex_2.data.sfp[0].card);
  TAMEX_TIME_GET_ARRAY(nl21_tamex_trig, neuland_tamex_2.data.sfp[1].card);

// HAXX!!!
//TIME_GET_SINGLE(tofd_tjo_ms, tofd_tamex_2.data.tamex[11], 1);
if (0) {
  printf("Event\n");
  auto &mod = event->tofd_tamex_2.data.tamex[11];
  bitsone_iterator iter;
  ssize_t i;
  while ((i = mod.time_coarse._valid.next(iter)) >= 0) {
    printf("%u\n", (unsigned)i);
  }
}

  //
  // Compare and alter coarse counters.
  //
  bool track_ok = true;
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
      track_ok &= g_##a_name##_ct.Track(a_name##_time, a_ref_name##_time);\
      TIME_SET(a_module, g_##a_name##_ct, a_mask);\
    }\
  } while (0)
#define TRACK_ADJUST_ARRAY(a_name, a_module_array, a_mask, a_ref_name,\
    a_ofs_ct, a_skip) do {\
    if (a_ref_name##_exists) {\
      auto ofs = a_ofs_ct;\
      for (size_t i = 0; i < a_name##_time.size(); ++i) {\
        if (a_skip == i || !a_name##_time.at(i).first) {\
          continue;\
        }\
        track_ok &= g_##a_name##_ct[i].Track(a_name##_time[i].second,\
            a_ref_name##_time);\
        CoarseTracker diff = g_##a_name##_ct.at(i) + ofs;\
        TIME_SET(a_module_array[i], diff, a_mask);\
      }\
    }\
  } while (0)
#define TRACK_ADJUST_ARRAY_STANDALONE(a_name, a_module_array, a_mask,\
    a_ref_name, a_ref_card, a_do_skip) do {\
    if (a_ref_name##_time.at(a_ref_card).first) {\
      for (size_t i = 0; i < a_name##_time.size(); ++i) {\
        if ((a_do_skip && i == a_ref_card) || !a_name##_time.at(i).first) {\
          continue;\
        }\
        track_ok &= g_##a_name##_ct[i].Track(a_name##_time[i].second,\
            a_ref_name##_time.at(a_ref_card).second);\
        CoarseTracker diff = g_##a_name##_ct.at(i);\
        TIME_SET(a_module_array[i], diff, a_mask);\
      }\
    }\
  } while (0)

  // DANGER: Adjust the mask to the HW ranges!

  // (LOS TAMEX3 MS -- LOS VFTX2 MS)
  TRACK_ADJUST_SINGLE(los_tamex_ms, los_tamex.data.tamex, TAMEX_MASK,
      los_vftx2_ms);

  // (TOFD TAMEX3 Trig -- LOS TAMEX3 Trig) + (LOS TAMEX3 MS -- LOS VFTX2 MS)
  TRACK_ADJUST_ARRAY(tofd_tamex1_trig, tofd_tamex_1.data.tamex, TAMEX_MASK,
      los_tamex_trig, g_los_tamex_ms_ct, 999);
  TRACK_ADJUST_ARRAY(tofd_tamex2_trig, tofd_tamex_2.data.tamex, TAMEX_MASK,
      los_tamex_trig, g_los_tamex_ms_ct, 999);

  // (FIB TAMEX3 MS -- LOS VFTX2 MS)
  TRACK_ADJUST_SINGLE(fib_tamex_ms, fib_tamex.data.tamex[3], TAMEX_MASK,
      los_vftx2_ms);
  // (FIB TAMEX3[0..2] Trig -- FIB TAMEX3[3] Trig) + (FIB TAMEX3 MS -- LOS VFTX2 MS)
  auto fib_tamex3_trig_exists = fib_tamex_trig_time.at(3).first;
  auto const &fib_tamex3_trig_time = fib_tamex_trig_time.at(3).second;
  auto const &fib_tamex3_trig = g_fib_tamex_trig_ct[3];
  TRACK_ADJUST_ARRAY(fib_tamex_trig, fib_tamex.data.tamex, TAMEX_MASK,
      fib_tamex3_trig, g_los_tamex_ms_ct, 3);

  // (FI7 CTDC Trig -- LOS TAMEX3 Trig) + (LOS TAMEX3 MS -- LOS VFTX2 MS)
//  TRACK_ADJUST_ARRAY(fi12_ctdc_trig, fib_ctdc1.data.fibseven, 0xfff,
//      los_tamex_trig_time, g_los_tamex_ms_ct);

  if (los_vftx2_ms_exists) {
// HAXX!!!
//TRACK_ADJUST_SINGLE(tofd_tjo_ms, tofd_tamex_2.data.tamex[11], TAMEX_MASK,
//    los_vftx2_ms);
#if 0
    // If LOS is in the data stream, we sync against it.
    // (NeuLAND TAMEX3 MS -- LOS VFTX2 MS)
    TRACK_ADJUST_SINGLE(nl_tamex_ms, neuland_tamex_2.data.sfp[0].card[11],
        TAMEX_MASK, los_vftx2_ms);
    // (NeuLANDx SFPy TAMEX3[!=11] Trig -- NeuLAND2 SFP0 TAMEX3[11] Trig) + (NeuLAND TAMEX3 MS -- LOS VFTX2 MS)
    auto nl20_tamex11_trig_exists = nl20_tamex_trig_time.at(11).first;
    auto const &nl20_tamex11_trig_time = nl20_tamex_trig_time.at(11).second;
    auto const &nl20_tamex11_trig = g_nl20_tamex_trig_ct[11];
    TRACK_ADJUST_ARRAY(nl10_tamex_trig, neuland_tamex_1.data.sfp[0].card,
        TAMEX_MASK, nl20_tamex11_trig, g_nl_tamex_ms_ct, 999);
    TRACK_ADJUST_ARRAY(nl11_tamex_trig, neuland_tamex_1.data.sfp[1].card,
        TAMEX_MASK, nl20_tamex11_trig, g_nl_tamex_ms_ct, 999);
    TRACK_ADJUST_ARRAY(nl20_tamex_trig, neuland_tamex_2.data.sfp[0].card,
        TAMEX_MASK, nl20_tamex11_trig, g_nl_tamex_ms_ct, 11);
    TRACK_ADJUST_ARRAY(nl21_tamex_trig, neuland_tamex_2.data.sfp[1].card,
        TAMEX_MASK, nl20_tamex11_trig, g_nl_tamex_ms_ct, 999);
#else
    // (NL TAMEX3 Trig -- LOS TAMEX3 Trig) + (LOS TAMEX3 MS -- LOS VFTX2 MS)
    TRACK_ADJUST_ARRAY(nl10_tamex_trig, neuland_tamex_1.data.sfp[0].card,
        TAMEX_MASK, los_tamex_trig, g_los_tamex_ms_ct, 999);
    TRACK_ADJUST_ARRAY(nl11_tamex_trig, neuland_tamex_1.data.sfp[1].card,
        TAMEX_MASK, los_tamex_trig, g_los_tamex_ms_ct, 999);
    TRACK_ADJUST_ARRAY(nl20_tamex_trig, neuland_tamex_2.data.sfp[0].card,
        TAMEX_MASK, los_tamex_trig, g_los_tamex_ms_ct, 999);
    TRACK_ADJUST_ARRAY(nl21_tamex_trig, neuland_tamex_2.data.sfp[1].card,
        TAMEX_MASK, los_tamex_trig, g_los_tamex_ms_ct, 999);
#endif
  } else {
    // If not, NeuLAND is standalone and we sync only between trigger-clock
    // distributions.
    // (NeuLANDx SFPy TAMEX3 Trig -- NeuLAND1 SFP0 TAMEX3_0 Trig)
    TRACK_ADJUST_ARRAY_STANDALONE(nl10_tamex_trig,
        neuland_tamex_1.data.sfp[0].card, TAMEX_MASK, nl10_tamex_trig, 0, 1);
    TRACK_ADJUST_ARRAY_STANDALONE(nl11_tamex_trig,
        neuland_tamex_1.data.sfp[1].card, TAMEX_MASK, nl10_tamex_trig, 0, 0);
    TRACK_ADJUST_ARRAY_STANDALONE(nl20_tamex_trig,
        neuland_tamex_2.data.sfp[0].card, TAMEX_MASK, nl10_tamex_trig, 0, 0);
    TRACK_ADJUST_ARRAY_STANDALONE(nl21_tamex_trig,
        neuland_tamex_2.data.sfp[1].card, TAMEX_MASK, nl10_tamex_trig, 0, 0);
  }

  time_t time_now = time(NULL);
  if (!track_ok) {
    if (0 == g_error_n) {
      g_error_time = time_now;
    }
    ++g_error_n;
    if (g_error_n >= g_error_limit_n &&
        time_now - g_error_time < g_error_limit_s) {
      fprintf(stderr, "Way too many errors in a short time, fix it!\n");
      exit(EXIT_FAILURE);
    }
  } else if (time_now - g_error_time > g_error_limit_s) {
    g_error_n = 0;
  }

  if (g_do_stat) {
    if (0 == g_stat_time_prev) {
      g_stat_time_prev = time_now;
    }
    if (time_now > g_stat_time_prev + 5) {
      g_stat_time_prev += 5;
      std::cerr << '\n';

      std::cerr << "LOS:" << g_los_tamex_ms_ct.m_left << ' ' <<
          g_los_tamex_ms_ct.m_right << '\n';

      for (size_t i = 0; i < tofd_tamex1_trig_time.size(); ++i) {
        std::cerr << "TOFD0_" << i << ':' << g_tofd_tamex1_trig_ct[i].m_left
            << ' ' << g_tofd_tamex1_trig_ct[i].m_left << ' ';
      }
      std::cerr << '\n';
      for (size_t i = 0; i < tofd_tamex2_trig_time.size(); ++i) {
        std::cerr << "TOFD2_" << i << ':' << g_tofd_tamex2_trig_ct[i].m_left
            << ' ' << g_tofd_tamex2_trig_ct[i].m_left << ' ';
      }
      std::cerr << '\n';

      std::cerr << "FIBTMS:" << g_fib_tamex_ms_ct.m_left << ' ' <<
          g_fib_tamex_ms_ct.m_left << '\n';
      for (size_t i = 1; i < fib_tamex_trig_time.size(); ++i) {
        std::cerr << "FIBTTR_" << i << ':' << g_fib_tamex_trig_ct[i].m_left <<
            ' ' << g_fib_tamex_trig_ct[i].m_left << ' ';
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
  if (0 == strcmp(arg, "--ics")) {
    g_ics.yes = true;
    return true;
  }
  if (0 == strcmp(arg, "--psp-publish")) {
    g_psp.yes = true;
    return true;
  }
  return false;
}

void usage_command_line_options()
{
  printf("  --ct-stat           Print coarse counter tracking stats.\n");
  printf("  --ics               Print IC beam monitors.\n");
  printf("  --psp-publish       Put PSP heat maps on land beam monitor page.\n");
}
