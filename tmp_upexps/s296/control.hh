
#ifndef __CONTROL_HH__
#define __CONTROL_HH__

#define INIT_USER_FUNCTION         user_init
#define EXIT_USER_FUNCTION         user_exit

#define RAW_EVENT_USER_FUNCTION    raw_user_function
#define CAL_EVENT_USER_FUNCTION     user_function

#define USER_EXTERNAL_UNPACK_STRUCT_FILE "s296_external.hh"

//Copied from unpacker/cros3/control.hh:///////////////////////

#define COPY_OUTPUT_FILE_EVENT     copy_output_file_event

///////////////////////////////////////////////////////////////

#define USER_STRUCT                s296_user_struct

#define WATCHER_EVENT_INFO_USER_FUNCTION land_watcher_event_info
 
#define WATCHER_EVENT_INFO_INCLUDE "land_watch_info.hh"


// #define MAX_MULTI_EVENTS 100

#endif//__CONTROL_HH__
