
#include "threshold_cros3.h"

#include <math.h>

/*
 * Functions for finding reasonable thresholds for operation of cros3
 * modules.  They measure times by continous sampling of the signal
 * after a discriminator.  Pulse heights may be measured as
 * time-over-threshold.  
 */

/* For raw data, to measure time-over-threshold: 16*256 16-bit words
 * -> 4 kB per event.  With 3 kHz (maximum fastbus rate), this is 12
 * MB/s per cros3.  Each cros3 three goes to a separate GTB port.  
 *
 * With a fast transfer, this can be handled, all the way to the rio.
 * 12 MB/s can be cooked down.  Perhaps.  Then run the cook down code
 * on the SAM if troubles...
 *
 * hmm, this was not the issue here... :-)
 *
 */

/*
 * Thresholds:
 *
 * Two goals: 1 noise/zero-suppression.  Simple requirement, put the
 * cut such that we (almost) never see noise.
 *
 * Other goal: have a well-defined level, such that the times (and
 * particularly time-over-threshold make sense.
 *
 * The first one is easy.  The second one is complicated by the fact
 * that we only can set one threshold per eight channels.  On the
 * other hand: by having that limitation, one also have to partially
 * give up to set ideal thresholds for good time-over-threshold
 * calculations, and therefore first should consider the first
 * problem.
 *
 * So, how are they measured?  By the threshold curve hardware...
 * Very nice hardware, indeed.  So, with a few measurements, one will
 * get a full curve for each channel for the thresholds.
 *
 * The threshold measurements for determining noise-cutting
 * thresholds should of course be done with the pulser off!
 *
 */

/* Now, one thing to think about when searching for the silence
 * (i.e. the threshiold above which we see no noise (or pulses, if
 * pulser running), is that if beam is on, and the chambers would be
 * in the beam (not intended), but also with reactions we might have
 * rather high rates such that perhaps we get spurious counts at
 * higher thresholds that actually are real signals.  So need to
 * exercise a certain caution there...
 */





// This data structure is only used for small array, so can waste
// space (full integers -- fast)

struct thr_count_t
{
  int   threshold;
  float fraction;

  float min, max;
} thr_counts;

const float pt_fractions[5] = { 0.977f, 0.841f, 0.500f, 0.159f, 0.023f };

#define LOW_END_FRACTION      0.9995 // on lost count of 4096 will trigger
#define HIGH_END_FRACTION     0.002  // on lost count of 4096 will trigger

int cros3_compare_double(const void* a,const void* b)
{
  if (*((const double*) a) < *((const double*) b))
    return -1;
  return *((const double*) a) > *((const double*) b);
}

void
cros3_examine_threshold_curve(cros3_threshold_stat *measurement,
			      cros3_threshold_ch   *data,
			      cros3_thr_info       *info)
{
  // Examine the data for a certain channel, as in data

  // Compact the data, to threshold-count pairs, leaving all
  // unmeasured data alone

  thr_count_t  c[256];
  thr_count_t *ce = c;
  thr_count_t *p;

  thr_count_t *cl = NULL;
  thr_count_t *ch = NULL;
  
  int i;

  for (i = 0; i < 256; i++)
    if (data->data[i].max_counts)
      {
	ce->threshold = i;
	ce->fraction  = 
	  (float) ((double) data->data[i].counts /
		   (double) data->data[i].max_counts);
	
	printf ("%3d: %7d/%7d=%7.5f\n",i,
		data->data[i].counts,
		data->data[i].max_counts,
		ce->fraction);
	
	ce++;
      }

  printf ("data points: %d\n",(int) (ce-c));

  info->_info = 0;
  info->_low_end_threshold  = -1; // unknown
  info->_high_end_threshold = -1; // unknown

  if (ce == c)
    {
      info->_info |= CROS3_THR_INFO_NO_DATA;
      return;
    }

  if (ce < c + 16)
    {
      // Too little data to make any sense
      info->_info |= CROS3_THR_INFO_TOO_LITTLE_DATA;
      return;
    }
  
  // When a wire is ringing (at all thresholds, basically meaning it's
  // rather digital noise somewhere), it will (when looking from above)
  // show some (quite steady) non-zero values, but not 1.0 .  as an
  // additional pain, they also seem to move sometimes with threshold,
  // i.e. like:

  // 12: 1023750/1023750=1.00000
  // 13: 1023750/1023750=1.00000
  // 14:    9495/1023750=0.00927
  // 15:   10872/1023750=0.01062
  // 16:   11160/1023750=0.01090
  // 20:   12169/1023750=0.01189
  // 24:   13173/1023750=0.01287
  // 28:   14178/1023750=0.01385
  // 32:   15185/1023750=0.01483
  // 36:   16187/1023750=0.01581
  // 40:   17188/1023750=0.01679
  // 44:   18189/1023750=0.01777
  // 48:   19189/1023750=0.01874
  // 52:   20192/1023750=0.01972
  // 56:   21194/1023750=0.02070
  // 60:   22196/1023750=0.02168

  // which of course does not simplify things, to work around this,
  // we'll try to see if we can find a feature like this, and then
  // rescale the data, such that this ringing goes -> 0

  // either case, we'll work our way from above and go downwards.  one
  // way would be to fit a line for segments of perhaps 10 thresholds
  // and see if we're fitting it.  hmm, not to bad perhaps.  we could
  // also take three bunches of 4 each time (looking at 12 consecutive)
  // and then, make the mean and std deviation of them.  If any has a
  // std devition much larger than the other two, we abort.  If any

{
  double last_ring_max_diff2 = 0;
  int    best_ring_end_threshold = -1; 
  double best_ring_y0 = 0; // to make compiler happy
  double best_ring_dydx = 0; // to make compiler happy
  double best_ring_frac_to_last_max_diff = 1;
  int    allow_use_ring_param = 0;

  for (p = ce - 10; p >= c; p--)
    {
      // for us to assume to be ringing, then all values we look at must
      // be non-0

      double sum = 0, sum_x = 0, sum_y = 0, sum_x2 = 0, sum_xy = 0;
      int ringing_thr = 0;

      for (i = 0; i < 10; i++)
	{
	  if (p[i].fraction > HIGH_END_FRACTION &&
	      p[i].fraction < LOW_END_FRACTION)
	    ringing_thr++;

	  double x = p[i].threshold;
	  double y = p[i].fraction;

	  sum_x  += x;    
	  sum_y  += y;    
	  sum_x2 += x*x;
	  sum_xy += x*y;
	}

      sum = 10;

      if (ringing_thr < 8)
	continue; // this does not look like ringing to me...

      double div = sum_x * sum_x  - sum   * sum_x2;
      double a   = sum_x * sum_xy - sum_y * sum_x2;
      double b   = sum_x * sum_y  - sum   * sum_xy;

      double dydx = b / div;
      double y0   = a / div;

      // then, we want to find out the average and worst deviations from
      // the straight line fit we have...

      double y_diff2[10], y_diff2_sorted[10];

      for (i = 0; i < 10; i++)
        {
          double x = p[i].threshold;
          double y = p[i].fraction;

	  double y_line = y0 + x * dydx;

	  double y_diff = y - y_line;

	  y_diff2[i] = y_diff * y_diff;
	}

      memcpy(y_diff2_sorted,y_diff2,sizeof(y_diff2_sorted));

      qsort(y_diff2_sorted,10,sizeof(y_diff2_sorted[0]),cros3_compare_double);

      if (y_diff2[0] > HIGH_END_FRACTION)
	break;

      if (y_diff2_sorted[8] > HIGH_END_FRACTION)
	continue;

      /*
      for (i = 0; i < 10; i++)
	printf (" %11.9f",sqrt(y_diff2_sorted[i]));
      printf ("\n");
      */
      /*
      printf ("Ringing search [%3d - %3d] : y0=%7.5f dydx=%7.5f (max_d2_frac=%5.3f)\n",
	      p[0].threshold,p[9].threshold,y0,dydx,
	      y_diff2_sorted[7] / last_ring_max_diff2);
      */
      double frac_to_last_max_diff = y_diff2_sorted[7] / last_ring_max_diff2;

      if (frac_to_last_max_diff < 10 &&
	  frac_to_last_max_diff < best_ring_frac_to_last_max_diff * 10)
	{
	  // We seem to be good enough to be a candidate for figuring
	  // out good correction parameters

	  allow_use_ring_param++;

	  if (allow_use_ring_param > 3)
	    {
	      best_ring_end_threshold = p[9].threshold;
	      best_ring_y0 = y0;
	      best_ring_dydx = dydx;
	      best_ring_frac_to_last_max_diff = best_ring_frac_to_last_max_diff;
	      
	      //printf ("*\n");
	    }
	}
      else
	allow_use_ring_param = 0;


      last_ring_max_diff2 = y_diff2_sorted[9];

    }

  if (best_ring_end_threshold > 0)
    {
      printf ("Ringing search [... - %3d] : y0=%7.5f dydx=%7.5f\n",
              best_ring_end_threshold,
	      best_ring_y0,best_ring_dydx);

      // so, we'll rewrite the data, and cut it off at the ring
      // threshold, and hope that the routines below will be able to
      // figure the real noise threshold out...

      for (p = c; p < ce; p++)
	{
	  if (p->threshold > best_ring_end_threshold)
	    {
	      // cut the data here...
	      ce = p;
	      break;
	    }

          double x = p->threshold;
          double y = p->fraction;

          double y_line = best_ring_y0 + x * best_ring_dydx;

	  // y_line is our new zero

	  if (y < y_line)
	    p->fraction = 0;
	  else
	    p->fraction = (float) ((y - y_line) / (1 - y_line));

	  printf ("%3d: %7.5f -> %7.5f (%7.5f)\n",
		  p->threshold,y,p->fraction,
		  (y - y_line) / (1 - y_line));
	}

      info->_ring_y0 = best_ring_y0;
      info->_info |= CROS3_THR_INFO_RINGING;
    }



  ;
}







  // First walk from below, and find out where the threshold curve
  // starts to move.  For this we operate on maximum of three, and
  // trigger the decision as soon as we are below max_counts-2.

  int had_noise = 0;

  for (p = c + 2; p < ce; p++)
    {
      float m = p[-2].fraction;

      if (p[-1].fraction > m)	m = p[-1].fraction;
      if (p[0].fraction > m)	m = p[0].fraction;

      if (m < LOW_END_FRACTION)
	{
	  if (had_noise)
	    {
	      printf ("low threshold: %d\n",p[-2].threshold);
	      info->_low_end_threshold = p[-2].threshold;
	      cl = p-3;
	    }
	  else
	    {
	      printf ("low--no noise\n");
	      info->_info |= CROS3_THR_INFO_NO_NOISE;
	      // We did not see any full noise (full counts) before
	      // the counts began to drop
	    }
	  goto found_low_end;
	}

      // We have seen at least one data-point that has noise value
      
      had_noise = 1;
      info->_info |= CROS3_THR_INFO_NOISE_SEEN;
    }

  printf ("low--all noise\n");

  // We reached the end without seeing the count rate dropping,
  // channel is extremely noisy (or the measurement does not go far
  // enough)

  info->_info |= CROS3_THR_INFO_NO_SILENCE;

 found_low_end:
  // All is well with the low end, or at least we have figured it out

  // Now comes the much more tricky part of finding the high end,
  // without getting fooled by some random noise.  Particularly if we
  // have averaged data from many measurements, we might have a fairly
  // flat level of the data.  Still...  Lets say there is some intense
  // beam.  The chambers anyhow does not like MHz of beam, so it can
  // only be kHz or so, at least per wire.  And the sampling goes with
  // MHz speed, so then real hits should only be responsible for some
  // 1 per-mille anyhow.

  // We'll here compare the difference between the minimum of two
  // consequtive stretches of three measurements.  When the previous
  // measurement has a higher rate by 1 per-mille or so, we declare
  // the silence to have ended (most likely this is real overkill, and
  // just the same routine as above would be enough).  Yes, declare it
  // overkill an trigger as soon as we are above 2 per-mille.

  int had_silence = 0;

  for (p = ce - 3; p >= c; p--)
    {
      float m = p[2].fraction;

      if (p[1].fraction < m) m = p[1].fraction;
      if (p[0].fraction < m) m = p[0].fraction;

      if (m > HIGH_END_FRACTION)
	{
	  if (had_silence)
	    {
	      printf ("high threshold: %d\n",p[2].threshold);
	      info->_high_end_threshold = p[2].threshold;
	      ch = p+3;
	    }
	  else
	    {
	      printf ("high--no silence\n");
	      info->_info |= CROS3_THR_INFO_NO_SILENCE;
	      // We did not see any silence (empty counts) before
	      // the counts began to increase
	    }
	  goto found_high_end;
	}

      // We have seen at least one data-point that has noise value
      
      had_silence = 1;

      info->_info |= CROS3_THR_INFO_SILENCE_SEEN;
    }

  printf ("high--all silence\n");

  // We reached the end without seeing the count rate dropping,
  // channel is extremely noisy (or the measurement does not go far
  // enough)

  info->_info |= CROS3_THR_INFO_NO_SILENCE;

 found_high_end:
  // See if the noise or silence missing is due to too limited
  // measurement range

  if (info->_info & CROS3_THR_INFO_NO_NOISE)
    {
      if (c[0].threshold != 0)
	{
	  printf ("low--low end missing\n");
	  // We did not start as early as possible, might be cause
	  info->_info |= CROS3_THR_INFO_LOW_MISS;
	}
    }

  if (info->_info & CROS3_THR_INFO_NO_SILENCE)
    {
      if (ce[-1].threshold != 255)
	{
	  printf ("high--high end missing\n");
	  // We did not stop as late as possible, might be cause
	  info->_info |= CROS3_THR_INFO_HIGH_MISS;
	}
    }

  // Now, if both low and high ends are there, we might try to
  // investigate where the 5%, 50% and 95% levels are, since these
  // will give a better characterisation of the curve.

  // Hmm, if we choose it as 2.5% and 97.5%, and additionally assume
  // that by differentiating the threshold curve one would get an
  // gaussian 'distribution' (i.e. that the threshold curve is the
  // error function), we can then claim to have the the points at each
  // 2 sigma away from the mean.

  // Now, if the measurment was close enough to the edge, one may
  // anyhow try to find these locations.  But there is nothing
  // complicated at all with doing a complete measurment, so I will
  // not encourage the oppsosite behaviour!

  // The requirement cl && ch is redundant, but there for safety

  if ( (info->_info & (CROS3_THR_INFO_NOISE_SEEN | CROS3_THR_INFO_SILENCE_SEEN)) &&
      !(info->_info & (CROS3_THR_INFO_NO_NOISE   | CROS3_THR_INFO_NO_SILENCE)) &&
       cl && ch)
    {
      // So, we have the variation from high to low counts (fractions)
      // from cl to ch (inclusive).  In order to get a monotonically
      // decreasing count rate, we'll set up two more lists.  One
      // starting from above with the maximum seen so far, and one
      // starting from below with the minimum seen so far.  Then for
      // each index we have a maximum and a minimum value

      // When the curve is monotonic by itself, the min and max curves
      // will be the curve, otherwise they will look like this

      // --          xx          ii                 
      //   -           x           i     
      //    -           x      	    i    
      //      -          xx   	      -  
      //     -           -     	     ii  
      //       --          xx          ii
      
      printf ("\n");

      // We'll the re-define the curve as the mean of the min and max

      float min_val = cl->fraction;

      for (p = cl; p <= ch; p++)
	{
	  if (p->fraction < min_val)
	    min_val = p->fraction;

	  p->min = min_val;
	}

      float max_val = ch->fraction;

      for (p = ch; p >= cl; p--)
	{
	  if (p->fraction > max_val)
	    max_val = p->fraction;

	  p->max = max_val;
	}

      for (p = cl; p <= ch; p++)
	{
	  p->fraction = 0.5f * (p->min + p->max);

	  printf ("%3d: (%7.5f,%7.5f) %7.5f\n",
		  p->threshold,
		  p->min,p->max,
		  p->fraction);
	}

      // Now the fractions are monotonically decreasing, we can easily
      // look for our points of interest

      // Now, this will look through the data 5 times, once per point
      // to find, but who cares

      float  pt_threshold[5];
      uint32 valid = 0;

      for (int find_pt = 0; find_pt < 5; find_pt++)
	{
	  thr_count_t *pl = cl;
	  thr_count_t *ph = ch;

	  while (pl < ch && pl[ 1].fraction > pt_fractions[find_pt])
	    pl++;
	  while (ph > cl && ph[-1].fraction < pt_fractions[find_pt])
	    ph--;
	  /*
	  printf ("%3d - %3d | %7.5f - %7.5f : %7.5f\n",
		  pl->threshold,ph->threshold,
		  pl->fraction, ph->fraction,
		  pt_fractions[find_pt]);
	  */
	  if (pl->fraction >= pt_fractions[find_pt] &&
	      ph->fraction <= pt_fractions[find_pt])
	    {
	      // p[0].fraction > pt_fractions[find_pt] > p[0].fraction
	      // (p[0].fraction may be == p[1].fraction)

	      double dfraction  = pl->fraction  - ph->fraction;
	      int    dthreshold = ph->threshold - pl->threshold; 

	      if (dfraction > 0.00001)
		pt_threshold[find_pt] =
		  (float) (pl->threshold +
			   dthreshold * (pl->fraction - 
					 (double) pt_fractions[find_pt]) /
			   dfraction);
	      else
		pt_threshold[find_pt] =
		  (float) (pl->threshold + 0.5 * dthreshold);
	      
	      valid |= 1 << find_pt;

	      printf ("%7.5f : %7.5f\n",
		      pt_fractions[find_pt],
		      pt_threshold[find_pt]);
	    }
	}

      // So, now we should have five measurement points.  We can then
      // guesstimate the mean value, and the sigma

      if (valid == 0x001f)
	{
	  double mean = (pt_threshold[0] + pt_threshold[1] + 
			 pt_threshold[2] + pt_threshold[3] + pt_threshold[4])/5;
	  double sigma = (0.25*(pt_threshold[4] - pt_threshold[0]) + 
			  0.5*(pt_threshold[3] - pt_threshold[1]))/2;
	  
	  printf ("m=%7.5f s=%7.5f\n",mean,sigma);
	  
	  info->_mean  = mean;
	  info->_sigma = sigma;
	  
	  info->_info |= CROS3_THR_INFO_OK;
	}
      else
	{
	  // One or more points missing
	  printf ("interpolation failed, got %02x of %02x\n",valid,0x01f);
	  info->_info |= CROS3_THR_INFO_INTERP_FAIL;
	}

    }

}





