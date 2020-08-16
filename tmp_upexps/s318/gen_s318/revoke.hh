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
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // pileup = LAND_CAMAC_PILEUP(type=34,subtype=0xdac,control=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1318,__match_no,1,((VES10_1_type==85)&&(VES10_1_subtype==0x2134)),cros3);
  MATCH_SUBEVENT_DECL(1326,__match_no,2,((VES10_1_type==85)&&(VES10_1_subtype==0x213e)),cros3_rewrite);
  MATCH_SUBEVENT_DECL(1328,__match_no,3,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==3)),sst);
  MATCH_SUBEVENT_DECL(1329,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1330,__match_no,5,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus1);
  MATCH_SUBEVENT_DECL(1331,__match_no,6,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus2);
  MATCH_SUBEVENT_DECL(1332,__match_no,7,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),acq);
  MATCH_SUBEVENT_DECL(1333,__match_no,8,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)),vme);
  MATCH_SUBEVENT_DECL(1335,__match_no,9,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1341,__match_no,10,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1342,__match_no,11,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(1343,__match_no,12,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==1)),pileup);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1318,CROS3_SUBEVENT,cros3,0);
      REVOKE_SUBEVENT_DECL(1318,0,CROS3_SUBEVENT,cros3);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1326,CROS3_REWRITE_SUBEVENT,cros3_rewrite,1);
      REVOKE_SUBEVENT_DECL(1326,0,CROS3_REWRITE_SUBEVENT,cros3_rewrite);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1328,SIDEREM01_VME,sst,2);
      REVOKE_SUBEVENT_DECL(1328,0,SIDEREM01_VME,sst);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1329,LAND_CAMAC_CONVERTER,camac,3);
      REVOKE_SUBEVENT_DECL(1329,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1330,LAND_FASTBUS1,fastbus1,4);
      REVOKE_SUBEVENT_DECL(1330,0,LAND_FASTBUS1,fastbus1);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1331,LAND_FASTBUS2,fastbus2,5);
      REVOKE_SUBEVENT_DECL(1331,0,LAND_FASTBUS2,fastbus2);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1332,DUMMY,acq,6);
      REVOKE_SUBEVENT_DECL(1332,0,DUMMY,acq);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1333,LAND_VME,vme,7);
      REVOKE_SUBEVENT_DECL(1333,0,LAND_VME,vme);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1335,LAND_CAMAC_TCAL_INFO,camac_tcal_info,8);
      REVOKE_SUBEVENT_DECL(1335,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1341,LAND_CAMAC_SCALER,camac_scalers,9);
      REVOKE_SUBEVENT_DECL(1341,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1342,LAND_FASTBUS_ERROR,fastbus_error,10);
      REVOKE_SUBEVENT_DECL(1342,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1343,LAND_CAMAC_PILEUP,pileup,11);
      REVOKE_SUBEVENT_DECL(1343,0,LAND_CAMAC_PILEUP,pileup);
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
