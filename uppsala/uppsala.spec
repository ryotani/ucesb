// -*- C++ -*-

#define FZD_HEADER			\
UINT32 header				\
    {					\
        31:	0b0;			\
	30:	0b0;			\
     	29:	0b1;			\
	24_28:	geom = MATCH(geom);	\
        0_23:   0b0000000000000000;	\
    }									

#define FZD_EOB				\
UINT32 EOB				\
    {					\
        31:	0b0;			\
	30:	0b1;			\
     	29:	0b0;			\
	24_28:	geom = MATCH(geom);	\
        0_23:   0b0000000000000000;	\
    }

FZD_data_SUBITEM(geo,data)
{
   MEMBER(DATA32 data[32] ZERO_SUPPRESS); 
   UINT32 ch_data NOENCODE
     {
	 31:	0b0;			//error bit
	 30:	0b0;			//trailer bit  
	 29:	0b0;			//header bit
	 24_28:	channel= RANGE(0,32);   //channel of the module
         0_23:	data;			//entry in the coressponding channel has this value 
         ENCODE(data[channel],(value=data));
	}
}

FZD_Modul(geom)
{
  MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  FZD_HEADER
  select several
   	{ 
	 dummy = FZD_data_SUBITEM(geo=geom, data=data);
   	}
  FZD_EOB   
}

FZD_V1495_MP(geom)
{
  MEMBER(DATA32 MP_FLAG[3] ZERO_SUPPRESS);
  MEMBER(DATA32 Cy_FLAG[3] ZERO_SUPPRESS);
  MEMBER(DATA32 ts[3] ZERO_SUPPRESS);
  FZD_HEADER
  list(0<=index<3)
    {
  	UINT32 ch_data NOENCODE
 		{
			31:	0b0;			//error bit
	 		30:	0b0;			//trailer bit  
	 		29:	0b0;			//header bit
	 		24_28:	channel= RANGE(0,2);	//channel of the module
			23:	MPflag;			//macro pulse flag
			22:	Cyflag;			//cyclotron flag // is on at start of RF
			21:	flag3;			//the same flags again!
			20:     flag4;
			0_19:	timestamp;		//entry in the coressponding channel has this value
			ENCODE(MP_FLAG[index],(value=MPflag));
			ENCODE(Cy_FLAG[index],(value=Cyflag));
			ENCODE(ts[index],(value=timestamp));
		}
    }      
  FZD_EOB
}

EVENT
{
  vme0 = CRATE(type=10,subtype=1);
}

SUBEVENT(CRATE)
{
	select several  				//do i need this???, don't remember why i put it here...
   		{
   			MP   = FZD_V1495_MP(geom= 21);
   			QDC1 = FZD_Modul(geom= 6);
   			QDC2 = FZD_Modul(geom= 7);
   			QDC3 = FZD_Modul(geom= 8);
   			QDC4 = FZD_Modul(geom= 9);
   			TDC1 = FZD_Modul(geom= 1);
   			TDC2 = FZD_Modul(geom= 2);
   			TDC3 = FZD_Modul(geom= 3);
   			Sca1 = FZD_Modul(geom= 13); 	//trigger & scint
   			Sca2 = FZD_Modul(geom= 14); 	//RPC1
   			Sca3 = FZD_Modul(geom= 15);	//RPC2
   			Sca4 = FZD_Modul(geom= 16);	//RPC3
   			Sca5 = FZD_Modul(geom= 17); 	//RPC4
   			Sca6 = FZD_Modul(geom= 18);	//PADI && Alice
   			Sca7 = FZD_Modul(geom= 20);	//N_Det
   			time = FZD_Modul(geom= 19);	//live, real, deadtime
		}
}



SIGNAL(ZERO_SUPPRESS: U_QDC1CH1);
SIGNAL(U_QDC1CH1, vme0.QDC1.data[0],U_QDC1CH16, vme0.QDC1.data[15],DATA32);
SIGNAL(U_QDC2CH1, vme0.QDC2.data[0],U_QDC2CH16, vme0.QDC2.data[15],DATA32);
SIGNAL(U_QDC3CH1, vme0.QDC3.data[0],U_QDC3CH16, vme0.QDC3.data[15],DATA32);
SIGNAL(U_QDC4CH1, vme0.QDC4.data[0],U_QDC4CH16, vme0.QDC4.data[15],DATA32);
SIGNAL(U_TDC1CH1, vme0.TDC1.data[0],U_TDC1CH32, vme0.TDC1.data[31],DATA32);
SIGNAL(U_TDC2CH1, vme0.TDC2.data[0],U_TDC2CH32, vme0.TDC2.data[31],DATA32);
SIGNAL(U_TDC3CH1, vme0.TDC3.data[0],U_TDC3CH16, vme0.TDC3.data[15],DATA32);
SIGNAL(U_Sca1CH1, vme0.Sca1.data[0],U_Sca1CH8, vme0.Sca1.data[7],DATA32);
SIGNAL(U_Sca2CH1, vme0.Sca2.data[0],U_Sca2CH32, vme0.Sca2.data[31],DATA32);
SIGNAL(U_Sca3CH1, vme0.Sca3.data[0],U_Sca3CH32, vme0.Sca3.data[31],DATA32);
SIGNAL(U_Sca4CH1, vme0.Sca4.data[0],U_Sca4CH32, vme0.Sca4.data[31],DATA32);
SIGNAL(U_Sca5CH1, vme0.Sca5.data[0],U_Sca5CH32, vme0.Sca5.data[31],DATA32);
SIGNAL(U_Sca6CH1, vme0.Sca6.data[0],U_Sca6CH8, vme0.Sca6.data[7],DATA32);
SIGNAL(U_Sca7CH1, vme0.Sca7.data[0],U_Sca7CH7, vme0.Sca7.data[6],DATA32);
SIGNAL(U_MPflag, vme0.MP.MP_FLAG[0],DATA32);
SIGNAL(U_Cyflag, vme0.MP.Cy_FLAG[0],DATA32);
SIGNAL(U_ts, vme0.MP.ts[0],DATA32);
SIGNAL(U_ro, vme0.MP.ts[2],DATA32);			//size of random window

SIGNAL(U_timeCH1, vme0.time.data[0],U_timeCH9, vme0.time.data[8],DATA32);

