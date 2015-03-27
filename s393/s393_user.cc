
#include "structures.hh"

#include "user.hh"

#include "land_user.hh"

//#include "threshold_cros3.c"

#include "land_triggers.hh"

#define CALC_SST_PEDESTALS 0  // calculate SiStrip pedestals (with 'fastbus code')

#define NUM_SST 8 // 4 box detectors taken out

void user_pedestals(int det_number, int raw_data[1024],int branch,int sam, int gtb, int sidnum);

struct master_gate
{
  uint32 wanted;
  uint32 accept;
};

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


#if CALC_SST_PEDESTALS
void calc_ped_sst(EXT_SST &unpack,
		  int det,
		  int branch)
{
  if (unpack.header.local_trigger != 2)
    return;

  int raw[1024];

  for (int i = 0; i < 1024; i++)
    {
      DATA12 value = unpack.data._items[i];

      raw[i] = value.value;
    }

  int sam    = unpack.header.sam;
  int gtb    = unpack.header.gtb;
  int sidnum = unpack.header.siderem;
  
  user_pedestals(det,raw,
		 branch,
		 sam,gtb,sidnum);
}
#endif


void raw_user_function(unpack_event *event,
		       raw_event    *raw_event)
{
  // Do the mapping of the unpack->raw SST data

  unsigned int dest_det = 0;

  for (unsigned int det = 0; det < countof(event->sst.sst); det++)
    map_unpack_raw_sst(event->sst.sst[det],raw_event->SST[dest_det++]);

  assert (dest_det <= countof(raw_event->SST));
}

int _current_iped = 0;
int _last_ec = 0;

int vme_ec_offset = 0;


void user_function(unpack_event *event,
		   raw_event    *raw_event,
		   cal_event    *cal_event,
		   s393_user_struct *user_event)
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

//  //****************   DCH PART   *********************************
  for (int i = 0; i < 2; i++)
    {
      wire_hits &hits = event->cros3.ccb[i].data;

      if (!hits.num_hits)
	continue;

      PDC_hits &ccb = user_event->ccb[i /*ccb_id - 1*/];

      for (int j = 0; j < hits.num_hits && j < MAX_CROS3_hits; j++)
	{
	  wire_hit &unpack_hit = hits.hits[j];

	  PDC_wire_hit &hit = 
	    ccb.hits.append_item(-1);
	  
	  hit.wire  = unpack_hit.wire;
	  hit.start = unpack_hit.start;
	  hit.stop  = unpack_hit.stop;
	}


    }
#if CALC_SST_PEDESTALS
//  //****************   SST PART   ********************************* 
  if (event->trigger == LAND_EVENT_CLOCK)
    {
      unsigned int global_det = 0;
      
      for (unsigned int det = 0; det < countof(event->sst.sst); det++)
	calc_ped_sst(event->sst.sst[det],global_det++,0);
    }
#endif
  // Accumulate pile-up information

  land_pos_sampler_user_function(event,
				 event->vme4,
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
