#include <sys/resource.h>

#include "test_util.h"

IDENT_INT(PRIO_PROCESS);
IDENT_INT(PRIO_PGRP);
IDENT_INT(PRIO_USER);

// TODO(ed): Fix FreeBSD!
// TYPE_UINT(rlim_t);

IDENT(RLIM_INFINITY, rlim_t);
// TODO(ed): Fix FreeBSD!
// IDENT(RLIM_SAVED_MAX, rlim_t);
// IDENT(RLIM_SAVED_CUR, rlim_t);

IDENT_INT(RUSAGE_SELF);
IDENT_INT(RUSAGE_CHILDREN);

TYPE(struct rlimit);
MEMBER(struct rlimit, rlim_cur, rlim_t);
MEMBER(struct rlimit, rlim_max, rlim_t);

TYPE(struct rusage);
MEMBER(struct rusage, ru_utime, struct timeval);
MEMBER(struct rusage, ru_stime, struct timeval);

TYPE(struct timeval);

IDENT_INT(RLIMIT_CORE);
IDENT_INT(RLIMIT_CPU);
IDENT_INT(RLIMIT_DATA);
IDENT_INT(RLIMIT_FSIZE);
IDENT_INT(RLIMIT_NOFILE);
IDENT_INT(RLIMIT_STACK);
IDENT_INT(RLIMIT_AS);

// TODO(ed): Fix FreeBSD!
// IDENT(getpriority, int (*)(int, id_t));
IDENT(getrlimit, int (*)(int, struct rlimit *));
IDENT(getrusage, int (*)(int, struct rusage *));
// TODO(ed): Fix FreeBSD!
// IDENT(setpriority, int (*)(int, id_t, int));
IDENT(setrlimit, int (*)(int, const struct rlimit *));

TYPE_SINT(id_t);
