
#ifndef __CONTROL_HH__
#define __CONTROL_HH__

#define INIT_USER_FUNCTION         user_init
#define EXIT_USER_FUNCTION         user_exit

#define RAW_EVENT_USER_FUNCTION    raw_user_function
#define CAL_EVENT_USER_FUNCTION    user_function

#define HANDLE_COMMAND_LINE_OPTION  user_handle_command_line_option
#define USAGE_COMMAND_LINE_OPTIONS  user_usage_command_line_options

#define USER_EXTERNAL_UNPACK_STRUCT_FILE "s408_external.hh"

#define USER_STRUCT                s408_user_struct

///////////////////////////////////////////////////////////////

#define WATCHER_EVENT_INFO_USER_FUNCTION land_watcher_event_info
 
#define WATCHER_EVENT_INFO_INCLUDE "land_watch_info.hh"


// #define MAX_MULTI_EVENTS 100

#endif//__CONTROL_HH__
