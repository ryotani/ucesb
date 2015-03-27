
#include "structures.hh"

#include "user.hh"

//#include "threshold_cros3.c"

#include "land_triggers.hh"

//#include "lmd_output.hh"

#define CHECK_BAD_GATES    0  // check want/accept trigger scaler for bad gates
#define CALC_SST_PEDESTALS 0  // calculate SiStrip pedestals (with 'fastbus code')

void user_pedestals(int det_number, int raw_data[1024],int sam, int gtb, int sidnum);

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


void user_function(unpack_event *event,
		   raw_event    *raw_event,
		   cal_event    *cal_event,
		   s223_user_struct *user_event)
{
#if CHECK_BAD_GATES
  check_bad_gates(event,raw_event);
#endif

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
  int sam, gtb, sidnum;
  
  for (int det=0; det<5; det++)
    {
      bitsone_iterator iter;
      int i;
      int n = 0;
      int last_i = -1;
      
      while ((i = raw_event->SST[det]._valid.next(iter)) >= 0)
	{
	  //if (i != last_i + 1 && last_i != -1)    printf (" .");
	  //printf (" %d",raw_event->SST[det]._items[i].E);
	  last_i = i;
	  n++;
	} 
      //printf ("  (stat :  %d)\n\n",n);
   
      //TRIGGER 1 zero suppression
      //if (event->sst.sst[det].header.local_trigger == 1)  
      //	{
      //	  
      //	}//end of TRIGGER 1

      //TRIGGER 3 which correspond to the trigger 2 in local trigger, no zero suppression : calculation of the pedestal,sigma
      if (event->sst.sst[det].header.local_trigger == 2)
	{  
	  int raw[1024]; 
	  bitsone_iterator iter;
	  int i;
	  int n = 0;
	  
	  while ((i = raw_event->SST[det]._valid.next(iter)) >= 0)
	    {
	      raw[i] = raw_event->SST[det]._items[i].E.value;
	    }  
	  //printf("event %7d: trigger = %d  local trigger = %d\n",
	  // event->event_no,event->trigger,
		 //event->sst1.header.local_event_counter,
	  // event->sst.sst[det].header.local_trigger);
	  sam    = event->sst.sst[det].header.sam;
	  gtb    = event->sst.sst[det].header.gtb;
	  sidnum = event->sst.sst[det].header.siderem; 
	  //printf("SAM = %i   -    GTB = %i    -   SIDEREM = %i \n",sam,gtb,sidnum);
	  user_pedestals(det,raw,sam,gtb,sidnum);
	}  
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

//Code below copied from unpacker/cros3/cros3_user.cc:

//bool s223_copy_output_file_event(lmd_event_out *event_out,
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

// Data files: /u/kurz/cros3/cros3_thres_32dig.lmd

//Code above copied from unpacker/cros3/cros3_user.cc:
