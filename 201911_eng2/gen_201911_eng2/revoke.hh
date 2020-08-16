/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
  // los_ts = los_wr(type=10,subtype=1,control=1);
  // los_lmu = lmu_subev(type=37,subtype=0xe74,control=1);
  // los_vme = los_vme_subev(type=88,subtype=0x2260,control=1);
  // los_tamex = los_tamex_subev(type=102,subtype=0x27d8,control=2);
  // los_sampler = los_sampler_subev(type=39,subtype=0xf3c,control=1);
  // fib1ab = fib1ab_subev(type=102,subtype=0x27d8,control=3);
  // neuland_ts = wr_neuland(type=10,subtype=1,control=21);
  // neuland_tamex_1 = neuland_tamex_subev(type=102,subtype=0x27d8,control=21);
  // neuland_tamex_2 = neuland_tamex_subev(type=102,subtype=0x27d8,control=22);
  // neuland_tamex_3 = neuland_tamex_subev(type=102,subtype=0x27d8,control=23);
  // neuland_tamex_4 = neuland_tamex_subev(type=102,subtype=0x27d8,control=24);
  // revisit califa = CALIFA(type=100,subtype=0x2710,subcrate=2,procid=2,
                          // control=9);
  // ams_ts = ams_wr(type=10,subtype=1,control=40);
  // ams_siderem_1 = ams_siderem1_subev(type=82,subtype=0x2008,control=40);
  // ams_siderem_2 = ams_siderem2_subev(type=82,subtype=0x2008,control=41);
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
  MATCH_SUBEVENT_DECL(2197,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==1)),los_ts);
  MATCH_SUBEVENT_DECL(2198,__match_no,2,((VES10_1_type==37)&&(VES10_1_subtype==0xe74)&&(VES10_1_control==1)),los_lmu);
  MATCH_SUBEVENT_DECL(2199,__match_no,3,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==1)),los_vme);
  MATCH_SUBEVENT_DECL(2200,__match_no,4,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==2)),los_tamex);
  MATCH_SUBEVENT_DECL(2201,__match_no,5,((VES10_1_type==39)&&(VES10_1_subtype==0xf3c)&&(VES10_1_control==1)),los_sampler);
  MATCH_SUBEVENT_DECL(2203,__match_no,6,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==3)),fib1ab);
  MATCH_SUBEVENT_DECL(2205,__match_no,7,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==21)),neuland_ts);
  MATCH_SUBEVENT_DECL(2206,__match_no,8,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==21)),neuland_tamex_1);
  MATCH_SUBEVENT_DECL(2207,__match_no,9,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==22)),neuland_tamex_2);
  MATCH_SUBEVENT_DECL(2208,__match_no,10,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==23)),neuland_tamex_3);
  MATCH_SUBEVENT_DECL(2209,__match_no,11,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==24)),neuland_tamex_4);
  MATCH_SUBEVENT_DECL(2211,__match_no,12,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)&&(VES10_1_procid==2)),califa);
  MATCH_SUBEVENT_DECL(2212,__match_no,13,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==40)),ams_ts);
  MATCH_SUBEVENT_DECL(2213,__match_no,14,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==40)),ams_siderem_1);
  MATCH_SUBEVENT_DECL(2214,__match_no,15,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==41)),ams_siderem_2);
  MATCH_SUBEVENT_DECL(2216,__match_no,16,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==101)),sofia_tof);
  MATCH_SUBEVENT_DECL(2217,__match_no,17,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==102)),sofia_mwpc);
  MATCH_SUBEVENT_DECL(2218,__match_no,18,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==103)),sofia_twim);
  MATCH_SUBEVENT_DECL(2219,__match_no,19,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==104)),sofia_trim);
  MATCH_SUBEVENT_DECL(2221,__match_no,20,((VES10_1_type==103)&&(VES10_1_subtype==0x283c)&&(VES10_1_control==50)),fibsipm);
  MATCH_SUBEVENT_DECL(2223,__match_no,21,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_procid==35)),s2_ts);
  MATCH_SUBEVENT_DECL(2224,__match_no,22,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_procid==35)),s2_vme);
  MATCH_SUBEVENT_DECL(2226,__match_no,23,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==80)),s8_ts);
  MATCH_SUBEVENT_DECL(2227,__match_no,24,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==80)),s8_tpat);
  MATCH_SUBEVENT_DECL(2228,__match_no,25,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==80)),s8_vme);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2197,los_wr,los_ts,0);
      REVOKE_SUBEVENT_DECL(2197,0,los_wr,los_ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2198,lmu_subev,los_lmu,1);
      REVOKE_SUBEVENT_DECL(2198,0,lmu_subev,los_lmu);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2199,los_vme_subev,los_vme,2);
      REVOKE_SUBEVENT_DECL(2199,0,los_vme_subev,los_vme);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2200,los_tamex_subev,los_tamex,3);
      REVOKE_SUBEVENT_DECL(2200,0,los_tamex_subev,los_tamex);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2201,los_sampler_subev,los_sampler,4);
      REVOKE_SUBEVENT_DECL(2201,0,los_sampler_subev,los_sampler);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2203,fib1ab_subev,fib1ab,5);
      REVOKE_SUBEVENT_DECL(2203,0,fib1ab_subev,fib1ab);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2205,wr_neuland,neuland_ts,6);
      REVOKE_SUBEVENT_DECL(2205,0,wr_neuland,neuland_ts);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2206,neuland_tamex_subev,neuland_tamex_1,7);
      REVOKE_SUBEVENT_DECL(2206,0,neuland_tamex_subev,neuland_tamex_1);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2207,neuland_tamex_subev,neuland_tamex_2,8);
      REVOKE_SUBEVENT_DECL(2207,0,neuland_tamex_subev,neuland_tamex_2);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2208,neuland_tamex_subev,neuland_tamex_3,9);
      REVOKE_SUBEVENT_DECL(2208,0,neuland_tamex_subev,neuland_tamex_3);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2209,neuland_tamex_subev,neuland_tamex_4,10);
      REVOKE_SUBEVENT_DECL(2209,0,neuland_tamex_subev,neuland_tamex_4);
      break;
    case 12:
      REVOKE_SUBEVENT_DECL(2211,0,CALIFA,califa);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2212,ams_wr,ams_ts,11);
      REVOKE_SUBEVENT_DECL(2212,0,ams_wr,ams_ts);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2213,ams_siderem1_subev,ams_siderem_1,12);
      REVOKE_SUBEVENT_DECL(2213,0,ams_siderem1_subev,ams_siderem_1);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2214,ams_siderem2_subev,ams_siderem_2,13);
      REVOKE_SUBEVENT_DECL(2214,0,ams_siderem2_subev,ams_siderem_2);
      break;
    case 16:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2216,sofia_tof_subev,sofia_tof,14);
      REVOKE_SUBEVENT_DECL(2216,0,sofia_tof_subev,sofia_tof);
      break;
    case 17:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2217,sofia_mwpc_subev,sofia_mwpc,15);
      REVOKE_SUBEVENT_DECL(2217,0,sofia_mwpc_subev,sofia_mwpc);
      break;
    case 18:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2218,sofia_twim_subev,sofia_twim,16);
      REVOKE_SUBEVENT_DECL(2218,0,sofia_twim_subev,sofia_twim);
      break;
    case 19:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2219,sofia_trim_subev,sofia_trim,17);
      REVOKE_SUBEVENT_DECL(2219,0,sofia_trim_subev,sofia_trim);
      break;
    case 20:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2221,fibsipm_subev,fibsipm,18);
      REVOKE_SUBEVENT_DECL(2221,0,fibsipm_subev,fibsipm);
      break;
    case 21:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2223,wr_s2,s2_ts,19);
      REVOKE_SUBEVENT_DECL(2223,0,wr_s2,s2_ts);
      break;
    case 22:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2224,s2_vme_subev,s2_vme,20);
      REVOKE_SUBEVENT_DECL(2224,0,s2_vme_subev,s2_vme);
      break;
    case 23:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2226,s8_wr,s8_ts,21);
      REVOKE_SUBEVENT_DECL(2226,0,s8_wr,s8_ts);
      break;
    case 24:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2227,s8_tpat_subev,s8_tpat,22);
      REVOKE_SUBEVENT_DECL(2227,0,s8_tpat_subev,s8_tpat);
      break;
    case 25:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2228,s8_vme_subev,s8_vme,23);
      REVOKE_SUBEVENT_DECL(2228,0,s8_vme_subev,s8_vme);
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
