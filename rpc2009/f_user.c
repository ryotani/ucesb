This file serves for documentation purpose ONLY and
most probably even not the right one !!!

20090302 HMS




/*****************************************************************************/
/* Test setup for LSO array detector                                         */
/* - specific for CES RIO3 8064 PowerPC-Based VME board                      */
/*****************************************************************************/
/* Authors:                                                                  */
/* N.Kurz, DVEE, GSI, 10-Sep-2004 (template)     GSI Darmstadt               */
/* A. Wagner 29.08.2008                FZ Dresden-Rossendorf                 */
/*****************************************************************************/
#include "stdio.h"
#include "s_veshe.h"
#include "stdlib.h"
#include "time.h"
#include <timers.h>
//#include "get_timestamp.c"

/*****************************************************************************/
/* Define the number of VME modules used in the program                      */
/*****************************************************************************/
#define N_V556 4
#define V556_BASE 0x04005000
#define V556_INCR 0x00001000
#define N_V812 3
#define V812_BASE 0x03100000
#define V812_INCR 0x00100000
#define N_V775 2
#define V775_BASE 0x05000000
#define V775_INCR 0x00010000
#define N_V513 1
#define V513_BASE 0x0E00A000
#define V513_INCR 0x00001000
#define N_V1290N 1
#define V1290_BASE 0x03300000
#define V1290_INCR 0x00010000
#define N_V965 1
#define V965_BASE 0x03400000
#define V965_INCR 0x00010000
static int GEO_V1290N[N_V1290N] = {5};
static int GEO_V965[N_V965] = {7};

/*****************************************************************************/
/* discriminator threshold settings                                          */
/* TDC_0_0  ... TDC_0_7,  TDC_0_8  ... TDC_0_15                              */
/* TDC_0_16 ... TDC_0_23, TDC_0_24 ... TDC_0_31                              */
/*****************************************************************************/
static unsigned short disc_thrl[3][16]=
  {{25,25,25,25,35,25,25,25,25,32,25,25,25,25,30,25},  // CFD 0 for LSO-APD
   {32,35,30,35,42,35,25,25,35,30,30,40,40,25,25,25},  // CFD 1 for LSO-APD
   {25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25}}; // CFD for Scintil.{10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160}
/*****************************************************************************/
/* setting 08.11.2008 - 10.11.2008                                           */
/* static unsigned short disc_thrl[2][16]=                                   */
/*  {{20,20,20,20,20,20,20,20,20,20,20,20,20,20,30,20},                      */
/*   {20,20,20,20,20,30,20,20,20,18,20,20,20,20,20,20}};                     */
/*****************************************************************************/
/* define wait procedure based on µs timer                                   */
/*****************************************************************************/
#define WAIT(delay) \
     {struct timespec tp,rmtp; int ret_nanosleep; \
     tp.tv_sec = 0; tp.tv_nsec=1000*delay;        \
     ret_nanosleep = nanosleep(&tp,&rmtp);}
/*****************************************************************************/
/* All pointers which are used for read/write operations in the functions    */
/* f_user_init and f_user_readout must be defined here as static variables   */
/* The type of the pointer defines the access to the data.                   */
/* - use a long  pointer to access D24 and D32 data                          */
/* - use a short pointer to access D16                                       */
/*****************************************************************************/

/*****************************************************************************/
/*definitions for CAEN V556 ADC                                              */
/*****************************************************************************/
static unsigned short volatile *ps_vme_v556_mod_sernum[N_V556];
static unsigned short volatile *ps_vme_v556_manum_modtype[N_V556];
static unsigned short volatile *ps_vme_v556_fixedcode[N_V556];
static unsigned short volatile *ps_vme_v556_control[N_V556];
static unsigned short volatile *ps_vme_v556_highthrl[N_V556];
static unsigned short volatile *ps_vme_v556_lowthrl[N_V556];
static unsigned short volatile *ps_vme_v556_delay[N_V556];
static unsigned short volatile *ps_vme_v556_reset[N_V556];
static unsigned short volatile *ps_vme_v556_fifo[N_V556];
/*****************************************************************************/
/*definitions for CAEN V812 CFD                                              */
/*****************************************************************************/
static unsigned short volatile *ps_vme_v812_disc[N_V812][16];
static unsigned short volatile *ps_vme_v812_dead[N_V812][2];
static unsigned short volatile *ps_vme_v812_width[N_V812][2];
static unsigned short volatile *ps_vme_v812_id[N_V812][3];
static unsigned short volatile *ps_vme_v812_inh[N_V812];
static unsigned short volatile *ps_vme_v812_maj[N_V812];
static unsigned short volatile *ps_vme_v812_test[N_V812];
/*****************************************************************************/
/* definitions for CAEN V775 time-to-digital converter modules               */
/*****************************************************************************/
static unsigned short volatile *ps_vme_v775_ctrl[N_V775][2];
static unsigned short volatile *ps_vme_v775_bclr[N_V775][2];
static unsigned short volatile *ps_vme_v775_bset[N_V775][2];
static unsigned short volatile *ps_vme_v775_csel[N_V775];
static unsigned short volatile *ps_vme_v775_rnge[N_V775];
static unsigned short volatile *ps_vme_v775_rese[N_V775];
static unsigned short volatile *ps_vme_v775_thrl[N_V775][32];
static unsigned short volatile *ps_vme_v775_vers[N_V775];
static unsigned short volatile *ps_vme_v775_sn[N_V775][2];
static unsigned short volatile *ps_vme_v775_tew[N_V775];
static unsigned short volatile *ps_vme_v775_etr[N_V775];
static unsigned short volatile *ps_vme_v775_scr[N_V775];
static unsigned short volatile *ps_vme_v775_geo[N_V775];
static unsigned short volatile *ps_vme_v775_oui[N_V775][3];
static unsigned short volatile *ps_vme_v775_bid[N_V775][3];
static unsigned short volatile *ps_vme_v775_cnt[N_V775][2];
static unsigned short volatile *ps_vme_v775_str[N_V775][2];
static long volatile *pl_vme_v775_fifo[N_V775];
/*****************************************************************************/
/*definitions for CAEN V513 I/O module                                       */
/*****************************************************************************/
static unsigned short volatile *ps_vme_v513_mod_sernum[N_V513];
static unsigned short volatile *ps_vme_v513_manum_modtype[N_V513];
/*****************************************************************************/
/* definitions for CAEN V1290N time-to-digital converter modules             */
/*****************************************************************************/
static unsigned short volatile *ps_vme_v1290n_ctrl[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_geo[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_str[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_oui[N_V1290N][3];
static unsigned short volatile *ps_vme_v1290n_bid[N_V1290N][3];
static unsigned short volatile *ps_vme_v1290n_sn[N_V1290N][2];
static unsigned short volatile *ps_vme_v1290n_vers[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_evt_counter[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_evt_stored[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_alm_full[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_micro[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_micro_hand_shake[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_evt_fifo[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_evt_fifo_stored[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_evt_fifo_status[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_software_clear[N_V1290N];
static long volatile *pl_vme_v1290n_fifo[N_V1290N];
static unsigned short volatile *ps_vme_v1290n_modul_reset[N_V1290N];
/*****************************************************************************/
/* definitions for CAEN V965 analog-to-digital converter modules             */
/*****************************************************************************/
static unsigned short volatile *ps_vme_v965_ctrl[N_V965][2];
static unsigned short volatile *ps_vme_v965_bclr[N_V965][2];
static unsigned short volatile *ps_vme_v965_bset[N_V965][2];
static unsigned short volatile *ps_vme_v965_csel[N_V965];
static unsigned short volatile *ps_vme_v965_Iped[N_V965];
static unsigned short volatile *ps_vme_v965_rese[N_V965];
static unsigned short volatile *ps_vme_v965_thrl[N_V965][32]; // 16+16 low/high range 
static unsigned short volatile *ps_vme_v965_vers[N_V965];
static unsigned short volatile *ps_vme_v965_sn[N_V965][2];
static unsigned short volatile *ps_vme_v965_tew[N_V965];
static unsigned short volatile *ps_vme_v965_geo[N_V965];
static unsigned short volatile *ps_vme_v965_oui[N_V965][3];
static unsigned short volatile *ps_vme_v965_bid[N_V965][3];
static unsigned short volatile *ps_vme_v965_cnt[N_V965][2];
static unsigned short volatile *ps_vme_v965_str[N_V965][2];
static long volatile *pl_vme_v965_fifo[N_V965];


/*****************************************************************************/
/* create virtual pointer to be used in f_user_init and f_user_readout       */
/* the offset of 0x0200000 is due to the MBS VME mapping which locates the   */
/* trigger module at this address                                            */
/*****************************************************************************/
int f_user_get_virt_ptr (long  *pl_loc_hwacc, long  pl_rem_cam[])
{
  int l_i, l_j, l_k;
  
  long pl_off;
  printf("<I>: f_user_get_virt_ptr called w/ pl_loc_hwacc 0x%08x\n",
         pl_loc_hwacc);
  /***************************************************************************/
  /* pointer definitions for CAEN V556 ADC                                   */
  /***************************************************************************/
  for (l_i=0; l_i<N_V556; l_i++)
    {     
      pl_off=V556_BASE-0x02000000+l_i*V556_INCR;
      ps_vme_v556_mod_sernum[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0xfe);
      ps_vme_v556_manum_modtype[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0xfc);
      ps_vme_v556_fixedcode[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0xfa);
      ps_vme_v556_control[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1a);
      ps_vme_v556_highthrl[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x12);
      ps_vme_v556_lowthrl[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x10);
      ps_vme_v556_delay[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x14);
      ps_vme_v556_reset[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1c);
      ps_vme_v556_fifo[l_i] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x18);
    }
  /***************************************************************************/
  /* pointer definitions for CAEN V775 TDC                                   */
  /***************************************************************************/
  for (l_i=0; l_i<N_V775; l_i++)
	 {
	   pl_off = V775_BASE-0x02000000+l_i*V775_INCR;
	   ps_vme_v775_ctrl[l_i][1] = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x101a);
	   ps_vme_v775_bclr[l_i][0] = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1008);
	   ps_vme_v775_bclr[l_i][1] = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1034);
	   ps_vme_v775_bset[l_i][0] = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1006);
	   ps_vme_v775_bset[l_i][1] = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1032);
	   ps_vme_v775_csel[l_i]    = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x103c);
	   ps_vme_v775_rese[l_i]    = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1040);
	   ps_vme_v775_rnge[l_i]    = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1060);
	   ps_vme_v775_vers[l_i]    = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8032);
	   ps_vme_v775_sn[l_i][0]   = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8f02);
	   ps_vme_v775_sn[l_i][1]   = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8f06);
	   ps_vme_v775_geo[l_i]     = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1002);
	   ps_vme_v775_oui[l_i][0]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8026);
	   ps_vme_v775_oui[l_i][1]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x802a);
	   ps_vme_v775_oui[l_i][2]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x802e);
	   ps_vme_v775_bid[l_i][0]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8036);
	   ps_vme_v775_bid[l_i][1]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x803a);
	   ps_vme_v775_bid[l_i][2]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x803e);
	   ps_vme_v775_tew[l_i]     = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x103e);
           ps_vme_v775_etr[l_i]     = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1020);
	   ps_vme_v775_cnt[l_i][0]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1024);
	   ps_vme_v775_cnt[l_i][1]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1026);
           ps_vme_v775_scr[l_i]     = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1068);
	   ps_vme_v775_str[l_i][0]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x100e);
	   ps_vme_v775_str[l_i][1]  = 
             (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1022);
	   pl_vme_v775_fifo[l_i]    = (long *)((long)pl_loc_hwacc+pl_off);
	   for (l_j=0; l_j<32; l_j++) 
	     ps_vme_v775_thrl[l_i][l_j] = 
	       (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1080+l_j*0x2);
	 }
  /***************************************************************************/
  /* pointer definitions for CAEN V812 constant fraction discriminators      */
  /***************************************************************************/
  for (l_i=0; l_i<N_V812; l_i++)
    {
      pl_off = V812_BASE - 0x02000000 + l_i*V812_INCR;
      for (l_j=0; l_j<16; l_j++) {
        ps_vme_v812_disc[l_i][l_j] = 
          (unsigned short *)((long)pl_loc_hwacc+pl_off+2*l_j);
      }
      for (l_j=0; l_j<2; l_j++) {
        ps_vme_v812_width[l_i][l_j] = 
          (unsigned short *)((long)pl_loc_hwacc+pl_off+0x40+2*l_j);
        ps_vme_v812_dead[l_i][l_j]  = 
          (unsigned short *)((long)pl_loc_hwacc+pl_off+0x44+2*l_j);
      }
      ps_vme_v812_inh[l_i]   = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4a);
      ps_vme_v812_maj[l_i]   = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x48);
      ps_vme_v812_test[l_i]  = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4c);
      ps_vme_v812_id[l_i][0] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0xfa);
      ps_vme_v812_id[l_i][1] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0xfc);
      ps_vme_v812_id[l_i][2] = 
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0xfe);
    }
  /***************************************************************************/
  /* create pointers to the V1290N time to digital converter                 */
  /***************************************************************************/
  for (l_i=0; l_i<N_V1290N; l_i++) {
    pl_off = V1290_BASE - 0x02000000 + l_i*V1290_INCR;
    ps_vme_v1290n_ctrl[l_i]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1000);
    ps_vme_v1290n_str[l_i]   = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1002);
    ps_vme_v1290n_vers[l_i]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4030);
    ps_vme_v1290n_sn[l_i][0] = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4084);
    ps_vme_v1290n_sn[l_i][1] = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4080);
    ps_vme_v1290n_bid[l_i][0]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x403c);
    ps_vme_v1290n_bid[l_i][1]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4038);
    ps_vme_v1290n_bid[l_i][2]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4034);
    ps_vme_v1290n_oui[l_i][0]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x402c);
    ps_vme_v1290n_oui[l_i][1]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4028);
    ps_vme_v1290n_oui[l_i][2]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x4024);
    ps_vme_v1290n_geo[l_i]   = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x100e);
    ps_vme_v1290n_evt_counter[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x101c);
    ps_vme_v1290n_evt_stored[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1020);
    ps_vme_v1290n_alm_full[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1022);
    ps_vme_v1290n_micro[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x102e);
    ps_vme_v1290n_micro_hand_shake[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1030);
    ps_vme_v1290n_evt_fifo[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1038);
    ps_vme_v1290n_evt_fifo_stored[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x103c);  
    ps_vme_v1290n_evt_fifo_status[l_i]= (unsigned short *)((long)pl_loc_hwacc+pl_off+0x103e);  
    pl_vme_v1290n_fifo[l_i]  = (long *)((long)pl_loc_hwacc+pl_off);
    ps_vme_v1290n_software_clear[l_i]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1016);
    ps_vme_v1290n_modul_reset[l_i]     = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1014);
  }
  
  /***************************************************************************/
  /* create pointers to the V965 charge to digital converter                 */
  /***************************************************************************/
  for (l_i=0; l_i<N_V965; l_i++) {
    pl_off = V965_BASE - 0x02000000 + l_i*V965_INCR;
    ps_vme_v965_ctrl[l_i][1] = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x101a);
    ps_vme_v965_bclr[l_i][0] = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1008);
    ps_vme_v965_bclr[l_i][1] = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1034);
    ps_vme_v965_bset[l_i][0] = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1006);
    ps_vme_v965_bset[l_i][1] = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1032);
    ps_vme_v965_csel[l_i]    = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x103c);
    ps_vme_v965_rese[l_i]    = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1040);
    ps_vme_v965_Iped[l_i]    = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1060);
    ps_vme_v965_vers[l_i]    = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8032);
    ps_vme_v965_sn[l_i][0]   = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8f02);
    ps_vme_v965_sn[l_i][1]   = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8f06);
    ps_vme_v965_geo[l_i]     = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1002);
    ps_vme_v965_oui[l_i][0]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8026);
    ps_vme_v965_oui[l_i][1]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x802a);
    ps_vme_v965_oui[l_i][2]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x802e);
    ps_vme_v965_bid[l_i][0]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x8036);
    ps_vme_v965_bid[l_i][1]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x803a);
    ps_vme_v965_bid[l_i][2]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x803e);
    ps_vme_v965_tew[l_i]     = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x103e);
    ps_vme_v965_cnt[l_i][0]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1024);
    ps_vme_v965_cnt[l_i][1]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1026);
    ps_vme_v965_str[l_i][0]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x100e);
    ps_vme_v965_str[l_i][1]  = (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1022);
    pl_vme_v965_fifo[l_i]    = (long *)((long)pl_loc_hwacc+pl_off);
    for (l_j=0; l_j<32; l_j++)
      ps_vme_v965_thrl[l_i][l_j] =
        (unsigned short *)((long)pl_loc_hwacc+pl_off+0x1080+l_j*0x2);
  } 
#ifdef DEBUG
  printf("<I>: leaving f_user_get_virt_ptr\n");
#endif
  return (1);
}
/*****************************************************************************/
/* f_user_init is called once for the start acquisition command              */
/* permanent settings should be applied here                                 */
/*****************************************************************************/
int f_user_init (unsigned char  bh_crate_nr,
                 long           *pl_loc_hwacc,
                 long           *pl_rem_cam,
                 long           *pl_stat)
{
  INTS4 l_i, l_j, l_k;
  INTS2 inh;
  short thrl, thrh, deadt, width, maj, test;
  
  long l_dat;
  char buf[81];
  char *nch;

   // Data Setup (Trigger Matching Mode)

   long v1290n_acqmode = 0x0000,
	v1290n_winwidth = 4000,
	v1290n_winoff = 2000,
	v1290n_extrasearch = 0x00,
	v1290n_reject = 0x00,
	v1290n_edgedet = 0x02,
	
	v1290n_ctrl = 0x020,
	v1290n_headtrail = 0x3100;
   
#ifdef DEBUG
  printf("<I>: entered f_user_init w/ bh_crate_nr %d\n", bh_crate_nr);
#endif
  /**************************************************************************/
  /* now we decide on the crate number what to initialize                   */
  /**************************************************************************/
  switch (bh_crate_nr)
    {
    case 0:
      printf("<I>: f_user_init: VME init start, crate # %d\n", bh_crate_nr);
      /**********************************************************************/
      /* init VME crate                                                     */
      /**********************************************************************/
      /**********************************************************************/
      /* Initialise CAEN V556 ADC                                           */
      /**********************************************************************/
      for (l_i=0;l_i<N_V556;l_i++) {
        *ps_vme_v556_reset[l_i] = 0x1;
        printf("<I>: f_user_init: CAEN V556 init for module %2d:\n",
               l_i);
        printf("     version:       %4d\n",
               (*ps_vme_v556_mod_sernum[l_i] >> 12) & 0xf);
        printf("     SN:            %4d\n",
               (*ps_vme_v556_mod_sernum[l_i] & 0x0fff));
        printf("     manufact:      %4d\n",
               (*ps_vme_v556_manum_modtype[l_i] >> 10) & 0x3f);
        printf("     module type:   %4d\n",
               (*ps_vme_v556_manum_modtype[l_i] & 0x03ff));
        printf("     fixed code:  0x%4x\n",
               (*ps_vme_v556_fixedcode[l_i] & 0xffff));
        
        *ps_vme_v556_control[l_i] = 0xffff;
        *ps_vme_v556_delay[l_i]   = 0x20;
        switch (l_i) {
          //case 0:  thrl = 11; break; 
          //case 1:  thrl = 12; break;
          //case 2:  thrl = 12; break;
          //case 3:  thrl = 11; break;
        case 0:  thrl = 20; break; // test
        case 1:  thrl = 20; break; // test
        case 2:  thrl = 20; break; // test
        case 3:  thrl = 20; break; // test
        default: thrl = 12; break;
        }
        thrh = 0xc7; // upper threshold at ch 1800 
        *ps_vme_v556_lowthrl[l_i] = (short) thrl;
        printf("     low threshold: %4d\n",thrl);
        *ps_vme_v556_highthrl[l_i] = (short) thrh;
        printf("     high threshold:%4d\n",thrh);
        
      }
      /**********************************************************************/
      /* Initialise CAEN V812 CFD                                           */
      /**********************************************************************/
      for (l_i=0; l_i<N_V812; l_i++) {
        printf("<I>: f_user_init: CAEN V812 init for module %2d:\n",
               l_i);
        printf("     version:       %4d\n",
               *ps_vme_v812_id[l_i][2]&0xf000);
        printf("     SN:            %4d\n",
               *ps_vme_v812_id[l_i][2]&0xfff);
        printf("     manufact:    0x%04x\n",
               *ps_vme_v812_id[l_i][1]&0xffff);
        printf("     fixed code:  0x%04x\n",
               *ps_vme_v812_id[l_i][0]&0xffff);
        printf("     threshold:     ");
        for (l_j=0; l_j<16; l_j++) {
          *ps_vme_v812_disc[l_i][l_j]=disc_thrl[l_i][l_j];
          printf(" %d",disc_thrl[l_i][l_j]);
        }
        printf("\n");
        deadt = 50;
        *ps_vme_v812_dead[l_i][0]=deadt;
        printf("     dead time 0:   %4d\n",deadt);
        deadt = 50;
        *ps_vme_v812_dead[l_i][1]=deadt;
        printf("     dead time 1:   %4d\n",deadt);
        switch (l_i) {
        case 0: width = 50; break;
        case 1: width = 50; break;
        case 2: width = 250; break;
        default: width = 50; break;
        }
        *ps_vme_v812_width[l_i][0]=width;
        printf("     width 0:       %4d\n",width);
        switch (l_i) {
        case 0: width = 50; break;
        case 1: width = 50; break;
        case 2: width = 250; break;
        default: width = 50; break;
        }
        *ps_vme_v812_width[l_i][1]=width;
        printf("     width 1:       %4d\n",width);
        switch (l_i) {
        case 0: inh = 0xffff; break;
        case 1: inh = 0xffff; break;
        case 2: inh = 0xffff; break;
        default: inh = 0xffff; break;
        }
        *ps_vme_v812_inh[l_i]  = inh;
        printf("     inhibit:     0x%04x\n", inh & 0xffff);
        /*switch (l_i) {
        case 0: maj = 1; break;
        case 1: maj = 1; break;
        case 2: maj = 19; break;
        default: maj = 1; break;
        }*/
        maj = 19;
        *ps_vme_v812_maj[l_i]  = maj;
        printf("     majority thres:%4d\n",maj);
        test = 1;
        *ps_vme_v812_test[l_i] = test;
        printf("     test:          %4d\n",test);
      }
      /**********************************************************************/
      /* Initialise CAEN V775 TDC                                           */
      /**********************************************************************/
      for (l_i=0; l_i<N_V775; l_i++) {
        printf("<I>: f_user_init: CAEN V775 init for module %2d:\n",
               l_i);
        *ps_vme_v775_bset[l_i][0] = 0x80;
        WAIT(100);
        *ps_vme_v775_bclr[l_i][0] = 0x80;
        *ps_vme_v775_csel[l_i]    = 0x00;
        if (l_i == 0) {
          *ps_vme_v775_rnge[l_i]    = 0xFF; // 35ps LSB resolution
        }
        else if (l_i == 1) {
          *ps_vme_v775_rnge[l_i]    = 0x1E; // 300ps LSB resolution
        }
        else{
          *ps_vme_v775_rnge[l_i]    = 0xFF; // 35ps LSB resolution
        }
        *ps_vme_v775_rese[l_i]    = 0x01; // reset Event counter
                
        printf("     version:     0x%06x\n",
               *ps_vme_v775_vers[l_i]);
        printf("     OUI:         0x%06x\n",
               ((*ps_vme_v775_oui[l_i][0] & 0xff) << 16)+
               ((*ps_vme_v775_oui[l_i][1] & 0xff) <<  8)+
               ((*ps_vme_v775_oui[l_i][2] & 0xff)      ));
        printf("     BID:         0x%06x\n",
               ((*ps_vme_v775_bid[l_i][0] & 0xff) << 16)+
               ((*ps_vme_v775_bid[l_i][1] & 0xff) <<  8)+
               ((*ps_vme_v775_bid[l_i][2] & 0xff)      ));
        printf("     SN:            %06d\n",
               ((*ps_vme_v775_sn[l_i][0] & 0xff) << 16) +
               ((*ps_vme_v775_sn[l_i][1] & 0xff))       );
        printf("     geo id:        %06d\n",
               *ps_vme_v775_geo[l_i] & 0x1f );
        printf("     evt counter:   %06d\n",
               (*ps_vme_v775_cnt[l_i][0] << 16) +
               (*ps_vme_v775_cnt[l_i][1] & 0xff));
        printf("     stat reg 1:  0x%06x\n",
               *ps_vme_v775_str[l_i][0]);
        printf("     stat reg 2:  0x%06x\n",
               *ps_vme_v775_str[l_i][1]);
        printf("     bit set 1:   0x%06x\n",
               (*ps_vme_v775_bset[l_i][0] & 0x98));
        if (l_i == 0) {
          *ps_vme_v775_bset[l_i][1] = 0x4C80;
          printf("     bit set 2:   0x%06x\n",
                 (*ps_vme_v775_bset[l_i][1] & 0x7fff));
          printf("     TDC works in COMMON STOP mode\n");
        }
        else if (l_i == 1) {
          *ps_vme_v775_bset[l_i][1] = 0x4880;
          printf("     bit set 2:   0x%06x\n",
                 (*ps_vme_v775_bset[l_i][1] & 0x7fff));
          printf("     TDC works in COMMON START mode\n");
        }
        else {
          printf("<E>: undefined TDC %d setting, assume COMMON STOP mode!\n",
                 l_i);
        }
          
        printf("     ev trig reg: 0x%06x\n",
               (*ps_vme_v775_etr[l_i] & 0x1f));
        printf("     resolution:  0x%06x\n",
               (*ps_vme_v775_rnge[l_i] & 0xFF));
        //printf("     slide cons:  0x%06x\n",
        //       (*ps_vme_v775_scr[l_i] & 0xFF));
        l_k = 0;
        for (l_j=0; l_j<32; l_j++){
          *ps_vme_v775_thrl[l_i][l_j] = 0x01;
          printf("     thrl ch%2d:   0x%06x\n",l_j,
               (*ps_vme_v775_thrl[l_i][l_j] & 0xFF));
        }
        printf("     buffer:    0x%08x\n",
               *pl_vme_v775_fifo[l_i]);
      }
      /**********************************************************************/
      /* Initialise CAEN V965 QDC                                           */
      /**********************************************************************/
      
      for (l_i=0; l_i<N_V965; l_i++) {
	printf(" CAEN V965:\n");
	*ps_vme_v965_bset[l_i][0] = 0x80;      // select softw. reset bit 
	*ps_vme_v965_bclr[l_i][0] = 0x80;      //  clear softw. reset bit
	*ps_vme_v965_csel[l_i]    = 0x00;      // select crate number 0
	printf("      version:     0x%06x\n",
	       (*ps_vme_v965_vers[l_i] & 0xff));
	printf("      SN:            %06d\n",
	       ((*ps_vme_v965_sn[l_i][0] & 0xff) << 16) +
	       ((*ps_vme_v965_sn[l_i][1] & 0xff))       );
	printf("      OUI:         0x%06x\n",
	       ((*ps_vme_v965_oui[l_i][0] & 0xff) << 16)+
	       ((*ps_vme_v965_oui[l_i][1] & 0xff) <<  8)+
	       ((*ps_vme_v965_oui[l_i][2] & 0xff)      ));
	printf("      BID:         0x%06x\n",
	       ((*ps_vme_v965_bid[l_i][0] & 0xff) << 16)+
	       ((*ps_vme_v965_bid[l_i][1] & 0xff) <<  8)+
	       ((*ps_vme_v965_bid[l_i][2] & 0xff)      ));
	*ps_vme_v965_geo[l_i] = GEO_V965[l_i];
	printf("      geo id:        %06d\n",
	       *ps_vme_v965_geo[l_i] & 0x1f );
	printf("      evt counter:   %06d\n",
	       (*ps_vme_v965_cnt[l_i][0] << 16) +
	       (*ps_vme_v965_cnt[l_i][1] & 0xff));
	printf("      stat reg 1:  0x%06x\n",
	       *ps_vme_v965_str[l_i][0]);
	printf("      stat reg 2:  0x%06x\n",
	       *ps_vme_v965_str[l_i][1]);
	printf("      bit set 1:   0x%06x\n",
	       (*ps_vme_v965_bset[l_i][0] & 0x98));

	*ps_vme_v965_bset[l_i][1] = 0x8;      // disable overflow suppression
	*ps_vme_v965_bset[l_i][1] = 0x10;     // disable zero suppression

	printf("      bit set 2:   0x%06x\n",
	       (*ps_vme_v965_bset[l_i][1] & 0x7fff));
	*ps_vme_v965_Iped[l_i]    = 0;        // common I_1 current pedestal 
                                              // (0-255 for I_1=500-620 muA)
	printf("      Iped (max. 255):  %03d\n",
	       *ps_vme_v965_Iped[l_i]);
	for (l_j=0; l_j<32; l_j++)
	  *ps_vme_v965_thrl[l_i][l_j] = 0x0;  // lower thresholds
      }
      /**********************************************************************/
      /* Initialise CAEN V1290 TDC                                          */
      /**********************************************************************/
      for (l_i=0; l_i<N_V1290N; l_i++) {
        printf(" CAEN V1290N:\n");
	printf("      version:     0x%06x\n",
	       (*ps_vme_v1290n_vers[l_i] & 0xff));
	printf("      SN:           %07d\n",
	       ((*ps_vme_v1290n_sn[l_i][0] & 0xff) << 16) +
	       ((*ps_vme_v1290n_sn[l_i][1] & 0xff))       );
	printf("      OUI:         0x%06x\n",
	       ((*ps_vme_v1290n_oui[l_i][0] & 0xff) << 16)+
	       ((*ps_vme_v1290n_oui[l_i][1] & 0xff) <<  8)+
	       ((*ps_vme_v1290n_oui[l_i][2] & 0xff)      ));
	printf("      BID:         0x%06x\n",
	       ((*ps_vme_v1290n_bid[l_i][0] & 0xff) << 16)+
	       ((*ps_vme_v1290n_bid[l_i][1] & 0xff) <<  8)+
	       ((*ps_vme_v1290n_bid[l_i][2] & 0xff)      ));
        *ps_vme_v1290n_geo[l_i] = GEO_V1290N[l_i];
        printf("      geo id:        %06d\n",
               *ps_vme_v1290n_geo[l_i] & 0x1f );
        //*ps_vme_v1290n_alm_full[l_i] = 0x40;  
        //printf("      almost-full level: %d (default: 64 words)\n",
        //       *ps_vme_v1290n_alm_full[l_i]);        
         printf("      stat reg:    0x%06x\n",
               *ps_vme_v1290n_str[l_i]);
        printf("      ctrl reg:    0x%06x\n",
               *ps_vme_v1290n_ctrl[l_i]);

     // *** Switch ON Trigger Matching Mode ***

  
  
/* reset module */
	printf("              reset module...");
	*ps_vme_v1290n_modul_reset[l_i] = 0;             //module reset
	printf("done\n");
	
	
/* disable module */
    printf("              disable module...");
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );	
	*ps_vme_v1290n_micro[l_i] = 0x4300;              //send OPCODE 43xx(disable all)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );	
	printf("done\n");
	
	/**/
	
/* reset module */
	printf("              reset module...");
	*ps_vme_v1290n_modul_reset[l_i] = 0;             //module reset
	printf("done\n");
	


  /* set acquisition mode */
    
     printf("              set aquisition mode (0x%04lx)...",v1290n_acqmode);
    while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );
	*ps_vme_v1290n_micro[l_i] = v1290n_acqmode;              //send OPCODE 00xx(set trig match mode)
	                                               //send OPCODE 01xx(set cont stor mode)
        while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	printf("OK\n");
	

/* set window width */
	printf("              set window width (%ld)...",v1290n_winwidth);
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );
	*ps_vme_v1290n_micro[l_i] = 0x1000;              //send OPCODE 10xx(set window width)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	*ps_vme_v1290n_micro[l_i] = v1290n_winwidth/25;             //window width (default = 0x14 = 500 ns)
	                                                            //1500,3500
	                                                            //range 1...4095 = 25...102375 ns
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );	
	printf("OK\n");
	


/* set window offset */
	printf("              set window offset (%ld)...",v1290n_winoff);
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );
	*ps_vme_v1290n_micro[l_i] = 0x1100;              //send OPCODE 11xx(set window offset)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	*ps_vme_v1290n_micro[l_i] = (-v1290n_winoff/25+2048)^0x800;//window offset (default = 0xfd8 = -1000)
	                    //-1000,-2500
        	            //12 significant bits; 1st bit 0/1: -/+; range:-2048=0x800...+40=0x28
                                                                              //-51200...+1000 ns
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	printf("OK\n");
	



/* set extra search margin */
	printf("              set extra search margin (%ld)...",v1290n_extrasearch);
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );	
	*ps_vme_v1290n_micro[l_i] = 0x1200;              //send OPCODE 12xx(set extra search margin)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	*ps_vme_v1290n_micro[l_i] = v1290n_extrasearch;                //extra search margin (default = 0x08)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );	
	printf("OK\n");
	

/* set reject margin */
	printf("              set reject margin (%ld)...",v1290n_reject);
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );	
	*ps_vme_v1290n_micro[l_i] = 0x1300;              //send OPCODE 13xx(set reject margin)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	*ps_vme_v1290n_micro[l_i] = v1290n_reject;                //reject margin (default = 0x04)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );	
	printf("OK\n");
	

/* set subtraction mode */
	printf("              set subtraction mode...");
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );	
	*ps_vme_v1290n_micro[l_i] = 0x1400; //send OPCODE 14xx(enable subtraction of trig time)
                                            //send OPCODE 15xx(disable subtraction of trig time)
        while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );	
	printf("OK\n");
	

/* set edge detection mode */
	printf("              set edge detection mode (0x%04lx)...",v1290n_edgedet);
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );	
	*ps_vme_v1290n_micro[l_i] = 0x2200;              //send OPCODE 22xx(set edge det mode)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	*ps_vme_v1290n_micro[l_i] = v1290n_edgedet;               //edge det mode
        while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );	
	printf("OK\n");                                  //0=pair,1=lead,2=trail,3=trail+lead
	

/*  set control register and event fifo */
	printf("              enable event fifo and trigger time tag (0x%04lx)...",v1290n_ctrl),
	  *ps_vme_v1290n_ctrl[l_i] = v1290n_ctrl;   //set control register 0x120 event fifo enabled
	                                            //set control register 0x020 event fifo disabled
                                                    //set control register 0x320 event fifo 
	                                            //                      and trigger time tag enabled
	printf("OK\n");
	

/* set TDC Header and Trailer readout status */
	printf("              ");
	if (v1290n_headtrail == 0x3100) printf("disable ");
	if (v1290n_headtrail == 0x3000) printf("enable ");
	printf("TDC header and trailer readout...");
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );
	*ps_vme_v1290n_micro[l_i] = v1290n_headtrail;    //send OPCODE 31xx(disable)
	                                                 //send OPCODE 30xx(enable)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );
	printf("OK\n");
	
    /* perform sofware clear */
	printf("              clear buffers...");
	*ps_vme_v1290n_software_clear[l_i] = 0x1;   //clear fifos, reset counters
	printf("done\n");
	


	/* enable all channels */
        printf("              enable module...");
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) == 0 );	
	*ps_vme_v1290n_micro[l_i] = 0x4200;              //send OPCODE 42xx(enable all)
	while ((*ps_vme_v1290n_micro_hand_shake[l_i] & 0x3) != 1 );	
	printf("done\n");
	


      }
      printf("<I>: f_user_init: VME init ready, crate # %d\n", bh_crate_nr);
      break;
    default:
      break;
    }
#ifdef DEBUG
  printf("<I>: leaving f_user_init\n");
#endif
  printf("<I>: leaving f_user_init\n");
  return (1);
}

/*****************************************************************************/
int f_user_readout (unsigned char  bh_trig_typ,
                    unsigned char  bh_crate_nr,
                    register long  *pl_loc_hwacc,
                    register long  *pl_rem_cam,
                    long           *pl_dat,
                    s_veshe        *ps_veshe,
                    long           *l_se_read_len,
                    long           *l_read_stat)
{
  INTS4 l_data, l_header, l_trailer, event, data, flag;
  int nwords, l_i, l_j, l_eob, l_k, a;
  static long t0sec, t0usec;
  static double r_time_zero;
  struct timeval tp;
  struct timezone tz;
  int ret_getclock;
  INTS4 data4, l_low[16], l_high[16], l_time[32], ref_time, trig_time;
  INTS2 data2, wordcount, evtcount;
  int  n, f, ch;
  
  *l_se_read_len = 0;
  
  switch (bh_crate_nr)
    {
    case 0:
      /**********************************************************************/
      /* readout VME crate                                                  */
      /**********************************************************************/
      switch (bh_trig_typ)
        {
        case 8:
          for (l_i=0; l_i < 10; l_i++) {
            *pl_dat++ = 0xdeadbeef;
            *l_se_read_len += 4;
          }
          break;
        case 1:
          for (l_i=0; l_i<N_V965; l_i++) {
	    if (*ps_vme_v965_str[l_i][0] & 0x1) {
	      // printf ("user readout: V965 %d DREADY assigned\n", l_i);
	      l_header = *pl_vme_v965_fifo[l_i];
	      if (((l_header >> 24) & 0x7) != 0x2)
		printf ("user readout: V965 %d has invalid header 0x%x assigned!\n",
			l_i, l_header);
              // *pl_dat++ = l_header;
              // *l_se_read_len += 4;
	      nwords = (((l_header)>>8)  & 0x3F);
	      for (l_j=0; l_j<nwords; l_j++) {
		l_data = *pl_vme_v965_fifo[l_i];
		if (((l_data >> 24) & 0x7) != 0x0)
		  printf ("user readout: V965 %d has invalid data word 0x%x assigned!\n",
			  l_i, l_data);
                // *pl_dat++ = l_data;
                // *pl_dat++ = ((l_data) & 0x00000fff);   // 12 bit data word
                // *l_se_read_len += 4;
                ch = ((l_data >> 17) & 0xf);          // channel number
                if ((l_data >> 16) & 0x1) {           // range bit (low=1) 
                  l_low[ch] = l_data;
                }
                else {
                  l_high[ch]= l_data;
                }
              }
              //   sort by increasing channel number
	      for (ch=0; ch<16; ch++) {
                //   tie up high/low range words:
	        //*pl_dat++ = ((l_high[ch] & 0x00000fff) << 16) + (l_low[ch] & 0x00000fff) ;
                
                // or take only low range info:  
                //*pl_dat++ = (l_low[ch] & 0x00000fff) ; 
                
                // or take only high range info:
	        //*pl_dat++ = (l_high[ch] & 0x00000fff); 
                
                if((l_low[ch] & 0x00000fff) < 3800) {
                  *pl_dat++ = (l_low[ch] & 0x00000fff) ; 
                }
                else {
                  *pl_dat++ = 8*(l_high[ch] & 0x00000fff);
                }
                *l_se_read_len += 4;
                asm volatile ("eieio");
              }
	      l_eob = *pl_vme_v965_fifo[l_i];
	      if (((l_eob >> 24) & 0x7) != 0x4)
		printf ("user readout: V965 %d has invalid EOB 0x%x assigned!\n",
			l_i, l_eob);
	    }
	    else {
              // printf ("user readout: V965 %d DREADY not assigned\n", l_i);
	    }
	    if (*ps_vme_v965_str[l_i][0] & 0x1) {
	      printf ("user readout: V965 %d has more data "
                      "in the buffer!\n", l_i);
              *ps_vme_v965_bset[l_i][0] = 0x80; // select softw. reset bit 
              *ps_vme_v965_bclr[l_i][0] = 0x80; //  clear softw. reset bit
            }
          }

          // V1290N:  
          for (l_i=0; l_i<N_V1290N; l_i++) {
            for (ch=0; ch<32; ch++) {
              l_time[ch] = -7777;
            }
            while (*ps_vme_v1290n_str[l_i] & 0x1) {   // data_ready
              // printf ("user readout: V1290N %d DREADY assigned\n", l_i);  
              l_data = *pl_vme_v1290n_fifo[l_i];
              if((l_data >> 27) == 0) {               // TDC data
                ch=(l_data>> 21) & 0x1f;              // channel #
                l_time[ch] = l_data & 0x001fffff;     // time info (21 bits)
              }
            }       
            trig_time = l_time[0];
            for (ch=0; ch<32; ch++) {
              l_time[ch] = l_time[ch]-trig_time+4000;
              *pl_dat++ = l_time[ch];
              *l_se_read_len += 4;
              asm volatile ("eieio");
            }
          }

          

          //if ((*ps_vme_v775_str[0][1] & 0x4) == 0x4)
          //  printf("TDC buffer full (0x%06x) \n", *ps_vme_v775_str[0][1]);
          //printf("0x%06x \n", *ps_vme_v775_str[0][1]);
          for (l_i=0; l_i<N_V775; l_i++) {
            if (*ps_vme_v775_str[l_i][0] & 0x1) {
              l_header = *pl_vme_v775_fifo[l_i];
              if (((l_header >> 24) & 0x7) != 0x2)
                printf ("user readout: V775 %d has invalid header 0x%x assigned!\n", 
                        l_i, l_header);
              // hardware error: TDC don't set their geo address correctly
              if (l_i == 0) l_header = (l_header & 0xffffff) + (11 << 27) + 0x2000000; 
              if (l_i == 1) l_header = (l_header & 0xffffff) + (12 << 27) + 0x2000000; 
              *pl_dat++ = l_header;
              *l_se_read_len += 4;
              nwords = (((l_header)>>8)  & 0x3F);
              //printf("user readout: V775 has %d data words\n", nwords);
              for (l_j=0; l_j<nwords; l_j++) {
                l_data = *pl_vme_v775_fifo[l_i];
                if (((l_data >> 24) & 0x7) != 0x0)
                  printf ("user readout: V775 %d has invalid data word 0x%x assigned!\n", 
                          l_i, l_data);
                // hardware error: TDC don't set their geo address correctly
                
                if (l_i == 0) l_data = (l_data & 0xffffff) + (11 << 27); 
                if (l_i == 1) l_data = (l_data & 0xffffff) + (12 << 27);
                *pl_dat++ = l_data;
                *l_se_read_len += 4;
              }
              l_eob = *pl_vme_v775_fifo[l_i];
              if (((l_eob >> 24) & 0x7) != 0x4)
                printf ("user readout: V775 %d has invalid EOB 0x%x assigned!\n", 
                        l_i, l_eob);
              if (l_i == 0) l_eob = (l_eob & 0xffffff) + (11 << 27) + 0x4000000; 
              if (l_i == 1) l_eob = (l_eob & 0xffffff) + (12 << 27) + 0x4000000; 
              *pl_dat++ = l_eob;
              *l_se_read_len += 4;
            }      
            else {
              // printf ("user readout: V775 %d DREADY not assigned\n", l_i);
            }
          }
          //for (l_i=0; l_i<N_V775; l_i++) {
          //  *ps_vme_v775_bset[l_i][1] = 0x04;
          //}
          //if ((*ps_vme_v775_str[0][1] & 0x4) == 0x4)
          //  printf("TDC buffer full (0x%06x) \n", *ps_vme_v775_str[0][1]);
          for (l_i=0; l_i<N_V556; l_i++) {
            if (((*ps_vme_v556_control[l_i] >> 14) & 0x1)) {
              // printf ("user readout: V556 %d DREADY assigned\n", l_i);
              l_header = (long) *ps_vme_v556_fifo[l_i];
              nwords = ((l_header & 0x7000) >> 12 ) + 1;
              event = (l_header & 0xfff);
              //printf("<I>: f_user_readout: V556 event found w/ %d words \n",nwords);
              l_header = (nwords << 8) + (l_i << 27) + 0x2000000; 
              *pl_dat++ = l_header;
              *l_se_read_len += 4;
              for (l_j=0; l_j<nwords; l_j++) {
                l_data = (long) *ps_vme_v556_fifo[l_i];
                data   = (l_data & 0xfff);
                l_data = ((l_data&0x7000)<<4)+(l_i<<27)+(1<<14)+data; 
                *pl_dat++ = l_data;
                *l_se_read_len += 4;
                //printf("<I>: f_user_readout: V556 event found w/ %d words \n",nwords);
                //printf("<I>:           data: 0x%08x \n",l_data);
              }
              l_eob = (l_i << 27) + 0x4000000 + event;  
              *pl_dat++ = l_eob;
              *l_se_read_len += 4;
            }      
          }
          //for (l_i=0; l_i<N_V775; l_i++) {
          //  *ps_vme_v775_bclr[l_i][1] = 0x04;
          //}
          //if ((*ps_vme_v775_str[0][1] & 0x4) == 0x4)
          //  printf("TDC buffer full (0x%06x) \n", *ps_vme_v775_str[0][1]);
          
          for (l_i=0; l_i<N_V775; l_i++) {
            /*
            if (*ps_vme_v775_str[l_i][0] & 0x1) {
              //a = *ps_vme_v775_bset[l_i][1]+ 0x04;
              *ps_vme_v775_bset[l_i][1] = 0x04;
              *ps_vme_v775_bclr[l_i][1] = 0x04;
            }
            if ((*ps_vme_v775_str[l_i][1] & 0x4) == 0x4){
              printf("TDC buffer full");
              *ps_vme_v775_bset[l_i][1] = 0x04;
              *ps_vme_v775_bclr[l_i][1] = 0x04;
            }
            */
            while (*ps_vme_v775_str[l_i][0] & 0x1) {
              printf("user readout: V775 no. %d DREADY assigned after readout!\n",
                      l_i);
              l_data = *pl_vme_v775_fifo[l_i];
              flag = (l_data >>24)&0x7;
              if (flag == 2) {
                nwords = (((l_data)>>8)  & 0x3F);
                printf("user readout: V775 header indicating %d data words\n", 
                       nwords);
              }
              else if (flag == 0) {
                printf("user readout: V775 ch %d data 0x%08x \n", 
                       ((l_data>>16)&0xff), (l_data&0xfff));
              }
              else if (flag == 4) {
                printf("user readout: V775 trailer evt %d \n",
                       (l_data&0xffffff));
              }
              else {
                printf("user readout: unknown TDC flag 0x%08x, data 0x%08x \n",
                       flag, l_data);
              }
              *ps_vme_v775_bset[l_i][1] = 0x4;
              WAIT(100);
              *ps_vme_v775_bclr[l_i][1] = 0x4;
              printf("user readout: cleared buffen of TDC no. %d\n", l_i);
            }
            // *ps_vme_v775_bset[l_i][1] = 0x4;
            // *ps_vme_v775_bclr[l_i][1] = 0x4;
          }
          //if ((*ps_vme_v775_str[0][1] & 0x4) == 0x4)
          //  printf("TDC buffer full");
          
          break;
        case 14:
          printf("<I>: f_user_readout: data acq start...\n");
          /*************************************************************/
          /* read the global time for reference                        */
          /*************************************************************/
          #include "get_timestamp.c"
          r_time_zero = 
            (double) tp.tv_sec + (double) tp.tv_usec / 1000000.0;
          printf("<I>: data taking started at time stamp %f s\n",
                 r_time_zero);
          #include "get_timestamp.c"
          t0sec = tp.tv_sec;
          t0usec = tp.tv_usec;
          break;
        case 15:
          printf("<I>: f_user_readout: data acq stopped...\n");
          #include "get_timestamp.c"
          printf("\n<I>: data taking was active for %f seconds.\n",
                 (double)(tp.tv_sec-t0sec)
                 +((double)(tp.tv_usec-t0usec))/((double)1e6));
          break;
        default:
          printf("<I>: f_user_readout: unknown trigger type: 0x%04x \n",
                 bh_trig_typ);
          break;
        }
    default:
     break;
    }
  return (1);
}
/*****************************************************************************/
