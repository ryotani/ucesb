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
  // d1 = DUMMY_TDC(type=34,subtype=0xdac,control=9);
  // d2 = DUMMY_TDC(type=0x26ce,subtype=0xdac,control=9);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1002,__match_no,1,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1003,__match_no,2,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1005,__match_no,3,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1007,__match_no,4,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),camac_start_stop_stamp);
  MATCH_SUBEVENT_DECL(1009,__match_no,5,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1010,__match_no,6,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1012,__match_no,7,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(1014,__match_no,8,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus1);
  MATCH_SUBEVENT_DECL(1015,__match_no,9,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus2);
  MATCH_SUBEVENT_DECL(1017,__match_no,10,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==9)),d1);
  MATCH_SUBEVENT_DECL(1018,__match_no,11,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==9)),d2);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1002,LAND_CAMAC_CONVERTER,camac,0);
      REVOKE_SUBEVENT_DECL(1002,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1003,LAND_CAMAC_CONVERTER,camac,1);
      REVOKE_SUBEVENT_DECL(1003,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1005,LAND_CAMAC_TCAL_INFO,camac_tcal_info,2);
      REVOKE_SUBEVENT_DECL(1005,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1007,LAND_CAMAC_START_STOP_STAMP,camac_start_stop_stamp,3);
      REVOKE_SUBEVENT_DECL(1007,0,LAND_CAMAC_START_STOP_STAMP,camac_start_stop_stamp);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1009,LAND_CAMAC_SCALER,camac_scalers,4);
      REVOKE_SUBEVENT_DECL(1009,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1010,LAND_CAMAC_SCALER,camac_scalers,5);
      REVOKE_SUBEVENT_DECL(1010,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1012,LAND_FASTBUS_ERROR,fastbus_error,6);
      REVOKE_SUBEVENT_DECL(1012,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1014,LAND_FASTBUS1,fastbus1,7);
      REVOKE_SUBEVENT_DECL(1014,0,LAND_FASTBUS1,fastbus1);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1015,LAND_FASTBUS2,fastbus2,8);
      REVOKE_SUBEVENT_DECL(1015,0,LAND_FASTBUS2,fastbus2);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1017,DUMMY_TDC,d1,9);
      REVOKE_SUBEVENT_DECL(1017,0,DUMMY_TDC,d1);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1018,DUMMY_TDC,d2,10);
      REVOKE_SUBEVENT_DECL(1018,0,DUMMY_TDC,d2);
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
