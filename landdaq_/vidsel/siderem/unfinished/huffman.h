#ifndef __HUFFMAN_H__
#define __HUFFMAN_H__

typedef unsigned char          uint8;
typedef unsigned short         uint16;
typedef unsigned int           uint32;
typedef unsigned long long int uint64;

#define PEDESTAL_SHIFT 3

void setup_huffman();
void setup_unpack_tables();
void print_huffman();
int encode_stream(uint32 *src,uint32 *ped,uint32 *dest);
void decode_stream(uint32 *src, uint32 *src_end,
		   uint32 *dest,uint32 *dest_end);
void optimize_huff(uint32 *freq);
void huffman_count_freq(uint32 *freq,int *start,int *end);

#endif//__HUFFMAN_H__































