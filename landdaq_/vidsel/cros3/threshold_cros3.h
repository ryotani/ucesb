

#ifndef __THRESHOLD_CROS3_H__
#define __THRESHOLD_CROS3_H__

// For each channel, each threshold, we keep a cumulative of both the
// number of counts registered, and the total number of counts that we
// can have registered (statistics sum).  That way, you can store the
// cumulative of (at most 16) measurements into the data structure
// without overflowing.  So, if you like, you can let the system do
// several measurements, and they will get averaged.

// be careful to put maxcounts to 4095 and not 4096 for the highest
// mode, as that cannot store 0x1000 hits, but only 0xfff

typedef struct cros3_count_max_count_t
{
  uint32 counts;
  uint32 max_counts;
} cros3_count_max_count;

typedef struct cros3_threshold_ch_t
{
  cros3_count_max_count data[256];
} cros3_threshold_ch;


typedef struct cros3_threshold_stat_t
{
  cros3_threshold_ch data[256]; // channels

  uint32 max_counts;  // statistics
} cros3_threshold_stat;

#define CROS3_THR_INFO_OK           0x0001 // thresholds look sane
		       				    
#define CROS3_THR_INFO_NOISE_SEEN   0x0002 // have seen noise
#define CROS3_THR_INFO_SILENCE_SEEN 0x0004 // have seen silence
		       				    
#define CROS3_THR_INFO_NO_NOISE     0x0010 // cannot find the noise
#define CROS3_THR_INFO_LOW_MISS     0x0020 // low (thr) data not
		       		    	   // measured (can cause
		       		    	   // above)
#define CROS3_THR_INFO_NO_SILENCE   0x0040 // cannot find silence
		       		    	   // (i.e. channel seems
		       		    	   // NOISY)
#define CROS3_THR_INFO_HIGH_MISS    0x0080 // high (thr) data not
		       		    	   // measured (can cause above)
#define CROS3_THR_INFO_NO_DATA      0x0100 // no data at all
#define CROS3_THR_INFO_TOO_LITTLE_DATA 0x0200 // to little data to make sense
#define CROS3_THR_INFO_INTERP_FAIL  0x0400 // interpolation failed
#define CROS3_THR_INFO_RINGING      0x0800 // ringing found (worked around)

typedef struct cros3_thr_info_t
{
  uint32 _info;

  int _low_end_threshold;
  int _high_end_threshold;

  double _mean;
  double _sigma;  

  double _ring_y0;

} cros3_thr_info;

#define STORE_CROS3_THR(trc,thr,wire,count,max_count) { \
  trc->data[wire].data[thr].counts     += count;        \
  trc->data[wire].data[thr].max_counts += max_count;    \
}

#endif//__THRESHOLD_CROS3_H__

