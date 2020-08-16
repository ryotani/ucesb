/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // frs = frs_subev(type=12,subtype=1,procid=30);
  // tpc_s2 = frs_tpcs2_subev(type=12,subtype=1,procid=25);
  // tpc_s4 = frs_tpcs4_subev(type=12,subtype=1,procid=20);
  // ams_siderem = ams_siderem_subev(procid=100,type=12,subtype=1,control=20);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1776,__match_no,1,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_procid==30)),frs);
  MATCH_SUBEVENT_DECL(1777,__match_no,2,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_procid==25)),tpc_s2);
  MATCH_SUBEVENT_DECL(1778,__match_no,3,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_procid==20)),tpc_s4);
  MATCH_SUBEVENT_DECL(1780,__match_no,4,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_procid==100)),ams_siderem);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1776,frs_subev,frs,0);
      REVOKE_SUBEVENT_DECL(1776,0,frs_subev,frs);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1777,frs_tpcs2_subev,tpc_s2,1);
      REVOKE_SUBEVENT_DECL(1777,0,frs_tpcs2_subev,tpc_s2);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1778,frs_tpcs4_subev,tpc_s4,2);
      REVOKE_SUBEVENT_DECL(1778,0,frs_tpcs4_subev,tpc_s4);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1780,ams_siderem_subev,ams_siderem,3);
      REVOKE_SUBEVENT_DECL(1780,0,ams_siderem_subev,ams_siderem);
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
