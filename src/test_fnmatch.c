#include <fnmatch.h>

#include "test_util.h"

IDENT_INT(FNM_NOMATCH);
IDENT_INT(FNM_PATHNAME);
IDENT_INT(FNM_PERIOD);
IDENT_INT(FNM_NOESCAPE);

IDENT(fnmatch, int (*)(const char *, const char *, int));
