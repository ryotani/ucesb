class FZD_data_SUBITEM
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geo,raw_array_multi_zero_suppress<DATA32,DATA32,32,5> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geo);
  STRUCT_FCNS_DECL(FZD_data_SUBITEM);
};
class FZD_Modul
{
  raw_array_multi_zero_suppress<DATA32,DATA32,32,5> data;
  union
  {
    struct
    {
      uint32 unnamed_0_23 : 24;
      uint32 geom : 5;
      uint32 unnamed_29_29 : 1;
      uint32 unnamed_30_30 : 1;
      uint32 unnamed_31_31 : 1;
    };
    uint32 u32;
  } header;
  SINGLE(FZD_data_SUBITEM,dummy);
  union
  {
    struct
    {
      uint32 unnamed_0_23 : 24;
      uint32 geom : 5;
      uint32 unnamed_29_29 : 1;
      uint32 unnamed_30_30 : 1;
      uint32 unnamed_31_31 : 1;
    };
    uint32 u32;
  } EOB;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(FZD_Modul);
};
class FZD_V1495
{
  raw_array_zero_suppress<DATA32,DATA32,8> ts;
  raw_array_zero_suppress<DATA32,DATA32,2> RBWL;
  DATA32 MP;
  union
  {
    struct
    {
      uint32 unnamed_0_23 : 24;
      uint32 geom : 5;
      uint32 unnamed_29_29 : 1;
      uint32 unnamed_30_30 : 1;
      uint32 unnamed_31_31 : 1;
    };
    uint32 u32;
  } header;
  union
  {
    struct
    {
      uint32 unnamed_0_23 : 24;
      uint32 geom : 5;
      uint32 unnamed_29_29 : 1;
      uint32 unnamed_30_30 : 1;
      uint32 unnamed_31_31 : 1;
    };
    uint32 u32;
  } EOB;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(FZD_V1495);
};
class CRATE
 : public unpack_subevent_base
{
  SINGLE(FZD_V1495,timestamp);
  SINGLE(FZD_Modul,QDC2);
  SINGLE(FZD_Modul,QDC1);
  SINGLE(FZD_Modul,TDC1);
  SINGLE(FZD_Modul,Sca1);
  SINGLE(FZD_Modul,Sca2);
  SINGLE(FZD_Modul,Sca3);
  SINGLE(FZD_Modul,Sca4);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(CRATE);
};
class unpack_event : public unpack_event_base
{
SINGLE(CRATE,vme0);
  bitsone<1> __visited;
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
