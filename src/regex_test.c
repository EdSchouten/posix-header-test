#include <regex.h>

#include "util.h"

TYPE(regex_t);
MEMBER(regex_t, re_nsub, size_t);

TYPE_UINT(size_t);

TYPE_SINT(regoff_t);

TYPE(regmatch_t);
MEMBER(regmatch_t, rm_so, regoff_t);
MEMBER(regmatch_t, rm_eo, regoff_t);

IDENT_INT(REG_EXTENDED);
IDENT_INT(REG_ICASE);
IDENT_INT(REG_NOSUB);
IDENT_INT(REG_NEWLINE);

IDENT_INT(REG_NOTBOL);
IDENT_INT(REG_NOTEOL);

IDENT_INT(REG_NOMATCH);
IDENT_INT(REG_BADPAT);
IDENT_INT(REG_ECOLLATE);
IDENT_INT(REG_ECTYPE);
IDENT_INT(REG_EESCAPE);
IDENT_INT(REG_ESUBREG);
IDENT_INT(REG_EBRACK);
IDENT_INT(REG_EPAREN);
IDENT_INT(REG_EBRACE);
IDENT_INT(REG_BADBR);
IDENT_INT(REG_ERANGE);
IDENT_INT(REG_ESPACE);
IDENT_INT(REG_BADRPT);

IDENT(regcomp, int (*)(regex_t *restrict, const char *restrict, int));
IDENT(regerror,
      size_t (*)(int, const regex_t *restrict, char *restrict, size_t));
IDENT(regexec, int (*)(const regex_t *restrict, const char *restrict, size_t,
                       regmatch_t[restrict], int));
IDENT(regfree, void (*)(regex_t *));
