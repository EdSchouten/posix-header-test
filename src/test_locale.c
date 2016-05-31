#include <locale.h>

#include "test_util.h"

TYPE(struct lconv);
MEMBER(struct lconv, currency_symbol, char *);
MEMBER(struct lconv, decimal_point, char *);
MEMBER(struct lconv, frac_digits, char);
MEMBER(struct lconv, grouping, char *);
MEMBER(struct lconv, int_curr_symbol, char *);
MEMBER(struct lconv, int_frac_digits, char);
MEMBER(struct lconv, int_n_cs_precedes, char);
MEMBER(struct lconv, int_n_sep_by_space, char);
MEMBER(struct lconv, int_n_sign_posn, char);
MEMBER(struct lconv, int_p_cs_precedes, char);
MEMBER(struct lconv, int_p_sep_by_space, char);
MEMBER(struct lconv, int_p_sign_posn, char);
MEMBER(struct lconv, mon_decimal_point, char *);
MEMBER(struct lconv, mon_grouping, char *);
MEMBER(struct lconv, mon_thousands_sep, char *);
MEMBER(struct lconv, negative_sign, char *);
MEMBER(struct lconv, n_cs_precedes, char);
MEMBER(struct lconv, n_sep_by_space, char);
MEMBER(struct lconv, n_sign_posn, char);
MEMBER(struct lconv, positive_sign, char *);
MEMBER(struct lconv, p_cs_precedes, char);
MEMBER(struct lconv, p_sep_by_space, char);
MEMBER(struct lconv, p_sign_posn, char);
MEMBER(struct lconv, thousands_sep, char *);

IDENT(NULL, void *);

IDENT_INT(LC_ALL);
IDENT_INT(LC_COLLATE);
IDENT_INT(LC_CTYPE);
IDENT_INT(LC_MESSAGES);
IDENT_INT(LC_MONETARY);
IDENT_INT(LC_NUMERIC);
IDENT_INT(LC_TIME);

IDENT_INT(LC_COLLATE_MASK);
IDENT_INT(LC_CTYPE_MASK);
IDENT_INT(LC_MESSAGES_MASK);
IDENT_INT(LC_MONETARY_MASK);
IDENT_INT(LC_NUMERIC_MASK);
IDENT_INT(LC_TIME_MASK);

IDENT_INT(LC_ALL_MASK);

IDENT(LC_GLOBAL_LOCALE, locale_t);

TYPE(locale_t);

IDENT(duplocale, locale_t (*)(locale_t));
IDENT(freelocale, void (*)(locale_t));
IDENT(localeconv, struct lconv *(*)(void));
IDENT(newlocale, locale_t (*)(int, const char *, locale_t));
IDENT(setlocale, char *(*)(int, const char *));
IDENT(uselocale, locale_t (*)(locale_t));
