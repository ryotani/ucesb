/** BEGIN_MIRROR_STRUCT ************************************************
 *
 * Mirror (1 to 1) structure.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_mirror_define.hh"

#ifndef USER_DEF_VME_FZR
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(VME_FZR)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(data);
  STRUCT_MIRROR_TYPE(raw_array) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA32),STRUCT_MIRROR_TEMPLATE_ARG(DATA32),32> STRUCT_MIRROR_NAME(data);
  STRUCT_MIRROR_FCNS_DECL(VME_FZR);
};
#endif//USER_DEF_VME_FZR

#ifndef USER_DEF_CRATE
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(CRATE) : public STRUCT_MIRROR_BASE(unpack_subevent_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(unpack_subevent_base);
  STRUCT_MIRROR_ITEM_CTRL(block);
  STRUCT_MIRROR_TYPE(VME_FZR) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(block);
  STRUCT_MIRROR_FCNS_DECL(CRATE);
};
#endif//USER_DEF_CRATE

#ifndef USER_DEF_unpack_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(unpack_event) : public STRUCT_MIRROR_BASE(unpack_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(unpack_event_base);
  STRUCT_MIRROR_ITEM_CTRL(vme0);
  STRUCT_MIRROR_TYPE(CRATE) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(vme0);
  STRUCT_MIRROR_FCNS_DECL(unpack_event);
};
#endif//USER_DEF_unpack_event

#ifndef USER_DEF_unpack_sticky_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(unpack_sticky_event) : public STRUCT_MIRROR_BASE(unpack_sticky_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(unpack_sticky_event_base);
  STRUCT_MIRROR_FCNS_DECL(unpack_sticky_event);
};
#endif//USER_DEF_unpack_sticky_event

#include "gen/default_mirror_undef.hh"


/** END_MIRROR_STRUCT *************************************************/
