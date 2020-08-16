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
  // acq = DUMMY(type=35,subtype=0xc1c);
  // vme1 = VME_CRATE1(type=88,subtype=0x2260,control=5,subcrate=1);
  // vme2 = VME_CRATE2(type=88,subtype=0x2260,control=5,subcrate=2);
  // vme_cbr = CB_VME_RIGHT(type=88,subtype=0x2260,control=5,subcrate=3);
  // vme_cbl = CB_VME_LEFT(type=88,subtype=0x2260,control=5,subcrate=4);
  // vme_master = MASTER_VME(type=88,subtype=0x2260,subcrate=6);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // pileup = LAND_CAMAC_PILEUP(type=34,subtype=0xdac,control=1);
  // tacquila = TACQUILA_LAND_SUBEVENT(type=94,subtype=0x24b8,subcrate=0);
  // neuland = TACQUILA_NEULAND_SUBEVENT(type=94,subtype=0x24b8,subcrate=1);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1435,__match_no,1,((VES10_1_type==85)&&(VES10_1_subtype==0x2134)),cros3);
  MATCH_SUBEVENT_DECL(1437,__match_no,2,((VES10_1_type==85)&&(VES10_1_subtype==0x213e)),cros3_rewrite);
  MATCH_SUBEVENT_DECL(1439,__match_no,3,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==3)),sst);
  MATCH_SUBEVENT_DECL(1440,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1441,__match_no,5,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),acq);
  MATCH_SUBEVENT_DECL(1443,__match_no,6,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),vme1);
  MATCH_SUBEVENT_DECL(1444,__match_no,7,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==2)),vme2);
  MATCH_SUBEVENT_DECL(1446,__match_no,8,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==3)),vme_cbr);
  MATCH_SUBEVENT_DECL(1447,__match_no,9,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==4)),vme_cbl);
  MATCH_SUBEVENT_DECL(1449,__match_no,10,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_subcrate==6)),vme_master);
  MATCH_SUBEVENT_DECL(1451,__match_no,11,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1452,__match_no,12,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1453,__match_no,13,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==1)),pileup);
  MATCH_SUBEVENT_DECL(1455,__match_no,14,((VES10_1_type==94)&&(VES10_1_subtype==0x24b8)&&(VES10_1_subcrate==0)),tacquila);
  MATCH_SUBEVENT_DECL(1456,__match_no,15,((VES10_1_type==94)&&(VES10_1_subtype==0x24b8)&&(VES10_1_subcrate==1)),neuland);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1435,CROS3_SUBEVENT,cros3,0);
      REVOKE_SUBEVENT_DECL(1435,0,CROS3_SUBEVENT,cros3);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1437,CROS3_REWRITE_SUBEVENT,cros3_rewrite,1);
      REVOKE_SUBEVENT_DECL(1437,0,CROS3_REWRITE_SUBEVENT,cros3_rewrite);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1439,SIDEREM01_VME,sst,2);
      REVOKE_SUBEVENT_DECL(1439,0,SIDEREM01_VME,sst);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1440,LAND_CAMAC_CONVERTER,camac,3);
      REVOKE_SUBEVENT_DECL(1440,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1441,DUMMY,acq,4);
      REVOKE_SUBEVENT_DECL(1441,0,DUMMY,acq);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1443,VME_CRATE1,vme1,5);
      REVOKE_SUBEVENT_DECL(1443,0,VME_CRATE1,vme1);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1444,VME_CRATE2,vme2,6);
      REVOKE_SUBEVENT_DECL(1444,0,VME_CRATE2,vme2);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1446,CB_VME_RIGHT,vme_cbr,7);
      REVOKE_SUBEVENT_DECL(1446,0,CB_VME_RIGHT,vme_cbr);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1447,CB_VME_LEFT,vme_cbl,8);
      REVOKE_SUBEVENT_DECL(1447,0,CB_VME_LEFT,vme_cbl);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1449,MASTER_VME,vme_master,9);
      REVOKE_SUBEVENT_DECL(1449,0,MASTER_VME,vme_master);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1451,LAND_CAMAC_TCAL_INFO,camac_tcal_info,10);
      REVOKE_SUBEVENT_DECL(1451,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1452,LAND_CAMAC_SCALER,camac_scalers,11);
      REVOKE_SUBEVENT_DECL(1452,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1453,LAND_CAMAC_PILEUP,pileup,12);
      REVOKE_SUBEVENT_DECL(1453,0,LAND_CAMAC_PILEUP,pileup);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1455,TACQUILA_LAND_SUBEVENT,tacquila,13);
      REVOKE_SUBEVENT_DECL(1455,0,TACQUILA_LAND_SUBEVENT,tacquila);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1456,TACQUILA_NEULAND_SUBEVENT,neuland,14);
      REVOKE_SUBEVENT_DECL(1456,0,TACQUILA_NEULAND_SUBEVENT,neuland);
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
