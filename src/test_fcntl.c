#ifdef __FreeBSD__
#define O_DSYNC 0
#define O_RSYNC 0
#define O_SEARCH 0
#endif

#include <fcntl.h>

#include "test_util.h"

IDENT_INT(F_DUPFD);
IDENT_INT(F_DUPFD_CLOEXEC);
IDENT_INT(F_GETFD);
IDENT_INT(F_SETFD);
IDENT_INT(F_GETFL);
IDENT_INT(F_SETFL);
IDENT_INT(F_GETLK);
IDENT_INT(F_SETLK);
IDENT_INT(F_SETLKW);
IDENT_INT(F_GETOWN);
IDENT_INT(F_SETOWN);

IDENT_INT(FD_CLOEXEC);

IDENT_INT(F_RDLCK);
IDENT_INT(F_UNLCK);
IDENT_INT(F_WRLCK);

IDENT_INT(O_CLOEXEC);
IDENT_INT(O_CREAT);
IDENT_INT(O_DIRECTORY);
IDENT_INT(O_EXCL);
IDENT_INT(O_NOCTTY);
IDENT_INT(O_NOFOLLOW);
IDENT_INT(O_TRUNC);
IDENT_INT(O_TTY_INIT);

IDENT_INT(O_APPEND);
IDENT_INT(O_DSYNC);
IDENT_INT(O_NONBLOCK);
IDENT_INT(O_RSYNC);
IDENT_INT(O_SYNC);

IDENT_INT(O_ACCMODE);

IDENT_INT(O_EXEC);
IDENT_INT(O_RDONLY);
IDENT_INT(O_RDWR);
IDENT_INT(O_SEARCH);
IDENT_INT(O_WRONLY);

IDENT_INT(AT_FDCWD);

IDENT_INT(AT_EACCESS);

IDENT_INT(AT_SYMLINK_NOFOLLOW);

IDENT_INT(AT_SYMLINK_FOLLOW);

IDENT_INT(AT_REMOVEDIR);

IDENT_INT(POSIX_FADV_DONTNEED);
IDENT_INT(POSIX_FADV_NOREUSE);
IDENT_INT(POSIX_FADV_NORMAL);
IDENT_INT(POSIX_FADV_RANDOM);
IDENT_INT(POSIX_FADV_SEQUENTIAL);
IDENT_INT(POSIX_FADV_WILLNEED);

TYPE(struct flock);
MEMBER(struct flock, l_type, short);
MEMBER(struct flock, l_whence, short);
MEMBER(struct flock, l_start, off_t);
MEMBER(struct flock, l_len, off_t);
MEMBER(struct flock, l_pid, pid_t);

TYPE_INT(mode_t);
TYPE_SINT(off_t);
TYPE_SINT(pid_t);

IDENT(creat, int (*)(const char *, mode_t));
IDENT(fcntl, int (*)(int, int, ...));
IDENT(open, int (*)(const char *, int, ...));
IDENT(openat, int (*)(int, const char *, int, ...));
IDENT(posix_fadvise, int (*)(int, off_t, off_t, int));
IDENT(posix_fallocate, int (*)(int, off_t, off_t));