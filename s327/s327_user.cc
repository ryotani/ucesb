
#include "structures.hh"

#include "user.hh"

//#include "threshold_cros3.c"

#include "land_triggers.hh"

//#include "lmd_output.hh"

#define CHECK_BAD_GATES    0  // check want/accept trigger scaler for bad gates
#define CALC_SST_PEDESTALS 0  // calculate SiStrip pedestals (with 'fastbus code')

#define NUM_SST 2 // 4 box detectors taken out

void user_pedestals(int det_number, int raw_data[1024],int branch,int sam, int gtb, int sidnum);

struct master_gate
{
  uint32 wanted;
  uint32 accept;
};

master_gate _master_gate_last = { (uint32) -1, (uint32)-1};

int _master_gate_bad_count = 0;
int _master_gate_good_count = 0;

void check_bad_gates(unpack_event *event,
		     raw_event    *raw_event)
{
  if (event->trigger < 10)
    {
      master_gate cur, diff;
      
      cur.wanted = raw_event->MASTER.WANTED;
      cur.accept = raw_event->MASTER.ACCEPT;
      
      diff.wanted = cur.wanted - _master_gate_last.wanted;
      diff.accept = cur.accept - _master_gate_last.accept;
      
      _master_gate_last = cur;
      
      if (diff.wanted != diff.accept)
	{
	  _master_gate_bad_count++;
	  printf ("%d %d %d (%d/%d) %.1f%%\n",
		  event->trigger,diff.wanted,diff.accept,
		  _master_gate_bad_count,
		  _master_gate_good_count,
		  100.*_master_gate_bad_count/
		  (_master_gate_bad_count+_master_gate_good_count));
	}
      else
	_master_gate_good_count++;
    }
  else if (event->trigger < 12)
    {
      _master_gate_last.wanted--;


    }
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

  for (unsigned int det = 0; det < countof(event->sst1.sst); det++)
    map_unpack_raw_sst(event->sst1.sst[det],raw_event->SST[dest_det++]);

  //for (unsigned int det = 0; det < countof(event->sst2.sst); det++)
  //  map_unpack_raw_sst(event->sst2.sst[det],raw_event->SST[dest_det++]);

  assert (dest_det <= countof(raw_event->SST));
}

int _current_iped = 0;
int _last_ec = 0;

int vme_ec_offset = 0;

void recover_tcal_info(uint32 tcal_time_charge_info,
		       double &tcal_time,
		       double &tcal_charge);

void analyse_random_tcal(const char *host,RANDOM_TCAL &rtcal);

void analyse_ntp_message(const char *host,NTP_MESSAGE &msg);


void user_function(unpack_event *event,
		   raw_event    *raw_event,
		   cal_event    *cal_event,
		   s327_user_struct *user_event)
{
#if CHECK_BAD_GATES
  check_bad_gates(event,raw_event);
#endif

  raw_event->IPED = (uint16) _current_iped;
  // The iped is changed after the event
  if (event->vme.vme.failure.has_update_qdc_iped_value)
    {
      // printf ("\nIped = %3d (%08x)\n",event->vme.vme.iped);
      _current_iped = event->vme.vme.iped;
    }

  if (event->vme.vme.failure.has_continous_event_counter &&
      (event->vme.vme.continous_event_counter != 
       event->event_no + vme_ec_offset))
    {
      WARNING("VME event counter (%d) mismatches LMD event counter (%d), "
	      "old offset %d, new offset %d",
	      event->vme.vme.continous_event_counter,event->event_no,
	      vme_ec_offset,
	      event->vme.vme.continous_event_counter - event->event_no);

      vme_ec_offset = 
	event->vme.vme.continous_event_counter - event->event_no;
    }

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
      analyse_random_tcal("r3-15",event->camac_tcal_info.rtcal);
      analyse_ntp_message("r3-15",event->camac_tcal_info.ntp);

      analyse_random_tcal("r3-14",event->vme.rtcal);
      analyse_ntp_message("r3-14",event->vme.ntp);
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
     
     for (unsigned int det = 0; det < countof(event->sst1.sst); det++)
       calc_ped_sst(event->sst1.sst[det],global_det++,0);
     
     //for (unsigned int det = 0; det < countof(event->sst2.sst); det++)
     //  calc_ped_sst(event->sst2.sst[det],global_det++,1);
   }
#endif
}

void user_init()
{
}

void user_exit()
{

}


// Data files: /d/rising03/s271/data
// tsmcli frsraw run150

/*

trigger 1  = physics with zero suppresion
trigger 2  = cosmics with zero suppression
trigger 3  = clock no zero suppression 
trigger 4  = time calibrator no readout correspond to the synchronisation
trigger 12 = begin of spill only headers, no readout
trigger 13 = en of spill    only headers, no readout

*/


//bool s327_copy_output_file_event(lmd_event_out *event_out,
//				  FILE_INPUT_EVENT *file_event,
//				  unpack_event *event)
//{
//  event_out->copy(file_event);
//
//  // Then add a subevent for the rewritten data
//
//  size_t data_length = 0;
//
//  for (int i = 0; i < 2; i++)
//    {
//      size_t length = ((char *) event->cros3.ccb[i]._dest_end) -
//        ((char *) event->cros3.ccb[i]._dest_buffer);
//
//      data_length += length;
//    }
//
//  if (data_length) // only write the subevent if there is some payload
//    {
//      // First a subevent header
//      
//      // This must be global...  Or at least, the memory for it must be
//      // available when the data is written to the output
//      static lmd_subevent_10_1_host _header_add;
//      
//      _header_add._header.l_dlen = SUBEVENT_DLEN_FROM_DATA_LENGTH(data_length);
//      _header_add._header.i_type    = 85;
//      _header_add._header.i_subtype = 8510;
//#if defined(__i386__) || defined(__x86_64__) || (__BYTE_ORDER == __LITTLE_ENDIAN)
//      // choose the X86 marker, little endian
//      _header_add.i_procid          = 9;  // hmm, this is a marker of the producer
//#elif defined(__powerpc__) || (__BYTE_ORDER == __BIG_ENDIAN)
//      // choose the RIO2 marker, big endian
//      _header_add.i_procid          = 10; // hmm, this is a marker of the producer
//#else
//#error Do not know what to use as procid marker
//#endif
//      _header_add.h_subcrate        = 0;
//      _header_add.h_control         = 5;  
//      
//      // add_chunk just remembers the pointers.  The data is not copied until
//      // the actual buffer formatting is performed (after we've returned).
//      event_out->add_chunk(&_header_add,sizeof(_header_add),false);
//
//      for (int i = 0; i < 2; i++)
//	{
//	  size_t length = ((char *) event->cros3.ccb[i]._dest_end) -
//	    ((char *) event->cros3.ccb[i]._dest_buffer);
//
//	  event_out->add_chunk(event->cros3.ccb[i]._dest_buffer,length,false);
//	}
//    }
//
//  return true;
//}
//
//Data files: /u/kurz/cros3/cros3_thres_32dig.lmd

//Code above copied from unpacker/cros3/cros3_user.cc:
