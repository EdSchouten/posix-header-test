#include <stdlib.h>

#include "util.h"

IDENT_INT(EXIT_FAILURE);
IDENT_INT(EXIT_SUCCESS);
IDENT_INT(RAND_MAX);

IDENT(MB_CUR_MAX, size_t);

IDENT(NULL, void *);

TYPE(div_t);
MEMBER(div_t, quot, int);
MEMBER(div_t, rem, int);
TYPE(ldiv_t);
MEMBER(ldiv_t, quot, long);
MEMBER(ldiv_t, rem, long);
TYPE(lldiv_t);
MEMBER(lldiv_t, quot, long long);
MEMBER(lldiv_t, rem, long long);

TYPE_UINT(size_t);
TYPE_INT(wchar_t);

IDENT_INT(WEXITSTATUS(0));
IDENT_INT(WIFEXITED(0));
IDENT_INT(WIFSIGNALED(0));
IDENT_INT(WIFSTOPPED(0));
IDENT_INT(WNOHANG);
IDENT_INT(WSTOPSIG(0));
IDENT_INT(WTERMSIG(0));
IDENT_INT(WUNTRACED);

IDENT(_Exit, void (*)(int));
IDENT(a64l, long (*)(const char *));
IDENT(abort, void (*)(void));
IDENT(abs, int (*)(int));
IDENT(atexit, int (*)(void (*)(void)));
IDENT(atof, double (*)(const char *));
IDENT(atoi, int (*)(const char *));
IDENT(atol, long (*)(const char *));
IDENT(atoll, long long (*)(const char *));
IDENT(bsearch, void *(*)(const void *, const void *, size_t, size_t,
                         int (*)(const void *, const void *)));
IDENT(calloc, void *(*)(size_t, size_t));
IDENT(div, div_t (*)(int, int));
IDENT(drand48, double (*)(void));
IDENT(erand48, double (*)(unsigned short[3]));
IDENT(exit, void (*)(int));
IDENT(free, void (*)(void *));
IDENT(getenv, char *(*)(const char *));
IDENT(getsubopt, int (*)(char **, char *const *, char **));
IDENT(grantpt, int (*)(int));
IDENT(initstate, char *(*)(unsigned, char *, size_t));
IDENT(jrand48, long (*)(unsigned short[3]));
IDENT(l64a, char *(*)(long));
IDENT(labs, long (*)(long));
IDENT(lcong48, void (*)(unsigned short[7]));
IDENT(ldiv, ldiv_t (*)(long, long));
IDENT(llabs, long long (*)(long long));
IDENT(lldiv, lldiv_t (*)(long long, long long));
IDENT(lrand48, long (*)(void));
IDENT(malloc, void *(*)(size_t));
IDENT(mblen, int (*)(const char *, size_t));
IDENT(mbstowcs, size_t (*)(wchar_t *restrict, const char *restrict, size_t));
IDENT(mbtowc, int (*)(wchar_t *restrict, const char *restrict, size_t));
IDENT(mkdtemp, char *(*)(char *));
IDENT(mkstemp, int (*)(char *));
IDENT(mrand48, long (*)(void));
IDENT(nrand48, long (*)(unsigned short[3]));
IDENT(posix_memalign, int (*)(void **, size_t, size_t));
IDENT(posix_openpt, int (*)(int));
IDENT(ptsname, char *(*)(int));
IDENT(putenv, int (*)(char *));
IDENT(qsort,
      void (*)(void *, size_t, size_t, int (*)(const void *, const void *)));
IDENT(rand, int (*)(void));
IDENT(rand_r, int (*)(unsigned *));
IDENT(random, long (*)(void));
IDENT(realloc, void *(*)(void *, size_t));
IDENT(realpath, char *(*)(const char *restrict, char *restrict));
IDENT(seed48, unsigned short *(*)(unsigned short[3]));
IDENT(setenv, int (*)(const char *, const char *, int));
IDENT(setkey, void (*)(const char *));
IDENT(setstate, char *(*)(char *));
IDENT(srand, void (*)(unsigned));
IDENT(srand48, void (*)(long));
IDENT(srandom, void (*)(unsigned));
IDENT(strtod, double (*)(const char *restrict, char **restrict));
IDENT(strtof, float (*)(const char *restrict, char **restrict));
IDENT(strtol, long (*)(const char *restrict, char **restrict, int));
IDENT(strtold, long double (*)(const char *restrict, char **restrict));
IDENT(strtoll, long long (*)(const char *restrict, char **restrict, int));
IDENT(strtoul, unsigned long (*)(const char *restrict, char **restrict, int));
IDENT(strtoull,
      unsigned long long (*)(const char *restrict, char **restrict, int));
IDENT(system, int (*)(const char *));
IDENT(unlockpt, int (*)(int));
IDENT(unsetenv, int (*)(const char *));
IDENT(wcstombs, size_t (*)(char *restrict, const wchar_t *restrict, size_t));
IDENT(wctomb, int (*)(char *, wchar_t));
