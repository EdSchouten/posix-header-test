#include <sys/select.h>

#include "test_util.h"

TYPE(struct timeval);
MEMBER(struct timeval, tv_sec, time_t);
MEMBER(struct timeval, tv_usec, suseconds_t);

TYPE_INT(time_t);
TYPE_SINT(suseconds_t);

TYPE(sigset_t);

TYPE(struct timespec);

TYPE(fd_set);

IDENT_INT(FD_SETSIZE);

IDENT_PROC(FD_CLR(0, (fd_set *)0));
IDENT_PROC(FD_SET(0, (fd_set *)0));
IDENT_INT(FD_ISSET(0, (fd_set *)0));
IDENT_PROC(FD_ZERO((fd_set *)0));

IDENT(pselect,
      int (*)(int, fd_set *restrict, fd_set *restrict, fd_set *restrict,
              const struct timespec *restrict, const sigset_t *restrict));
IDENT(select, int (*)(int, fd_set *restrict, fd_set *restrict, fd_set *restrict,
                      struct timeval *restrict));
