#include "ext_data_client.h"

/* Change these, here or replace in the code. */

#define EXT_EVENT_STRUCT_H_FILE       "ext_e062.h"
#define EXT_EVENT_STRUCT              EXT_STR_h101_onion
#define EXT_EVENT_STRUCT_LAYOUT       EXT_STR_h101_layout
#define EXT_EVENT_STRUCT_LAYOUT_INIT  EXT_STR_h101_LAYOUT_INIT

/* */

#include EXT_EVENT_STRUCT_H_FILE

#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
  struct ext_data_client *client;
  int ret;

  EXT_EVENT_STRUCT event;
  EXT_EVENT_STRUCT_LAYOUT event_layout = EXT_EVENT_STRUCT_LAYOUT_INIT;

  if (argc < 2)
    {
      fprintf (stderr,"No server name given, usage: %s SERVER\n",argv[0]);
      exit(1);
    }

  /* Connect. */
  
  client = ext_data_connect_stderr(argv[1]);

  if (client == NULL)
    exit(1);

  if (ext_data_setup_stderr(client,
			    &event_layout,sizeof(event_layout),
			    sizeof(event)) != 0)
    {
      /* Handle events. */
      
      for ( ; ; )
	{
	  /* To 'check'/'protect' against mis-use of zero-suppressed
	   * data items, fill the entire buffer with random junk.
	   *
	   * Note: this IS a performance KILLER, and is not
	   * recommended for production!
	   */

#ifdef BUGGY_CODE
	  ext_data_rand_fill(&event,sizeof(event));
#endif
	  
	  /* Fetch the event. */
	  
	  ret = ext_data_fetch_event_stderr(client,
					    &event,sizeof(event));
	  
	  if (ret == 0)
	    break;
	  
	  /* Do whatever is wanted with the data. */
	  
	  printf ("%2d %2d %2d %3d\n",
		  event.ev_adc[0].n,event.ev_adc[1].n,event.ev_adc[2].n,
		  event.ev_tdc[0].n);
	  
	  /* ... */
	}  
    }

  /* Disconnect. */
  
  ext_data_close_stderr(client);

  return 0;
}
