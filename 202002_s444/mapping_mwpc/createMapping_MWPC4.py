#!/usr/bin/env python3
import re

#OPEN INPUT FILE
inpMMR64 = open('mapping_MWPC_general.dat.orig','r')
readinpMMR64 = inpMMR64.readlines()

leninpMMR64 = len(readinpMMR64)

MWPC4_X1_bus     = 4
MWPC4_X2_bus     = 3
MWPC4_X3_bus     = 2
MWPC4_X4_bus     = 1
MWPC4_X5_bus     = 0
MWPC4_Y1_bus     = 5
MWPC4_Y2_bus     = 6

outMWPC4X = open('mapping_MWPC4_X.h','w')
outMWPC4Y = open('mapping_MWPC4_Y.h','w')


TabCh=[]

for line in readinpMMR64:
    readlineMMR64 = re.split('\s+',line.rstrip('\n'))
    if(len(readlineMMR64)>=4)and(readlineMMR64[0]=='0'):
        valPad=int(readlineMMR64[3]) 
        valCh=int(readlineMMR64[2])
        TabCh.append(valCh) 

lenTabCh = len(TabCh)
if(lenTabCh==64):
    for pad in range (0,64):
        #MWPC_X1
        index = TabCh[pad]+64*MWPC4_X5_bus
        outMWPC4X.write('SIGNAL(SOFMWPC4_Plane1_Q'+str(pad+1)+',sofia_mwpc.data.vmmr8.data['+str(index)+'],DATA12);\n')

    for pad in range (0,64):
        #MWPC_X2
        index = TabCh[pad]+64*MWPC4_X4_bus
        outMWPC4X.write('SIGNAL(SOFMWPC4_Plane1_Q'+str(pad+65)+',sofia_mwpc.data.vmmr8.data['+str(index)+'],DATA12);\n')
    
    for pad in range (0,64):
        #MWPC_X3
        index = TabCh[pad]+64*MWPC4_X3_bus
        outMWPC4X.write('SIGNAL(SOFMWPC4_Plane1_Q'+str(pad+129)+',sofia_mwpc.data.vmmr8.data['+str(index)+'],DATA12);\n')

    for pad in range (0,64):
        #MWPC_X4
        index = TabCh[pad]+64*MWPC4_X2_bus
        outMWPC4X.write('SIGNAL(SOFMWPC4_Plane1_Q'+str(pad+193)+',sofia_mwpc.data.vmmr8.data['+str(index)+'],DATA12);\n')

    for pad in range (0,32):
        #MWPC_X5
        index = TabCh[pad]+64*MWPC4_X1_bus
        outMWPC4X.write('SIGNAL(SOFMWPC4_Plane1_Q'+str(pad+257)+',sofia_mwpc.data.vmmr8.data['+str(index)+'],DATA12);\n')


    for pad in range (0,64):
        #MWPC4Y-1
        index = TabCh[pad]+64*MWPC4_Y2_bus
        outMWPC4Y.write('SIGNAL(SOFMWPC4_Plane3_Q'+str(pad+1)+',sofia_mwpc.data.vmmr8.data['+str(index)+'],DATA12);\n')

    for pad in range (0,56):
        #MWPC4Y-2
        index = TabCh[pad]+64*MWPC4_Y1_bus
        outMWPC4Y.write('SIGNAL(SOFMWPC4_Plane3_Q'+str(pad+65)+',sofia_mwpc.data.vmmr8.data['+str(index)+'],DATA12);\n')
