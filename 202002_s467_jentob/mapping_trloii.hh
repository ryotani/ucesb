SIGNAL(TPAT1, main_tpat.tpat.tpat, DATA16);
SIGNAL(NO_INDEX_LIST: TPAT170);

/* Trigger logic scalers */
SIGNAL(TRLORAW_MAIN_1, main_scalers.data.scalers.before_lmu[0],
    TRLORAW_MAIN_16, main_scalers.data.scalers.before_lmu[15], DATA32);
SIGNAL(TRLOBDT_MAIN_1, main_scalers.data.scalers.before_dt[0],
    TRLOBDT_MAIN_16, main_scalers.data.scalers.before_dt[15], DATA32);
SIGNAL(TRLOADT_MAIN_1, main_scalers.data.scalers.after_dt[0],
    TRLOADT_MAIN_16, main_scalers.data.scalers.after_dt[15], DATA32);
SIGNAL(TRLOARD_MAIN_1, main_scalers.data.scalers.after_reduction[0],
    TRLOARD_MAIN_16, main_scalers.data.scalers.after_reduction[15], DATA32);
