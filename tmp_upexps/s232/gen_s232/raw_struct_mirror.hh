/** BEGIN_MIRROR_STRUCT ************************************************
 *
 * Mirror (1 to 1) structure.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_mirror_define.hh"

#ifndef USER_DEF_raw_event_CS
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_CS)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(E);
  STRUCT_MIRROR_TYPE(DATA12) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(E);
  STRUCT_MIRROR_ITEM_CTRL(T);
  STRUCT_MIRROR_TYPE(DATA12) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(T);
  STRUCT_MIRROR_FCNS_DECL(raw_event_CS);
};
#endif//USER_DEF_raw_event_CS

#ifndef USER_DEF_raw_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event) : public STRUCT_MIRROR_BASE(raw_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(raw_event_base);
  STRUCT_MIRROR_ITEM_CTRL(CS);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(CS__i0,,155);
  STRUCT_MIRROR_TYPE(raw_array_zero_suppress) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(raw_event_CS),STRUCT_MIRROR_TEMPLATE_ARG(raw_event_CS),1> STRUCT_MIRROR_NAME(CS[155]);
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
