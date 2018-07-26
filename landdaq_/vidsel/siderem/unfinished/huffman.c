
#include "huffman.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef unsigned char          uint8;
typedef unsigned short         uint16;
typedef unsigned int           uint32;
typedef unsigned long long int uint64;

#ifdef __GNUC__
#ifdef __cplusplus
#define restrict __restrict
#else
#define restrict
#endif 
#endif 

// This is now based on the assumption that the dsp has the L1 cache
// being at least 2 x 4096x4 bytes = 32 kB, since otherwise the
// huffman table will pollute the cache.  Hmm, not really.  Assuming we
// usually use perhaps 256 entries, we will be using 1 kB of cache, and
// the rest will pollute only sporadically, as the entries are used!

uint32 huffman[4096];

#if 0
// Codelengths for raw SST data without pedestal offsets taken into account
const uint32 hoffman_code_length0 = 7;
const uint32 huffman_code_length_breaks[] = { /*8*/   87, 
					      /*9*/  127, 
					      /*10*/ 167,
					      /*11*/ 191,
					      /*12*/ 205,
					      /*13*/ 235,
					      /*14*/ 285,
					      /*15*/ 555,
					      /*16*/ 825,
					      /*17*/ 1271,
					      /*18*/ 1701,
					      /*19*/ 3202 };
#endif
#if 1
// Codelengths for raw SST data _with_ pedestal offsets taken into account
const uint32 hoffman_code_length0 = 3;
const uint32 huffman_code_length_breaks[] = { /*4*/    3, 
					      /*5*/    8, 
					      /*6*/   13, 
					      /*7*/   17, 
					      /*8*/   21, 
					      /*9*/   25, 
					      /*10*/  31,
					      /*11*/  35,
					      /*12*/  43,
					      /*13*/  57,
					      /*14*/  81,
					      /*15*/ 123,
					      /*16*/ 193,
					      /*17*/ 257,
					      /*18*/ 434};//,
					      /*19*/ //217};//,
					      /*20*/ //357};//,
					      /*21*/ //429};//,
					      /*22*/ //501//,
					      /*23*/ //723 };
#endif

void set_huffman_code(uint32 symbol,
		      uint32 length,
		      uint32 code_counter)
{
  // We need to bit-reverse the code_counter

  uint32 code = 0;
  uint32 i;

  for (i = 0; i < length; i++)
    {
      code <<= 1;
      code |= (code_counter & 1);
      code_counter >>= 1;
    }

  huffman[symbol] = length | (code << 5);
}

void setup_huffman()
{
  uint32 codelength = hoffman_code_length0;
  uint32 code_counter = 0;
  uint32 symbol, true_symbol;
  uint32 waste;

  int nextbreak = 0;

  set_huffman_code(0,codelength,code_counter);

  //fprintf (stderr,"%4d %4d %3d %4d\n",0,0,codelength,code_counter);

  for (symbol = 1; symbol < 4096; symbol++)
    {
      code_counter++;

      if (huffman_code_length_breaks[nextbreak] == symbol)
	{
	  code_counter <<= 1;
	  codelength++;
	  nextbreak++;
	}

      if (code_counter == (((uint32) 1) << codelength))
	fprintf (stderr,"Code overflow at symbol %d (length %d)\n",
		 symbol,codelength);

      true_symbol = symbol;

      true_symbol = (symbol / 2) + 1;
      if (!(symbol & 1))
	true_symbol = 4097 - true_symbol;

      //fprintf (stderr,"%4d %4d %3d %4d\n",true_symbol,symbol,codelength,code_counter);

      set_huffman_code(true_symbol,codelength,code_counter);
    }

  // how far is the counter from the end?

  waste = (1 << codelength) - 1 - code_counter;

  if (waste)
    fprintf (stderr,"Code waste (at length %d): %d codes\n",
	     codelength,waste);
  else
    fprintf (stderr,"No waste at end (length: %d)\n",codelength);
}

// The unpacking is done via lookup-tables for several bits at a time
// The entry in the table will either tell what symbol was encoded,
// and how many bits were used, or give an index to the next table to
// use (for the next chunk of bits)

#define UNPACK_CHUNK  6
#define TABLE_ENTRIES (1 << UNPACK_CHUNK)

// each table entry has: 
// 0007 ( 3)   number of bits used
// 0008 ( 1)   if we are terminal (encode a symbol)
// fff0 (12)   symbol (if & 0x0008)
// fff0 (many) index of next table (if !  & 0x0008) 
//             cannot need more tables than symbols!

#define UNPACK_MASK_LENGTH   0x0007
#define UNPACK_MARK_TERMINAL 0x0008
#define UNPACK_SHIFT_SYMBOL  4

typedef struct unpack_table_t
{
  uint16 info[TABLE_ENTRIES];
} unpack_table;

unpack_table *tables = NULL;

void setup_unpack_tables()
{
  int next_table_idx = 1;
  uint32 symbol;

  tables = (unpack_table*) malloc(sizeof(unpack_table) * next_table_idx);

  memset(tables,0,sizeof(unpack_table));

  for (symbol = 0; symbol < 4096; symbol++)
    {
      uint32 length = huffman[symbol] & 0x1f;
      uint32 code   = huffman[symbol] >> 5;
	  uint32 code_chunk;

      // fprintf (stderr,"%4d : %08x(%2d)",symbol,code,length);

      int table_idx = 0;
      unpack_table *table = tables+table_idx;

      for ( ; ; )
	{
	  if (length <= UNPACK_CHUNK)
	    {
	      int nocare = 1 << length;

	      // fprintf (stderr," [%d]",table_idx);

	      for ( ; code < TABLE_ENTRIES; code += nocare)
		{
		  // fprintf (stderr,":%02x",code);
		  if (table->info[code])
		    fprintf(stderr,"Table entry already in use.\n");
		  table->info[code] =
		    (uint16) (length | 
			      UNPACK_MARK_TERMINAL | 
			      (symbol << UNPACK_SHIFT_SYMBOL));
		}

	      break;
	    }

	  // The code is longer than the current chunk, we just need to
	  // store 'pointer' to the next table

	  code_chunk = code & (TABLE_ENTRIES - 1);
	  code >>= UNPACK_CHUNK;
	  length -= UNPACK_CHUNK;

	  // fprintf (stderr," |%02x/%d/",code_chunk,table_idx);

	  // Do we already have an table allocated?

	  if (table->info[code_chunk])
	    {
	      if ((table->info[code_chunk] & 
		   (UNPACK_MASK_LENGTH | UNPACK_MARK_TERMINAL)) != UNPACK_CHUNK)
		fprintf(stderr,"Bad table index.\n");
	      // fprintf (stderr,"{%d}",table->info[code_chunk] >> UNPACK_SHIFT_SYMBOL);
	      table_idx = table->info[code_chunk] >> UNPACK_SHIFT_SYMBOL;
	    }
	  else
	    {
	      // fprintf (stderr,"(%d)",next_table_idx);
	      table_idx = next_table_idx++;
	      table->info[code_chunk] =
		(uint16) (UNPACK_CHUNK | (table_idx << UNPACK_SHIFT_SYMBOL));

	      tables = (unpack_table*) realloc(tables,
					       sizeof(unpack_table) * next_table_idx);

	      memset(tables+next_table_idx-1,0,sizeof(unpack_table));
	    }
	  table = tables+table_idx;
	}
      // fprintf (stderr,"\n");
    }

  fprintf (stderr, "%d tables, %d bytes\n",next_table_idx,(int) sizeof(unpack_table) * next_table_idx);
}






void print_huffman()
{
  uint32 symbol;

  for (symbol = 0; symbol < 4096; symbol++)
    {
      uint32 code, length;
	  int i;
      
      fprintf (stderr,"%4d: ",symbol);

      code   = huffman[symbol] >> 5;
      length = huffman[symbol] & 0x1f;

      for (i = length; i < 24; i++)
	fprintf (stderr," ");
      
      for (i = length; i; )
	{
	  --i;

	  fprintf (stderr,"%d",(code >> i) & 1);
	}
      fprintf (stderr,"\n");
    }
}

int
encode_stream(uint32 *restrict src,uint32 *restrict ped,uint32 *restrict dest)
{
  uint32 *start_dest = dest;

  uint32 prev = 0;

  uint32 bucket = 0;
  int used = 0;
  int usedm32;
  int i;

  int length_src = 1024;
  //int length = src_end - src;

  // For forward (and backward) compatibility.  (Important is that high
  // 4 bits are != 0xf.  This simplifies unpacking of different versions
  // a lot.  The length returned (and written to the header word)
  // includes this one also. 
  *(dest++) = 0;

  for (i = 0; i < length_src; i++)
    {
	  uint32 value, diff;
	  uint32 length_code, length, code;
	  int encoded;

      // First figure out the difference to the previous one

      value = *(src++) - ((*(ped++)) >> PEDESTAL_SHIFT);
      diff = (value - prev) & 0x0fff;
      prev = value;

      // Then figure out the code to use

      length_code = huffman[diff];

      length = length_code & 0x1f;
      code   = length_code >> 5;

      ///fprintf (stderr,"value: %4d diff: %4d  code: %08x(%2d)",
      ///	      value,diff,code,length);

      // Then pack the code into our bit-stream
      
      bucket |= code << used; // dump bits that we can into the bucket
      used += length;
      usedm32 = used - 32;

      if (usedm32 >= 0) // we got full (or more)
	{
	  ///fprintf (stderr," --> %08x (%2d)\n",bucket,usedm32);

	  used = usedm32;
	  *(dest++) = bucket;
	  encoded = length - usedm32; // those many bits were stored
	  bucket = code >> encoded; // remaining bits of our data
	}

      ///fprintf (stderr,"\n");
    }

  // the dependencies between iterations above are:
  // diff   <- prev one iteration earlier
  // used   <- usedm32 <- used-32 <- used+length <- used   (4)
  // bucket <- 

  // LD, SUB, AND
  // LD, AND, SHR
  // ADD, SUB, SHL, OR, CMPLT
  // MOV, ST, SUB, SHR
  // LOOP

  // --> 3+3+5+4+1 = 16 , 2 cycles, but
  // but dependency 4 gives three cycles per word encoded


  //                      
  // used    += length    ;;  encbits = code << used
  // usedm32 = used - 32  ;;  bucket |= encbits
  // CMP(usedm32)         ;;  encoded = length - usedm32
  // ?? used = usedm32    ;;  ?? *(dest++) = bucket  ;; encbits2 = code >> encoded
  //                      ;;  ?? bucket  = encbits2

  if (used)
    {
      ///fprintf (stderr,"--> %08x (%2d)",bucket,used);
      if (used < 32)
	bucket |= 1 << used; // may not shift with count == 32
      *(dest++) = bucket;
      ///fprintf (stderr," %08x\n",bucket);
    }
  
  return (int) (dest - start_dest);
}


void decode_stream(uint32 *restrict src, uint32 *src_end,
		   uint32 *restrict dest,uint32 *dest_end)
{

  // We do not need to worry about executing on a DSP, so branches are
  // not _that_ horrible, but they are still bad.  If we also encode
  // an eof-symbol we can unpack much faster with the tables

  // We need to use a 64-bit bucket, since we quite often will have
  // too few bits, but reading in the next value will give us 32 bits,
  // so that we in total have a few too many.  On a 64 bit machine,
  // this is at no extra cost.  For a 32-bit machine, it just means that the
  // compiler will use two registers, and need to do some extra shift and or when
  // doing shift operations...  (which cannot be avoided anyhow)

  uint64 bucket = 0;
  uint32 avail = 0;
  
  uint32 prev = 0;

  unpack_table *table = tables;

      // We check on every iteration, to avoid having to levels of
      // branches above
  for ( ; dest < dest_end; ) // abort is unlikely (but will happen)
    {
      uint32 code, info, length;
      uint32 symbol_idx;

      // Get bits from our bit store

      // We speculatively read from the src stream every iteration, in order
      // not to have to have two levels of branches below.  We only update the
      // src pointer however if we actually used the data

      uint64 src_val = 0; 
      // if we got outside stream, then we give 0's (will break out
      // when dest > dest_end)

      if (src < src_end)
	src_val = ((uint64) *src) << avail;

      if (avail < UNPACK_CHUNK)
	{
	  ///fprintf (stderr,"get: %08x\n",src_val);

	  // We need to fill the bit store from src

	  // We cannot break out on src >= src_end, since we might
	  // need to read some dummy bits to be able to decode the
	  // very last symbol (which may have only few bits at the
	  // very end of the last bucket (we will afterwards make sure
	  // that we read the exact amount of data anyhow)
	  bucket |= src_val;
	  avail += 32;
	  src++;
	  // With some luck, the compiler would decide to generate these
	  // instructions above as conditional moves...
	}

      code = bucket & (TABLE_ENTRIES - 1);

      info = table->info[code];

      length = info & UNPACK_MASK_LENGTH;

      bucket >>= length;
      avail -= length;

      symbol_idx = info >> UNPACK_SHIFT_SYMBOL;

      ///fprintf (stderr,"part: %02x(%d)\n",code,length);

      if (info & UNPACK_MARK_TERMINAL)
	{
	  // We found a symbol, eject it

	  prev += symbol_idx;
	  *(dest++) = prev & 0xfff;
	  table = tables; // restart unpacking

	  ///fprintf (stderr,"--> diff: %4d value: %4d\n",symbol_idx,prev);
	}
      else
	{
	  // We got an index for the next table

	  table = tables + symbol_idx;
	}
    }

  // Now, the unpacking should have reached exactly the end of the source stream

  // We claim to have bytes available in the unpack buffer.
  
  ///fprintf (stderr,"left: %08llx(%d)\n",bucket,avail);

  if (avail >= 32)
    {
      src--; // we have read one dummy word
      avail -= 32;
    }
  // If we exactly reached the end, then either there should be 0 bits left,
  // of the bucket should contain a 1
  if (avail > 0 && bucket != 1)
    fprintf (stderr,"Unpack failure, did not reach end bit exactly...\n");

  // There are zero bytes left in the buffer.  We reached exactly the end
  // of the stream, while having last length UNPACK_CHUNK
  
  if (src < src_end)
    fprintf (stderr,"Unpack failure, read too little...\n");
  if (src != src_end)
    fprintf (stderr,"Unpack failure, read too far...\n");
  
  
}



//#if 0
#include <set>

struct symbol_freq
{
public:
  double freq_total;
  uint32 symbol;
  uint32 codelen;

  symbol_freq* next;

public:
  bool operator<(const symbol_freq &rhs) const
  {
    if (freq_total != rhs.freq_total)
      return freq_total < rhs.freq_total;
    return symbol > rhs.symbol;
  }
};

template<typename T>
struct compare_ptr
{
  bool operator()(const T *p1,const T *p2) const
  {
    return *p1 < *p2;
  }
};

typedef std::set<symbol_freq*,compare_ptr<symbol_freq> > sym_freq_set;

void optimize_huff(uint32 *freq,int n)
{
  sym_freq_set sym_freq;

  symbol_freq* sfs = new symbol_freq[n];

  for (int i = 0; i < n; i++)
    {
      symbol_freq* sf = sfs + i;

      sf->freq_total = freq[i];
      sf->symbol     = i;
      sf->codelen    = 0;
      sf->next       = NULL;

      // safety feature, code table becomes crap (very long codes)
      // if any freq[i] = 0
      if (!sf->freq_total)
	sf->freq_total = 1e-6;

      sym_freq.insert(sf);
    }
 
  for (int i = 0; i < n-1; i++)
    {
      // remove smallest element from the set

      sym_freq_set::iterator start;
      sym_freq_set::iterator item;

      start = item = sym_freq.begin();

      symbol_freq* sf1 = *item;
      ++item;
      symbol_freq* sf2 = *item;
      ++item;

      sym_freq.erase(start,item);
      /*
      fprintf (stderr,"merge %d %d (%.0f %.0f)\n",
      	      sf1->symbol,
      	      sf2->symbol,
      	      sf1->freq_total,
      	      sf2->freq_total);
      */
      sf1->freq_total = sf1->freq_total + sf2->freq_total;

      symbol_freq* sf = sf1;
      for ( ; ; )
	{
	  sf->codelen++;
	  if (!sf->next)
	    break;
	  sf = sf->next;
	}
      sf = sf->next = sf2;
      while ( sf )
	{
	  sf->codelen++;
	  sf = sf->next;
	}

      sym_freq.insert(sf1);
    }

  double total_bits = 0;

  fprintf (stderr,"symbol  bits        freq  |      symbol  bits       freq\n");

  for (int i = 0; i < n; i++)
    {
      fprintf (stderr,"%5d: %5d  %10d",sfs[i].symbol,sfs[i].codelen,freq[i]);

      uint32 true_symbol = i;

      true_symbol = (i / 2);
      if ((i & 1))
	true_symbol = (n-1) - true_symbol;

      total_bits += sfs[i].codelen * freq[i];

      fprintf (stderr,"  |     %5d: %5d  %10d\n",
	      sfs[true_symbol].symbol,
	      sfs[true_symbol].codelen,
	      freq[true_symbol]);

    }
  fprintf (stderr,"Total bits: %10.0f (%8.0f kB)  Items: %.0f (%.0f kB)\n",
	  total_bits,total_bits/8192,
	  (*sym_freq.begin())->freq_total,
	  (*sym_freq.begin())->freq_total * ceil(log(n) / log(2))/8192);
}



struct symbol_freq_coin
{
  uint32 symbol;

  symbol_freq_coin* next; // next coin in package
};

struct symbol_freq_coin_package
{
  double freq_total; // numismatic value

  symbol_freq_coin *first;
  symbol_freq_coin *last;

public:
  bool operator<(const symbol_freq_coin_package &rhs) const
  {
    return freq_total < rhs.freq_total;
  }
  
};

// Since we only compare on the freq_total, we must be a multiset,
// or packages with same numismatic value will get lost

typedef std::multiset<symbol_freq_coin_package*,
		      compare_ptr<symbol_freq_coin_package> > sym_freq_cp_set;

void optimize_huff_length(uint32 *freq,int n,int L)
{
  // package-merge algorithm.  see wikipedia. this algorithm is not
  // the fastest around, but as this is not event-wise processing, it
  // does not really matter.  what may matter more is that it needs
  // memory n*L, but that's still no disaster

  // to be able to recover the final result, we'll however need to know
  // the ordering of the items when sorted, as the results

  sym_freq_cp_set *sets = new sym_freq_cp_set[L];

  symbol_freq_coin *sfc = new symbol_freq_coin[n*L];
  symbol_freq_coin_package *sfcp = new symbol_freq_coin_package[n*L];

  int j = 0;

  for (int l = 0; l < L; l++)
    {
      for (int i = 0; i < n; i++, j++)
	{
	  symbol_freq_coin *coin = sfc + j;

	  coin->symbol     = i;
	  coin->next       = NULL;
	  
	  symbol_freq_coin_package *package = sfcp + j;

	  package->freq_total = freq[i];
	  package->first = coin;
	  package->last  = coin;

	  sets[l].insert(package);
	}
    }

  // Then for each set, we package every two items into a new package
  // and insert the new package into the next set

  fprintf (stderr,"src: %zu\n",sets[0].size());

  for (int l = 1; l < L; l++)
    {
      sym_freq_cp_set *src  = &sets[l-1];
      sym_freq_cp_set *dest = &sets[l];

      // All pairs are to packaged and merged into the next set any
      // odd leftover item is discarded.  Since we will not use the
      // previous set again, there is no need to clear the items as we
      // go...
      
      /* {
	for (sym_freq_cp_set::iterator item = src->begin();
	     item != src->end(); ++item)
	  {
	    symbol_freq_coin_package* package = *item;

	    fprintf (stderr,"%6.0f : ",package->freq_total);

	    symbol_freq_coin *coin = package->first;
	    
	    while (coin)
	      {
		fprintf (stderr,"%d ",coin->symbol);
		coin = coin->next;
	      }
	    fprintf (stderr,"\n");
	  }

	fprintf (stderr,"\n");
      } */

      sym_freq_cp_set::iterator item = src->begin();    

      for (int i = (int) src->size() / 2; i; --i)
	{
	  symbol_freq_coin_package* sp1 = *item;
	  ++item;
	  symbol_freq_coin_package* sp2 = *item;
	  ++item;

	  // Merging the package, the numismatic value is the total
	  // of both packages.

	  sp1->freq_total = sp1->freq_total + sp2->freq_total;

	  assert(sp1->last == NULL);
	  assert(sp2->last == NULL);

	  sp1->last->next = sp2->first;
	  sp1->last       = sp2->last;

	  // Now, insert the item into the next set

	  dest->insert(sp1);
	}
      fprintf (stderr,"dest: %zu\n",dest->size());
    }

  // Now simply select packages until we have selected (n-1)*2
  // packages.  If there are not that many, then we're toast, because
  // then we simply cannot create an encoding with so few maximum
  // number of bits L.

  if ((int) sets[L-1].size() < (n-1)*2)
    fprintf (stderr,"Error: cannot create encoding.  Too few bits...\n");

  sym_freq_cp_set::iterator item = sets[L-1].begin();    

  // Now, for all our symbols, we need to count how often they occur.
  // the number of occurances give the number of bits with which the
  // symbol should be encoded

  int *codelen = new int[n];

  for (int i = 0; i < n; i++)
    codelen[i] = 0;

  for (int i = (n-1)*2; i; --i)
    {
      symbol_freq_coin_package* package = *item;
      ++item;

      symbol_freq_coin *coin = package->first;

      while (coin)
	{
	  codelen[coin->symbol]++;
	  coin = coin->next;
	}
    }



  double total_bits     = 0;
  double total_items = 0;

  for (int i = 0; i < n; i++)
    {
      fprintf (stderr,"%5d: %5d  %10d\n",i,codelen[i],freq[i]);

      total_bits  += codelen[i] * freq[i];
      total_items += freq[i];
    }

  fprintf (stderr,"Total bits: %10.0f (%8.0f kB)  Items: %.0f (%.0f kB)\n",
	  total_bits,total_bits/8192,
	  total_items,total_items * ceil(log(n) / log(2))/8192);


}





void huffman_count_freq(uint32 *freq,int *start,int *end)
{
  uint32 prev = 0;

  for (int *p = start; p < end; p++)
    {
      uint32 value = *p;

      uint32 diff = (value - prev) & 0xfff;
      prev = value;

      freq[diff]++;
    }
}
//#endif


#if 0
int main()
{
  uint32 buf[1024];  
  uint32 pack[1024];  
  uint32 unpack[1024];  

  uint32 freq[4096];

  for (int i = 0; i < 4096; i++)
    freq[i] = 4096-i;

  freq[0] = 10000;
  freq[1] = 8000;
  freq[2] = 6000;
  freq[3] = 5000;
  freq[4] = 4000;
  freq[5] = 3500;
  freq[6] = 2000;
  freq[7] = 1500;

  optimize_huff(freq,4096);

  setup_huffman();

  setup_unpack_tables();

  // print_huffman();

#define N 1024
  
  for (int i = 0; i < 10000; i++)
    {
      buf[0] = random() & 0xfff;
      for (int j = 0; j < N; j++)
	{
	  uint32 bits = (1 << (3+(random() & 0x0f)))-1;
	  buf[j] = (buf[j-1] + (random() & bits) - bits/2) & 0xfff;

	  // fprintf (stderr,"  %d",buf[j]-buf[j-1]);
	}

      ///fprintf (stderr,"======================================================\n");

      uint32* pack_end = encode_stream(buf,buf+N,pack);

      ///fprintf (stderr,"------------------------------------------------------\n");
      
      decode_stream(pack,pack_end,unpack,unpack+N);

      for (int j = 0; j < N; j++)
	if (buf[j] != unpack[j])
	  fprintf (stderr,"Mismatch %d: %4d != %4d\n",j,buf[j],unpack[j]);

      // fprintf (stderr,"%d %d\n",(pack_end-pack)*sizeof(uint32),(N*12)/8);
    }

  return 0;
}
#endif

































