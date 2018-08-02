#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
map(char const *a_dst, char const *a_src, unsigned a_subs, unsigned a_mapmt,
unsigned a_spmt, unsigned a_tamex_i, unsigned a_tamex_ch_i)
{
	// electronics mapping of the adapter board from multi-anode PMT to clock TDC boards

	unsigned i, j, p, k, max,board;
	unsigned ch[256]; // board and electronic channel of PMT anode
	for(j=0;j<256;j++){
		ch[j]=0;
	}
	for(j=0;j<8;j++){
		max=128-2*j;
		i=j*32;
		ch[max-1]=i;
		ch[max-2]=i+1;	   
		ch[max-17]=i+2;
		ch[max-18]=i+3;
		ch[max-33]=i+4;
		ch[max-34]=i+5;
		ch[max-49]=i+6;
		ch[max-50]=i+7;
		ch[max-65]=i+8;
		ch[max-66]=i+9;
		ch[max-81]=i+10;
		ch[max-82]=i+11;
		ch[max-97]=i+12;
		ch[max-98]=i+13;
		ch[max-113]=i+14;
		ch[max-114]=i+15;

		max=256-2*j;
		i=j*32+16;
		ch[max-1]=i;
		ch[max-2]=i+1;	   
		ch[max-17]=i+2;
		ch[max-18]=i+3;
		ch[max-33]=i+4;
		ch[max-34]=i+5;
		ch[max-49]=i+6;
		ch[max-50]=i+7;
		ch[max-65]=i+8;
		ch[max-66]=i+9;
		ch[max-81]=i+10;
		ch[max-82]=i+11;
		ch[max-97]=i+12;
		ch[max-98]=i+13;
		ch[max-113]=i+14;
		ch[max-114]=i+15;
		/*
		   ch[i]=max-1;
		   ch[i+1]=max-2;	   
		   ch[i+2]=max-17;
		   ch[i+3]=max-18;
		   ch[i+4]=max-33;
		   ch[i+5]=max-34;
		   ch[i+6]=max-49;
		   ch[i+7]=max-50;
		   ch[i+8]=max-65;
		   ch[i+9]=max-66;
		   ch[i+10]=max-81;
		   ch[i+11]=max-82;
		   ch[i+12]=max-97;
		   ch[i+13]=max-98;
		   ch[i+14]=max-113;
		   ch[i+15]=max-114;

		   max=256-2*j;
		   i=j*32+16;
		   ch[i]=max-1;
		   ch[i+1]=max-2;	   
		   ch[i+2]=max-17;
		   ch[i+3]=max-18;
		   ch[i+4]=max-33;
		   ch[i+5]=max-34;
		   ch[i+6]=max-49;
		   ch[i+7]=max-50;
		   ch[i+8]=max-65;
		   ch[i+9]=max-66;
		   ch[i+10]=max-81;
		   ch[i+11]=max-82;
		   ch[i+12]=max-97;
		   ch[i+13]=max-98;
		   ch[i+14]=max-113;
		   ch[i+15]=max-114;
		 */	   
	}
	for(i=0;i<256;i++) {
		fprintf(stderr, "cha: %d, PMT: %d \n",i,ch[i]);
	}

	// fiber mapping in the PMT mask	
	unsigned fib0[256],fib1[256],fib1b[256],fib2[256],fib3[256],fib4[256],fib5[256],fib6[256],fib7[256]; // fiber number of mask
	for(j=0;j<256;j++){
		fib0[j]=0;
		fib1[j]=0;
		fib1b[j]=0;
		fib2[j]=0;
		fib3[j]=0;
		fib4[j]=0;
		fib5[j]=0;
		fib6[j]=0;
	}

	// 1 5 9 13 2 6 10 14 3 7 11 15 4 8 12 16
	for(j=0;j<16;j++){
		i=j*16;

		// no fibers, just PMT
		fib0[i]=j*16+16;
		fib0[i+1]=j*16+15;
		fib0[i+2]=j*16+14;
		fib0[i+3]=j*16+13;
		fib0[i+4]=j*16+12;
		fib0[i+5]=j*16+11;
		fib0[i+6]=j*16+10;
		fib0[i+7]=j*16+9;
		fib0[i+8]=j*16+8;
		fib0[i+9]=j*16+7;
		fib0[i+10]=j*16+6;
		fib0[i+11]=j*16+5;
		fib0[i+12]=j*16+4;
		fib0[i+13]=j*16+3;
		fib0[i+14]=j*16+2;
		fib0[i+15]=j*16+1;	
		// fibers in colums from top to bottom
		fib1[i]=j*16+1;
		fib1[i+1]=j*16+5;
		fib1[i+2]=j*16+9;
		fib1[i+3]=j*16+13;
		fib1[i+4]=j*16+2;
		fib1[i+5]=j*16+6;
		fib1[i+6]=j*16+10;
		fib1[i+7]=j*16+14;
		fib1[i+8]=j*16+3;
		fib1[i+9]=j*16+7;
		fib1[i+10]=j*16+11;
		fib1[i+11]=j*16+15;
		fib1[i+12]=j*16+4;
		fib1[i+13]=j*16+8;
		fib1[i+14]=j*16+12;
		fib1[i+15]=j*16+16;	
		
		// fibers in colums from bottom to top
		//sorting of fiber detector 1
		//different order for second MPMT
		
		fib1b[i+15]=j*16+1;
		fib1b[i+14]=j*16+5;
		fib1b[i+13]=j*16+9;
		fib1b[i+12]=j*16+13;
		fib1b[i+11]=j*16+2;
		fib1b[i+10]=j*16+6;
		fib1b[i+9]=j*16+10;
		fib1b[i+8]=j*16+14;
		fib1b[i+7]=j*16+3;
		fib1b[i+6]=j*16+7;
		fib1b[i+5]=j*16+11;
		fib1b[i+4]=j*16+15;
		fib1b[i+3]=j*16+4;
		fib1b[i+2]=j*16+8;
		fib1b[i+1]=j*16+12;
		fib1b[i]=j*16+16;	
		 	   

		// fibers in row from top to bottom	   
		/*
		   fib3[0+j]=j*16+1;
		   fib3[16+j]=j*16+5;
		   fib3[32+j]=j*16+9;
		   fib3[48+j]=j*16+13;
		   fib3[64+j]=j*16+2;
		   fib3[80+j]=j*16+6;
		   fib3[96+j]=j*16+10;
		   fib3[112+j]=j*16+14;
		   fib3[128+j]=j*16+3;
		   fib3[144+j]=j*16+7;
		   fib3[160+j]=j*16+11;
		   fib3[176+j]=j*16+15;
		   fib3[192+j]=j*16+4;
		   fib3[208+j]=j*16+8;
		   fib3[224+j]=j*16+12;
		   fib3[240+j]=j*16+16;	
		 */
		// fibers in row from top to bottom
			   
		fib4[i+15]=j*16+1;
		fib4[i+14]=j*16+5;
		fib4[i+13]=j*16+9;
		fib4[i+12]=j*16+13;
		fib4[i+11]=j*16+2;
		fib4[i+10]=j*16+6;
		fib4[i+9]=j*16+10;
		fib4[i+8]=j*16+14;
		fib4[i+7]=j*16+3;
		fib4[i+6]=j*16+7;
		fib4[i+5]=j*16+11;
		fib4[i+4]=j*16+15;
		fib4[i+3]=j*16+4;
		fib4[i+2]=j*16+8;
		fib4[i+1]=j*16+12;
		fib4[i]=j*16+16;	

/*
		fib4[i]=j*16+1;
		fib4[i+1]=j*16+5;
		fib4[i+2]=j*16+9;
		fib4[i+3]=j*16+13;
		fib4[i+4]=j*16+2;
		fib4[i+5]=j*16+6;
		fib4[i+6]=j*16+10;
		fib4[i+7]=j*16+14;
		fib4[i+8]=j*16+3;
		fib4[i+9]=j*16+7;
		fib4[i+10]=j*16+11;
		fib4[i+11]=j*16+15;
		fib4[i+12]=j*16+4;
		fib4[i+13]=j*16+8;
		fib4[i+14]=j*16+12;
		fib4[i+15]=j*16+16;	
*/
/*
		fib4[0+j]=j*16+16;
		fib4[16+j]=j*16+12;
		fib4[32+j]=j*16+8;
		fib4[48+j]=j*16+4;
		fib4[64+j]=j*16+15;
		fib4[80+j]=j*16+11;
		fib4[96+j]=j*16+7;
		fib4[112+j]=j*16+3;
		fib4[128+j]=j*16+14;
		fib4[144+j]=j*16+10;
		fib4[160+j]=j*16+6;
		fib4[176+j]=j*16+2;
		fib4[192+j]=j*16+13;
		fib4[208+j]=j*16+9;
		fib4[224+j]=j*16+5;
		fib4[240+j]=j*16+1;	
*/
		// fibers in row from bottom to top, fiber sorting starts at bottom	   
		//sorting of fiber detector 5
		fib5[240+j]=j*16+16;
		fib5[224+j]=j*16+12;
		fib5[208+j]=j*16+8;
		fib5[192+j]=j*16+4;
		fib5[176+j]=j*16+15;
		fib5[160+j]=j*16+11;
		fib5[144+j]=j*16+7;
		fib5[128+j]=j*16+3;
		fib5[112+j]=j*16+14;
		fib5[96+j]=j*16+10;
		fib5[80+j]=j*16+6;
		fib5[64+j]=j*16+2;
		fib5[48+j]=j*16+13;
		fib5[32+j]=j*16+9;
		fib5[16+j]=j*16+5;
		fib5[0+j]=j*16+1;	
		// fibers in row from bottom to top, fiber sorting starts at bottom
		// sorting of fiber detector 6	   
		fib6[240+j]=j*16+16;
		fib6[224+j]=j*16+12;
		fib6[208+j]=j*16+8;
		fib6[192+j]=j*16+4;
		fib6[176+j]=j*16+15;
		fib6[160+j]=j*16+11;
		fib6[144+j]=j*16+7;
		fib6[128+j]=j*16+3;
		fib6[112+j]=j*16+14;
		fib6[96+j]=j*16+10;
		fib6[80+j]=j*16+6;
		fib6[64+j]=j*16+2;
		fib6[48+j]=j*16+13;
		fib6[32+j]=j*16+9;
		fib6[16+j]=j*16+5;
		fib6[0+j]=j*16+1;	
		// Fib7.
		fib7[i]=j*16+1;
		fib7[i+1]=j*16+5;
		fib7[i+2]=j*16+9;
		fib7[i+3]=j*16+13;
		fib7[i+4]=j*16+2;
		fib7[i+5]=j*16+6;
		fib7[i+6]=j*16+10;
		fib7[i+7]=j*16+14;
		fib7[i+8]=j*16+3;
		fib7[i+9]=j*16+7;
		fib7[i+10]=j*16+11;
		fib7[i+11]=j*16+15;
		fib7[i+12]=j*16+4;
		fib7[i+13]=j*16+8;
		fib7[i+14]=j*16+12;
		fib7[i+15]=j*16+16;	

	}

	for(i=0;i<256;i++) {
		fprintf(stderr, "PMT: %d, fiber: %d \n",i,fib5[i]);
	}
	fprintf(stderr, "PMT: %d, ch: %d \n",0,ch[0]);
	fprintf(stderr, "PMT: %d, fiber: %d \n",0,fib5[0]);

	char side_array[2] = {'M', 'S'};
	char edge_array[2] = {'L', 'T'};
	char prec_array[2] = {'C', 'F'};
	char const *prec_name_array[2] = {"coarse", "fine  "};
	unsigned sub_i, side_i, edge_i, prec_i;
	unsigned spmt_i;

	/* Only support 256 MAPMT channels for now. */
	assert(256 == a_mapmt);

	/* Zero-suppress all channels. */
	for (side_i = 0; side_i < 2; ++side_i) {
		for (edge_i = 0; edge_i < 2; ++edge_i) {
			for (prec_i = 0; prec_i < 2; ++prec_i) {
				printf(
						"SIGNAL(ZERO_SUPPRESS_MULTI(64): "
						"%s_T%c%c%c1);\n", a_dst,
						side_array[side_i], edge_array[edge_i],
						prec_array[prec_i]);
			}
		}
	}

	//Go through the 256 holes of the mask. Assign a fiber on one side and a channel on the other side.
	for (sub_i = 0; sub_i < a_subs; ++sub_i) {
		for (i = 0; i < a_mapmt; +i++) {
			unsigned card_i, channel_i, bunch_i;
			channel_i=ch[i];
			if(0 == strcmp("fibzero", a_src)){
				bunch_i=fib0[i];
			}
			else if(0 == strcmp("fibone", a_src)){
			  if (sub_i == 0)
			    {
			      bunch_i=fib1[i];
			    }
			  else
			    {
			      bunch_i=fib1b[i];
			    }
			}
			else if(0 == strcmp("fibfour", a_src)){
				bunch_i=fib4[i];	   
			}
			else if(0 == strcmp("fibfive", a_src)){
				bunch_i=fib5[i];	   
			}
			else if(0 == strcmp("fibsix", a_src)){
				bunch_i=fib6[i];	   
			}
			else if(0 == strcmp("fibseven", a_src)){
				bunch_i=fib7[i];	   
			}
			bunch_i += sub_i * a_mapmt;
	
			card_i=0;
			if (channel_i>127) {
				card_i = 1;
				channel_i=channel_i-128;
			}
			card_i += sub_i * 2;

			/* Duplicate for leading/trailing and coarse/fine. */
			for (edge_i = 0; edge_i < 2; ++edge_i) {
				for (prec_i = 0; prec_i < 2; ++prec_i) {
					printf(
							"SIGNAL(%s_TM%c%c%u, "
							"fib_ctdc.%s[%u].time_%s[%u], DATA12);\n",
							a_dst, edge_array[edge_i],
							prec_array[prec_i], bunch_i, a_src,
							card_i, prec_name_array[prec_i], 
							2*channel_i + edge_i);
				}
			}
		}
	}

	/* SPMT side. */
	for (sub_i = 0; sub_i < a_subs; ++sub_i) {
		for (spmt_i = 0; spmt_i < a_spmt; ++spmt_i) {
			for (edge_i = 0; edge_i < 2; ++edge_i) {
				for (prec_i = 0; prec_i < 2; ++prec_i) {
					printf(
							"SIGNAL(%s_TS%c%c%u, "
							"fib_tamex.tamex[%u].time_%s[%u], DATA12);\n",
							a_dst, edge_array[edge_i],
							prec_array[prec_i], sub_i * a_spmt + spmt_i + 1,
							a_tamex_i,
							prec_name_array[prec_i],
							(a_tamex_ch_i + sub_i * a_spmt + spmt_i) * 2 + edge_i + 1);
				}
			}
		}
	}
}

int
main()
{
/*	map("FIBZERO", "fibzero", 256, 1);*/
/*	map("FIBONE", "fibone", 2, 256, 1, 1, 0);*/
/*	map("FIBFOUR", "fibfour", 2, 256, 4, 1, 8);*/
/*	map("FIBFIVE", "fibfive", 1, 256, 4, 2, 0);*/
/*	map("FIBSIX", "fibsix", 1, 256, 2, 2, 8);*/
	map("FIBSEVEN", "fibseven", 2, 256, 1, 0, 8);
	return 0;
}
