/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // camac = LAND_CAMAC_CONVERTER(type=0x26ce,subtype=0xc80);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_start_stop_stamp = LAND_CAMAC_START_STOP_STAMP(type=35,subtype=0xc1c);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // camac_scalers = LAND_CAMAC_SCALER(type=0x26ce,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // fastbus1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(991,__match_no,1,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(992,__match_no,2,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(994,__match_no,3,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(996,__match_no,4,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),camac_start_stop_stamp);
  MATCH_SUBEVENT_DECL(998,__match_no,5,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(999,__match_no,6,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1001,__match_no,7,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(1002,__match_no,8,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus1);
  MATCH_SUBEVENT_DECL(1003,__match_no,9,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus2);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(991,LAND_CAMAC_CONVERTER,camac,0);
      REVOKE_SUBEVENT_DECL(991,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(992,LAND_CAMAC_CONVERTER,camac,1);
      REVOKE_SUBEVENT_DECL(992,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(994,LAND_CAMAC_TCAL_INFO,camac_tcal_info,2);
      REVOKE_SUBEVENT_DECL(994,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(996,LAND_CAMAC_START_STOP_STAMP,camac_start_stop_stamp,3);
      REVOKE_SUBEVENT_DECL(996,0,LAND_CAMAC_START_STOP_STAMP,camac_start_stop_stamp);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(998,LAND_CAMAC_SCALER,camac_scalers,4);
      REVOKE_SUBEVENT_DECL(998,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(999,LAND_CAMAC_SCALER,camac_scalers,5);
      REVOKE_SUBEVENT_DECL(999,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1001,LAND_FASTBUS_ERROR,fastbus_error,6);
      REVOKE_SUBEVENT_DECL(1001,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1002,LAND_FASTBUS1,fastbus1,7);
      REVOKE_SUBEVENT_DECL(1002,0,LAND_FASTBUS1,fastbus1);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1003,LAND_FASTBUS2,fastbus2,8);
      REVOKE_SUBEVENT_DECL(1003,0,LAND_FASTBUS2,fastbus2);
      break;
  }
  return 0;
}

/** END_REVOKE ********************************************************/
/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
int unpack_sticky_event::__revoke_subevent(subevent_header *__header)
{
  int __match_no = 0;
  if (!__match_no) return 0;
  switch (__match_no)
  {
  }
  return 0;
}

/** END_REVOKE ********************************************************/
