#include <monetary.h>

#include "util.h"

TYPE_SCALAR(locale_t);
TYPE_UINT(size_t);
TYPE_SINT(ssize_t);

IDENT(strfmon, ssize_t (*)(char *restrict, size_t, const char *restrict, ...));
IDENT(strfmon_l,
      ssize_t (*)(char *restrict, size_t, locale_t, const char *restrict, ...));
