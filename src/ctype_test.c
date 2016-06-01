#include <ctype.h>

#include "util.h"

TYPE(locale_t);

IDENT(isalnum, int (*)(int));
IDENT(isalnum_l, int (*)(int, locale_t));
IDENT(isalpha, int (*)(int));
IDENT(isalpha_l, int (*)(int, locale_t));
IDENT(isascii, int (*)(int));
IDENT(isblank, int (*)(int));
IDENT(isblank_l, int (*)(int, locale_t));
IDENT(iscntrl, int (*)(int));
IDENT(iscntrl_l, int (*)(int, locale_t));
IDENT(isdigit, int (*)(int));
IDENT(isdigit_l, int (*)(int, locale_t));
IDENT(isgraph, int (*)(int));
IDENT(isgraph_l, int (*)(int, locale_t));
IDENT(islower, int (*)(int));
IDENT(islower_l, int (*)(int, locale_t));
IDENT(isprint, int (*)(int));
IDENT(isprint_l, int (*)(int, locale_t));
IDENT(ispunct, int (*)(int));
IDENT(ispunct_l, int (*)(int, locale_t));
IDENT(isspace, int (*)(int));
IDENT(isspace_l, int (*)(int, locale_t));
IDENT(isupper, int (*)(int));
IDENT(isupper_l, int (*)(int, locale_t));
IDENT(isxdigit, int (*)(int));
IDENT(isxdigit_l, int (*)(int, locale_t));
IDENT(toascii, int (*)(int));
IDENT(tolower, int (*)(int));
IDENT(tolower_l, int (*)(int, locale_t));
IDENT(toupper, int (*)(int));
IDENT(toupper_l, int (*)(int, locale_t));
