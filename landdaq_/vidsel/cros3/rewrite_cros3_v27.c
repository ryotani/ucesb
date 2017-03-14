
#if defined(_TMS320C6X)
#include <stdlib.h>

typedef unsigned char          uint8;
typedef unsigned short         uint16;
typedef unsigned int           uint32;
typedef unsigned long long int uint64;

#define STORE_BUFFER_PARAM
#define STORE_BUFFER_ARG
#define STORE_TRC_PARAM
#define STORE_WIRE_HIT(wire,lead)
#define STORE_WIRE_HIT_TOT(wire,lead,trail)
#define STORE_TRC_COUNTS(threshold,wire,counts,max_counts)
#endif

#include "rewrite_cros3_v27.h"

/* Header format:
 *
 * 0x0000ffff   Total number of 32-bit data words following (not 
 *              including the two headers) (good for skipping)
 *
 * 0x000f0000   Rewrite encode mode: 0b0001  1=TRC, 
 *                                   0b0100  4=leading+trailing edge
 *                                   0b0110  6=leading edge
 *
 * 0x00f00000   Trigger time (4)
 * 0x0f000000   CROS3 ID     (4)
 * 0xf0000000   local evtcnt (4)
 *
 * Second header:
 *
 * 0x00000003   CSR_TRC:RDM  (2) Read-out mode (0=TRC,1=ToT,2=LER,3=LEE)
 * 0x00000010   CSR_TRC:TPW  (1) Pulser enable
 * 0x00000700   CSR_TRC:RDS  (3) Statistics (for TRC mode)
 * 0x00000800   CSR_TRC:edge (1) Read-out tot (both edges)
 * 0x000ff000   CSR_DRC:slices (8)
 * 0x00f00000   CSR_DRC:scale  (2)
 * 0x10000000   odd (number of 16 bit data words)
 */

/* Worst case scenario for event-wise data:  For all 256 wires, storing
 * leading and trailing edge, with checker-board pattern, i.e. 128 up
 * 128 down.  -> 256*128 32 bit data words = 0x8000, 0x20000 bytes.
 *
 * If the incoming raw (unencoded) leading edge data is broken, and
 * has all ones, then that one will need to store 256*256 16-bit data words,
 * i.e. 0x10000 16 bit data words, which is 0x8000 32 bit data words.
 *
 * Basically, it also in that case not be worse than 256*128 but we
 * cannot guarantee that the incoming data isn't broken, unless we
 * check against that.
 */

/* Output format, TRC (statistics counts)
 *
 * Second header
 *
 * 0x00000003   CSR_TRC:RDM  (2) Read-out mode (0=TRC,1=ToT,2=LER,3=LEE)
 * 0x00000010   CSR_TRC:TPW  (1) Pulser enable
 * 0x00000700   CSR_TRC:RDS  (3) Statistics (for TRC mode)
 * 0x00000800   CSR_TRC:edge (1) Read-out tot (both edges)
 * 0x000ff000   Start threshold     (CSR_THC  7:0)
 * 0x00f00000   Threshold step size (CSR_THC 11:8)
 * 0x1f000000   Number of ad16 boards with data.
 *
 * 32 bit header once per ad16
 *
 * 0x000000ff   Test pulse amplitude odd channels
 * 0x0000ff00   Test pulse amplitude even channels
 * 0x00ff0000   Total number of thresholds stored.
 * 0xf0000000   ad no  (DEV_ID)
 *
 * 16-bit data as copied from the original data
 *
 *  0x0fff   statistics
 *  0xf000   wire no
 *
 * The 16-bit data is copied such that it retains original order
 * (i.e. the ordering is loop over thresholds ( loop over wires ),
 * such that low half of each 32-bit word contain wire i, and high
 * part wire i+1.
 */




/* Output format, encoded data (leading edge).
 *
 * 16 bit data words
 *
 *  0x00ff   start slice
 *  0xff00   wire no, can also be view as:
 * (0xf000)  ad no  (DEV_ID)
 * (0x0f00)  wire no within ad  (#wire)
 *
 * In case of uneven number of 16 bit data words, padding will be
 * appended: 0x00ff .  The padding will always be appended such that
 * it ends up in the high 16 bits of the 32-bit data word.  So to
 * outside world, all data is 32 bits!
 *
 * Note: the header counter of 16 bit data words will in this case not
 * include the padding!!!
 *
 * The data can be read as being 32-bit, with two data items per data
 * word (expect single one at the end).  There is no guarantee about
 * the ordering.  (Original order is slice, then wire, but this may
 * then be scrambled.)
 */

/* Output format, re-encoded data (leading and trailing edge)
 *
 * 32 bit data words:
 *
 *  0x000000ff   start slice
 *  0x00ff0000   end slice (1 beyond end)  (end-start gives length)
 *  0x0000ff00   wire no, can also be view as:
 * (0x0000f000)  ad no  (DEV_ID)
 * (0x00000f00)  wire no within ad  (#wire)
 */

// only using a char, as this indexes better when the architecture cannot
// scale a pointer offset (like PowerPC)
//                            0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15
const char remap_wire[16] = { 0, 2, 4, 6, 1, 3, 5, 7, 8,10,12,14, 9,11,13,15 };
/*
const char remap_wire[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15 };
*/



#ifndef CROS3_ERROR
#define CROS3_ERROR(error,found) do { \
  status->error_code = error;         \
  status->error_aux  = found;         \
} while (0)
#endif

#define CHECK_MARKER(dw,mask,value,error) do { \
  if (((dw) & (mask)) != (value)) {            \
    CROS3_ERROR(error,(dw));                   \
    goto had_error;                            \
  }                                            \
} while (0)

#define CHECK_PRECALC(name,mask,error) do {       \
  if (((name) & (mask)) != check->precalc.name) { \
    CROS3_ERROR(error,(name));                    \
    goto had_error;                               \
  }                                               \
} while (0)

void cros3_precalc_ccb(rw_cros3_check *check)
{
  check->precalc.ch1 = (uint16) (0xab00 | ( check->orig.csr_den       & 0xff));
  check->precalc.ch2 = (uint16) (0xa000 | ((check->orig.csr_den >> 8) & 0xff));
  check->precalc.ch3 = (uint16) (0xa000 | ( check->orig.csr_ini       & 0xff) |
				 ((check->orig.ccb_id << 8) & 0x0f00));
  check->precalc.ch4 = (uint16) (0xa000 | ((check->orig.csr_ini >> 8) & 0xff));

  check->precalc.ch1_empty = (uint16) (0xaf00 | ( check->orig.csr_den & 0xff));
}

void cros3_precalc_curve(rw_cros3_check *check)
{
  cros3_precalc_ccb(check);

  check->precalc.ad1 = (uint16) (0xc000 | ( check->orig.trc          & 0xf13));
  check->precalc.ad2 = (uint16) (0xc000 | ( check->orig.curve.thc    & 0xfff));
  check->precalc.ad3 = 0xc000;
  check->precalc.ad4 = 0xc000;
}

void cros3_precalc_data(rw_cros3_check *check)
{
  cros3_precalc_ccb(check);

  // 0x813 would have been enough for trc if one sets statistics to 0
  // for data read-out

  check->precalc.ad1 = (uint16) (0xc000 | ( check->orig.trc          & 0xf13));
  check->precalc.ad2 = (uint16) (0xc000 | ( check->orig.data.drc     & 0x3ff));
  check->precalc.ad3 = 0xc000;
  check->precalc.ad4 = 0xc000;
}

const int trig_time_valid[16] = { 1,0,0,0, // 0 is program trigger
				  0,0,0,0,
				  1,1,1,1, // 8-11 are clock phase 0,90,180,270
				  0,0,0,0 };

uint16 *
cros3_check_ccb_header(uint16 *restrict src,uint16 *end,
		       uint32 *restrict header,
		       rw_cros3_check *restrict check,
		       rw_cros3_status *restrict status)
{
  uint16 ch1, ch2, ch3, ch4;

  uint16 trig_time;
  uint16 ccb_id;
  uint16 trig_no;

  if (src + 4 > end)
    {
      CROS3_ERROR(CROS3_DATA_ERR_CCB_HEADER_NOSPACE,(int) (end-src));
      goto had_error;
    }

  ch1 = *(src++);

  CHECK_PRECALC(ch1,0xffff,CROS3_DATA_ERR_CH1);  

  ch2 = *(src++);

  CHECK_PRECALC(ch2,0xf0ff,CROS3_DATA_ERR_CH2);  

  trig_time = (uint16) ((ch2 & 0x0f00) >> 8);

  if (!trig_time_valid[trig_time])
    {
      CROS3_ERROR(CROS3_DATA_ERR_CCB_HEADER_TRIG_TIME,trig_time);
      goto had_error;
    }

  ch3 = *(src++);

  CHECK_PRECALC(ch3,0xffff,CROS3_DATA_ERR_CH3);  

  ccb_id = (uint16) ((ch3 & 0x0f00) >> 8);

  ch4 = *(src++);

  CHECK_PRECALC(ch4,0xf0ff,CROS3_DATA_ERR_CH4);  

  status->ch4_trig_no = (ch4 & 0x0f00);

  trig_no = (uint16) ((ch4 & 0x0f00) >> 8);

  *header = (trig_time << 20) | (ccb_id << 24) | (trig_no << 28);

  return src;

 had_error:

  return NULL;
}

uint16 *
cros3_check_ad_header(uint16 *restrict src,uint16 *end,
		      rw_cros3_check *restrict check,
		      rw_cros3_status *restrict status,
		      uint16 *restrict ad_id,
		      uint16 *restrict test_thres_1,
		      uint16 *restrict test_thres_2)
{
  uint16 ad1, ad2, ad3, ad4;
  uint16 ad16_bit;

  // uint16 trig_time;
  // uint16 ccb_id;
  // uint16 trig_no;

  if (src + 4 > end)
    {
      CROS3_ERROR(CROS3_DATA_ERR_AD_HEADER_NOSPACE,(int) (end-src));
      goto had_error;
    }

  ad1 = *(src++);

  CHECK_PRECALC(ad1,0xffff,CROS3_DATA_ERR_AD1);  

  ad2 = *(src++);

  CHECK_PRECALC(ad2,0xffff,CROS3_DATA_ERR_AD2);  

  // trig_time = (ad2 & 0x0f00) >> 8;

  ad3 = *(src++);

  CHECK_PRECALC(ad3,0xf000,CROS3_DATA_ERR_AD3);  

  *ad_id = (uint16) ((ad3 & 0x0f00) >> 8);
  *test_thres_1 = (ad3 & 0x00ff);

  ad16_bit = (uint16) (1 << *ad_id);

  if (status->ad16_seen & ad16_bit)
    {
      CROS3_ERROR(CROS3_DATA_ERR_AD_BOARD_SEEN_TWICE,ad3);
      goto had_error;
    }

  status->ad16_seen |= ad16_bit;

  ad4 = *(src++);

  CHECK_PRECALC(ad4,0xf000,CROS3_DATA_ERR_AD4);  

  if ((ad4 & 0x0f00) != status->ch4_trig_no)
    {
      CROS3_ERROR(CROS3_DATA_ERR_AD_TRIG_NO_MISMATCH,ad4);
      goto had_error;
    }

  *test_thres_2 = (ad4 & 0x00ff);

  // header = trig_time | (trig_no << 4) | (ccb_id << 4);

  return src;

 had_error:

  return NULL;
}

uint16 *
cros3_check_ccb_trailer(uint16 *restrict src,uint16 *start,uint16 *end,
			rw_cros3_status *restrict status)
{
  uint16 ct1;
  uint16 ct2;
  uint16 words;
  size_t length;

  if (src + 2 > end)
    {
      CROS3_ERROR(CROS3_DATA_ERR_TRAILER_NOSPACE,(int) (end-src));
      goto had_error;
    }

  ct1 = *(src++);

  CHECK_MARKER(ct1,0xff00,0xde00,CROS3_DATA_ERR_CT1);

  ct2 = *(src++);

  CHECK_MARKER(ct1,0xff00,0xde00,CROS3_DATA_ERR_CT2);

  words = (uint16) ((ct1 & 0x00ff) | ((ct2 & 0x00ff) << 8));

  length = src - start;

  if (length != words)
    {
      CROS3_ERROR(CROS3_DATA_ERR_WORD_COUNT,words);
      goto had_error;
    }

  // If we read an odd number of 16 bit words, there will be
  // one word of padding

  if (length & 1)
    {
      uint16 pad;
  
      if (src >= end)
	{
	  CROS3_ERROR(CROS3_DATA_ERR_TRAILER_PAD_NOSPACE,(int) (end-src));
	  goto had_error;
	}
      
      pad = *(src++);

      CHECK_MARKER(pad,0xffff,0x0000,CROS3_DATA_ERR_PAD);
    }

  return src;

 had_error:

  return NULL;
}

uint16 *
cros3_check_ccb_header_empty(uint16 *restrict src,uint16 *end,
			     uint32 *restrict header,
			     rw_cros3_check *restrict check,
			     rw_cros3_status *restrict status)
{
  uint16 ch1_empty, ch2, ch3, ch4;

  uint16 trig_time;
  uint16 ccb_id;
  uint16 trig_no;

  if (src + 4 > end)
    {
      CROS3_ERROR(CROS3_DATA_ERR_CCB_HEADER_NOSPACE,(int) (end-src));
      goto had_error;
    }

  ch1_empty = *(src++);

  CHECK_PRECALC(ch1_empty,0xffff,CROS3_DATA_ERR_CH1);  

  ch2 = *(src++);

  CHECK_PRECALC(ch2,0xf0ff,CROS3_DATA_ERR_CH2);  

  trig_time = (uint16) ((ch2 & 0x0f00) >> 8);

  if (!trig_time_valid[trig_time])
    {
      CROS3_ERROR(CROS3_DATA_ERR_CCB_HEADER_TRIG_TIME,trig_time);
      goto had_error;
    }

  ch3 = *(src++);

  CHECK_PRECALC(ch3,0xffff,CROS3_DATA_ERR_CH3);  

  ccb_id = (uint16) ((ch3 & 0x0f00) >> 8);

  ch4 = *(src++);

  CHECK_PRECALC(ch4,0xf0ff,CROS3_DATA_ERR_CH4);  

  status->ch4_trig_no = (ch4 & 0x0f00);

  trig_no = (uint16) ((ch4 & 0x0f00) >> 8);

  *header = (trig_time << 20) | (ccb_id << 24) | (trig_no << 28);

  return src;

 had_error:

  return NULL;
}


uint32 *
cros3_rewrite_empty(uint16 * restrict src,uint16 *end,
		    uint16 ** src_end,
		    rw_cros3_check * restrict check,
		    rw_cros3_status * restrict status,
		    uint32 * restrict dest)
{
  uint16 *start = src;

  // There is an undocumented data format, beginning with
  // 0xaf which seem to be used when there is no data,
  // i.e. expect only header and trailer

  if ((src = cros3_check_ccb_header_empty(src,end,dest,check,status)) == NULL)
    goto had_error;

  if ((src = cros3_check_ccb_trailer(src,start,end,status)) == NULL)
    goto had_error;

  *src_end = src;

  dest++; // count=0, format=0 (empty)
  *(dest++) = 0; // dummy second header
  
  return dest;

 had_error:
  ;

  *src_end = src;

  return NULL;
}

uint32 *
cros3_rewrite_le_encoded(uint16 * restrict src,uint16 *end,
			 uint16 ** src_end,
			 rw_cros3_check * restrict check,
			 rw_cros3_status * restrict status,
			 uint32 * restrict dest
			 STORE_BUFFER_PARAM)
{
  uint16 *start = src;
  uint16 *dest16;
  uint32 *dest_start = dest;

  if (src < end && ((*src) & 0xff00) == 0xaf00)
    return cros3_rewrite_empty(src,end,src_end,check,status,dest);

  if ((src = cros3_check_ccb_header(src,end,dest,check,status)) == NULL)
    goto had_error;

  // Before we read the data from the ad16 blocks, we make sure that we
  // have one ad16 block, and copy any needed reference data from
  // it that the other will be checked against.

  dest++;
  *(dest++) = ( ( check->orig.trc          & 0xf13) |
	       (( check->orig.data.drc     & 0x3ff) << 12));
  
  // This is somewhat ugly, but does help against a lot of checking
  // that we do not follow our pointers beyond the end of data...:
  //
  // Make sure that the last data-word is marked to be a trailer!
  // actually, since the last 16 bit word might be 0000-padding, we
  // test the last-1 data word.  This should also be a trailer.
  // both trailers have 0xde00 fixed
  
  if ((*(end-2) & 0xff00) != 0xde00)
    {
      CROS3_ERROR(CROS3_DATA_ERR_NO_TRAILER_MARKER_AT_END,*(end-1));
      goto had_error;
    }
    
  // Now, we can look at the data words, one by one.  We are guaranteed
  // to break out at the loop due to finding the last one to be a non-
  // ad16 header or data word
  
  // printf ("- %d -------------------------\n",check->orig.ccb_id);

  dest16 = (uint16 *) dest;
      
  for ( ; ; )
    {
      uint16 fixed;
      uint16 ad_id;
      uint16 thres1, thres2;
      int prev_data;
      
      // check if we have another ad16 header

      if ((*src & 0xf000) != 0xc000)
	break;

      if (!cros3_check_ad_header(src,end,check,status,&ad_id,&thres1,&thres2))
	goto had_error;
      
      // We have data for ad @adno
      
      src += 4;
      
      fixed = (uint16) (ad_id << 12);
      
      // This loop is horrible.  The control flow depends on the
      // just loaded data, i.e. has many delay slots...  The dsp
      // compiler need to be told that it's ok to speculatively
      // load data values ahead of time from the array.  If this
      // is not possible, at least one can above make sure that
      // actually the both last words of data in the event are
      // footer data words.  Then we could ourselves load at least
      // two data values per cycle, and do part of the speculation
      // ourselves...  I.e. break the loop if the second data
      // value is not a proper data value, and handle the first
      // value by only storing it it needed (so #if 0'ed version
      // below)

      prev_data = -1;

      for ( ; ; )
	{
          int daq_wire, wire;
	  int value;
	  
	  int data = *(src++);

#if 0
	  // The important part is the avoidance of conditional
	  // control flow.  Conditional storing of a value is fine for
	  // the dsp
          for ( ; ; )
            {
              int data1 = *(src++);
              int data2 = *(src++);
          
              int wire1  =  data1 & 0x000f;
              int value1 = (data1 & 0x0ff0) >> 4;
        
              if ((data1 & 0xf000) != 0x0000)
		*(dest16++) = value1 | wire1 << 8 | fixed;

              if ((data2 & 0xf000) != 0x0000)
                break; 
        
              int wire2  =  data2 & 0x000f;
              int value2 = (data2 & 0x0ff0) >> 4;
        
 	      *(dest16++) = value2 | wire2 << 8 | fixed;
            }
#endif
	  if ((data & 0xf000) != 0x0000)
	    break; 
	  
	  if (data <= prev_data)
	    {
	      // This guarantees that i below never goes > 256	      
	      CROS3_ERROR(CROS3_DATA_ERR_ENCODED_DATA_UNORDERED,data);
	      goto had_error;
	    }	    

	  prev_data = data;

	  daq_wire =  data & 0x000f;
	  value    = (data & 0x0ff0) >> 4;
	  wire     = remap_wire[daq_wire];
	  
	  *(dest16++) = (uint16) (fixed | wire << 8 | value);

	  STORE_WIRE_HIT((char) ((ad_id << 4) | wire),(char) value);

	  // printf ("%3d: %3d\n",(ad_id << 4) | wire,value);
	}
      src--; // we read one data word too much
    }
    
  dest = (uint32 *) (((size_t) dest16) & ~0x2);

  if (((size_t) dest16) & 0x2)
    {
      uint16 prev_data = *(dest16-1);

      // We have emitted an odd number of data words
      // Emit the last one as wire 0, time 255
      *(dest++) = 0x00ff0000 | prev_data;    

      *(dest_start+1) |= 0x80000000; // odd number of entries emitted
    }

  *(dest_start) |= (uint32) (0x00060000 /* format*/ | (dest-(dest_start+2)));
    
  if ((src = cros3_check_ccb_trailer(src,start,end,status)) == NULL)
    goto had_error;

  // if (src != end)
  //{
  //CROS3_ERROR(CROS3_DATA_ERR_GARBAGE_AT_END);
  // goto had_error;
  //}


  *src_end = src;

  return dest;

 had_error:
  ;

  *src_end = src;

  return NULL;
}


typedef struct cros3_tot_wires_t
{
  int hits[16][2];       // number of hits per wire, and leading, trailing
  int slice[16][2][256]; // the actual data (only 255 are used, #256 for search algortihm)

  // 32k buffer, most of it never used (wont trash cache too badly)
  // with unsigned char, it would be 8k, but the 256 marker is very nice for the algorithms...
} cros3_tot_wires;





#if !defined(_TMS320C6X)
void
cros3_dump_slices(cros3_tot_wires *hits,int ad_id,int wire)
{
  int edge, i;
  
  for (edge = 0; edge < 2; edge++)
    for (i = 0; i < hits->hits[wire][edge]; i++)
      fprintf (stderr,"wire %3d: %d %3d\n",
	       (ad_id << 4) | wire,edge,hits->slice[wire][edge][i]);
}
#endif

uint32 *
cros3_rewrite_tot_encoded(uint16 * restrict src,uint16 *end,
			  uint16 ** src_end,
			  rw_cros3_check * restrict check,
			  rw_cros3_status * restrict status,
#if CROS3_TOT_ENCODED_DETECT_NOISY_WIRES
			  rw_cros3_tot_noisy * restrict noise_stat,
#endif
			  uint32 * restrict dest
			  STORE_BUFFER_PARAM)
{
  uint16 *start = src;
  uint32 *dest_start = dest;

  if (src < end && ((*src) & 0xff00) == 0xaf00)
    return cros3_rewrite_empty(src,end,src_end,check,status,dest);

  if ((src = cros3_check_ccb_header(src,end,dest,check,status)) == NULL)
    goto had_error;

  // Before we read the data from the ad16 blocks, we make sure that we
  // have one ad16 block, and copy any needed reference data from
  // it that the other will be checked against.

  dest++;
  *(dest++) = ( ( check->orig.trc          & 0xf13) |
	       (( check->orig.data.drc     & 0x3ff) << 12));
  
  // This is somewhat ugly, but does help against a lot of checking
  // that we do not follow our pointers beyond the end of data...:
  //
  // Make sure that the last data-word is marked to be a trailer!
  // actually, since the last 16 bit word might be 0000-padding, we
  // test the last-1 data word.  This should also be a trailer.
  // both trailers have 0xde00 fixed
  
  if ((*(end-2) & 0xff00) != 0xde00)
    {
      CROS3_ERROR(CROS3_DATA_ERR_NO_TRAILER_MARKER_AT_END,*(end-1));
      goto had_error;
    }

#if CROS3_TOT_ENCODED_DETECT_NOISY_WIRES
  noise_stat->events++;
#endif
    
  // Now, we can look at the data words, one by one.  We are guaranteed
  // to break out at the loop due to finding the last one to be a non-
  // ad16 header or data word (0xc != 0x0 and 0x1 and 0xd)
  
  // printf ("- %d -------------------------\n",check->orig.ccb_id);

  // Since the data comes with all leading edges first, and then all
  // trailing edges, we need to unpack into a temporary buffer first so
  // that we can get them sorted out before emitting the data.
  
  // Also, since some edges may be missing (when they are too close),
  // we can check for these things when having the data sorted per
  // wire.  Basically, we only allow for edges to be missing if there
  // was a successfully recorded edge in the slice before it.
  // Checking will be strict!

  for ( ; ; )
    {
      uint32 fixed;
      uint16 ad_id;
      uint16 thres1, thres2;
      int prev_data;

      cros3_tot_wires tmp;
      
      // check if we have another ad16 header

      if ((*src & 0xf000) != 0xc000)
	break;

      if (!cros3_check_ad_header(src,end,check,status,&ad_id,&thres1,&thres2))
	goto had_error;

      memset(tmp.hits,0,sizeof(tmp.hits));
      
      // We have data for ad @adno
      
      src += 4;
      
      fixed = ad_id << 12;
      
      // This loop is horrible.  The control flow depends on the
      // just loaded data, i.e. has many delay slots...  The dsp
      // compiler need to be told that it's ok to speculatively
      // load data values ahead of time from the array.  If this
      // is not possible, at least one can above make sure that
      // actually the both last words of data in the event are
      // footer data words.  Then we could ourselves load at least
      // two data values per cycle, and do part of the speculation
      // ourselves...  I.e. break the loop if the second data
      // value is not a proper data value, and handle the first
      // value by only storing it it needed (so #if 0'ed version
      // below)

      prev_data = -1;

      for ( ; ; )
	{
          int daq_wire, wire;
	  int value;
	  int edge;
	  int i;
	  
	  int data = *(src++);

	  if ((data & 0xe000) != 0x0000)
	    break;

	  if (data <= prev_data)
	    {
	      // This guarantees that i below never goes > 256	      
	      CROS3_ERROR(CROS3_DATA_ERR_TOT_DATA_UNORDERED,data);
	      goto had_error;
	    }	    

	  prev_data = data;
	  
	  daq_wire =  data & 0x000f;
	  value    = (data & 0x0ff0) >> 4;
	  edge     = (data & 0x1000) >> 12;
	  wire     = remap_wire[daq_wire];
	  
	  i = tmp.hits[wire][edge]++;
	  /*
	  if (i >= 255)
	    {
	      // The idea would be that the DSP compiler see's this as
	      // a permenent break out of the loop, and does not screw
	      // up the loop itself
	      CROS3_ERROR(CROS3_DATA_ERR_TOT_256_HITS_IN_ONE_WIRE,data);
	      goto had_error;
	    }
	  */
	  tmp.slice[wire][edge][i] = value;

	  // *(dest16++) = fixed | wire << 8 | value;
	  // STORE_WIRE_HIT((ad_id << 4) | wire,value);
	  // fprintf (stderr,"%3d: (%2d->%2d) %d %3d\n",(ad_id << 4) | wire,daq_wire,remap_wire[daq_wire],edge,value);
	}

      // fprintf(stderr,"\n");

      {
	int wire;

	// Now, loop over the data we got and see what we have...
	
	for (wire = 0; wire < 16; wire++)
	  {
	    //int i;
	    //int prev_trail;

#if 0
	    {

	    int cl[512];
	    int *cl_end = cl;

	    // We basically run over the leading and trailing edge data
	    // in lockstep, finding matching pairs of data

	    int *lead  = tmp.slice[wire][0];
	    int *trail = tmp.slice[wire][1];

	    int *lead_end  = lead + tmp.hits[wire][0];
	    int *trail_end = trail + tmp.hits[wire][1];

	    if (tmp.hits[wire][0] ||
		tmp.hits[wire][1])
	      {
		printf ("w: %d:%2d/%2d :  ",check->orig.ccb_id,ad_id,wire);
		
		for (i = 0; i < tmp.hits[wire][0]; i++)
		  printf ("  l%-3d ",tmp.slice[wire][0][i]);
		for (i = 0; i < tmp.hits[wire][1]; i++)
		  printf ("  t%-3d ",tmp.slice[wire][1][i]);

		printf ("\n");
	      }	  

	    // If we at the start have trailing edges that are before
	    // (any) leading edges, encode them first

	    // Then encode any pairs of data.  End will be the
	    // earliest of the next trailing and leading edge data.

	    // Basically, we may have lost a leading or trailing edge,
	    // if it was in the same slice as another one.  But we
	    // cannot loose a leading or trailing edge in the middle,
	    // i.e.  two leading or trailing edges after each other
	    // indicate failure

	    // So we go through the data, expecting to find the
	    // encodings pairwise, and handle any abnormalities as we
	    // go along.

	    
	    // Do it as a two-stage process.  First we sort the
	    // leading and trailing edge data into one list
	    // (merge-sort).  For hits in the same slice, leading edge
	    // comes first.

	    if (lead < lead_end)
	      {
		if (trail < trail_end)
		  {
		    int lead_next = *(lead++);
		    int trail_next = *(trail++);

		    for ( ; ; )
		      {
			if (lead_next <= trail_next)
			  {
			    *(cl_end++) = lead_next;
			    lead_next = *lead;
			    if (lead >= lead_end)
			      {
				trail--;
				break;
			      }
			    lead++;
			  }
			else
			  {
			    *(cl_end++) = trail_next | 0x100;
			    trail_next = *trail;
			    if (trail >= trail_end)
			      {
				lead--;
				break;
			      }
			    trail++;
			  }
		      }	    

		  }
		
		// Any remaining leading edge

		while (lead < lead_end)
		  {
		    *(cl_end++) = *(lead++);
		  }
	      }

	    // Any remaining trailing edge

	    while (trail < trail_end)
	      {
		*(cl_end++) = *(trail++) | 0x100;
	      }

	    //////////////////////////////////////////////////////////////

	    if (cl_end > cl)
	      {
		int *cl_ptr;

		printf ("w: %d:%2d/%2d - ",check->orig.ccb_id,ad_id,wire);

		if (*cl & 0x100)
		  printf ("*");
		else
		  printf (" ");

		for (cl_ptr = cl; cl_ptr < cl_end; cl_ptr++)
		  {
		    printf ("%c%c%c%-3d ",
			    (cl_ptr>cl && !(*cl_ptr ^ *(cl_ptr-1) & 0x100)) ? '+' : ' ',
			    (cl_ptr>cl && !(*cl_ptr ^ *(cl_ptr-1) & 0x0ff)) ? '=' : ' ',
			    (*cl_ptr) & 0x100 ? 't' : 'l',
			    (*cl_ptr) & 0xff);
		  }

		for (cl_ptr = cl+1; cl_ptr < cl_end; cl_ptr++)
		  {
		    printf ("[%d]",
			    ((*cl_ptr) & 0xff) - ((*(cl_ptr-1)) & 0xff));
		  }

		if (!(*(cl_end-1) & 0x100))
		  printf ("#");
		printf ("\n");
	      }

	    }
#endif

	    //////////////////////////////////////////////////////////////

	    // Now, we can go over the data, item by item.  Basically
	    // we expect to pair up leading and trailing edge pulses,
	    // but will handle any unexpected cases also









	    


	    //////////////////////////////////////////////////////////////

	    if ((check->orig.data.drc & 0x300) == 0)
	      {
		int *lead  = tmp.slice[wire][0];
		int *trail = tmp.slice[wire][1];
		
		int *lead_end  = lead + tmp.hits[wire][0];
		int *trail_end = trail + tmp.hits[wire][1];
		
		// We are running with scale 0 <-> 2.5 ns resolution.
		// leading and trailing markers cannot get lost!  Use
		// that fact while checking!  They also cannot even
		// occur in the same slice!

		int next_lead  = 256; // after any pulses
		int last_trail = -1;
		
		uint32 fixed_wire = fixed | (wire << 8);
#if CROS3_TOT_ENCODED_DETECT_NOISY_WIRES
		uint32 *dest_start_wire = dest;
#endif
  
		if (lead < lead_end)
		  next_lead = *lead;

		if (trail < trail_end && 
		    *trail < next_lead)
		  {
		    // unpaired trail at beginning
		    // printf ("starting trail: %d\n",*trail);
		    last_trail = *trail;

		    *(dest++) = ((*trail) << 16) | (255) | fixed_wire;
#if !CROS3_TOT_ENCODED_DETECT_NOISY_WIRES
		    STORE_WIRE_HIT_TOT((ad_id << 4) | wire,255,*trail);
#endif

		    trail++;
		  }

		// for each remaing trail, there should be a lead
		// before it (and after the last one)
		
		while (trail < trail_end)
		  {
		    if (lead >= lead_end)
		      {
			//cros3_dump_slices(&tmp,ad_id,wire);
			CROS3_ERROR(CROS3_DATA_ERR_TOT_LEAD_MISSING,
				    0x1000 | (*trail << 4) | wire);
			goto had_error;
		      }
		    if (*lead <= last_trail)
		      {
			//cros3_dump_slices(&tmp,ad_id,wire);
			CROS3_ERROR(CROS3_DATA_ERR_TOT_NEXT_LEAD_BEFORE_TRAIL,
				    (*lead << 4) | wire);
			goto had_error;
		      }
		    if (*lead >= *trail)
		      {
			//cros3_dump_slices(&tmp,ad_id,wire);
			CROS3_ERROR(CROS3_DATA_ERR_TOT_NEXT_LEAD_AFTER_TRAIL,
				    (*lead << 4) | wire);
			goto had_error;
		      }

		    // ok, so we have a lead, where @last_trail < @*lead < @*trail

		    // printf ("pair: %d - %d\n",*lead,*trail);

		    last_trail = *trail;

		    *(dest++) = ((*trail) << 16) | ((*lead)-1) | fixed_wire;
#if !CROS3_TOT_ENCODED_DETECT_NOISY_WIRES
		    STORE_WIRE_HIT_TOT((ad_id << 4) | wire,(*lead)-1,*trail);
#endif

		    lead++;
		    trail++;
		  }

		// now see if there is a trailing lead

		if (lead < lead_end)
		  {
		    if (*lead <= last_trail)
		      {
			//cros3_dump_slices(&tmp,ad_id,wire);
			CROS3_ERROR(CROS3_DATA_ERR_TOT_NEXT_LEAD_BEFORE_TRAIL,
				    (*lead << 4) | wire);
			goto had_error;
		      }

		    // printf ("ending lead: %d\n",*lead);

		    *(dest++) = (0 << 16) | ((*lead)-1) | fixed_wire;
#if !CROS3_TOT_ENCODED_DETECT_NOISY_WIRES
		    STORE_WIRE_HIT_TOT((ad_id << 4) | wire,(*lead)-1,0);
#endif

		    lead++;
		  }
		
		// now there should be no more

		if (lead < lead_end)
		  {
		    //cros3_dump_slices(&tmp,ad_id,wire);
		    CROS3_ERROR(CROS3_DATA_ERR_TOT_EXTRA_END_LEAD,
				(*lead << 4) | wire);
		    goto had_error;
		  }

#if CROS3_TOT_ENCODED_DETECT_NOISY_WIRES
		// If we had more than two hits (lets say, more than
		// five leading or trailing edges), the wire is most
		// likely noisy.  The noise is expected to be the ones
		// with shortest time-over-threshold.  Accept/expect
		// the two longest tot to be good ones, and count all
		// the shorter ones as being suspicious

		if (tmp.hits[wire][0] + tmp.hits[wire][1] > 5)
		  {
		    uint32 *check = dest_start_wire;
		    uint32 *dest_end_wire;
		    int above_noise = 0;
		    int noise_seen = 0;
		    int adid_wire;

		    // When doing these checks, any beginning trailing
		    // edge, or ending leading edge (i.e. hits that
		    // span outside range) will be ignored.

		    int max1_tot = -1; //        maximum tot seen
		    int max2_tot = -1; // second maximum tot seen
		    int max3_tot = -1; // second maximum tot seen

		    uint32 max1_encode = 0xffffffff; // invalid (should never enter data)
		    uint32 max2_encode = 0xffffffff; // invalid (should never enter data)
		    uint32 max3_encode = 0xffffffff; // invalid (should never enter data)

		    for ( ; check < dest; check++)
		      {
			int lead  =  (*check)        & 0xff;
			int trail = ((*check) >> 16) & 0xff;

			int tot = trail - lead; // min 0, max 255

			if (tot > max3_tot)
			  {
			    if (tot > max1_tot)
			      {
				max3_tot    = max2_tot;
				max3_encode = max2_encode;

				max2_tot    = max1_tot;
				max2_encode = max1_encode;
				
				max1_tot    = tot;
				max1_encode = *check;
			      }
			    else if (tot > max2_tot)
			      {
				max3_tot    = max2_tot;
				max3_encode = max2_encode;

				max2_tot    = tot;
				max2_encode = *check;
			      }
			    else
			      {
				max3_tot    = tot;
				max3_encode = *check;
			      }
			  }
		      }

		    (void) max3_encode;
		    
		    check = dest_start_wire;

		    // if the tot of longest hit is no longer than tot of third longest
		    // hit+1, then we set above noise to the third longest hit+1, otherwise
		    // we set it to the second hit

		    if (max3_tot + 1 >= max1_tot)
		      above_noise = max3_tot + 1;
		    else 
		      above_noise = max2_tot;
		    /*
		    printf ("Found noisy wire %3d: (%2d %2d) %3d %3d %3d => %3d | ",
			    (ad_id << 4) | wire,
			    tmp.hits[wire][0],tmp.hits[wire][1],
			    max3_tot,max2_tot,max1_tot,above_noise);
		    */
		    adid_wire = (ad_id << 4) | wire;

		    for ( ; check < dest; check++)
		      {
			int lead  =  (*check)        & 0xff;
			int trail = ((*check) >> 16) & 0xff;

			int tot = trail - lead; // min 0, max 255

			if (tot >= 0 && tot < above_noise)
			  {
			    noise_stat->hits_tot[adid_wire][tot]++;
			    noise_seen = 1;
			  }
			/*
			printf (" %3d,%3d/%2d%c",lead,trail,tot,
				tot < above_noise ? '*' : ' ');
			*/
		      }

		    noise_stat->events_noise[adid_wire] += noise_seen;
			
		    // Now, that we have collected the statistics, we
		    // also may want to clean the event up,
		    // i.e. remove noise hits.  Please note: this
		    // removal ONLY takes place if there are more than
		    // two hits.  This is the first line of defence
		    // against killing good hits.  The second line, is
		    // that we retain all hits that have longer tot
		    // than the pre-determined noise levels.
		    // Incomplete hits will be killed.

		    dest_end_wire = dest;
		    check = dest_start_wire;
		    dest = dest_start_wire; // kill all old hits

		    for ( ; check < dest_end_wire; check++)
		      {
			int lead  =  (*check)        & 0xff;
			int trail = ((*check) >> 16) & 0xff;

			int tot = trail - lead; // min 0, max 255

			if (tot > noise_stat->is_noise[adid_wire])
			  {
			    // keep the hit

			    *(dest++) = *check;

			    //printf (" K:%3d,%3d",lead,trail);
			  }
		      }
		    /*
		    if (dest < dest_end_wire)
		      printf ("killed %d/%d\n",
			      dest_end_wire-dest,dest_end_wire-dest_start_wire);
		    */
		    //printf ("\n");
		  }

		// loop over the hits to store the data into ucesb
		// structures (if used)

		{
		  uint32 *copy = dest_start_wire;
		  int adid_wire = (ad_id << 4) | wire;
  
		  for ( ; copy < dest; copy++)
		    {
		      int lead       =  (*copy)        & 0xff;
		      int trail      = ((*copy) >> 16) & 0xff;

		      STORE_WIRE_HIT_TOT((char) adid_wire,
					 (char) lead,(char) trail);
		    }
		}	
#endif


	      }
	    else
	      {
		// This error is here until there becomes data (noise
		// triggered) available to see what can and what can
		// not happen

		CROS3_ERROR(CROS3_DATA_ERR_TOT_SCALE_NON_0_UNSUPPORTED,
			    (check->orig.data.drc & 0x300));
		goto had_error;
	      }





	    // First look for a trailing edge that starts before first
	    // leading edge

	    // terminate both sequences with dummy time at the end
	    /*
	    *lead_end = 256;
	    *trail_end = 256;

	    prev_trail = -1;

	    for ( ; ; )
	      {
		if (*lead <= *trail)
		  {
		    // The next leading edge is before the following trailing edge

		    if (*lead == 256) // -> *trail = 256
		      break; // we've reached the end (256 can NEVER come from input data)

		    // Now, is there another leading edge before our trailer?

		    if (lead < lead_end &&
			*(lead+1) < *trail)
		      {
			// This is a fault, unless previous trailer
			// was found at our location, in which case
			// this location trailer was lost

			if (prev_trail == *lead)
			  {
			    printf ("trailer lost @%d\n",*lead);
			  }
			else
			  {
			    printf ("spurious lead %d",*(lead+1));
			  }
			lead++;
		      }



		  }
		

	      }
	    */






#if 0
	    int next_lead = 256; // after any pulses

	    if (lead < lead_end)
	      next_lead = *lead;

	    if (trail < trail_end && 
		*trail < next_lead)
	      {
		printf ("spurious trail: %d\n",*trail);
		trail++;

		// finding further trailing edges before lead is fault...

		while (trail < trail_end && 
		       *trail < next_lead)
		  {
		    printf ("faulty spurious trail: %d\n",*trail);
		    trail++;
		  }
	      }

	    while (lead < lead_end)
	      {
		// Ok, we are now in the position that the next thing to
		// consider is a leading edge...

		int this_lead = *lead;

		lead++;

		next_lead = 256; // after any pulses

		if (lead < lead_end)
		  next_lead = *lead;

		// 
	      }
#endif
	    
	  }
	
      }

      src--; // we read one data word too much
    }

  
  /*
  dest = (uint32 *) (((size_t) dest16) & ~0x2);

  if (((size_t) dest16) & 0x2)
    {
      uint16 prev_data = *(dest16-1);

      // We have emitted an odd number of data words
      // Emit the last one as wire 0, time 255
      *(dest++) = 0x00ff0000 | prev_data;    

      *(dest_start+1) |= 0x80000000; // odd number of entries emitted
    }
  */

  *(dest_start) |= (uint32) (0x00040000 /* format*/ | (dest-(dest_start+2)));
    
  if ((src = cros3_check_ccb_trailer(src,start,end,status)) == NULL)
    goto had_error;

  // if (src != end)
  //{
  //CROS3_ERROR(CROS3_DATA_ERR_GARBAGE_AT_END);
  // goto had_error;
  //}


  *src_end = src;

  return dest;

 had_error:
  ;

  *src_end = src;

  return NULL;
}



void
cros3_check_tot_noise(rw_cros3_tot_noisy * restrict noise_stat)
{
  int wire;

  for (wire = 0; wire < 256; wire++)
    {
      noise_stat->is_noise[wire] = 0; // reset the noise level cut
      /*
      printf ("%3d (%7.5f) ",wire,
	      (double) noise_stat->events_noise[wire] / noise_stat->events);
      */
      if (noise_stat->events_noise[wire] > noise_stat->events * 0.02)
	{
	  int sum     = 0;
	  int sum_cum = 0;
	  int i;

	  // more than 2% of events are noisy (usual number for
	  // non-noisy is at most 0.2%, the noisy ones are >15%...)
	  // The cut routine is anyhow very careful, so this is not
	  // crucial.
	  
	  for (i = 0; i < 256; i++)
	    {
	      /*
	      if (noise_stat->hits_tot[wire][i])
		printf (" %3d:%5d",i,noise_stat->hits_tot[wire][i]);
	      */
	      sum += noise_stat->hits_tot[wire][i];
	    }	  

	  // Find out where 95% of the (noise) statistics is...

	  for (i = 0; i < 256; i++)
	    {
	      sum_cum += noise_stat->hits_tot[wire][i];

	      if (sum_cum > sum * 0.95)
		{
		  // This tot (and lower) makes up 90% of the statistics

		  noise_stat->is_noise[wire] = i;
		  break;
		}
	    }	  

	  //printf ("=> %d",noise_stat->is_noise[wire]);
	}

      //printf ("\n");
    }
}



int compare_tot_rewritten(const void *p1, const void *p2)
{
  uint32 v1 = *((uint32*) p1);
  uint32 v2 = *((uint32*) p2);
  
  // compare major by wire (0xff00) and minor by slice (0x00ff)

  // since we only have numbers in range 0-0xffff, int won't overflow
  
  return ((int) (v1 & 0xffff)) - ((int) (v2 & 0xffff));
}

uint32 *
cros3_decode_time_over_threshold(uint16 *  restrict src,size_t length,
				 uint32 *restrict * p_dest,uint32 ad16_id
				 STORE_BUFFER_PARAM)
{
  // Write time-over-threshold data as 32 bit data words:
  //
  // 0x000000ff start slice
  // 0x0000ff00 wire# (4 low # in ad16, 4 high ad16 #)
  // 0x01ff0000   end slice (last slice with bit 1 + 1)
  
  // We keep the set of 16 wires status, the prepared data for
  // either where it started or ended

  // If the wire starts to be up at the beginning, the start
  // number is 16.  No need to do anything.

  uint32 pre_ad16_id = ad16_id << 12;

  // assert(length <= 256);

  int diff_wire[256]; // maximum number of slices
  int num_diff_wire = 0;

  int start_slice[16];

  uint16 prev_first;
  uint16 prev;
  uint32 slice_sh_16;

  int n, i;
  uint32 *dest32;

  memset (start_slice,0,sizeof(start_slice));

  prev_first = *(src++);
  prev = prev_first;

  slice_sh_16 = 1 << 16;

  // Loop over the data...  In order to avoid a conditional control
  // statement in the loop, we first detect which items do have a change

  for (n = (int) length-1; n; --n, slice_sh_16 += 1 << 16)
    {
      uint16 next = *(src++);

      uint16 diff = prev ^ next;

      if (diff)
	{
	  diff_wire[num_diff_wire++] = next | slice_sh_16;
	}

      prev = next;
    }

  prev = prev_first;

  dest32 = *p_dest;

  // In the second loop, where for each item at least one changed,
  // find which channel(s) and write out the corresponding dataword

  for (i = 0; i < num_diff_wire; ++i)
    {
      uint16 next = (uint16) (diff_wire[i] & 0x0000ffff);
      uint32 slice_sh_16 = diff_wire[i] & 0x00ff0000;
      uint32 slice = slice_sh_16 >> 16;

      uint32 diff = prev ^ next;

      // There is one or more differences

      uint16 ends   = (uint16) (diff & prev); // Wires that end
      uint16 starts = (uint16) (diff & next); // Wires that start

      // The dsp compiler should for sure simply unroll the loop below!

      uint32 fixed = pre_ad16_id | slice_sh_16; /* ad16 no & end slice */

      uint16 daq_wire_bit = 0x0001;
      int daq_wire, wire;

      for (daq_wire = 0; daq_wire < 16; 
	   daq_wire++, daq_wire_bit = (uint16) (daq_wire_bit << 1))
	{
	  // The two clauses are mutually exclusive, but as we would
	  // like to have the code generated with conditionals, we do
	  // not confuse the compiler with an 'else'

	  // Hopefully it is smart enough to realize that the read and
	  // the write of start_slice[i] cannot alias Hmm, this it
	  // will not be able to do, or rather, as far as it is
	  // concerned, first there may be a read, and then a write.
	  // No, should not be a major problem.  Since the read anyhow
	  // need to be hoisted to far before.  Then when it has read,
	  // it is perferctly fine if the write should happen just
	  // after, since it updates the state for later.  So the
	  // current order (read-write) has a chance.  The order
	  // (write-read) would have more problems.

	  if (ends & daq_wire_bit)
	    {
	      wire = remap_wire[daq_wire];
	      // We eject the data
	      *(dest32++) = start_slice[wire] | (wire << 8) | fixed;

	      STORE_WIRE_HIT_TOT((char) ((ad16_id << 4) | wire),
				 (char) start_slice[wire],(char) slice);
	    }
	  if (starts & daq_wire_bit)
	    {
	      wire = remap_wire[daq_wire];
	      // We just need to note the data word
	      start_slice[wire] = slice;
	    }
	}
      prev = next;
    }

  // At the end, we need to end any slice which is still active
{
  uint32 fixed = (uint32) (pre_ad16_id | (length << 16)); /* ad16 no & end slice */
  uint16 daq_wire_bit = 0x0001;
  int daq_wire, wire;

  for (daq_wire = 0; daq_wire < 16;
       daq_wire++, daq_wire_bit = (uint16) (daq_wire_bit << 1))
    {
      if (prev & daq_wire_bit)
	{
	  wire = remap_wire[daq_wire];
	  // Eject the data
	  *(dest32++) = start_slice[wire] | (wire << 8) | fixed;

	  STORE_WIRE_HIT_TOT((char) ((ad16_id << 4) | wire),
			     (char) start_slice[wire],(char) length);
	}
    }
}

  // The use of qsort here is not really nice in view of execution on
  // a DSP perhaps.  But, since the introduction of encoded TOT, this
  // mode should anyhow not be used by a DSP in production.  And the
  // alternative of writing the data into a second array just to
  // facilitate a 'bucket sort' on the wires is not necessarily better

  /*{
  uint32 *p;
  for (p = *p_dest; p < dest32; p++)
    printf ("b %3d %3d\n",(*p >> 8) & 0xff,*p & 0xff);
  }*/

  qsort(*p_dest,dest32 - *p_dest,sizeof(uint32),compare_tot_rewritten);

  /*{
  uint32 *p;
  for (p = *p_dest; p < dest32; p++)
    printf ("a %3d %3d\n",(*p >> 8) & 0xff,*p & 0xff);
  }*/

  *p_dest = dest32;

  return *p_dest;
}

uint16 *
cros3_decode_leading_edge(uint16 *  restrict src,size_t length,
			  rw_cros3_status * restrict status,
			  uint16 ** restrict p_dest16,uint32 ad16_id
			  STORE_BUFFER_PARAM)
{
  // Write time-over-threshold data as 16 bit data words:
  //
  // 0x000000ff start slice
  // 0x0000ff00 wire# (4 low # in ad16, 4 high ad16 #)
  
  // We keep the set of 16 wires status, the prepared data for
  // either where it started or ended

  // If the wire starts to be up at the beginning, the start
  // number is 16.  No need to do anything.

  uint32 pre_ad16_id = ad16_id << 12;

  // assert(length <= 256);

  int diff_slice[256]; // maximum number of slices
  int num_diff_slice = 0;

  uint16 prev = 0;

  uint32 slice_sh_16 = 1 << 16;
  uint16 *dest16w = *p_dest16;

  int n, i;

  // Loop over the data...  In order to avoid a conditional control
  // statement in the loop, we first detect which items do have a change

  for (n = (int) length-1; n; --n, slice_sh_16 += 1 << 16)
    {
      uint16 next = *(src++);

      if (next & prev)
	{
          // The same wire is recorded as passing threshold in
          // two consequtive slices.  Impossible!!!
	  CROS3_ERROR(CROS3_DATA_ERR_LE_CONSEQUTIVE_HIGH,next & prev);
	  goto had_error;
	}

      if (next)
	{
	  diff_slice[num_diff_slice++] = next | slice_sh_16;
	}

      prev = next;
    }

  // In the second loop, where for each item at least one changed,
  // find which channel(s) and write out the corresponding dataword

  for (i = 0; i < num_diff_slice; ++i)
    {
      uint16 hits = (uint16) (diff_slice[i] & 0x0000ffff);
      uint32 slice_sh_16 = diff_slice[i] & 0x00ff0000;
      uint32 slice = slice_sh_16 >> 16;

      // There is one or more differences

      uint32 fixed = pre_ad16_id | slice; /* ad16 no & this slice */

      // The dsp compiler should for sure simply unroll the loop below!

      uint16 daq_wire_bit = 0x0001;
      int daq_wire, wire;

      for (daq_wire = 0; daq_wire < 16;
	   daq_wire++, daq_wire_bit = (uint16) (daq_wire_bit << 1))
	{
	  if (hits & daq_wire_bit)
	    {
	      wire = remap_wire[daq_wire];
	      // We eject the data
	      *(dest16w++) = (uint16) ((wire << 8) | fixed);

	      STORE_WIRE_HIT((char) ((ad16_id << 4) | wire),(char) slice);
	    }
	}
      prev = hits;
    }

  return *p_dest16 = dest16w;

 had_error:

  return NULL;
}




uint32 *
cros3_rewrite_time_over_threshold(uint16 *restrict src,uint16 *restrict end,
				  rw_cros3_check * restrict check,
				  uint32 * restrict dest
				  STORE_BUFFER_PARAM)
{














  return NULL;
}





uint32 *
cros3_rewrite_threshold_curve(uint16 * restrict src,uint16 *end,
			      uint16 ** src_end,
			      rw_cros3_check * restrict check,
			      rw_cros3_status * restrict status,
			      uint32 * restrict dest
			      STORE_TRC_PARAM)
{
  uint16 *start = src;
  uint32 *dest_start = dest;
  int boards = 0;

  uint32 th_begin;
  uint32 th_step;
  
  uint32 th_steps;

  if (src < end && ((*src) & 0xff00) == 0xaf00)
    return cros3_rewrite_empty(src,end,src_end,check,status,dest);

  if ((src = cros3_check_ccb_header(src,end,dest,check,status)) == NULL)
    goto had_error;

  dest++;
  *(dest++) = ( ( check->orig.trc          & 0xf13) |
	       (( check->orig.curve.thc    & 0xfff) << 12));

  // Now that we got the header, let's read data

  if ((*(end-2) & 0xff00) != 0xde00)
    {
      CROS3_ERROR(CROS3_DATA_ERR_NO_TRAILER_MARKER_AT_END,*(end-1));
      goto had_error;
    }

  // Since TRC and THC are known from the check structure, we
  // use those (header was checked to comply)
  
  th_begin =  check->orig.curve.thc & 0xff;
  th_step  = (check->orig.curve.thc & 0xf00) >> 8;
  
  th_steps = 63;
  
  if (th_step)
    {
      // we may be limited by how many steps that fit to the end
      
      uint32 max_steps = (256 - th_begin + th_step - 1) / th_step;
      
      if (max_steps < th_steps)
	th_steps = max_steps;
    }

  for ( ; ; )
    {
      uint16 ad_id;
      uint16 statistics;
      uint16 max_counts;

      uint16 test_pulse_even;
      uint16 test_pulse_odd;

      uint32 step;
      uint32 threshold;

      // check if we have another ad16 header

      if ((*src & 0xf000) != 0xc000)
	break;

      boards++;

      statistics = (uint16) ((check->orig.trc & 0x0700) >> 8);
      max_counts = (uint16) (32 << statistics); // 0->32 ... 7->4096

      if (max_counts == 4096)
	max_counts = 4095;

      if (!cros3_check_ad_header(src,end,check,status,&ad_id,
				 &test_pulse_even,&test_pulse_odd))
	goto had_error;

      src += 4;

      // Now we can start reading the data

      // There should now follow 16*th_steps data values,
      // each marked with the wire number and then the statistics

      if (src + 16 * th_steps + 2 > end)
	{
	  CROS3_ERROR(CROS3_DATA_ERR_TRC_NOSPACE,16*th_steps + 2);
	  goto had_error;
	}

      // Store the ad16 header
      *(dest++) = (  test_pulse_even      |
		   ((test_pulse_odd) << 8) |
		   ((th_steps)       << 16) |
		   ((ad_id)          << 28));

      /*
      printf ("%2d/%2d -- %3d:%2d:%3d\n",
	      check->orig.ccb_id,ad_id,
	      th_begin,th_step,th_end);
      */

      // printf("\n");

      // Work around a bug in the firmware.  At least with statistics
      // set to 5 (i.e. max 1024 counts, it seems (when pulser is off)
      // to give max 4095 counts.  So, heuristics is, if 4095 counts
      // found, then increase the max-counts.  4095 itself cannot
      // overflow, is full 0xfff

      if (max_counts < 4095)
	{
	  uint16 *src2 = src;
	  int i;

	  for (i = th_steps * 16; i; --i)
	    if (*(src2++) == 4095)
	      max_counts = 4095;
	}

      for (step = 0, threshold = th_begin; 
	   step < th_steps; 
	   step++, threshold += th_step)
	{
	  int daq_wire, wire;
	  uint16 daq_wire_mark = 0;

	  // uint16 count[16];
	  /*
	  printf ("%2d/%2d : %3d | ",
		  check->orig.ccb_id,ad_id,
		  th_begin + th_step * step);	  
	  */

	  // This loop is unrolled once, to able to store the data in
	  // 32-bit data words in known order (independent of machine
	  // endianess) first dataword always in lower 16 bits

	  for (daq_wire = 0; daq_wire < 16;
	       daq_wire++, daq_wire_mark = (uint16) (daq_wire_mark + (1 << 12)))
	    {
	      uint16 data1 = *(src++);
	      uint16 counts1;
	      uint16 data2;
	      uint16 counts2;

	      if ((data1 & 0xf000) != daq_wire_mark)
		{
		  CROS3_ERROR(CROS3_DATA_ERR_THR_CURVE_WIRE_MARK_WRONG,data1);
		  goto had_error;
		}
	      
	      counts1 = data1 & 0x0fff;

	      wire = remap_wire[daq_wire];

	      if (counts1 > max_counts)
		{
#if 0 // hardware (firmware?) is broken, quite often too many, silently just ignore
		  CROS3_ERROR(CROS3_DATA_ERR_THR_CURVE_TOO_MANY_COUNTS,data1);
		  goto had_error;
#endif
		}
	      else
		{
		  STORE_TRC_COUNTS(threshold,(ad_id << 4) | wire,
				   counts1,max_counts);
		}

	      //////////////////////////////////////////////////
	      // Loop update:
	      daq_wire++; 
	      daq_wire_mark = (uint16) (daq_wire_mark + (1 << 12));

	      //////////////////////////////////////////////////
	      // Same code as above

	      data2 = *(src++);

	      if ((data2 & 0xf000) != daq_wire_mark)
		{
		  CROS3_ERROR(CROS3_DATA_ERR_THR_CURVE_WIRE_MARK_WRONG,data2);
		  goto had_error;
		}
	      
	      counts2 = data2 & 0x0fff;
	      
	      wire = remap_wire[daq_wire];

	      if (counts2 > max_counts)
		{
#if 0 // hardware (firmware?) is broken, quite often too many, silently just ignore
		  CROS3_ERROR(CROS3_DATA_ERR_THR_CURVE_TOO_MANY_COUNTS,data2);
		  goto had_error;
#endif
		}
	      else
		{
		  STORE_TRC_COUNTS(threshold,(ad_id << 4) | wire,
				   counts2,max_counts);
		}

	      //////////////////////////////////////////////////
	      // Store to output buffer

	      *(dest++) |= ( ((uint32) data1) | 
			    (((uint32) data2) << 16));
	    }
	  //printf ("\n");	  
	}
    }

  *(dest_start)   |= (uint32) (0x00010000 /* format*/ | (dest-(dest_start+2)));
  *(dest_start+1) |= boards << 24;

  if ((src = cros3_check_ccb_trailer(src,start,end,status)) == NULL)
    goto had_error;

  *src_end = src;

  return dest;

 had_error:
  ;

  *src_end = src;

  return NULL;
}

uint32 *
cros3_rewrite_tot_raw(uint16 * restrict src,uint16 *end,
		      uint16 ** src_end,
		      rw_cros3_check * restrict check,
		      rw_cros3_status * restrict status,
		      uint32 * restrict dest
		      STORE_BUFFER_PARAM)
{
  uint16 *start = src;
  uint32 *dest_start = dest;

  if (src < end && ((*src) & 0xff00) == 0xaf00)
    return cros3_rewrite_empty(src,end,src_end,check,status,dest);

  if ((src = cros3_check_ccb_header(src,end,dest,check,status)) == NULL)
    goto had_error;

  dest++;
  *(dest++) = ( ( check->orig.trc          & 0xf13) |
	       (( check->orig.data.drc     & 0x3ff) << 12));

  // Now that we got the header, let's read data

  if ((*(end-2) & 0xff00) != 0xde00)
    {
      CROS3_ERROR(CROS3_DATA_ERR_NO_TRAILER_MARKER_AT_END,*(end-1));
      goto had_error;
    }
  
  for ( ; ; )
    {
      uint16 ad_id;
      uint16 thres1, thres2;
      uint16 slices;

      // check if we have another ad16 header
      
      if ((*src & 0xf000) != 0xc000)
	break;
      
      if (!cros3_check_ad_header(src,end,check,status,&ad_id,&thres1,&thres2))
	goto had_error;

      // We have data for ad @adno
      
      src += 4;

      slices = check->orig.data.drc & 0x00ff;
    
      if (src + slices > end)
	{
	  CROS3_ERROR(CROS3_DATA_ERR_RAW_NOSPACE,*src);
	  goto had_error;
	}

      if (!cros3_decode_time_over_threshold(src,slices,&dest,ad_id
					    STORE_BUFFER_ARG))
	goto had_error;
      
      src += slices;
  }

  *(dest_start) |= (uint32) (0x00040000 /* format*/ | (dest-(dest_start+2)));

  if ((src = cros3_check_ccb_trailer(src,start,end,status)) == NULL)
    goto had_error;

  *src_end = src;

  return dest;

 had_error:
  ;

  *src_end = src;

  return NULL;
}

uint32 *
cros3_rewrite_le_raw(uint16 * restrict src,uint16 *end,
		     uint16 ** src_end,
		     rw_cros3_check * restrict check,
		     rw_cros3_status * restrict status,
		     uint32 * restrict dest
		     STORE_BUFFER_PARAM)
{
  uint16 *start = src;
  uint32 *dest_start = dest;
  uint16 *dest16;

  if (src < end && ((*src) & 0xff00) == 0xaf00)
    return cros3_rewrite_empty(src,end,src_end,check,status,dest);

  if ((src = cros3_check_ccb_header(src,end,dest,check,status)) == NULL)
    goto had_error;

  dest++;
  *(dest++) = ( ( check->orig.trc          & 0xf13) |
	       (( check->orig.data.drc     & 0x3ff) << 12));

  // Now that we got the header, let's read data

  if ((*(end-2) & 0xff00) != 0xde00)
    {
      CROS3_ERROR(CROS3_DATA_ERR_NO_TRAILER_MARKER_AT_END,*(end-1));
      goto had_error;
    }
  
  dest16 = (uint16 *) dest;

  for ( ; ; )
    {
      uint16 ad_id;
      uint16 thres1, thres2;
      uint16 slices;

      // check if we have another ad16 header
      
      if ((*src & 0xf000) != 0xc000)
	break;
      
      if (!cros3_check_ad_header(src,end,check,status,&ad_id,&thres1,&thres2))
	goto had_error;

      // We have data for ad @adno
      
      src += 4;

      slices = check->orig.data.drc & 0x00ff;
    
      if (src + slices > end)
	{
	  CROS3_ERROR(CROS3_DATA_ERR_RAW_NOSPACE,*src);
	  goto had_error;
	}

      if (!cros3_decode_leading_edge(src,slices,status,&dest16,ad_id
				     STORE_BUFFER_ARG))
	goto had_error;
      
      src += slices;
  }

  dest = (uint32 *) (((size_t) dest16) & ~0x2);

  if (((size_t) dest16) & 0x2)
    {
      uint16 prev_data = *(dest16-1);

      // We have emitted an odd number of data words
      // Emit the last one as wire 0, time 255
      *(dest++) = 0x00ff0000 | prev_data;    

      *(dest_start+1) |= 0x80000000; // odd number of entries emitted
    }

  *(dest_start) |= (uint32) (0x00060000 /* format*/ | (dest-(dest_start+2)));

  if ((src = cros3_check_ccb_trailer(src,start,end,status)) == NULL)
    goto had_error;

  *src_end = src;

  return dest;

 had_error:
  ;

  *src_end = src;

  return NULL;
}
