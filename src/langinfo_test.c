#include <langinfo.h>

#include "util.h"

TYPE_SCALAR(locale_t);
TYPE(nl_item);

IDENT(CODESET, nl_item);
IDENT(D_T_FMT, nl_item);
IDENT(D_FMT, nl_item);
IDENT(T_FMT, nl_item);
IDENT(T_FMT_AMPM, nl_item);
IDENT(AM_STR, nl_item);
IDENT(PM_STR, nl_item);
IDENT(DAY_1, nl_item);
IDENT(DAY_2, nl_item);
IDENT(DAY_3, nl_item);
IDENT(DAY_4, nl_item);
IDENT(DAY_5, nl_item);
IDENT(DAY_6, nl_item);
IDENT(DAY_7, nl_item);
IDENT(ABDAY_1, nl_item);
IDENT(ABDAY_2, nl_item);
IDENT(ABDAY_3, nl_item);
IDENT(ABDAY_4, nl_item);
IDENT(ABDAY_5, nl_item);
IDENT(ABDAY_6, nl_item);
IDENT(ABDAY_7, nl_item);
IDENT(MON_1, nl_item);
IDENT(MON_2, nl_item);
IDENT(MON_3, nl_item);
IDENT(MON_4, nl_item);
IDENT(MON_5, nl_item);
IDENT(MON_6, nl_item);
IDENT(MON_7, nl_item);
IDENT(MON_8, nl_item);
IDENT(MON_9, nl_item);
IDENT(MON_10, nl_item);
IDENT(MON_11, nl_item);
IDENT(MON_12, nl_item);
IDENT(ABMON_1, nl_item);
IDENT(ABMON_2, nl_item);
IDENT(ABMON_3, nl_item);
IDENT(ABMON_4, nl_item);
IDENT(ABMON_5, nl_item);
IDENT(ABMON_6, nl_item);
IDENT(ABMON_7, nl_item);
IDENT(ABMON_8, nl_item);
IDENT(ABMON_9, nl_item);
IDENT(ABMON_10, nl_item);
IDENT(ABMON_11, nl_item);
IDENT(ABMON_12, nl_item);
IDENT(ERA, nl_item);
IDENT(ERA_D_FMT, nl_item);
IDENT(ERA_D_T_FMT, nl_item);
IDENT(ERA_T_FMT, nl_item);
IDENT(ALT_DIGITS, nl_item);
IDENT(RADIXCHAR, nl_item);
IDENT(THOUSEP, nl_item);
IDENT(YESEXPR, nl_item);
IDENT(NOEXPR, nl_item);
IDENT(CRNCYSTR, nl_item);

IDENT(nl_langinfo, char *(*)(nl_item));
IDENT(nl_langinfo_l, char *(*)(nl_item, locale_t));
