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
  // diamond = DIAMOND_SUBEVENT(type=91,subtype=0x238c);
  // sst1 = SIDEREM01_VME(type=82,subtype=0x2008,control=3);
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // fastbus1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // acq = DUMMY(type=35,subtype=0xc1c);
  // vme = LAND_VME(type=88,subtype=0x2260,control=5,subcrate=0);
  // vme_diamond = DIAMOND_VME(type=88,subtype=0x2260,subcrate=1);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // fastbus1_error = LAND_FASTBUS_ERROR_NGF(type=31,subtype=0xc3b,subcrate=1);
  // fastbus2_error = LAND_FASTBUS_ERROR_NGF(type=31,subtype=0xc3b,subcrate=2);
  // pileup = LAND_CAMAC_PILEUP(type=34,subtype=0xdac,control=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1473,__match_no,1,((VES10_1_type==85)&&(VES10_1_subtype==0x2134)),cros3);
  MATCH_SUBEVENT_DECL(1476,__match_no,2,((VES10_1_type==85)&&(VES10_1_subtype==0x213e)),cros3_rewrite);
  MATCH_SUBEVENT_DECL(1477,__match_no,3,((VES10_1_type==91)&&(VES10_1_subtype==0x238c)),diamond);
  MATCH_SUBEVENT_DECL(1479,__match_no,4,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==3)),sst1);
  MATCH_SUBEVENT_DECL(1481,__match_no,5,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1482,__match_no,6,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus1);
  MATCH_SUBEVENT_DECL(1483,__match_no,7,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus2);
  MATCH_SUBEVENT_DECL(1484,__match_no,8,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),acq);
  MATCH_SUBEVENT_DECL(1485,__match_no,9,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==0)),vme);
  MATCH_SUBEVENT_DECL(1486,__match_no,10,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_subcrate==1)),vme_diamond);
  MATCH_SUBEVENT_DECL(1488,__match_no,11,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1494,__match_no,12,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1495,__match_no,13,((VES10_1_type==31)&&(VES10_1_subtype==0xc3b)&&(VES10_1_subcrate==1)),fastbus1_error);
  MATCH_SUBEVENT_DECL(1496,__match_no,14,((VES10_1_type==31)&&(VES10_1_subtype==0xc3b)&&(VES10_1_subcrate==2)),fastbus2_error);
  MATCH_SUBEVENT_DECL(1497,__match_no,15,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==1)),pileup);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1473,CROS3_SUBEVENT,cros3,0);
      REVOKE_SUBEVENT_DECL(1473,0,CROS3_SUBEVENT,cros3);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1476,CROS3_REWRITE_SUBEVENT,cros3_rewrite,1);
      REVOKE_SUBEVENT_DECL(1476,0,CROS3_REWRITE_SUBEVENT,cros3_rewrite);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1477,DIAMOND_SUBEVENT,diamond,2);
      REVOKE_SUBEVENT_DECL(1477,0,DIAMOND_SUBEVENT,diamond);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1479,SIDEREM01_VME,sst1,3);
      REVOKE_SUBEVENT_DECL(1479,0,SIDEREM01_VME,sst1);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1481,LAND_CAMAC_CONVERTER,camac,4);
      REVOKE_SUBEVENT_DECL(1481,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1482,LAND_FASTBUS1,fastbus1,5);
      REVOKE_SUBEVENT_DECL(1482,0,LAND_FASTBUS1,fastbus1);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1483,LAND_FASTBUS2,fastbus2,6);
      REVOKE_SUBEVENT_DECL(1483,0,LAND_FASTBUS2,fastbus2);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1484,DUMMY,acq,7);
      REVOKE_SUBEVENT_DECL(1484,0,DUMMY,acq);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1485,LAND_VME,vme,8);
      REVOKE_SUBEVENT_DECL(1485,0,LAND_VME,vme);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1486,DIAMOND_VME,vme_diamond,9);
      REVOKE_SUBEVENT_DECL(1486,0,DIAMOND_VME,vme_diamond);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1488,LAND_CAMAC_TCAL_INFO,camac_tcal_info,10);
      REVOKE_SUBEVENT_DECL(1488,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1494,LAND_CAMAC_SCALER,camac_scalers,11);
      REVOKE_SUBEVENT_DECL(1494,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1495,LAND_FASTBUS_ERROR_NGF,fastbus1_error,12);
      REVOKE_SUBEVENT_DECL(1495,0,LAND_FASTBUS_ERROR_NGF,fastbus1_error);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1496,LAND_FASTBUS_ERROR_NGF,fastbus2_error,13);
      REVOKE_SUBEVENT_DECL(1496,0,LAND_FASTBUS_ERROR_NGF,fastbus2_error);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1497,LAND_CAMAC_PILEUP,pileup,14);
      REVOKE_SUBEVENT_DECL(1497,0,LAND_CAMAC_PILEUP,pileup);
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
