#include <sys/statvfs.h>

#include "test_util.h"

TYPE(struct statvfs);
MEMBER(struct statvfs, f_bsize, unsigned long);
MEMBER(struct statvfs, f_frsize, unsigned long);
MEMBER(struct statvfs, f_blocks, fsblkcnt_t);
MEMBER(struct statvfs, f_bfree, fsblkcnt_t);
MEMBER(struct statvfs, f_bavail, fsblkcnt_t);
MEMBER(struct statvfs, f_files, fsfilcnt_t);
MEMBER(struct statvfs, f_ffree, fsfilcnt_t);
MEMBER(struct statvfs, f_favail, fsfilcnt_t);
MEMBER(struct statvfs, f_fsid, unsigned long);
MEMBER(struct statvfs, f_flag, unsigned long);
MEMBER(struct statvfs, f_namemax, unsigned long);

TYPE_UINT(fsblkcnt_t);
TYPE_UINT(fsfilcnt_t);

IDENT_INT(ST_RDONLY);
IDENT_INT(ST_NOSUID);

IDENT(fstatvfs, int (*)(int, struct statvfs *));
IDENT(statvfs, int (*)(const char *restrict, struct statvfs *restrict));
