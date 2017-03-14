
#ifndef __REWRITE_CROS3_V27_H__
#define __REWRITE_CROS3_V27_H__

/* Upon any mismatch of information in the data,
 * an error code and location is produced.
 */

#define CROS3_DATA_ERR_CCB_HEADER_NOSPACE        0x11
#define CROS3_DATA_ERR_CH1                       0x12
#define CROS3_DATA_ERR_CH2                       0x13
#define CROS3_DATA_ERR_CH3                       0x14
#define CROS3_DATA_ERR_CH4                       0x15
#define CROS3_DATA_ERR_CCB_HEADER_TRIG_TIME      0x16

#define CROS3_DATA_ERR_AD_HEADER_NOSPACE         0x21
#define CROS3_DATA_ERR_AD1                       0x22
#define CROS3_DATA_ERR_AD2                       0x23
#define CROS3_DATA_ERR_AD3                       0x24
#define CROS3_DATA_ERR_AD4                       0x25
#define CROS3_DATA_ERR_AD_TRIG_NO_MISMATCH       0x26
#define CROS3_DATA_ERR_AD_BOARD_SEEN_TWICE       0x27

#define CROS3_DATA_ERR_TRAILER_NOSPACE           0x31
#define CROS3_DATA_ERR_CT1                       0x32
#define CROS3_DATA_ERR_CT2                       0x33
#define CROS3_DATA_ERR_WORD_COUNT                0x34
#define CROS3_DATA_ERR_TRAILER_PAD_NOSPACE       0x35
#define CROS3_DATA_ERR_PAD                       0x36

#define CROS3_DATA_ERR_NO_TRAILER_MARKER_AT_END  0x41

#define CROS3_DATA_ERR_RAW_NOSPACE               0x51

#define CROS3_DATA_ERR_LE_CONSEQUTIVE_HIGH       0x61

#define CROS3_DATA_ERR_TRC_NOSPACE               0x71
#define CROS3_DATA_ERR_THR_CURVE_WIRE_MARK_WRONG 0x72
#define CROS3_DATA_ERR_THR_CURVE_TOO_MANY_COUNTS 0x73

#define CROS3_DATA_ERR_ENCODED_DATA_UNORDERED    0x81

#define CROS3_DATA_ERR_TOT_SCALE_NON_0_UNSUPPORTED 0x91
#define CROS3_DATA_ERR_TOT_LEAD_MISSING            0x92
#define CROS3_DATA_ERR_TOT_NEXT_LEAD_BEFORE_TRAIL  0x93
#define CROS3_DATA_ERR_TOT_NEXT_LEAD_AFTER_TRAIL   0x94
#define CROS3_DATA_ERR_TOT_EXTRA_END_LEAD          0x95
#define CROS3_DATA_ERR_TOT_DATA_UNORDERED          0x96



// Worst case data size (32 bit words):

//                                                     32-bit words      bytes
// threshold curve:             2h + 16*(2h+63*16/2) = 8098           => 32329
// leading edge encoded:        2h + 256*128/2       = 16386          => 65544
// time-over-threshold encoded: 2h + 256*128         = 32770 = 0x8002 => 131080

#define CROS3_REWRITE_MAX_DWORDS 32770

/* The values in this structure define how the modules are configured.
 * The data that has been read out must match, otherwise it is an
 * error.
 *
 * Unneeded (static) information will be omitted from the output data.
 */

typedef struct rw_cros3_check_t
{
  struct
  {
    uint16 csr_den; // device enable 
    uint16 csr_ini; // device init

    uint16 ccb_id;  // ID#

    // For the ad16 headers

    uint16 trc;

    struct
    {
      uint16 thc;

      // uint16 tpe; // pulser even channels
      // uint16 tpo; // pulser odd  channels
    } curve;

    struct
    {
      uint16 drc;

    } data;

  } orig;

  struct
  {
    uint16 ch1;
    uint16 ch2;
    uint16 ch3;
    uint16 ch4;

    uint16 ad1;
    uint16 ad2;
    uint16 ad3;
    uint16 ad4;

    uint16 ch1_empty;
  } precalc;
} rw_cros3_check;





typedef struct rw_cros3_status_t
{
  // Trigger number (read from ccb header, checked in ad16 headers)

  uint16 ch4_trig_no;

  uint16 ad16_seen;

  // For getting error information out

  uint16 error_code;
  uint16 error_aux; // extra information

} rw_cros3_status;





typedef struct rw_cros3_tot_noisy_t
{
  int is_noise[256]; // tot at or below this value can be considered to be noise

  // Statistics collection to find a reasonable noise cut
  
  int events;             // total number of events
  int events_noise[256];  // events with suspected noise
  int hits_tot[256][256]; // [wire][tot]
} rw_cros3_tot_noisy;






#endif
