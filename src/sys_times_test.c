#include <sys/times.h>

#include "util.h"

TYPE(struct tms);
MEMBER(struct tms, tms_utime, clock_t);
MEMBER(struct tms, tms_stime, clock_t);
MEMBER(struct tms, tms_cutime, clock_t);
MEMBER(struct tms, tms_cstime, clock_t);

TYPE_ARITH(clock_t);

IDENT(times, clock_t (*)(struct tms *));
