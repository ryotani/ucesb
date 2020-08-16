
#ifndef __S412_USER_STRUCT_HH__
#define __S412_USER_STRUCT_HH__

// Careful.  These structures are also parsed by psdc in order to
// prepare for enumeration for ntuple writing.  I.e. only a small
// subset of C struct features are allowed!

struct s412_user_struct
{
  USER_STRUCT_FCNS_DECL;
};

#endif//__S412_USER_STRUCT_HH__

