
#include "structures.hh"

#include "threshold_cros3.c"

#include "user.hh"

#include <algorithm>

#define PRINT_GRID               0
#define EXAMINE_THRESHOLD_CURVE  0

#define NUM_WIRE_X 144
#define NUM_WIRE_Y 112

#define NUM_GRID_X (NUM_WIRE_X/3)
#define NUM_GRID_Y (NUM_WIRE_Y/6)

#define GRID_X(x) (1+(x)*(NUM_GRID_X)/(NUM_WIRE_X))
#define GRID_Y(y) (1+(y)*(NUM_GRID_Y)/(NUM_WIRE_Y))



cros3_thr_info thr_info[2][256];

void user_pedestals(int det_number, int raw_data[1024]);



void user_function(unpack_event *event,
		   raw_event    *raw_event,
		   cal_event    *cal_event,
		   s223_user_struct *user_event)
{
  //****************   DCH PART   *********************************
  for (int i = 0; i < 2; i++)
    {
      wire_hits &hits = event->cros3.ccb[i].data;

      if (!hits.num_hits)
	continue;

      CROS3_hits &ccb = user_event->ccb[i /*ccb_id - 1*/];

      for (int j = 0; j < hits.num_hits && j < MAX_CROS3_hits; j++)
	{
	  wire_hit &unpack_hit = hits.hits[j];

	  CROS3_wire_hit &hit = 
	    ccb.hits.insert_item(-1);
	  
	  hit.wire  = unpack_hit.wire;
	  hit.start = unpack_hit.start;
	  hit.stop  = unpack_hit.stop;
	}


#if PRINT_GRID
      printf ("==== CCB %d: hits: %d ==================================\n",
	      i+1,hits.num_hits);

      std::sort(hits.hits,hits.hits+hits.num_hits);

      char grid[NUM_GRID_Y+1+1+1][NUM_GRID_X+1+1+2];

      memset(grid,' ',sizeof(grid));

      for (int y = 0; y < NUM_GRID_Y+3; y++)
	{
	  grid[y][0]  = '|';
	  grid[y][NUM_GRID_X+1] = '|';
	  grid[y][NUM_GRID_X+3] = 0;
	}

      for (int x = 0; x < NUM_GRID_X+3; x++)
	{
	  grid[0][x]  = '-';
	  grid[NUM_GRID_Y+1][x] = '-';
	}

      grid[           0][           0] = '+';
      grid[NUM_GRID_Y+1][           0] = '+';
      grid[           0][NUM_GRID_X+1] = '+';
      grid[NUM_GRID_Y+1][NUM_GRID_X+1] = '+';

      int xs[NUM_WIRE_X];
      int num_x = 0;
      int ys[NUM_WIRE_Y];
      int num_y = 0;

      for (int j = 0; j < hits.num_hits; j++)
	{
	  wire_hit &hit = hits.hits[j];

	  if (hit.wire < NUM_WIRE_X)
	    {
	      int y = hit.wire;
	      grid[GRID_Y(y)][NUM_GRID_X+2] = '<';
	      ys[num_y++] = y;
	    }
	  else
	    {
	      int x = hit.wire - NUM_WIRE_X;
	      grid[NUM_GRID_Y+2][GRID_X(x)] = '^';
	      xs[num_x++] = x;
	    }

	  printf ("hit %d/%3d: %3d %3d\n",
		  i+1,hit.wire,hit.start,hit.stop);
	}

      int pairs[NUM_WIRE_X * NUM_WIRE_Y];
      int num_pairs = 0;

      int xps[NUM_WIRE_X];
      int num_xp = 0;
      int yps[NUM_WIRE_Y];
      int num_yp = 0;

      for (int j = 0; j < hits.num_hits-1; j++)
	{
	  wire_hit &hit1 = hits.hits[j];
	  wire_hit &hit2 = hits.hits[j+1];

	  if (hit1.wire+1 == hit2.wire)
	    pairs[num_pairs++] = hit1.wire;
	}

      for (int j = 0; j < num_pairs; j++)
	{
	  printf("pair: %d\n",pairs[j]);
	}

     
      for (int j = 0; j < num_pairs; j++)
	{
	  int p1 = pairs[j];

	  if (p1 < NUM_WIRE_X)
	    {
	      int y = p1;
	      grid[GRID_Y(y)][NUM_GRID_X+2] = '-';

	      printf ("Y:%d\n",y);

	      yps[num_yp++] = y;
	    }
	  else
	    {
	      int x = p1 - NUM_WIRE_X;
	      grid[NUM_GRID_Y+2][GRID_X(x)] = '|';

	      printf ("X:%d\n",x);

	      xps[num_xp++] = x;
	    }
	}
	  
      for (int j = 0; j < num_y; j++)
	{
	  for (int k = 0; k < num_x; k++)
	    {
	      int x = xs[k];
	      int y = ys[j];
	      
	      grid[GRID_Y(y)][GRID_X(x)] = '+';
	      
	      printf("pfft: %d,%d\n",x,y);
	    }
	}

      for (int j = 0; j < num_yp; j++)
	{
	  for (int k = 0; k < num_xp; k++)
	    {
	      int x = xps[k];
	      int y = yps[j];
	      
	      grid[GRID_Y(y)][GRID_X(x)] = 'B';
	      
	      printf("BOOM: %d,%d\n",x,y);
	    }
	}

      for (int y = 0; y < NUM_GRID_Y+3; y++)
	printf ("%s\n",grid[y]);

#endif
      
    }

#if EXAMINE_THRESHOLD_CURVE
  for (int i = 0; i < 2; i++)
    {
      cros3_threshold_stat *measurement = &(event->cros3.ccb[i].trc);

      for (int ch = 0; ch < 256; ch++)
	{
	  printf ("THRESHOLD-CURVE %d/%3d:\n",i,ch);

	  cros3_examine_threshold_curve(measurement,
					&measurement->data[ch],
					&thr_info[i][ch]);

	  cros3_thr_info_t &info = thr_info[i][ch];

	  printf ("THR-EXAMINE: %d/%03d:",i,ch);
	  
	  if (info._info & CROS3_THR_INFO_OK)
	    printf (" m=%6.1f s=%6.1f",info._mean,info._sigma);
	  else
	    printf (" m=     - s=     -");


	  printf (" (i=%04x",info._info);

#define PRINT_CROS3_INFO_MASK_ITEM(info,item) if((info) & CROS3_THR_INFO_##item) printf (" %s",#item);

	  PRINT_CROS3_INFO_MASK_ITEM(info._info,OK           );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,NOISE_SEEN   );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,SILENCE_SEEN );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,NO_NOISE     );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,LOW_MISS     );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,NO_SILENCE   );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,HIGH_MISS    );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,NO_DATA      );
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,TOO_LITTLE_DATA);
	  PRINT_CROS3_INFO_MASK_ITEM(info._info,INTERP_FAIL  );

	  printf (")");

	  printf ("\n");
	}
    }
#endif

  //****************   SST PART   ********************************* 
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
  
  memset(&thr_info,0,sizeof(thr_info));
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
