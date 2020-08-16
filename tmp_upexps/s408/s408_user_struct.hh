
#ifndef __S408_USER_STRUCT_HH__
#define __S408_USER_STRUCT_HH__

// Careful.  These structures are also parsed by psdc in order to
// prepare for enumeration for ntuple writing.  I.e. only a small
// subset of C struct features are allowed!

struct s408_user_struct
{
  // int dummy;
  USER_STRUCT_FCNS_DECL;
};

#endif//__S408_USER_STRUCT_HH__

