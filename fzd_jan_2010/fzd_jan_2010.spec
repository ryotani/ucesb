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
   //MEMBER(DATA32 data[32] ZERO_SUPPRESS); 
   MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5)); 
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
  //MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5)); 
  FZD_HEADER
  select several
   	{ 
	 dummy = FZD_data_SUBITEM(geo=geom, data=data);
   	}
  FZD_EOB   
}

FZD_V1495(geom)
{
  MEMBER(DATA32 ts[8] ZERO_SUPPRESS);
  MEMBER(DATA32 RBWL[2] ZERO_SUPPRESS);
  MEMBER(DATA32 MP );
  FZD_HEADER
  list(0<=index<5)
    {
  	UINT32 ch_data NOENCODE
 		{
			31:	0b0;			//error bit
	 		30:	0b0;			//trailer bit  
	 		29:	0b0;			//header bit
	 		24_28:	channel =RANGE(0,4);	//channel of the module
			0_23:	timestamp;		//
			
			ENCODE(ts[channel],(value=timestamp));
		}
    }      
    
    UINT32 ch_data NOENCODE
 		{
			31:	0b0;			//error bit
	 		30:	0b0;			//trailer bit  
	 		29:	0b0;			//header bit
	 		24_28:	channel =RANGE(5,5);	//channel of the module
			11_23:	0b0000000000000;
			10:	RBWF=RANGE(0,1);	//Random Block Window Flag
			9:	MPF=RANGE(0,1);		//Macro Pulse Flag
			8:	dummy=RANGE(0,1);
			0_7:	timestamp;		//
			ENCODE(MP,(value=MPF));
			ENCODE(ts[channel],(value=timestamp));
		}

    list(0<=index<2)
    {
  	UINT32 ch_data NOENCODE
 		{
			31:	0b0;			//error bit
	 		30:	0b0;			//trailer bit  
	 		29:	0b0;			//header bit
	 		24_28:	channel =RANGE(6,7);	//channel of the module
			0_23:	timestamp;		//
			
			ENCODE(ts[channel],(value=timestamp));
		}
    }     
    
    list(0<=index<2)
    {
  	UINT32 ch_data NOENCODE
 		{
			31:	0b0;			//error bit
	 		30:	0b0;			//trailer bit  
	 		29:	0b0;			//header bit
	 		24_28:	channel =RANGE(8,9);	//channel of the module
			0_23:	length;			//Random Block Window Length
							//should here anyway be zero all the time
			ENCODE(RBWL[channel-8],(value=length));
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
							// is needed since the scaler only appear for triiger==2!!
   		{
   			timestamp   = FZD_V1495(geom= 21);
   			
			QDC1 = FZD_Modul(geom= 7);
   			QDC2 = FZD_Modul(geom= 8);
   			
			TDC1 = FZD_Modul(geom= 5);
   			
			Sca1 = FZD_Modul(geom= 13); 	//
   			Sca2 = FZD_Modul(geom= 14); 	//
   			Sca3 = FZD_Modul(geom= 15);	//
			Sca4 = FZD_Modul(geom= 16);	//
		}
}


SIGNAL(U_QDC1CH1, vme0.QDC1.data[0],U_QDC1CH16, vme0.QDC1.data[15],DATA32);
SIGNAL(U_QDC2CH1, vme0.QDC2.data[0],U_QDC2CH16, vme0.QDC2.data[15],DATA32);

SIGNAL(U_TDC1CH1_1, vme0.TDC1.data[0],U_TDC1CH32_1, vme0.TDC1.data[31],DATA32);
SIGNAL(NO_INDEX_LIST: U_TDC1CH1_5);


SIGNAL(U_Sca1CH1, vme0.Sca1.data[0],U_Sca1CH8, vme0.Sca1.data[7],DATA32);
SIGNAL(U_Sca2CH1, vme0.Sca2.data[0],U_Sca2CH32, vme0.Sca2.data[31],DATA32);
SIGNAL(U_Sca3CH1, vme0.Sca3.data[0],U_Sca3CH32, vme0.Sca3.data[31],DATA32);
SIGNAL(U_Sca4CH1, vme0.Sca4.data[0],U_Sca4CH32, vme0.Sca4.data[31],DATA32);


SIGNAL(U_MPflag, vme0.timestamp.MP,DATA32);
SIGNAL(U_tsCH1, vme0.timestamp.ts[0],U_tsCH8, vme0.timestamp.ts[7],DATA32);
SIGNAL(U_RBWCH1, vme0.timestamp.RBWL[0],U_RBWCH2, vme0.timestamp.RBWL[1],DATA32);							//size of random window
