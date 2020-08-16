/** BEGIN_MIRROR_STRUCT ************************************************
 *
 * Mirror (1 to 1) structure.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_mirror_define.hh"

#ifndef USER_DEF_raw_event_tac
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_tac)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(t);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(t__i0,,16);
  STRUCT_MIRROR_TYPE(DATA12) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t[16]);
  STRUCT_MIRROR_ITEM_CTRL(q);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(q__i0,,16);
  STRUCT_MIRROR_TYPE(DATA12) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(q[16]);
  STRUCT_MIRROR_FCNS_DECL(raw_event_tac);
};
#endif//USER_DEF_raw_event_tac

#ifndef USER_DEF_raw_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event) : public STRUCT_MIRROR_BASE(raw_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(raw_event_base);
  STRUCT_MIRROR_ITEM_CTRL(tac);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(tac__i0,,2);
  STRUCT_MIRROR_TYPE(raw_event_tac) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(tac[2]);
  STRUCT_MIRROR_FCNS_DECL(raw_event);
};
#endif//USER_DEF_raw_event

#ifndef USER_DEF_raw_sticky
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_sticky) : public STRUCT_MIRROR_BASE(raw_sticky_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(raw_sticky_base);
  STRUCT_MIRROR_FCNS_DECL(raw_sticky);
};
#endif//USER_DEF_raw_sticky

#include "gen/default_mirror_undef.hh"


/** END_MIRROR_STRUCT *************************************************/
