
#include "structures.hh"

#include "user.hh"

#include <stdio.h>

#define CHECK_TRIGGER_VS_TPAT  0

#if CHECK_TRIGGER_VS_TPAT

const uint16 trigger_tpat_expect[16] = { 
  0x0000, //  0
  0x00ff, //  1
  0x0f00, //  2
  0x1000, //  3
  0x2000, //  4
  0x0000, //  5
  0x0000, //  6
  0x0000, //  7
  0x0000, //  8
  0x0000, //  9
  0x0000, // 10
  0x0000, // 11
  0x0000, // 12
  0x0000, // 13
  0x0000, // 14
  0x0000, // 15
};

const bool known_trigger[16] = {
  0,  //  0
  1,  //  1  physics
  1,  //  2  cosmics
  1,  //  3  clock
  1,  //  4  tcal
  0,  //  5
  0,  //  6
  0,  //  7
  0,  //  8
  0,  //  9
  1,  // 10  bos(keep-alive)
  1,  // 11  eos(keep-alive)
  1,  // 12  bos
  1,  // 13  eos
  1,  // 14  start
  1,  // 15  stop
}; 

int tpat_for_tpat[16][16];
int tpat_for_trigger[16][16];
int trigger_for_tpat[16][16];

int triggers[16][4]; // 0=total, 1=unknown, 2=with_good_tpat, 3=with_bad_tpat

int printf_kilo(int x)
{
  // if (x >= 9000)
  //  printf ("%4dG",x/1000000000);
  if (x >= 10000000)
    printf ("%5dM",x/1000000);
  else if (x >= 10000)
    printf ("%5dk",x/1000);
  else
    printf ("%6d",x);
}
#endif


int unpack_event_user_function(unpack_event *event)
{
#if CHECK_TRIGGER_VS_TPAT
  uint16 tpat    = event->camac.tpat;
  uint16 trigger = event->trigger;

  triggers[trigger][0]++;

  if (!known_trigger[trigger])
    triggers[trigger][1]++;

  bool good_tpat = true;

  if (!(trigger_tpat_expect[trigger] & tpat))
    {
      if (trigger != 10 && trigger != 11 &&
	  trigger != 12 && trigger != 13 &&
	  trigger != 14 && trigger != 15)
	{
	  good_tpat = false;
          printf ("missing tpat: %2d %04x\n",
	          event->trigger,
	          event->camac.tpat);
          fprintf (stderr,"MISSING TPAT: %2d %04x\n",
		   event->trigger,
		   event->camac.tpat);
	}
    }

  if (good_tpat)
    triggers[trigger][2]++;
  else
    triggers[trigger][3]++;

  for (int tpat_i = 0; tpat_i < 16; tpat_i++)
    if (tpat & (1 << tpat_i))
      {
	for (int tpat_j = 0; tpat_j < 16; tpat_j++)
	  if (tpat & (1 << tpat_j))
	    tpat_for_tpat[tpat_i][tpat_j]++;

	tpat_for_trigger[trigger][tpat_i]++;
      }
#endif



  return 1;
}

void user_init()
{
#if CHECK_TRIGGER_VS_TPAT
  memset(triggers,0,sizeof(triggers));
  memset(tpat_for_tpat,0,sizeof(tpat_for_tpat));
  memset(tpat_for_trigger,0,sizeof(tpat_for_trigger));
  memset(trigger_for_tpat,0,sizeof(trigger_for_tpat));
#endif
}

void user_exit()
{
#if CHECK_TRIGGER_VS_TPAT
  printf ("TRIG %10s%10s%10s%10s\n","total","unknown","ok_tpat","miss_tpat");
  for (int trig_i = 0; trig_i < 16; trig_i++)
    {
      printf ("%2d : ",trig_i);

      printf ("%10d%10d%c%10d%10d",
	      triggers[trig_i][0],
	      triggers[trig_i][1],
	      known_trigger[trig_i] ? ' ' : '*',
	      triggers[trig_i][2],
	      triggers[trig_i][3]);

      if (trigger_tpat_expect[trig_i])
	printf ("  %04x",trigger_tpat_expect[trig_i]);
      else
	printf ("  -");

      printf ("\n");
    }

  printf ("TRIG vs TPAT\n     ");
  for (int tpat_j = 0; tpat_j < 16; tpat_j++)
    printf ("  %04x",1<<tpat_j);
  printf ("\n");
  for (int trig_i = 0; trig_i < 16; trig_i++)
    {
      printf ("%2d : ",trig_i);

      for (int tpat_j = 0; tpat_j < 16; tpat_j++)
	{
	  if (tpat_for_trigger[trig_i][tpat_j])
	    printf_kilo(tpat_for_trigger[trig_i][tpat_j]);
	  else
	    printf ("     -");
	}
      printf ("\n");
    }
  printf ("TPAT vs TPAT\n       ");
  for (int tpat_j = 0; tpat_j < 16; tpat_j++)
    printf ("  %04x",1<<tpat_j);
  printf ("\n");
  for (int tpat_i = 0; tpat_i < 16; tpat_i++)
    {
      printf ("%04x : ",1 << tpat_i);

      for (int tpat_j = 0; tpat_j < 16; tpat_j++)
	{
	  if (tpat_for_tpat[tpat_i][tpat_j])
	    printf_kilo(tpat_for_tpat[tpat_i][tpat_j]);
	  else
	    printf ("     -");
	}
      printf ("\n");
    }
#endif



}


