/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // ts = TS(type=10,subtype=1,control=5,subcrate=1);
  // vme = VME(type=88,subtype=0x2260,control=5,subcrate=1);
  // scalers = SCALERS(type=12,subtype=0xd80,control=5,subcrate=1);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1322,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),ts);
  MATCH_SUBEVENT_DECL(1323,__match_no,2,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),vme);
  MATCH_SUBEVENT_DECL(1324,__match_no,3,((VES10_1_type==12)&&(VES10_1_subtype==0xd80)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),scalers);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1322,TS,ts,0);
      REVOKE_SUBEVENT_DECL(1322,0,TS,ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1323,VME,vme,1);
      REVOKE_SUBEVENT_DECL(1323,0,VME,vme);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1324,SCALERS,scalers,2);
      REVOKE_SUBEVENT_DECL(1324,0,SCALERS,scalers);
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
