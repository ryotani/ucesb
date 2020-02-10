// -*- C++ -*-

/* This file is part of UCESB - a tool for data unpacking and processing.
 *
 * Copyright (C) 2017
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301  USA
 */


VME_SIS_3820_SCALER(geom)
{

	MEMBER(DATA32 data[32] ZERO_SUPPRESS);

	UINT32 custom_header NOENCODE
	{
		 0_15: nwords;
		16_18: mode;
		   19: 0b0;
		20_25: data_format;
		   26: 0b0;
		27_31: id = MATCH(geom);
	}

	if (1 == custom_header.mode){
		list(0 <= index < custom_header.nwords) {
			if (32 == custom_header.data_format) {
				UINT32 event NOENCODE {
					0_31: val;
				}
				ENCODE(data[index], (value = event.val));
			}
			if (24 == custom_header.data_format) {
				UINT32 event NOENCODE {
					 0_23: val;
					24_28: channel;
					   29: 0b0;
					30_31: user_bits;
				}
				ENCODE(data[event.channel], (value=event.val));
			}
		}
	}

	/* data format of 8 bits and 16 bits only supported for MCS mode */
	/*
	 * if (16 == custom_header.data_format) {
	 *		list(0 <= index < custom_header.nch) {
	 *		UINT32 event NOENCODE {
	 *			 0_15: val_chi;
	 *			16_31: val_chj;
	 *		}
	 *	}
	 *}
	 *
	 *	if (8 == custom_header.data_format) {
	 *		UINT32 event NOENCODE {
	 *			  0_7: val_chi;
	 *			 8_15: val_chj;
	 *			16_23: val_chk;
	 *			24_31: val_chl;
	 *		}
	 *	}
         *	}
	 */

}
