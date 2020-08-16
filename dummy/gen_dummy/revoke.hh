/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // ts = wr_ts_100(type=10,subtype=1,control=0,subcrate=0);
  // vme = vme_subevent(type=88,subtype=0x2260,control=0,subcrate=0);
  // vme_drasi = empty_subevent(type=0x4d2,subtype=0x162e,control=9,
                             // subcrate=0);
  // vme_drasi_unknown = empty_subevent(type=0xffff,subtype=0xffff,control=9,
                                     // subcrate=9);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(188,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==0)&&(VES10_1_subcrate==0)),ts);
  MATCH_SUBEVENT_DECL(189,__match_no,2,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==0)&&(VES10_1_subcrate==0)),vme);
  MATCH_SUBEVENT_DECL(190,__match_no,3,((VES10_1_type==0x4d2)&&(VES10_1_subtype==0x162e)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),vme_drasi);
  MATCH_SUBEVENT_DECL(192,__match_no,4,((VES10_1_type==0xffff)&&(VES10_1_subtype==0xffff)&&(VES10_1_control==9)&&(VES10_1_subcrate==9)),vme_drasi_unknown);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(188,wr_ts_100,ts,0);
      REVOKE_SUBEVENT_DECL(188,0,wr_ts_100,ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(189,vme_subevent,vme,1);
      REVOKE_SUBEVENT_DECL(189,0,vme_subevent,vme);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(190,empty_subevent,vme_drasi,2);
      REVOKE_SUBEVENT_DECL(190,0,empty_subevent,vme_drasi);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(192,empty_subevent,vme_drasi_unknown,3);
      REVOKE_SUBEVENT_DECL(192,0,empty_subevent,vme_drasi_unknown);
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
