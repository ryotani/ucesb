#include <stdint.h>
#include "structures.hh"
#include "control.hh"

#define LENGTH(x) (sizeof x / sizeof *x)

void jun16_exit_user_function();
bool jun16_handle_command_line_option(const char *);
void jun16_usage_command_line_options();

bool g_do_spiller = false;

/* Spill histogram. */
static uint32_t g_spill[79];
/* Timestamp of previous LOS sample. */
static uint32_t g_spill_prev;
/* Time diff of last draw. */
static uint32_t g_spill_draw_width;
/* Width in seconds of spills. */
static double g_spill_curr_width = 10.0;
static double g_spill_prev_width = 10.0;

bool jun16_handle_command_line_option(const char *arg)
{
  if (0 == strcmp(arg, "--spiller")) {
    g_do_spiller = true;
    return true;
  }
  return false;
}

void jun16_raw_event_user_function(unpack_event *event, raw_event *raw_event
    MAP_MEMBERS_PARAM)
{
  if (!g_do_spiller) {
    return;
  }

  bool do_draw = false;
  switch (event->trigger) {
    case 1:
      {
        // Extract LOS sampler.
        TRLOII_SAMPLER const &sampler = event->los_sampler.sampler;
        bitsone_iterator it;
        int idx;
        while ((idx = (int)sampler.sampler._valid.next(it)) >= 0) {
          uint32_t word = sampler.sampler[idx];
          if (0 == (0x80000000 & word)) {
            uint32_t timestamp = 0x3fffffff & word;
            int bin = 0;
            if ((uint32_t)-1 != g_spill_prev) {
              double dt = (0x3fffffff & (timestamp - g_spill_prev)) * 1e-8;
              g_spill_curr_width += dt;
              if (g_spill_draw_width + 1 < g_spill_curr_width) {
                ++g_spill_draw_width;
                do_draw = true;
              }
              bin = (int)(LENGTH(g_spill) * g_spill_curr_width /
                  g_spill_prev_width);
              if (0 > bin) {
                /* Huh? */
                bin = 0;
              } else if ((int)LENGTH(g_spill) <= bin) {
                bin = LENGTH(g_spill) - 1;
              }
            }
            ++g_spill[bin];
            g_spill_prev = timestamp;
          }
        }
      }
      break;
    case 12:
      memset(g_spill, 0, sizeof g_spill);
      g_spill_prev = -1;
      g_spill_draw_width = 0;
      /* Add 10% width from last spill. */
      g_spill_prev_width = g_spill_curr_width * 1.1;
      g_spill_curr_width = 0.0;
      break;
    case 13:
      do_draw = true;
      break;
  }
  if (do_draw) {
    printf("Trigger=%d Spill width = %f\n", event->trigger,
        g_spill_curr_width);
    uint32_t max = g_spill[0];
    for (size_t i = 1; LENGTH(g_spill) > i; ++i) {
      max = std::max(max, g_spill[i]);
    }
    for (size_t row = 0; 20 > row; ++row) {
      for (size_t i = 0; LENGTH(g_spill) > i; ++i) {
        printf("%c", row < 20 * (1 - (double)g_spill[i] / max) ? ' ' : '#');
      }
      puts("");
    }
    for (size_t i = 0; LENGTH(g_spill) > i; ++i) {
      printf("-");
    }
    puts("");
    fflush(stdout);
  }
}

void jun16_usage_command_line_options()
{
  printf("  --spiller           Print spill profile.\n");
}
