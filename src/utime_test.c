#include <utime.h>

#include "util.h"

TYPE(struct utimbuf);
MEMBER(struct utimbuf, actime, time_t);
MEMBER(struct utimbuf, modtime, time_t);

TYPE_INT(time_t);

IDENT(utime, int (*)(const char *, const struct utimbuf *));
