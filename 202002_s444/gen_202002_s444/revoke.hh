/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // main_ts = main_wr(type=10,subtype=1,control=30);
  // main_tpat = main_tpat_subev(type=36,subtype=0xe10,control=30);
  // sofia_sampler = sofia_sampler_subev(type=39,subtype=0xf3c,control=30);
  // neuland_ts = wr_neuland(type=10,subtype=1,control=21);
  // neuland_tamex_1 = neuland_tamex_subev(type=102,subtype=0x27d8,control=21);
  // neuland_tamex_2 = neuland_tamex_subev(type=102,subtype=0x27d8,control=22);
  // neuland_tamex_3 = neuland_tamex_subev(type=102,subtype=0x27d8,control=23);
  // neuland_tamex_4 = neuland_tamex_subev(type=102,subtype=0x27d8,control=24);
  // revisit califa_messel = CALIFA_MESSEL(type=100,subtype=0x2710,subcrate=2,
                                        // procid=2,control=9);
  // revisit califa_wixhausen = CALIFA_WIXHAUSEN(type=100,subtype=0x2710,
                                              // subcrate=2,procid=2,
                                              // control=10);
  // sofia_ts = sofia_wr(type=10,subtype=1,control=101);
  // sofia_tof = sofia_tof_subev(type=88,subtype=0x2260,control=101);
  // sofia_mwpc = sofia_mwpc_subev(type=88,subtype=0x2260,control=102);
  // sofia_twim = sofia_twim_subev(type=88,subtype=0x2260,control=103);
  // sofia_trim = sofia_trim_subev(type=88,subtype=0x2260,control=104);
  // fibsipm = fibsipm_subev(type=103,subtype=0x283c,control=50);
  // s2_ts = wr_s2(type=10,subtype=1,control=20,procid=35);
  // s2_vme = s2_vme_subev(type=12,subtype=1,control=20,procid=35);
  // s8_ts = s8_wr(type=10,subtype=1,control=80);
  // s8_tpat = s8_tpat_subev(type=36,subtype=0xe10,control=80);
  // s8_vme = s8_vme_subev(type=88,subtype=0x2260,control=80);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(2159,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==30)),main_ts);
  MATCH_SUBEVENT_DECL(2160,__match_no,2,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==30)),main_tpat);
  MATCH_SUBEVENT_DECL(2161,__match_no,3,((VES10_1_type==39)&&(VES10_1_subtype==0xf3c)&&(VES10_1_control==30)),sofia_sampler);
  MATCH_SUBEVENT_DECL(2163,__match_no,4,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==21)),neuland_ts);
  MATCH_SUBEVENT_DECL(2164,__match_no,5,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==21)),neuland_tamex_1);
  MATCH_SUBEVENT_DECL(2165,__match_no,6,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==22)),neuland_tamex_2);
  MATCH_SUBEVENT_DECL(2166,__match_no,7,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==23)),neuland_tamex_3);
  MATCH_SUBEVENT_DECL(2167,__match_no,8,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==24)),neuland_tamex_4);
  MATCH_SUBEVENT_DECL(2169,__match_no,9,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)&&(VES10_1_procid==2)),califa_messel);
  MATCH_SUBEVENT_DECL(2170,__match_no,10,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==10)&&(VES10_1_subcrate==2)&&(VES10_1_procid==2)),califa_wixhausen);
  MATCH_SUBEVENT_DECL(2172,__match_no,11,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==101)),sofia_ts);
  MATCH_SUBEVENT_DECL(2173,__match_no,12,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==101)),sofia_tof);
  MATCH_SUBEVENT_DECL(2174,__match_no,13,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==102)),sofia_mwpc);
  MATCH_SUBEVENT_DECL(2175,__match_no,14,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==103)),sofia_twim);
  MATCH_SUBEVENT_DECL(2176,__match_no,15,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==104)),sofia_trim);
  MATCH_SUBEVENT_DECL(2178,__match_no,16,((VES10_1_type==103)&&(VES10_1_subtype==0x283c)&&(VES10_1_control==50)),fibsipm);
  MATCH_SUBEVENT_DECL(2180,__match_no,17,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_procid==35)),s2_ts);
  MATCH_SUBEVENT_DECL(2181,__match_no,18,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_procid==35)),s2_vme);
  MATCH_SUBEVENT_DECL(2183,__match_no,19,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==80)),s8_ts);
  MATCH_SUBEVENT_DECL(2184,__match_no,20,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==80)),s8_tpat);
  MATCH_SUBEVENT_DECL(2185,__match_no,21,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==80)),s8_vme);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2159,main_wr,main_ts,0);
      REVOKE_SUBEVENT_DECL(2159,0,main_wr,main_ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2160,main_tpat_subev,main_tpat,1);
      REVOKE_SUBEVENT_DECL(2160,0,main_tpat_subev,main_tpat);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2161,sofia_sampler_subev,sofia_sampler,2);
      REVOKE_SUBEVENT_DECL(2161,0,sofia_sampler_subev,sofia_sampler);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2163,wr_neuland,neuland_ts,3);
      REVOKE_SUBEVENT_DECL(2163,0,wr_neuland,neuland_ts);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2164,neuland_tamex_subev,neuland_tamex_1,4);
      REVOKE_SUBEVENT_DECL(2164,0,neuland_tamex_subev,neuland_tamex_1);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2165,neuland_tamex_subev,neuland_tamex_2,5);
      REVOKE_SUBEVENT_DECL(2165,0,neuland_tamex_subev,neuland_tamex_2);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2166,neuland_tamex_subev,neuland_tamex_3,6);
      REVOKE_SUBEVENT_DECL(2166,0,neuland_tamex_subev,neuland_tamex_3);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2167,neuland_tamex_subev,neuland_tamex_4,7);
      REVOKE_SUBEVENT_DECL(2167,0,neuland_tamex_subev,neuland_tamex_4);
      break;
    case 9:
      REVOKE_SUBEVENT_DECL(2169,0,CALIFA_MESSEL,califa_messel);
      break;
    case 10:
      REVOKE_SUBEVENT_DECL(2170,0,CALIFA_WIXHAUSEN,califa_wixhausen);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2172,sofia_wr,sofia_ts,8);
      REVOKE_SUBEVENT_DECL(2172,0,sofia_wr,sofia_ts);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2173,sofia_tof_subev,sofia_tof,9);
      REVOKE_SUBEVENT_DECL(2173,0,sofia_tof_subev,sofia_tof);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2174,sofia_mwpc_subev,sofia_mwpc,10);
      REVOKE_SUBEVENT_DECL(2174,0,sofia_mwpc_subev,sofia_mwpc);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2175,sofia_twim_subev,sofia_twim,11);
      REVOKE_SUBEVENT_DECL(2175,0,sofia_twim_subev,sofia_twim);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2176,sofia_trim_subev,sofia_trim,12);
      REVOKE_SUBEVENT_DECL(2176,0,sofia_trim_subev,sofia_trim);
      break;
    case 16:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2178,fibsipm_subev,fibsipm,13);
      REVOKE_SUBEVENT_DECL(2178,0,fibsipm_subev,fibsipm);
      break;
    case 17:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2180,wr_s2,s2_ts,14);
      REVOKE_SUBEVENT_DECL(2180,0,wr_s2,s2_ts);
      break;
    case 18:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2181,s2_vme_subev,s2_vme,15);
      REVOKE_SUBEVENT_DECL(2181,0,s2_vme_subev,s2_vme);
      break;
    case 19:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2183,s8_wr,s8_ts,16);
      REVOKE_SUBEVENT_DECL(2183,0,s8_wr,s8_ts);
      break;
    case 20:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2184,s8_tpat_subev,s8_tpat,17);
      REVOKE_SUBEVENT_DECL(2184,0,s8_tpat_subev,s8_tpat);
      break;
    case 21:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2185,s8_vme_subev,s8_vme,18);
      REVOKE_SUBEVENT_DECL(2185,0,s8_vme_subev,s8_vme);
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
