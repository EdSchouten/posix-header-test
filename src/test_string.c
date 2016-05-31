#ifdef __FreeBSD__
#include <locale.h>
char *strerror_l(int, locale_t);
#endif

#include <string.h>

#include "test_util.h"

IDENT(NULL, void *);
TYPE_UINT(size_t);

TYPE(locale_t);

IDENT(memccpy, void *(*)(void *restrict, const void *restrict, int, size_t));
IDENT(memchr, void *(*)(const void *, int, size_t));
IDENT(memcmp, int (*)(const void *, const void *, size_t));
IDENT(memcpy, void *(*)(void *restrict, const void *restrict, size_t));
IDENT(memmove, void *(*)(void *, const void *, size_t));
IDENT(memset, void *(*)(void *, int, size_t));
IDENT(stpcpy, char *(*)(char *restrict, const char *restrict));
IDENT(stpncpy, char *(*)(char *restrict, const char *restrict, size_t));
IDENT(strcat, char *(*)(char *restrict, const char *restrict));
IDENT(strchr, char *(*)(const char *, int));
IDENT(strcmp, int (*)(const char *, const char *));
IDENT(strcoll, int (*)(const char *, const char *));
IDENT(strcoll_l, int (*)(const char *, const char *, locale_t));
IDENT(strcpy, char *(*)(char *restrict, const char *restrict));
IDENT(strcspn, size_t (*)(const char *, const char *));
IDENT(strdup, char *(*)(const char *));
IDENT(strerror, char *(*)(int));
IDENT(strerror_l, char *(*)(int, locale_t));
IDENT(strerror_r, int (*)(int, char *, size_t));
IDENT(strlen, size_t (*)(const char *));
IDENT(strncat, char *(*)(char *restrict, const char *restrict, size_t));
IDENT(strncmp, int (*)(const char *, const char *, size_t));
IDENT(strncpy, char *(*)(char *restrict, const char *restrict, size_t));
IDENT(strndup, char *(*)(const char *, size_t));
IDENT(strnlen, size_t (*)(const char *, size_t));
IDENT(strpbrk, char *(*)(const char *, const char *));
IDENT(strrchr, char *(*)(const char *, int));
IDENT(strsignal, char *(*)(int));
IDENT(strspn, size_t (*)(const char *, const char *));
IDENT(strstr, char *(*)(const char *, const char *));
IDENT(strtok, char *(*)(char *restrict, const char *restrict));
IDENT(strtok_r,
      char *(*)(char *restrict, const char *restrict, char **restrict));
IDENT(strxfrm, size_t (*)(char *restrict, const char *restrict, size_t));
IDENT(strxfrm_l,
      size_t (*)(char *restrict, const char *restrict, size_t, locale_t));
