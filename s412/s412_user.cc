
#include "structures.hh"

#include "user.hh"

#include "land_user.hh"

#include "land_triggers.hh"

void raw_user_function(unpack_event *event,
		       raw_event    *raw_event)
{
  // Do the mapping of the unpack->raw SST data

  UNUSED(event);
  UNUSED(raw_event);
}

int _current_iped = 0;
int _last_ec = 0;

int vme_ec_offset = 0;

void user_function(unpack_event *event,
		   raw_event    *raw_event,
		   cal_event    *cal_event,
		   s412_user_struct *user_event)
{
  /*
  int vme_ec = event->vme.vme.failure.has_continous_event_counter ?
    event->vme.vme.continous_event_counter : 0;
  
  if (event->event_no != _last_ec + 1 || 
      vme_ec != event->event_no)
    {
      printf ("%d : %d (%d : %d)\n",
	      vme_ec,event->event_no,
	      vme_ec - event->event_no,
	      event->event_no - _last_ec);
    }
  _last_ec = event->event_no;
  */
  
  if (event->trigger == LAND_EVENT_TCAL_CYCLE)
    {
      double tcal_time, tcal_charge;

      recover_tcal_info(event->camac_tcal_info.info,
			tcal_time,tcal_charge);
      raw_event->TCALT = (float) tcal_time;
      raw_event->TCALE = (float) tcal_charge;
      /*
      printf ("tcal: %08x  t%10.5f  e%10.5f\n",
	      event->camac_tcal_info.info,
	      tcal_time,tcal_charge);
      */


#if 0
      analyse_random_tcal("r3-14",event->camac_tcal_info.rtcal);
      analyse_ntp_message("r3-14",event->camac_tcal_info.ntp);
      /*
      analyse_random_tcal("r3-14",event->vme.rtcal);
      analyse_ntp_message("r3-14",event->vme.ntp);
      */
#endif
    }

  // Accumulate pile-up information

  land_pos_sampler_user_function(event,
				 event->vme_master,
				 raw_event);
}

void user_init()
{
  land_pos_sampler_user_init();
}

void user_exit()
{
  land_pos_sampler_user_exit();
}

void user_usage_command_line_options()
{
  //      "  --option          Explanation.\n"
  land_pos_sampler_user_usage_command_line_options();
}

bool user_handle_command_line_option(const char *arg)
{
  if (land_pos_sampler_user_handle_command_line_option(arg))
    return true;
 return false;
}

