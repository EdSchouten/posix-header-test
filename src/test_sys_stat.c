#include <sys/stat.h>

#include "test_util.h"

TYPE(struct stat);
MEMBER(struct stat, st_dev, dev_t);
MEMBER(struct stat, st_ino, ino_t);
MEMBER(struct stat, st_mode, mode_t);
MEMBER(struct stat, st_nlink, nlink_t);
MEMBER(struct stat, st_uid, uid_t);
MEMBER(struct stat, st_gid, gid_t);
MEMBER(struct stat, st_rdev, dev_t);
MEMBER(struct stat, st_size, off_t);
MEMBER(struct stat, st_atim, struct timespec);
MEMBER(struct stat, st_mtim, struct timespec);
MEMBER(struct stat, st_ctim, struct timespec);
MEMBER(struct stat, st_blksize, blksize_t);
MEMBER(struct stat, st_blocks, blkcnt_t);

TYPE_SINT(blkcnt_t);
TYPE_SINT(blksize_t);
TYPE_INT(dev_t);
TYPE_UINT(ino_t);
TYPE_INT(mode_t);
TYPE_INT(nlink_t);
TYPE_INT(uid_t);
TYPE_INT(gid_t);
TYPE_SINT(off_t);
TYPE_INT(time_t);

TYPE(struct timespec);

MEMBER(struct stat, st_atime, time_t);
MEMBER(struct stat, st_mtime, time_t);
MEMBER(struct stat, st_ctime, time_t);

IDENT_INT(S_IFMT);
IDENT_INT(S_IFBLK);
IDENT_INT(S_IFCHR);
IDENT_INT(S_IFIFO);
IDENT_INT(S_IFREG);
IDENT_INT(S_IFDIR);
IDENT_INT(S_IFLNK);
IDENT_INT(S_IFSOCK);

IDENT_INT(S_IRWXU);
IDENT_INT(S_IRUSR);
IDENT_INT(S_IWUSR);
IDENT_INT(S_IXUSR);
IDENT_INT(S_IRWXG);
IDENT_INT(S_IRGRP);
IDENT_INT(S_IWGRP);
IDENT_INT(S_IXGRP);
IDENT_INT(S_IRWXO);
IDENT_INT(S_IROTH);
IDENT_INT(S_IWOTH);
IDENT_INT(S_IXOTH);
IDENT_INT(S_ISUID);
IDENT_INT(S_ISGID);
IDENT_INT(S_ISVTX);

IDENT_INT(S_ISBLK(0));
IDENT_INT(S_ISCHR(0));
IDENT_INT(S_ISDIR(0));
IDENT_INT(S_ISFIFO(0));
IDENT_INT(S_ISREG(0));
IDENT_INT(S_ISLNK(0));
IDENT_INT(S_ISSOCK(0));

// TODO(ed): Fix FreeBSD!
// IDENT_INT(S_TYPEISMQ((const struct stat *)0));
// IDENT_INT(S_TYPEISSEM((const struct stat *)0));
// IDENT_INT(S_TYPEISSHM((const struct stat *)0));

IDENT_INT(UTIME_NOW);
IDENT_INT(UTIME_OMIT);

IDENT(chmod, int (*)(const char *, mode_t));
IDENT(fchmod, int (*)(int, mode_t));
IDENT(fchmodat, int (*)(int, const char *, mode_t, int));
IDENT(fstat, int (*)(int, struct stat *));
IDENT(fstatat, int (*)(int, const char *restrict, struct stat *restrict, int));
IDENT(futimens, int (*)(int, const struct timespec[2]));
IDENT(lstat, int (*)(const char *restrict, struct stat *restrict));
IDENT(mkdir, int (*)(const char *, mode_t));
IDENT(mkdirat, int (*)(int, const char *, mode_t));
IDENT(mkfifo, int (*)(const char *, mode_t));
IDENT(mkfifoat, int (*)(int, const char *, mode_t));
IDENT(mknod, int (*)(const char *, mode_t, dev_t));
IDENT(mknodat, int (*)(int, const char *, mode_t, dev_t));
IDENT(stat, int (*)(const char *restrict, struct stat *restrict));
IDENT(umask, mode_t (*)(mode_t));
IDENT(utimensat, int (*)(int, const char *, const struct timespec[2], int));
