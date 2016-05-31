#ifdef __FreeBSD__
#include <locale.h>
#include <sys/types.h>
ssize_t strfmon_l(char *restrict, size_t, locale_t, const char *restrict, ...);
#endif

#include <monetary.h>

#include "test_util.h"

TYPE(locale_t);
TYPE_UINT(size_t);
TYPE_SINT(ssize_t);

IDENT(strfmon, ssize_t (*)(char *restrict, size_t, const char *restrict, ...));
IDENT(strfmon_l,
      ssize_t (*)(char *restrict, size_t, locale_t, const char *restrict, ...));
