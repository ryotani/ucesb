/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // fastbus1 = LAND_FASTBUS1(type=32,subtype=0xc1c);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(977,__match_no,1,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(984,__match_no,2,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(987,__match_no,3,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(989,__match_no,4,((VES10_1_type==32)&&(VES10_1_subtype==0xc1c)),fastbus1);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(977,LAND_CAMAC_CONVERTER,camac,0);
      REVOKE_SUBEVENT_DECL(977,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(984,LAND_CAMAC_SCALER,camac_scalers,1);
      REVOKE_SUBEVENT_DECL(984,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(987,LAND_FASTBUS_ERROR,fastbus_error,2);
      REVOKE_SUBEVENT_DECL(987,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(989,LAND_FASTBUS1,fastbus1,3);
      REVOKE_SUBEVENT_DECL(989,0,LAND_FASTBUS1,fastbus1);
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
