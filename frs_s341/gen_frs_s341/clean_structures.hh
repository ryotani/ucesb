class EMPTY_32BIT_WORD_V775_FRS
{
  raw_array<DATA32,DATA32,32> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(EMPTY_32BIT_WORD_V775_FRS);
};
class EMPTY_32BIT_WORD_V830_FRS
{
  raw_array<DATA32,DATA32,32> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(EMPTY_32BIT_WORD_V830_FRS);
};
class VME_CAEN_V259_FRS
{
  raw_array_zero_suppress<DATA32,DATA32,32> data;
  union
  {
    struct
    {
      uint32 dummy_0_23 : 24;
      uint32 unnamed_24_26 : 3;
      uint32 geom : 5;
    };
    uint32 u32;
  } eob;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V259_FRS);
};
class VME_CAEN_V775_FRS
{
  raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,32> data;
  union
  {
    struct
    {
      uint32 event_number : 24;
      uint32 unnamed_24_26 : 3;
      uint32 geom : 5;
    };
    uint32 u32;
  } eob;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V775_FRS);
};
class VME_CAEN_V830_FRS
{
  raw_array<DATA32,DATA32,32> data;
  union
  {
    struct
    {
      uint32 unnamed_0_26 : 27;
      uint32 geom : 5;
    };
    uint32 u32;
  } eob;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V830_FRS);
};
class FRS_CRATE
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V830_FRS,scaler0);
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V259_FRS,pattern);
  SINGLE(VME_CAEN_V775_FRS,tdc1);
  SINGLE(VME_CAEN_V775_FRS,qdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(EMPTY_32BIT_WORD_V830_FRS,dummy0);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy1);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy2);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy3);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy4);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FRS_CRATE);
};
class TPC_CRATE
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V830_FRS,scaler0);
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,tdc1);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(EMPTY_32BIT_WORD_V830_FRS,dummy0);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy1);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy2);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy3);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy4);
  SINGLE(VME_CAEN_V775_FRS,adc1);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TPC_CRATE);
};
class unpack_event : public unpack_event_base
{
SINGLE(FRS_CRATE,vme0);
SINGLE(TPC_CRATE,vme1);
  bitsone<2> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return false; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_event);
};
class unpack_sticky_event : public unpack_sticky_event_base
{
  void __clear_visited() { }
  bool ignore_unknown_subevent() { return false; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_sticky_event);
};
