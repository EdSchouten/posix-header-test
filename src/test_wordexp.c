#include <wordexp.h>

#include "test_util.h"

TYPE(wordexp_t);
MEMBER(wordexp_t, we_wordc, size_t);
MEMBER(wordexp_t, we_wordv, char **);
MEMBER(wordexp_t, we_offs, size_t);

IDENT_INT(WRDE_APPEND);
IDENT_INT(WRDE_DOOFFS);
IDENT_INT(WRDE_NOCMD);
IDENT_INT(WRDE_REUSE);
IDENT_INT(WRDE_SHOWERR);
IDENT_INT(WRDE_UNDEF);

IDENT_INT(WRDE_BADCHAR);
IDENT_INT(WRDE_BADVAL);
IDENT_INT(WRDE_CMDSUB);
IDENT_INT(WRDE_NOSPACE);
IDENT_INT(WRDE_SYNTAX);

TYPE_UINT(size_t);
IDENT(wordexp, int (*)(const char *restrict, wordexp_t *restrict, int));
IDENT(wordfree, void (*)(wordexp_t *));
