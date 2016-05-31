#include <iconv.h>

#include "test_util.h"

TYPE(iconv_t);
TYPE_UINT(size_t);

IDENT(iconv, size_t (*)(iconv_t, char **restrict, size_t *restrict,
                        char **restrict, size_t *restrict));
IDENT(iconv_close, int (*)(iconv_t));
IDENT(iconv_open, iconv_t (*)(const char *, const char *));
