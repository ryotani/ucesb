This is intended as the last commit in the CVS repository before
the move to GIT.  Move as in the CVS will still be around, but
not intended for maintenance.

The GIT repository will *not* take over the CVS history.

The following directories are not carried over to GIT:

x2007/        - is a land02 directory, not ucesb.
rpc2006/      - this actually contains a full (old) ucesb system.
                and is probably not used at all.

FZD_jan_2010/ - renamed to fzd_jan_2010

Except for s223_march/, all directories seem to compile nicely with a
recent ucesb sources.  (Some dependency issue in s223_march/.)

Going through the directories and files, one can see quite a number of
opportunities to merge parts of files into land_common/, thus reducing
the overall system footprint.  Also some documentation files seems to
be copies-of-copies-of-copies.

Happy gitting!
