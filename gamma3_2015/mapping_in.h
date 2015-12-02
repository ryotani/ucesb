#define TRACES 0

/* Trigger logic data */
SIGNAL(TS_HI, ts.trlo.trigbuf.entry.ts_hi, DATA32);
SIGNAL(TS_LO, ts.trlo.trigbuf.entry.ts_lo, DATA32);
SIGNAL(TPAT, ts.trlo.trigbuf.entry.tpat, DATA32);
SIGNAL(TRIG, ts.trlo.trigbuf.entry.trig, DATA8);

/* Trigger logic scalers */
SIGNAL(TRLORAW_1, scalers.trlo.before_lmu[0],
       TRLORAW_16, scalers.trlo.before_lmu[15], DATA32);
SIGNAL(TRLOBDT_1, scalers.trlo.before_deadtime[0],
       TRLOBDT_16, scalers.trlo.before_deadtime[15], DATA32);
SIGNAL(TRLOADT_1, scalers.trlo.after_deadtime[0],
       TRLOADT_16, scalers.trlo.after_deadtime[15], DATA32);
SIGNAL(TRLOARD_1, scalers.trlo.after_reduction[0],
       TRLOARD_16, scalers.trlo.after_reduction[15], DATA32);

/* SIS3316_NOTRACES */
#define SIGNAL_SIS3316_CHANNEL_NOTRACES(name, id, idm1, ch, chm1)\
SIGNAL(name##_##id##_CH_##ch##_GATE1, \
       vme.sis3316[idm1].channel[chm1].data.gate[0],\
       name##_##id##_CH_##ch##_GATE8, \
       vme.sis3316[idm1].channel[chm1].data.gate[7], DATA32); \
SIGNAL(name##_##id##_CH_##ch##_MAXE_1, \
       vme.sis3316[idm1].channel[chm1].data.maxe[0],\
       name##_##id##_CH_##ch##_MAXE_2, \
       vme.sis3316[idm1].channel[chm1].data.maxe[1], DATA32); \
SIGNAL(name##_##id##_CH_##ch##_T1, \
       vme.sis3316[idm1].channel[chm1].data.maw[0],\
       name##_##id##_CH_##ch##_T3, \
       vme.sis3316[idm1].channel[chm1].data.maw[2], DATA32); 

/* SIS3316 */
#define SIGNAL_SIS3316_CHANNEL(name, id, idm1, ch, chm1, raw, rawm1, mawMax, mawm1)\
SIGNAL(name##_##id##_CH_##ch##_GATE1, \
       vme.sis3316[idm1].channel[chm1].data.gate[0],\
       name##_##id##_CH_##ch##_GATE8, \
       vme.sis3316[idm1].channel[chm1].data.gate[7], DATA32); \
SIGNAL(name##_##id##_CH_##ch##_MAXE_1, \
       vme.sis3316[idm1].channel[chm1].data.maxe[0],\
       name##_##id##_CH_##ch##_MAXE_2, \
       vme.sis3316[idm1].channel[chm1].data.maxe[1], DATA32); \
SIGNAL(name##_##id##_CH_##ch##_T1, \
       vme.sis3316[idm1].channel[chm1].data.maw[0],\
       name##_##id##_CH_##ch##_T3, \
       vme.sis3316[idm1].channel[chm1].data.maw[2], DATA32); \
SIGNAL(ZERO_SUPPRESS: name##_##id##_CH_##ch##_RAW_1);\
SIGNAL(name##_##id##_CH_##ch##_RAW_1, \
       vme.sis3316[idm1].channel[chm1].data.data[0],\
       name##_##id##_CH_##ch##_RAW_##raw, \
       vme.sis3316[idm1].channel[chm1].data.data[rawm1], DATA16); \
SIGNAL(ZERO_SUPPRESS: name##_##id##_CH_##ch##_MAWT_1);\
SIGNAL(name##_##id##_CH_##ch##_MAWT_1, \
       vme.sis3316[idm1].channel[chm1].data.maw_data[0],\
       name##_##id##_CH_##ch##_MAWT_##mawMax, \
       vme.sis3316[idm1].channel[chm1].data.maw_data[mawm1], DATA32); 


/* SIS3316[0] */
SIGNAL(ADC_1_N, vme.sis3316[0].n_ch, DATA8);
SIGNAL(ADC_1_TS_1_H, vme.sis3316[0].channel[0].data.ts[0], 
       ADC_1_TS_16_H, vme.sis3316[0].channel[15].data.ts[0], DATA32);
SIGNAL(ADC_1_TS_1_L, vme.sis3316[0].channel[0].data.ts[1], 
       ADC_1_TS_16_L, vme.sis3316[0].channel[15].data.ts[1], DATA32);

#if TRACES
SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  1,  0, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  2,  1, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  3,  2, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  4,  3, 2500, 2499, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  5,  4, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  6,  5, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  7,  6, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  8,  7, 2500, 2499, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 1, 0,  9,  8, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0, 10,  9, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0, 11, 10, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0, 12, 11, 2500, 2499, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 1, 0, 13, 12, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0, 14, 13, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0, 15, 14, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 1, 0, 16, 15, 2500, 2499, 1022, 1021)
#else
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  1,  0)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  2,  1)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  3,  2)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  4,  3)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  5,  4)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  6,  5)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  7,  6)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  8,  7)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0,  9,  8)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0, 10,  9)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0, 11, 10)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0, 12, 11)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0, 13, 12)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0, 14, 13)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0, 15, 14)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 1, 0, 16, 15)
#endif

/* SIS3316[1] */
SIGNAL(ADC_2_N, vme.sis3316[1].n_ch, DATA8);
SIGNAL(ADC_2_TS_1_H, vme.sis3316[1].channel[0].data.ts[0], 
       ADC_2_TS_16_H, vme.sis3316[1].channel[15].data.ts[0], DATA32);
SIGNAL(ADC_2_TS_1_L, vme.sis3316[1].channel[0].data.ts[1], 
       ADC_2_TS_16_L, vme.sis3316[1].channel[15].data.ts[1], DATA32);

#if TRACES
SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  1,  0, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  2,  1, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  3,  2, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  4,  3, 2500, 2499, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  5,  4, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  6,  5, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  7,  6, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  8,  7, 2500, 2499, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 2, 1,  9,  8, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1, 10,  9, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1, 11, 10, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1, 12, 11, 2500, 2499, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 2, 1, 13, 12, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1, 14, 13, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1, 15, 14, 2500, 2499, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 2, 1, 16, 15, 2500, 2499, 1022, 1021)
#else
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  1,  0)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  2,  1)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  3,  2)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  4,  3)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  5,  4)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  6,  5)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  7,  6)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  8,  7)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1,  9,  8)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1, 10,  9)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1, 11, 10)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1, 12, 11)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1, 13, 12)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1, 14, 13)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1, 15, 14)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 2, 1, 16, 15)
#endif

/* SIS3316[2] */
SIGNAL(ADC_3_N, vme.sis3316[2].n_ch, DATA8);
SIGNAL(ADC_3_TS_1_H, vme.sis3316[2].channel[0].data.ts[0], 
       ADC_3_TS_16_H, vme.sis3316[2].channel[15].data.ts[0], DATA32);
SIGNAL(ADC_3_TS_1_L, vme.sis3316[2].channel[0].data.ts[1], 
       ADC_3_TS_16_L, vme.sis3316[2].channel[15].data.ts[1], DATA32);

#if TRACES
SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  1,  0, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  2,  1, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  3,  2, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  4,  3, 10000, 9999, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  5,  4, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  6,  5, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  7,  6, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  8,  7, 10000, 9999, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 3, 2,  9,  8, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2, 10,  9, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2, 11, 10, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2, 12, 11, 10000, 9999, 1022, 1021)
SIGNAL_SIS3316_CHANNEL(ADC, 3, 2, 13, 12, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2, 14, 13, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2, 15, 14, 10000, 9999, 1022, 1021)
//SIGNAL_SIS3316_CHANNEL(ADC, 3, 2, 16, 15, 10000, 9999, 1022, 1021)
#else
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  1,  0)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  2,  1)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  3,  2)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  4,  3)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  5,  4)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  6,  5)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  7,  6)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  8,  7)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2,  9,  8)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2, 10,  9)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2, 11, 10)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2, 12, 11)
SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2, 13, 12)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2, 14, 13)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2, 15, 14)
//SIGNAL_SIS3316_CHANNEL_NOTRACES(ADC, 3, 2, 16, 15)
#endif

/* Times */
#if 1
/* LABR Low threshold */
SIGNAL(LABRL_1T,vme.tdc.data[ 0],DATA12);
SIGNAL(LABRL_2T,vme.tdc.data[ 1],DATA12);
SIGNAL(LABRL_3T,vme.tdc.data[ 2],DATA12);
SIGNAL(LABRL_4T,vme.tdc.data[ 3],DATA12);

/* LABR High threshold */
SIGNAL(LABR_1T,vme.tdc.data[ 4],DATA12);
SIGNAL(LABR_2T,vme.tdc.data[ 5],DATA12);
SIGNAL(LABR_3T,vme.tdc.data[ 6],DATA12);
SIGNAL(LABR_4T,vme.tdc.data[ 7],DATA12);

/* HPGE Low Threshold */
SIGNAL(HPGEL_1T,vme.tdc.data[ 8],DATA12);
SIGNAL(HPGEL_2T,vme.tdc.data[ 9],DATA12);
SIGNAL(HPGEL_3T,vme.tdc.data[10],DATA12);
SIGNAL(HPGEL_4T,vme.tdc.data[11],DATA12);

/* HPGE High Threshold */
SIGNAL(HPGE_1T,vme.tdc.data[12],DATA12);
SIGNAL(HPGE_2T,vme.tdc.data[13],DATA12);
SIGNAL(HPGE_3T,vme.tdc.data[14],DATA12);
SIGNAL(HPGE_4T,vme.tdc.data[15],DATA12);

/* Triggers */
SIGNAL(TRIGT_1,vme.tdc.data[16],DATA12);
SIGNAL(TRIGT_2,vme.tdc.data[17],DATA12);
SIGNAL(TRIGT_3,vme.tdc.data[18],DATA12);
SIGNAL(TRIGT_4,vme.tdc.data[19],DATA12);

SIGNAL(TRIGT_5,vme.tdc.data[20],DATA12);
SIGNAL(TRIGT_6,vme.tdc.data[21],DATA12);
SIGNAL(TRIGT_7,vme.tdc.data[22],DATA12);
SIGNAL(TRIGT_8,vme.tdc.data[23],DATA12);

SIGNAL(TRIGT_9,vme.tdc.data[24],DATA12);
SIGNAL(TRIGT_10,vme.tdc.data[25],DATA12);
SIGNAL(TRIGT_11,vme.tdc.data[26],DATA12);
SIGNAL(TRIGT_12,vme.tdc.data[27],DATA12);

/* NDETs */
SIGNAL(NDET_1T,vme.tdc.data[28],DATA12);
SIGNAL(NDET_2T,vme.tdc.data[29],DATA12);
SIGNAL(NDET_3T,vme.tdc.data[30],DATA12);
SIGNAL(NDET_4T,vme.tdc.data[31],DATA12);
#endif

#if 1
/* Scalers */
SIGNAL(LABRL_1S,scalers.caen_scaler.data[ 0],DATA32);
SIGNAL(LABRL_2S,scalers.caen_scaler.data[ 1],DATA32);
SIGNAL(LABRL_3S,scalers.caen_scaler.data[ 2],DATA32);
SIGNAL(LABRL_4S,scalers.caen_scaler.data[ 3],DATA32);
SIGNAL(LABR_1S,scalers.caen_scaler.data[ 4],DATA32);
SIGNAL(LABR_2S,scalers.caen_scaler.data[ 5],DATA32);
SIGNAL(LABR_3S,scalers.caen_scaler.data[ 6],DATA32);
SIGNAL(LABR_4S,scalers.caen_scaler.data[ 7],DATA32);

SIGNAL(HPGEL_1S,scalers.caen_scaler.data[ 8],DATA32);
SIGNAL(HPGEL_2S,scalers.caen_scaler.data[ 9],DATA32);
SIGNAL(HPGEL_3S,scalers.caen_scaler.data[10],DATA32);
SIGNAL(HPGEL_4S,scalers.caen_scaler.data[11],DATA32);
SIGNAL(HPGE_1S,scalers.caen_scaler.data[12],DATA32);
SIGNAL(HPGE_2S,scalers.caen_scaler.data[13],DATA32);
SIGNAL(HPGE_3S,scalers.caen_scaler.data[14],DATA32);
SIGNAL(HPGE_4S,scalers.caen_scaler.data[15],DATA32);

SIGNAL(TRIGS_1,scalers.caen_scaler.data[16],DATA32);
SIGNAL(TRIGS_2,scalers.caen_scaler.data[17],DATA32);
SIGNAL(TRIGS_3,scalers.caen_scaler.data[18],DATA32);
SIGNAL(TRIGS_4,scalers.caen_scaler.data[19],DATA32);

SIGNAL(TRIGS_5,scalers.caen_scaler.data[20],DATA32);
SIGNAL(TRIGS_6,scalers.caen_scaler.data[21],DATA32);
SIGNAL(TRIGS_7,scalers.caen_scaler.data[22],DATA32);
SIGNAL(TRIGS_8,scalers.caen_scaler.data[23],DATA32);

/* Count rate meters */
SIGNAL(CRM_1,scalers.caen_scaler.data[24],DATA32);
SIGNAL(CRM_2,scalers.caen_scaler.data[25],DATA32);
SIGNAL(CRM_3,scalers.caen_scaler.data[26],DATA32);
SIGNAL(CRM_4,scalers.caen_scaler.data[27],DATA32);

SIGNAL(NDET_1S,scalers.caen_scaler.data[28],DATA32);
SIGNAL(NDET_2S,scalers.caen_scaler.data[29],DATA32);
SIGNAL(NDET_3S,scalers.caen_scaler.data[30],DATA32);
SIGNAL(NDET_4S,scalers.caen_scaler.data[31],DATA32);
#endif

/* Mesytec MADC 32 (for neutron detectors) */
/* Even channels 0,2,4... contain energy */
/* Odd channels 1,3,5... contain PSD value */
SIGNAL(NDET_1E,vme.adc.data[ 0],DATA16);
SIGNAL(NDET_1P,vme.adc.data[ 1],DATA16);
SIGNAL(NDET_2E,vme.adc.data[ 2],DATA16);
SIGNAL(NDET_2P,vme.adc.data[ 3],DATA16);
SIGNAL(NDET_3E,vme.adc.data[ 4],DATA16);
SIGNAL(NDET_3P,vme.adc.data[ 5],DATA16);
SIGNAL(NDET_4E,vme.adc.data[ 6],DATA16);
SIGNAL(NDET_4P,vme.adc.data[ 7],DATA16);
SIGNAL(NDET_5E,vme.adc.data[ 8],DATA16);
SIGNAL(NDET_5P,vme.adc.data[ 9],DATA16);
SIGNAL(NDET_6E,vme.adc.data[10],DATA16);
SIGNAL(NDET_6P,vme.adc.data[11],DATA16);
SIGNAL(NDET_7E,vme.adc.data[12],DATA16);
SIGNAL(NDET_7P,vme.adc.data[13],DATA16);
SIGNAL(NDET_8E,vme.adc.data[14],DATA16);
SIGNAL(NDET_8P,vme.adc.data[15],DATA16);

#if 0

#endif
