#include <wctype.h>

#include "test_util.h"

TYPE_INT(wint_t);
TYPE_ARITH(wctrans_t);
TYPE_ARITH(wctype_t);

TYPE(locale_t);

IDENT(WEOF, wint_t);

IDENT(iswalnum, int (*)(wint_t));
IDENT(iswalnum_l, int (*)(wint_t, locale_t));
IDENT(iswalpha, int (*)(wint_t));
IDENT(iswalpha_l, int (*)(wint_t, locale_t));
IDENT(iswblank, int (*)(wint_t));
IDENT(iswblank_l, int (*)(wint_t, locale_t));
IDENT(iswcntrl, int (*)(wint_t));
IDENT(iswcntrl_l, int (*)(wint_t, locale_t));
IDENT(iswctype, int (*)(wint_t, wctype_t));
IDENT(iswctype_l, int (*)(wint_t, wctype_t, locale_t));
IDENT(iswdigit, int (*)(wint_t));
IDENT(iswdigit_l, int (*)(wint_t, locale_t));
IDENT(iswgraph, int (*)(wint_t));
IDENT(iswgraph_l, int (*)(wint_t, locale_t));
IDENT(iswlower, int (*)(wint_t));
IDENT(iswlower_l, int (*)(wint_t, locale_t));
IDENT(iswprint, int (*)(wint_t));
IDENT(iswprint_l, int (*)(wint_t, locale_t));
IDENT(iswpunct, int (*)(wint_t));
IDENT(iswpunct_l, int (*)(wint_t, locale_t));
IDENT(iswspace, int (*)(wint_t));
IDENT(iswspace_l, int (*)(wint_t, locale_t));
IDENT(iswupper, int (*)(wint_t));
IDENT(iswupper_l, int (*)(wint_t, locale_t));
IDENT(iswxdigit, int (*)(wint_t));
IDENT(iswxdigit_l, int (*)(wint_t, locale_t));
IDENT(towctrans, wint_t (*)(wint_t, wctrans_t));
IDENT(towctrans_l, wint_t (*)(wint_t, wctrans_t, locale_t));
IDENT(towlower, wint_t (*)(wint_t));
IDENT(towlower_l, wint_t (*)(wint_t, locale_t));
IDENT(towupper, wint_t (*)(wint_t));
IDENT(towupper_l, wint_t (*)(wint_t, locale_t));
IDENT(wctrans, wctrans_t (*)(const char *));
IDENT(wctrans_l, wctrans_t (*)(const char *, locale_t));
IDENT(wctype, wctype_t (*)(const char *));
IDENT(wctype_l, wctype_t (*)(const char *, locale_t));
