/** BEGIN_MIRROR_STRUCT ************************************************
 *
 * Mirror (1 to 1) structure.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_mirror_define.hh"

#ifndef USER_DEF_PDC_wire_hit
STRUCT_MIRROR_TEMPLATE
struct STRUCT_MIRROR_STRUCT(PDC_wire_hit)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(wire);
  STRUCT_MIRROR_TYPE(uint8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(wire);
  STRUCT_MIRROR_ITEM_CTRL(start);
  STRUCT_MIRROR_TYPE(uint8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(start);
  STRUCT_MIRROR_ITEM_CTRL(stop);
  STRUCT_MIRROR_TYPE(uint8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(stop);
  STRUCT_MIRROR_FCNS_DECL(PDC_wire_hit);
};
#endif//USER_DEF_PDC_wire_hit

#ifndef USER_DEF_PDC_hits
STRUCT_MIRROR_TEMPLATE
struct STRUCT_MIRROR_STRUCT(PDC_hits)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(hits);
  STRUCT_MIRROR_TYPE(raw_list_ii_zero_suppress) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(PDC_wire_hit),STRUCT_MIRROR_TEMPLATE_ARG(PDC_wire_hit),1024> STRUCT_MIRROR_NAME(hits);
  STRUCT_MIRROR_FCNS_DECL(PDC_hits);
};
#endif//USER_DEF_PDC_hits

#ifndef USER_DEF_s306_user_struct
STRUCT_MIRROR_TEMPLATE
struct STRUCT_MIRROR_STRUCT(s306_user_struct)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(ccb);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(ccb__i0,,2);
  STRUCT_MIRROR_TYPE(PDC_hits) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(ccb[2]);
  STRUCT_MIRROR_FCNS_DECL(s306_user_struct);
};
#endif//USER_DEF_s306_user_struct

#include "gen/default_mirror_undef.hh"


/** END_MIRROR_STRUCT *************************************************/
