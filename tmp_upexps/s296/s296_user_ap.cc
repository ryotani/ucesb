
#include "auto_pedestal_adjust.hh"

#include <stdarg.h>
#include <stdio.h>

void C_F_ERROR(INTS4 errnum,INTU4 mask,const char *str)
{
  fprintf(stderr,"AUTO: %s\n",str);
}

void C_F_ERROR_FMT(INTS4 errnum,INTU4 mask,const char *str,...)
{
  va_list ap;

  char message[1024];

  va_start(ap, str);

  // vsnprintf(message,sizeof(message),str,ap);
  vsprintf(message,str,ap); // This is insecure (unsafe), we would prefere vsnprintf

  va_end(ap);

  fprintf(stderr,"AUTO: %s\n",message);

}

#define NUM_CHANNELS 1024
#define NUM_SST_DETECTORS 6

auto_pedestal_adjust_channel apac[NUM_SST_DETECTORS][NUM_CHANNELS];

int did_setup = 0;

int apac_ch(char *str,size_t size,apfc_info info)
{
  int channel = info._data;

  // return snprintf(str,size,"c%ds%d/%d%s",crate,slot,channel,range);
  return sprintf(str,"%d",channel); // This is insecure (unsafe), we would prefere vsnprintf
}

void setup()
{
  for (int det=0; det<NUM_SST_DETECTORS; det++)
    {
      for (int i = 0; i < NUM_CHANNELS; i++)
	{
	  apac[det][i]._control._max_expect_ped_std = 5.0;
	  apac[det][i]._control._ch_no_fmt  = apac_ch;
	  apac[det][i]._control._info._data = i;
	}
    }
  did_setup = 1;
}

int count[NUM_SST_DETECTORS]={0};

void user_pedestals(int det_number, int raw[NUM_CHANNELS],int branch,int sam,int gtb,int sidnum)
{

  static int done[NUM_SST_DETECTORS] = {0};

  if (!did_setup)
    setup();

  for (int i = 0; i < NUM_CHANNELS; i++)
    apac[det_number][i].collect_data((uint16) raw[i]);

  // apac.analyse();

  count[det_number]++;

  if ((count[det_number] & 0xf) == 0)
    {
      printf("detector = %d (b=%d,sam=%d,gtb=%d,sid=%d) count = %d / %d\n",
	     det_number, 
	     branch,sam,gtb,sidnum,
	     count[det_number],NUM_PEDESTAL_DATA);
    }
  //uglystuff for the december test



  if ((count[det_number] & (NUM_PEDESTAL_DATA-1)) == 0)
    {
      FILE* ped;
      ped = fopen(det_number < 3 ? "sidped.txt" : "sidped_2.txt","a");
      FILE* sig;
      sig = fopen(det_number < 3 ? "sidsig.txt" : "sidsig_2.txt","a");
      FILE* sig_r;
      sig_r = fopen(det_number < 3 ? "sidsig_r.txt" : "sidsig_r_2.txt","a");
      FILE* human;
      human = fopen("sid_human_unit_pedestal_sigma.txt","a");
      //ugly stuff for the december test.
      if(done[det_number]==0)
	{
	  fprintf (ped, "%1d%1d%1d20000\n",sam,gtb,sidnum);
	  fprintf (sig, "%1d%1d%1d20000\n",sam,gtb,sidnum);
	  fprintf (sig_r, "%1d%1d%1d20000\n",sam,gtb,sidnum);
	  fprintf (human, "\n");
	}
      for (int i = 0; i < NUM_CHANNELS; i++)
	{
	  {
	    uint32 sum_x  = 0;
	    uint32 sum_x2 = 0;
	    uint16 sorted[NUM_PEDESTAL_DATA];
	    
	    for (int j = 0; j < NUM_PEDESTAL_DATA; j++)
	      {
		sum_x  += apac[det_number][i]._data[j];
		sum_x2 += apac[det_number][i]._data[j] * apac[det_number][i]._data[j];
		sorted[j] = apac[det_number][i]._data[j];
	      }
	    
	    qsort(sorted,NUM_PEDESTAL_DATA,sizeof(sorted[0]),compare_uint16);
	    
	    for (int j = 0; j < NUM_PEDESTAL_DATA; j++)
	      {
		int count_ = 1;
		while (j+1 < NUM_PEDESTAL_DATA && sorted[j+1] == sorted[j])  { j++; count_++; }
		//fprintf (stderr,"%d:%d:%d ",sorted[j],count,det_number);
	      }
	    /*fprintf (stderr,"\n");*/
	    
	    uint32 sum = NUM_PEDESTAL_DATA;
	    
	    double mean = ((double) sum_x) / sum;
	    double var  = ((double) sum_x2 - ((double) sum_x)*sum_x / sum)/(sum-1);

	    (void) mean;
	    (void) var;

	    //fprintf (stderr,"%6.1f %6.1f\n",mean,sqrt(var));
	  }
	  apac[det_number][i].analyse();
	  //printing to provide the files 
	  //which will be load on the DAQ code
	  if(done[det_number]==0)
	    {
	      int pedestal = (int)(apac[det_number][i]._status._pedestal_mean*8); //pedestal multiply by 8
	      fprintf (ped,"%4x ",pedestal);
	      if((i+1)%16==0) fprintf(ped,"\n");
	      
	      int sigma = (int)(apac[det_number][i]._status._pedestal_std*8*2); //sigma multiply by 12
	      fprintf (sig,"%4x ",sigma);
	      if((i+1)%16==0) fprintf(sig,"\n");
	      
	      int sigma_r = (int)(apac[det_number][i]._status._pedestal_std*8*4);
	      if (sigma_r>15) sigma_r = 15;
	      fprintf(sig_r,"%4x ",sigma_r);
	      if((i+1)%16==0) fprintf(sig_r,"\n");

	      fprintf (human,"detector = %d, branch = %d, gtb = %d, siderem = %d, strip = %d: %6.1f+/-%4.1f , +/-%4.1f (%04x)\n",
		       det_number,det_number < 3,gtb,sidnum,i,
		       apac[det_number][i]._status._pedestal_mean,
		       sqrt(apac[det_number][i]._status._pedestal_mean_err2),
		       apac[det_number][i]._status._pedestal_std,
		       apac[det_number][i]._status._flags);
	    }
	  
	}
      fclose(ped);
      fclose(sig);
      fclose(sig_r);
      fclose(human);
      done[det_number]=1;
    }
}


/*
int ilog2(unsigned int x)
{
  int l = 0;

  while (x & 0xffffff00)
    {
      x >>= 8;
      l += 8;
    }

  while (x >>= 1)
    l++;
  return l;
}

char hexilog2(unsigned int x)
{
  int il;

  if (!x)
    return '.';

  il = ilog2(x);

  if (il < 10)
    return il + '0';
  return il - 10 + 'A';
}

*/

