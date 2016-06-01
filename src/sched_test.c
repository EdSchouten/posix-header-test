#ifndef TRANSITIVE
#include <sched.h>
#endif

#include "util.h"

TYPE_SINT(pid_t);

#ifdef SCHED_SPORADIC
TYPE_INT(time_t);
#endif

TYPE(struct timespec);

TYPE(struct sched_param);
MEMBER(struct sched_param, sched_priority, int);
#ifdef SCHED_SPORADIC
MEMBER(struct sched_param, sched_ss_low_priority, int);
MEMBER(struct sched_param, sched_ss_repl_period, struct timespec);
MEMBER(struct sched_param, sched_ss_init_budget, struct timespec);
MEMBER(struct sched_param, sched_ss_max_repl, int);
#endif

IDENT_INT(SCHED_FIFO);
IDENT_INT(SCHED_RR);
#ifdef SCHED_SPORADIC
IDENT_INT(SCHED_SPORADIC);
#endif
IDENT_INT(SCHED_OTHER);

IDENT(sched_get_priority_max, int (*)(int));
IDENT(sched_get_priority_min, int (*)(int));
IDENT(sched_getparam, int (*)(pid_t, struct sched_param *));
IDENT(sched_getscheduler, int (*)(pid_t));
IDENT(sched_rr_get_interval, int (*)(pid_t, struct timespec *));
IDENT(sched_setparam, int (*)(pid_t, const struct sched_param *));
IDENT(sched_setscheduler, int (*)(pid_t, int, const struct sched_param *));
IDENT(sched_yield, int (*)(void));
