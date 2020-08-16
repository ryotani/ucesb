/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // cros3 = CROS3_SUBEVENT(type=85,subtype=0x2134);
  // cros3_rewrite = CROS3_REWRITE_SUBEVENT(type=85,subtype=0x213e);
  // sst = SIDEREM01_VME(type=82,subtype=0x2008,control=3);
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // fastbus1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // acq = DUMMY(type=35,subtype=0xc1c);
  // vme = LAND_VME(type=88,subtype=0x2260,control=5);
  // camac = LAND_CAMAC_CONVERTER(type=0x26ce,subtype=0xc80);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers_d = DUMMY(type=34,subtype=0xc1c);
  // camac_scalers = LAND_CAMAC_SCALER(type=0x26ce,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // d1 = DUMMY(type=34,subtype=0xdac,control=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1277,__match_no,1,((VES10_1_type==85)&&(VES10_1_subtype==0x2134)),cros3);
  MATCH_SUBEVENT_DECL(1280,__match_no,2,((VES10_1_type==85)&&(VES10_1_subtype==0x213e)),cros3_rewrite);
  MATCH_SUBEVENT_DECL(1282,__match_no,3,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==3)),sst);
  MATCH_SUBEVENT_DECL(1283,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1284,__match_no,5,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus1);
  MATCH_SUBEVENT_DECL(1285,__match_no,6,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus2);
  MATCH_SUBEVENT_DECL(1286,__match_no,7,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),acq);
  MATCH_SUBEVENT_DECL(1287,__match_no,8,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)),vme);
  MATCH_SUBEVENT_DECL(1289,__match_no,9,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1290,__match_no,10,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1295,__match_no,11,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers_d);
  MATCH_SUBEVENT_DECL(1296,__match_no,12,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1297,__match_no,13,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(1298,__match_no,14,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==1)),d1);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1277,CROS3_SUBEVENT,cros3,0);
      REVOKE_SUBEVENT_DECL(1277,0,CROS3_SUBEVENT,cros3);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1280,CROS3_REWRITE_SUBEVENT,cros3_rewrite,1);
      REVOKE_SUBEVENT_DECL(1280,0,CROS3_REWRITE_SUBEVENT,cros3_rewrite);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1282,SIDEREM01_VME,sst,2);
      REVOKE_SUBEVENT_DECL(1282,0,SIDEREM01_VME,sst);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1283,LAND_CAMAC_CONVERTER,camac,3);
      REVOKE_SUBEVENT_DECL(1283,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1284,LAND_FASTBUS1,fastbus1,4);
      REVOKE_SUBEVENT_DECL(1284,0,LAND_FASTBUS1,fastbus1);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1285,LAND_FASTBUS2,fastbus2,5);
      REVOKE_SUBEVENT_DECL(1285,0,LAND_FASTBUS2,fastbus2);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1286,DUMMY,acq,6);
      REVOKE_SUBEVENT_DECL(1286,0,DUMMY,acq);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1287,LAND_VME,vme,7);
      REVOKE_SUBEVENT_DECL(1287,0,LAND_VME,vme);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1289,LAND_CAMAC_CONVERTER,camac,8);
      REVOKE_SUBEVENT_DECL(1289,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1290,LAND_CAMAC_TCAL_INFO,camac_tcal_info,9);
      REVOKE_SUBEVENT_DECL(1290,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1295,DUMMY,camac_scalers_d,10);
      REVOKE_SUBEVENT_DECL(1295,0,DUMMY,camac_scalers_d);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1296,LAND_CAMAC_SCALER,camac_scalers,11);
      REVOKE_SUBEVENT_DECL(1296,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1297,LAND_FASTBUS_ERROR,fastbus_error,12);
      REVOKE_SUBEVENT_DECL(1297,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1298,DUMMY,d1,13);
      REVOKE_SUBEVENT_DECL(1298,0,DUMMY,d1);
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
