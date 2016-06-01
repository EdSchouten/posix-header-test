#include <sys/time.h>

#include "util.h"

TYPE(struct timeval);
MEMBER(struct timeval, tv_sec, time_t);
MEMBER(struct timeval, tv_usec, suseconds_t);

TYPE(struct itimerval);
MEMBER(struct itimerval, it_interval, struct timeval);
MEMBER(struct itimerval, it_value, struct timeval);

TYPE_INT(time_t);
TYPE_SINT(suseconds_t);

TYPE(fd_set);

IDENT_INT(ITIMER_REAL);
IDENT_INT(ITIMER_VIRTUAL);
IDENT_INT(ITIMER_PROF);

IDENT_PROC(FD_CLR(0, (fd_set *)0));
IDENT_PROC(FD_SET(0, (fd_set *)0));
IDENT_INT(FD_ISSET(0, (fd_set *)0));
IDENT_PROC(FD_ZERO((fd_set *)0));
IDENT_INT(FD_SETSIZE);

IDENT(getitimer, int (*)(int, struct itimerval *));
IDENT(setitimer, int (*)(int, const struct itimerval *restrict,
                         struct itimerval *restrict));
IDENT(select, int (*)(int, fd_set *restrict, fd_set *restrict, fd_set *restrict,
                      struct timeval *restrict));
IDENT(utimes, int (*)(const char *, const struct timeval[2]));
