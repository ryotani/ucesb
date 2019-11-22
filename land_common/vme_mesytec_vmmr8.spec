// -*- C++ -*-

/* This file is part of UCESB - a tool for data unpacking and processing.
 *
 * Copyright (C) 2017  Bastian Loeher  <b.loeher@gsi.de>
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

/*
 * ------------------------------------------------------------------------
 *  VME data collector with 8 optical buses
 * ------------------------------------------------------------------------
 * 8 OPTICAL FIBER INPUTS ARE PRESENT ON THE VME MODULE
 */

VME_MESYTEC_VMMR8(geom)
{
  MEMBER(DATA12 data[8*64] ZERO_SUPPRESS_MULTI(20));

  MARK_COUNT(start);
  UINT32 header NOENCODE
  {
    0_11:   word_number; // includes end_of_event
    12_15: 0b0000;
    16_23: geom = MATCH(geom);
    24: trig; 
    25_29: 0b00000;
    30_31: 0b01;
  }

  several UINT32 time_data NOENCODE
  {
    0_15:  time;
    16_23: 0b00000000;
    24_27: bus;
    28_31: 0b0011;
  }
  
  several UINT32 ch_data NOENCODE
  {
    0_11:  value;
    12_23: channel;
    24_27: bus;
    28_31: 0b0001;

    ENCODE(data[channel+64*bus], (value = value));
  }

  several UINT32 fill_word NOENCODE
  {
    0_31: 0x0;
  }

  UINT32 end_of_event
  {
    0_29:  counter;
    30_31: 0b11;
  }

  MARK_COUNT(end);
  CHECK_COUNT(header.word_number,start,end,-4,4);
}
