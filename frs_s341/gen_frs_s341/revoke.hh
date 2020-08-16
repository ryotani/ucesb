/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // vme0 = FRS_CRATE(type=10,subtype=1,procid=10);
  // vme1 = TPC_CRATE(type=10,subtype=1,procid=20);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(188,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_procid==10)),vme0);
  MATCH_SUBEVENT_DECL(189,__match_no,2,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_procid==20)),vme1);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(188,FRS_CRATE,vme0,0);
      REVOKE_SUBEVENT_DECL(188,0,FRS_CRATE,vme0);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(189,TPC_CRATE,vme1,1);
      REVOKE_SUBEVENT_DECL(189,0,TPC_CRATE,vme1);
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
