#include <ulimit.h>

#include "test_util.h"

IDENT_INT(UL_GETFSIZE);
IDENT_INT(UL_SETFSIZE);

IDENT(ulimit, long (*)(int, ...));
