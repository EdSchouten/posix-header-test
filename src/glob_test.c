#include <glob.h>

#include "util.h"

TYPE(glob_t);
MEMBER(glob_t, gl_pathc, size_t);
MEMBER(glob_t, gl_pathv, char **);
MEMBER(glob_t, gl_offs, size_t);

TYPE_UINT(size_t);

IDENT_INT(GLOB_APPEND);
IDENT_INT(GLOB_DOOFFS);
IDENT_INT(GLOB_ERR);
IDENT_INT(GLOB_MARK);
IDENT_INT(GLOB_NOCHECK);
IDENT_INT(GLOB_NOESCAPE);
IDENT_INT(GLOB_NOSORT);

IDENT_INT(GLOB_ABORTED);
IDENT_INT(GLOB_NOMATCH);
IDENT_INT(GLOB_NOSPACE);

IDENT(glob, int (*)(const char *restrict, int, int (*)(const char *, int),
                    glob_t *restrict));
IDENT(globfree, void (*)(glob_t *));
