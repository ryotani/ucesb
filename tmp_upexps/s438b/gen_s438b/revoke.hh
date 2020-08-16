/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // master_ts = wr_100(type=10,subtype=1,control=1,subcrate=0);
  // event_time = mark_event_time(type=88,subtype=0x2260,control=1,subcrate=0);
  // daq_status = daq_status_subev(type=89,subtype=0x22c4,control=1,
                                // subcrate=2);
  // tpat_and_co = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80,control=1,
                                     // subcrate=2);
  // scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c,control=1,subcrate=2);
  // neuland_tacq = neuland_subevent(type=94,subtype=0x24b8,control=3,
                                  // subcrate=0);
  // los_psp = los_psp_subev(type=88,subtype=0x2260,control=9,subcrate=1);
  // los_scaler = los_scaler_subev(type=34,subtype=0xce4,control=9,subcrate=1);
  // tof13 = tof13_subev(type=88,subtype=0x2260,control=9,subcrate=2);
  // sit = sit_subev(type=104,subtype=0x28a0,control=37,subcrate=0);
  // tbm_ts = wr_300(type=10,subtype=1,control=5,subcrate=4);
  // fiber = fiber_subev(type=100,subtype=0x2710,control=9,subcrate=0);
  // psp_febex = psp_febex_subev(type=100,subtype=0x2710,control=9,subcrate=1);
  // neuland_tamex = neuland_tamex_subev(type=102,subtype=0x27d8,control=9,
                                      // subcrate=0);
  // tof13_tamex = tof13_tamex_subev(type=102,subtype=0x27d8,control=9,
                                  // subcrate=1);
  // mfi = mfi_subev(type=97,subtype=0x25e4,control=9,subcrate=0);
  // califa = califa_subev(type=100,subtype=0x2710,control=9,subcrate=2);
  // psp_ts = wr_500(type=10,subtype=1,control=5,subcrate=0);
  // psp_struck = psp_subev(type=88,subtype=0x2260,control=5,subcrate=3);
  // empty_1 = empty_subev(type=10,subtype=1,control=9,subcrate=1);
  // empty_2 = empty_subev(type=10,subtype=1,control=9,subcrate=2);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(2499,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==1)&&(VES10_1_subcrate==0)),master_ts);
  MATCH_SUBEVENT_DECL(2500,__match_no,2,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==1)&&(VES10_1_subcrate==0)),event_time);
  MATCH_SUBEVENT_DECL(2501,__match_no,3,((VES10_1_type==89)&&(VES10_1_subtype==0x22c4)&&(VES10_1_control==1)&&(VES10_1_subcrate==2)),daq_status);
  MATCH_SUBEVENT_DECL(2502,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)&&(VES10_1_control==1)&&(VES10_1_subcrate==2)),tpat_and_co);
  MATCH_SUBEVENT_DECL(2503,__match_no,5,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)&&(VES10_1_control==1)&&(VES10_1_subcrate==2)),scalers);
  MATCH_SUBEVENT_DECL(2505,__match_no,6,((VES10_1_type==94)&&(VES10_1_subtype==0x24b8)&&(VES10_1_control==3)&&(VES10_1_subcrate==0)),neuland_tacq);
  MATCH_SUBEVENT_DECL(2506,__match_no,7,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),los_psp);
  MATCH_SUBEVENT_DECL(2507,__match_no,8,((VES10_1_type==34)&&(VES10_1_subtype==0xce4)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),los_scaler);
  MATCH_SUBEVENT_DECL(2508,__match_no,9,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)),tof13);
  MATCH_SUBEVENT_DECL(2510,__match_no,10,((VES10_1_type==104)&&(VES10_1_subtype==0x28a0)&&(VES10_1_control==37)&&(VES10_1_subcrate==0)),sit);
  MATCH_SUBEVENT_DECL(2512,__match_no,11,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==5)&&(VES10_1_subcrate==4)),tbm_ts);
  MATCH_SUBEVENT_DECL(2513,__match_no,12,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),fiber);
  MATCH_SUBEVENT_DECL(2514,__match_no,13,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),psp_febex);
  MATCH_SUBEVENT_DECL(2515,__match_no,14,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),neuland_tamex);
  MATCH_SUBEVENT_DECL(2516,__match_no,15,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),tof13_tamex);
  MATCH_SUBEVENT_DECL(2517,__match_no,16,((VES10_1_type==97)&&(VES10_1_subtype==0x25e4)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),mfi);
  MATCH_SUBEVENT_DECL(2519,__match_no,17,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)),califa);
  MATCH_SUBEVENT_DECL(2521,__match_no,18,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==5)&&(VES10_1_subcrate==0)),psp_ts);
  MATCH_SUBEVENT_DECL(2522,__match_no,19,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==3)),psp_struck);
  MATCH_SUBEVENT_DECL(2525,__match_no,20,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),empty_1);
  MATCH_SUBEVENT_DECL(2526,__match_no,21,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)),empty_2);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2499,wr_100,master_ts,0);
      REVOKE_SUBEVENT_DECL(2499,0,wr_100,master_ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2500,mark_event_time,event_time,1);
      REVOKE_SUBEVENT_DECL(2500,0,mark_event_time,event_time);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2501,daq_status_subev,daq_status,2);
      REVOKE_SUBEVENT_DECL(2501,0,daq_status_subev,daq_status);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2502,LAND_CAMAC_CONVERTER,tpat_and_co,3);
      REVOKE_SUBEVENT_DECL(2502,0,LAND_CAMAC_CONVERTER,tpat_and_co);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2503,LAND_CAMAC_SCALER,scalers,4);
      REVOKE_SUBEVENT_DECL(2503,0,LAND_CAMAC_SCALER,scalers);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2505,neuland_subevent,neuland_tacq,5);
      REVOKE_SUBEVENT_DECL(2505,0,neuland_subevent,neuland_tacq);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2506,los_psp_subev,los_psp,6);
      REVOKE_SUBEVENT_DECL(2506,0,los_psp_subev,los_psp);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2507,los_scaler_subev,los_scaler,7);
      REVOKE_SUBEVENT_DECL(2507,0,los_scaler_subev,los_scaler);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2508,tof13_subev,tof13,8);
      REVOKE_SUBEVENT_DECL(2508,0,tof13_subev,tof13);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2510,sit_subev,sit,9);
      REVOKE_SUBEVENT_DECL(2510,0,sit_subev,sit);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2512,wr_300,tbm_ts,10);
      REVOKE_SUBEVENT_DECL(2512,0,wr_300,tbm_ts);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2513,fiber_subev,fiber,11);
      REVOKE_SUBEVENT_DECL(2513,0,fiber_subev,fiber);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2514,psp_febex_subev,psp_febex,12);
      REVOKE_SUBEVENT_DECL(2514,0,psp_febex_subev,psp_febex);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2515,neuland_tamex_subev,neuland_tamex,13);
      REVOKE_SUBEVENT_DECL(2515,0,neuland_tamex_subev,neuland_tamex);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2516,tof13_tamex_subev,tof13_tamex,14);
      REVOKE_SUBEVENT_DECL(2516,0,tof13_tamex_subev,tof13_tamex);
      break;
    case 16:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2517,mfi_subev,mfi,15);
      REVOKE_SUBEVENT_DECL(2517,0,mfi_subev,mfi);
      break;
    case 17:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2519,califa_subev,califa,16);
      REVOKE_SUBEVENT_DECL(2519,0,califa_subev,califa);
      break;
    case 18:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2521,wr_500,psp_ts,17);
      REVOKE_SUBEVENT_DECL(2521,0,wr_500,psp_ts);
      break;
    case 19:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2522,psp_subev,psp_struck,18);
      REVOKE_SUBEVENT_DECL(2522,0,psp_subev,psp_struck);
      break;
    case 20:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2525,empty_subev,empty_1,19);
      REVOKE_SUBEVENT_DECL(2525,0,empty_subev,empty_1);
      break;
    case 21:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2526,empty_subev,empty_2,20);
      REVOKE_SUBEVENT_DECL(2526,0,empty_subev,empty_2);
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
