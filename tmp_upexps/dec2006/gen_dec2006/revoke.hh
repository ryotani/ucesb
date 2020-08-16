/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // sst = SIDEREM01_VME(type=10,subtype=1,control=91);
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // fastbus_1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus_2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // camac = LAND_CAMAC_CONVERTER(type=0x26ce,subtype=0xc80);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // d2 = DUMMY_TDC(type=35,subtype=0xc1c);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // camac_scalers = LAND_CAMAC_SCALER(type=0x26ce,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // d1 = DUMMY_TDC(type=34,subtype=0xdac,control=9);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1041,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==91)),sst);
  MATCH_SUBEVENT_DECL(1042,__match_no,2,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1043,__match_no,3,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus_1);
  MATCH_SUBEVENT_DECL(1044,__match_no,4,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus_2);
  MATCH_SUBEVENT_DECL(1046,__match_no,5,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1047,__match_no,6,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1051,__match_no,7,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),d2);
  MATCH_SUBEVENT_DECL(1053,__match_no,8,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1054,__match_no,9,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1055,__match_no,10,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(1056,__match_no,11,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==9)),d1);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1041,SIDEREM01_VME,sst,0);
      REVOKE_SUBEVENT_DECL(1041,0,SIDEREM01_VME,sst);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1042,LAND_CAMAC_CONVERTER,camac,1);
      REVOKE_SUBEVENT_DECL(1042,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1043,LAND_FASTBUS1,fastbus_1,2);
      REVOKE_SUBEVENT_DECL(1043,0,LAND_FASTBUS1,fastbus_1);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1044,LAND_FASTBUS2,fastbus_2,3);
      REVOKE_SUBEVENT_DECL(1044,0,LAND_FASTBUS2,fastbus_2);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1046,LAND_CAMAC_CONVERTER,camac,4);
      REVOKE_SUBEVENT_DECL(1046,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1047,LAND_CAMAC_TCAL_INFO,camac_tcal_info,5);
      REVOKE_SUBEVENT_DECL(1047,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1051,DUMMY_TDC,d2,6);
      REVOKE_SUBEVENT_DECL(1051,0,DUMMY_TDC,d2);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1053,LAND_CAMAC_SCALER,camac_scalers,7);
      REVOKE_SUBEVENT_DECL(1053,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1054,LAND_CAMAC_SCALER,camac_scalers,8);
      REVOKE_SUBEVENT_DECL(1054,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1055,LAND_FASTBUS_ERROR,fastbus_error,9);
      REVOKE_SUBEVENT_DECL(1055,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1056,DUMMY_TDC,d1,10);
      REVOKE_SUBEVENT_DECL(1056,0,DUMMY_TDC,d1);
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
