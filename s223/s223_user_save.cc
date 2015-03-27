
#include "structures.hh"

#include "user.hh"


void user_pedestals(int det_number, int raw_data[1024]);

void user_function(unpack_event *event,
		   raw_event    *raw_event,
		   cal_event    *cal_event,
		   s223_user_struct *user_event)
{
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
	  
	  user_pedestals(det,raw);
	}  
    }
  
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
