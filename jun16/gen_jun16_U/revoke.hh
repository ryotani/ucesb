/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // master_ts = wr_100(type=10,subtype=1,control=0);
  // master_tpat = tpat_subev(type=36,subtype=0xe10,control=0);
  // master_lmu_scalers = lmu_scalers_subev(type=37,subtype=0xe74,control=0);
  // master_vme = master_subev(type=88,subtype=0x2260,control=0);
  // los = los_subev(type=88,subtype=0x2260,control=1);
  // los_scalers = los_scalers_subev(type=38,subtype=0xed8,control=1);
  // los_sampler = los_sampler_subev(type=39,subtype=0xf3c,control=1);
  // tofd_vme = tofd_vme_subev(type=88,subtype=0x2260,control=2);
  // tbm_ts = wr_200(type=10,subtype=1,control=3);
  // tbm_tpat = tpat_subev(type=36,subtype=0xe10,control=3);
  // tbm_vme = tbm_subev(type=88,subtype=0x2260,control=3);
  // tofd_tamex = tofd_tamex_subev(type=102,subtype=0x27d8,control=4);
  // tracking_febex = tracking_febex_subev(type=100,subtype=0x2710,control=5);
  // los_empty = empty_subev(type=10,subtype=1,control=1);
  // tofd_empty = empty_subev(type=10,subtype=1,control=2);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(928,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==0)),master_ts);
  MATCH_SUBEVENT_DECL(929,__match_no,2,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==0)),master_tpat);
  MATCH_SUBEVENT_DECL(930,__match_no,3,((VES10_1_type==37)&&(VES10_1_subtype==0xe74)&&(VES10_1_control==0)),master_lmu_scalers);
  MATCH_SUBEVENT_DECL(931,__match_no,4,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==0)),master_vme);
  MATCH_SUBEVENT_DECL(932,__match_no,5,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==1)),los);
  MATCH_SUBEVENT_DECL(933,__match_no,6,((VES10_1_type==38)&&(VES10_1_subtype==0xed8)&&(VES10_1_control==1)),los_scalers);
  MATCH_SUBEVENT_DECL(934,__match_no,7,((VES10_1_type==39)&&(VES10_1_subtype==0xf3c)&&(VES10_1_control==1)),los_sampler);
  MATCH_SUBEVENT_DECL(935,__match_no,8,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==2)),tofd_vme);
  MATCH_SUBEVENT_DECL(936,__match_no,9,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==3)),tbm_ts);
  MATCH_SUBEVENT_DECL(937,__match_no,10,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==3)),tbm_tpat);
  MATCH_SUBEVENT_DECL(938,__match_no,11,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==3)),tbm_vme);
  MATCH_SUBEVENT_DECL(939,__match_no,12,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==4)),tofd_tamex);
  MATCH_SUBEVENT_DECL(940,__match_no,13,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==5)),tracking_febex);
  MATCH_SUBEVENT_DECL(948,__match_no,14,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==1)),los_empty);
  MATCH_SUBEVENT_DECL(949,__match_no,15,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==2)),tofd_empty);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(928,wr_100,master_ts,0);
      REVOKE_SUBEVENT_DECL(928,0,wr_100,master_ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(929,tpat_subev,master_tpat,1);
      REVOKE_SUBEVENT_DECL(929,0,tpat_subev,master_tpat);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(930,lmu_scalers_subev,master_lmu_scalers,2);
      REVOKE_SUBEVENT_DECL(930,0,lmu_scalers_subev,master_lmu_scalers);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(931,master_subev,master_vme,3);
      REVOKE_SUBEVENT_DECL(931,0,master_subev,master_vme);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(932,los_subev,los,4);
      REVOKE_SUBEVENT_DECL(932,0,los_subev,los);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(933,los_scalers_subev,los_scalers,5);
      REVOKE_SUBEVENT_DECL(933,0,los_scalers_subev,los_scalers);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(934,los_sampler_subev,los_sampler,6);
      REVOKE_SUBEVENT_DECL(934,0,los_sampler_subev,los_sampler);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(935,tofd_vme_subev,tofd_vme,7);
      REVOKE_SUBEVENT_DECL(935,0,tofd_vme_subev,tofd_vme);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(936,wr_200,tbm_ts,8);
      REVOKE_SUBEVENT_DECL(936,0,wr_200,tbm_ts);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(937,tpat_subev,tbm_tpat,9);
      REVOKE_SUBEVENT_DECL(937,0,tpat_subev,tbm_tpat);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(938,tbm_subev,tbm_vme,10);
      REVOKE_SUBEVENT_DECL(938,0,tbm_subev,tbm_vme);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(939,tofd_tamex_subev,tofd_tamex,11);
      REVOKE_SUBEVENT_DECL(939,0,tofd_tamex_subev,tofd_tamex);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(940,tracking_febex_subev,tracking_febex,12);
      REVOKE_SUBEVENT_DECL(940,0,tracking_febex_subev,tracking_febex);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(948,empty_subev,los_empty,13);
      REVOKE_SUBEVENT_DECL(948,0,empty_subev,los_empty);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(949,empty_subev,tofd_empty,14);
      REVOKE_SUBEVENT_DECL(949,0,empty_subev,tofd_empty);
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
