/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // vme0 = CRATE(type=10,subtype=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(36,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)),vme0);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(36,CRATE,vme0,0);
      REVOKE_SUBEVENT_DECL(36,0,CRATE,vme0);
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
