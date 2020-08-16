/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // camac_tcal = LAND_CAMAC_CONVERTER(type=0x26ce,subtype=0xc80);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // camac_scalers_tcal = LAND_CAMAC_SCALER(type=0x26ce,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // fastbus_1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus_2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // d1 = DUMMY_TDC(type=34,subtype=0xdac,control=9);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(882,__match_no,1,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(883,__match_no,2,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc80)),camac_tcal);
  MATCH_SUBEVENT_DECL(884,__match_no,3,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(888,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(889,__match_no,5,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc1c)),camac_scalers_tcal);
  MATCH_SUBEVENT_DECL(890,__match_no,6,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(891,__match_no,7,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus_1);
  MATCH_SUBEVENT_DECL(892,__match_no,8,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus_2);
  MATCH_SUBEVENT_DECL(893,__match_no,9,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==9)),d1);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(882,LAND_CAMAC_CONVERTER,camac,0);
      REVOKE_SUBEVENT_DECL(882,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(883,LAND_CAMAC_CONVERTER,camac_tcal,1);
      REVOKE_SUBEVENT_DECL(883,0,LAND_CAMAC_CONVERTER,camac_tcal);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(884,LAND_CAMAC_TCAL_INFO,camac_tcal_info,2);
      REVOKE_SUBEVENT_DECL(884,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(888,LAND_CAMAC_SCALER,camac_scalers,3);
      REVOKE_SUBEVENT_DECL(888,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(889,LAND_CAMAC_SCALER,camac_scalers_tcal,4);
      REVOKE_SUBEVENT_DECL(889,0,LAND_CAMAC_SCALER,camac_scalers_tcal);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(890,LAND_FASTBUS_ERROR,fastbus_error,5);
      REVOKE_SUBEVENT_DECL(890,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(891,LAND_FASTBUS1,fastbus_1,6);
      REVOKE_SUBEVENT_DECL(891,0,LAND_FASTBUS1,fastbus_1);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(892,LAND_FASTBUS2,fastbus_2,7);
      REVOKE_SUBEVENT_DECL(892,0,LAND_FASTBUS2,fastbus_2);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(893,DUMMY_TDC,d1,8);
      REVOKE_SUBEVENT_DECL(893,0,DUMMY_TDC,d1);
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
