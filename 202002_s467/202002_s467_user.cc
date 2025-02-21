#include "structures.hh"
#include <err.h>
#include <sstream>
#include <string>
#include <zmq.h>

namespace {
	struct {
		bool yes;
		std::string dest;
		void *ctx;
		void *sock;
		unsigned softofw[28];
	} g_web;
	char const g_dest_def[] = "tcp://lxir123:62222";
}

void raw_user_function(unpack_event *event, raw_event *raw_event)
{
	if (g_web.yes) {
		// Fill SofToF.
		for (unsigned paddle = 0; paddle <
				countof(g_web.softofw); ++paddle) {
			auto &tf = raw_event->SOFTOFW.P[paddle].TF;
			int mask = 0;
			bitsone_iterator iter;
			ssize_t ch;
			while ((ch = tf._valid.next(iter)) >= 0) {
				mask |= 1 << ch;
			}
			if (3 == mask) {
				++g_web.softofw[paddle];
			}
		}

		if (12 == event->trigger) {
			memset(g_web.softofw, 0, sizeof g_web.softofw);
		}

		// Some keep-alives are way too noisy, just send periodically
		// and def. on end-of-spill.
		static time_t t_prev = 0;
		auto t_cur = time(NULL);
		if (t_cur > t_prev ||
		    13 == event->trigger) {
			std::string msg = "{\"key\":\"softofw\",\"value\":{\"hist\":[";
			for (unsigned paddle = 0; paddle <
			    countof(g_web.softofw); ++paddle) {
				std::ostringstream oss;
				oss << g_web.softofw[paddle];
				msg += oss.str();
				if (paddle < countof(g_web.softofw) - 1) {
					msg += ',';
				}
			}
			msg += "]}}\n";
			zmq_send(g_web.sock, msg.c_str(), msg.length(), 0);

			t_prev = t_cur;
		}
	}
}

int unpack_user_function(unpack_event *event)
{
  if (1 != event->trigger) {
    return 1;
  }
  return 1;//temporal fix
//bool had_hit = false;
//  auto const &card_array = event->neuland_tamex_1.data.sfp[0].card;
//  for (size_t card_i = 0; card_i < countof(card_array); ++card_i) {
//    auto const &tc = card_array[card_i].data.time_coarse;
//    auto const &tf = card_array[card_i].data.time_fine;
//    bitsone_iterator iter;
//    ssize_t ch;
//    while ((ch = tc._valid.next(iter)) >= 0) {
//      if (0 != ch) {
//        continue;
//      }
//
//      auto fine = tf._items[ch][0].value;
//      auto fine_i = (4 * (fine - 0)) / (500 - 0);
//      if (fine_i < 0) fine_i = 0;
//      printf(" %u:%u: %u:%u\n", (unsigned)card_i, (unsigned)ch,
//          (unsigned)tc._items[ch][0].value, (unsigned)fine_i);
//had_hit = true;
//      break;
//    }
//  }
//if (had_hit) puts("Done.");

  return 0;
}

void init_user_function()
{
	if (g_web.yes) {
		g_web.ctx = zmq_ctx_new();
		if (!g_web.ctx) {
			err(EXIT_FAILURE, "Could not create ZMQ context.");
		}
		g_web.sock = zmq_socket(g_web.ctx, ZMQ_PUB);
		if (!g_web.sock) {
			err(EXIT_FAILURE, "Could not create ZMQ socket.");
		}
		if (0 != zmq_connect(g_web.sock, g_web.dest.c_str())) {
			err(EXIT_FAILURE, "Could not ZMQ connect to %s.", g_web.dest.c_str());
		}
	}
}

void exit_user_function()
{
}

bool handle_command_line_option(const char *arg)
{
	g_web.dest = g_dest_def;
	if (0 == strcmp(arg, "--web")) {
		g_web.yes = true;
		return true;
	} else if (0 == strncmp(arg, "--web=", 6)) {
		g_web.yes = true;
		g_web.dest = arg + 6;
		return true;
	}
	return false;
}

void usage_command_line_options()
{
	printf("  --web[=dest]        Put stuff on land beam monitor page.\n");
	printf("                      Default dest=%s.\n", g_dest_def);
}
