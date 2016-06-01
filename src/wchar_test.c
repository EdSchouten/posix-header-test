#include <wchar.h>

#include "util.h"

TYPE_FORWARD(FILE);
TYPE_SCALAR(locale_t);
TYPE(mbstate_t);
TYPE_UINT(size_t);
TYPE(va_list);
TYPE_INT(wchar_t);
TYPE_INT(wint_t);

TYPE_FORWARD(struct tm);

IDENT_INT(WCHAR_MAX);
IDENT_INT(WCHAR_MIN);
IDENT(WEOF, wint_t);
IDENT(NULL, void *);

IDENT(btowc, wint_t (*)(int));
IDENT(fgetwc, wint_t (*)(FILE *));
IDENT(fgetws, wchar_t *(*)(wchar_t *restrict, int, FILE *restrict));
IDENT(fputwc, wint_t (*)(wchar_t, FILE *));
IDENT(fputws, int (*)(const wchar_t *restrict, FILE *restrict));
IDENT(fwide, int (*)(FILE *, int));
IDENT(fwprintf, int (*)(FILE *restrict, const wchar_t *restrict, ...));
IDENT(fwscanf, int (*)(FILE *restrict, const wchar_t *restrict, ...));
IDENT(getwc, wint_t (*)(FILE *));
IDENT(getwchar, wint_t (*)(void));
IDENT(mbrlen, size_t (*)(const char *restrict, size_t, mbstate_t *restrict));
IDENT(mbrtowc, size_t (*)(wchar_t *restrict, const char *restrict, size_t,
                          mbstate_t *restrict));
IDENT(mbsinit, int (*)(const mbstate_t *));
IDENT(mbsnrtowcs, size_t (*)(wchar_t *restrict, const char **restrict, size_t,
                             size_t, mbstate_t *restrict));
IDENT(mbsrtowcs, size_t (*)(wchar_t *restrict, const char **restrict, size_t,
                            mbstate_t *restrict));
IDENT(open_wmemstream, FILE *(*)(wchar_t **, size_t *));
IDENT(putwc, wint_t (*)(wchar_t, FILE *));
IDENT(putwchar, wint_t (*)(wchar_t));
IDENT(swprintf,
      int (*)(wchar_t *restrict, size_t, const wchar_t *restrict, ...));
IDENT(swscanf, int (*)(const wchar_t *restrict, const wchar_t *restrict, ...));
IDENT(ungetwc, wint_t (*)(wint_t, FILE *));
IDENT(vfwprintf, int (*)(FILE *restrict, const wchar_t *restrict, va_list));
IDENT(vfwscanf, int (*)(FILE *restrict, const wchar_t *restrict, va_list));
IDENT(vswprintf,
      int (*)(wchar_t *restrict, size_t, const wchar_t *restrict, va_list));
IDENT(vswscanf,
      int (*)(const wchar_t *restrict, const wchar_t *restrict, va_list));
IDENT(vwprintf, int (*)(const wchar_t *restrict, va_list));
IDENT(vwscanf, int (*)(const wchar_t *restrict, va_list));
IDENT(wcpcpy, wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict));
IDENT(wcpncpy,
      wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict, size_t));
IDENT(wcrtomb, size_t (*)(char *restrict, wchar_t, mbstate_t *restrict));
IDENT(wcscasecmp, int (*)(const wchar_t *, const wchar_t *));
IDENT(wcscasecmp_l, int (*)(const wchar_t *, const wchar_t *, locale_t));
IDENT(wcscat, wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict));
IDENT(wcschr, wchar_t *(*)(const wchar_t *, wchar_t));
IDENT(wcscmp, int (*)(const wchar_t *, const wchar_t *));
IDENT(wcscoll, int (*)(const wchar_t *, const wchar_t *));
IDENT(wcscoll_l, int (*)(const wchar_t *, const wchar_t *, locale_t));
IDENT(wcscpy, wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict));
IDENT(wcscspn, size_t (*)(const wchar_t *, const wchar_t *));
IDENT(wcsdup, wchar_t *(*)(const wchar_t *));
IDENT(wcsftime, size_t (*)(wchar_t *restrict, size_t, const wchar_t *restrict,
                           const struct tm *restrict));
IDENT(wcslen, size_t (*)(const wchar_t *));
IDENT(wcsncasecmp, int (*)(const wchar_t *, const wchar_t *, size_t));
IDENT(wcsncasecmp_l,
      int (*)(const wchar_t *, const wchar_t *, size_t, locale_t));
IDENT(wcsncat,
      wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict, size_t));
IDENT(wcsncmp, int (*)(const wchar_t *, const wchar_t *, size_t));
IDENT(wcsncpy,
      wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict, size_t));
IDENT(wcsnlen, size_t (*)(const wchar_t *, size_t));
IDENT(wcsnrtombs, size_t (*)(char *restrict, const wchar_t **restrict, size_t,
                             size_t, mbstate_t *restrict));
IDENT(wcspbrk, wchar_t *(*)(const wchar_t *, const wchar_t *));
IDENT(wcsrchr, wchar_t *(*)(const wchar_t *, wchar_t));
IDENT(wcsrtombs, size_t (*)(char *restrict, const wchar_t **restrict, size_t,
                            mbstate_t *restrict));
IDENT(wcsspn, size_t (*)(const wchar_t *, const wchar_t *));
IDENT(wcsstr, wchar_t *(*)(const wchar_t *restrict, const wchar_t *restrict));
IDENT(wcstod, double (*)(const wchar_t *restrict, wchar_t **restrict));
IDENT(wcstof, float (*)(const wchar_t *restrict, wchar_t **restrict));
IDENT(wcstok, wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict,
                           wchar_t **restrict));
IDENT(wcstol, long (*)(const wchar_t *restrict, wchar_t **restrict, int));
IDENT(wcstold, long double (*)(const wchar_t *restrict, wchar_t **restrict));
IDENT(wcstoll, long long (*)(const wchar_t *restrict, wchar_t **restrict, int));
IDENT(wcstoul,
      unsigned long (*)(const wchar_t *restrict, wchar_t **restrict, int));
IDENT(wcstoull,
      unsigned long long (*)(const wchar_t *restrict, wchar_t **restrict, int));
IDENT(wcswidth, int (*)(const wchar_t *, size_t));
IDENT(wcsxfrm, size_t (*)(wchar_t *restrict, const wchar_t *restrict, size_t));
IDENT(wcsxfrm_l,
      size_t (*)(wchar_t *restrict, const wchar_t *restrict, size_t, locale_t));
IDENT(wctob, int (*)(wint_t));
IDENT(wcwidth, int (*)(wchar_t));
IDENT(wmemchr, wchar_t *(*)(const wchar_t *, wchar_t, size_t));
IDENT(wmemcmp, int (*)(const wchar_t *, const wchar_t *, size_t));
IDENT(wmemcpy,
      wchar_t *(*)(wchar_t *restrict, const wchar_t *restrict, size_t));
IDENT(wmemmove, wchar_t *(*)(wchar_t *, const wchar_t *, size_t));
IDENT(wmemset, wchar_t *(*)(wchar_t *, wchar_t, size_t));
IDENT(wprintf, int (*)(const wchar_t *restrict, ...));
IDENT(wscanf, int (*)(const wchar_t *restrict, ...));
