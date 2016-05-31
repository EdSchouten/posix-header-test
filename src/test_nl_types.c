#include <nl_types.h>

#include "test_util.h"

TYPE(nl_catd);
TYPE(nl_item);

IDENT_INT(NL_SETD);
IDENT_INT(NL_CAT_LOCALE);

IDENT(catclose, int (*)(nl_catd));
IDENT(catgets, char *(*)(nl_catd, int, int, const char *));
IDENT(catopen, nl_catd (*)(const char *, int));
