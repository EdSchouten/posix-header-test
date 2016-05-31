#ifdef __FreeBSD__
#define _WITH_DPRINTF
#define _WITH_GETLINE
#endif

#include <stdio.h>

#include "test_util.h"

TYPE_FORWARD(FILE);
TYPE(fpos_t);
TYPE_SINT(off_t);
TYPE_UINT(size_t);
TYPE_SINT(ssize_t);
TYPE(va_list);

IDENT_INT(BUFSIZ);
IDENT_INT(L_ctermid);
IDENT_INT(L_tmpnam);

IDENT_INT(_IOFBF);
IDENT_INT(_IOLBF);
IDENT_INT(_IONBF);

IDENT_INT(SEEK_CUR);
IDENT_INT(SEEK_END);
IDENT_INT(SEEK_SET);

IDENT_INT(FILENAME_MAX);
IDENT_INT(FOPEN_MAX);
IDENT_INT(TMP_MAX);

IDENT(EOF, int);

IDENT(NULL, void *);

IDENT(P_tmpdir, char *);

IDENT(stderr, FILE *);
IDENT(stdin, FILE *);
IDENT(stdout, FILE *);

IDENT(clearerr, void (*)(FILE *));
IDENT(ctermid, char *(*)(char *));
IDENT(dprintf, int (*)(int, const char *restrict, ...));
IDENT(fclose, int (*)(FILE *));
IDENT(fdopen, FILE *(*)(int, const char *));
IDENT(feof, int (*)(FILE *));
IDENT(ferror, int (*)(FILE *));
IDENT(fflush, int (*)(FILE *));
IDENT(fgetc, int (*)(FILE *));
IDENT(fgetpos, int (*)(FILE *restrict, fpos_t *restrict));
IDENT(fgets, char *(*)(char *restrict, int, FILE *restrict));
IDENT(fileno, int (*)(FILE *));
IDENT(flockfile, void (*)(FILE *));
IDENT(fmemopen, FILE *(*)(void *restrict, size_t, const char *restrict));
IDENT(fopen, FILE *(*)(const char *restrict, const char *restrict));
IDENT(fprintf, int (*)(FILE *restrict, const char *restrict, ...));
IDENT(fputc, int (*)(int, FILE *));
IDENT(fputs, int (*)(const char *restrict, FILE *restrict));
IDENT(fread, size_t (*)(void *restrict, size_t, size_t, FILE *restrict));
IDENT(freopen,
      FILE *(*)(const char *restrict, const char *restrict, FILE *restrict));
IDENT(fscanf, int (*)(FILE *restrict, const char *restrict, ...));
IDENT(fseek, int (*)(FILE *, long, int));
IDENT(fseeko, int (*)(FILE *, off_t, int));
IDENT(fsetpos, int (*)(FILE *, const fpos_t *));
IDENT(ftell, long (*)(FILE *));
IDENT(ftello, off_t (*)(FILE *));
IDENT(ftrylockfile, int (*)(FILE *));
IDENT(funlockfile, void (*)(FILE *));
IDENT(fwrite, size_t (*)(const void *restrict, size_t, size_t, FILE *restrict));
IDENT(getc, int (*)(FILE *));
IDENT(getchar, int (*)(void));
IDENT(getc_unlocked, int (*)(FILE *));
IDENT(getchar_unlocked, int (*)(void));
IDENT(getdelim,
      ssize_t (*)(char **restrict, size_t *restrict, int, FILE *restrict));
IDENT(getline, ssize_t (*)(char **restrict, size_t *restrict, FILE *restrict));
IDENT(open_memstream, FILE *(*)(char **, size_t *));
IDENT(pclose, int (*)(FILE *));
IDENT(perror, void (*)(const char *));
IDENT(popen, FILE *(*)(const char *, const char *));
IDENT(printf, int (*)(const char *restrict, ...));
IDENT(putc, int (*)(int, FILE *));
IDENT(putchar, int (*)(int));
IDENT(putc_unlocked, int (*)(int, FILE *));
IDENT(putchar_unlocked, int (*)(int));
IDENT(puts, int (*)(const char *));
IDENT(remove, int (*)(const char *));
IDENT(rename, int (*)(const char *, const char *));
IDENT(renameat, int (*)(int, const char *, int, const char *));
IDENT(rewind, void (*)(FILE *));
IDENT(scanf, int (*)(const char *restrict, ...));
IDENT(setbuf, void (*)(FILE *restrict, char *restrict));
IDENT(setvbuf, int (*)(FILE *restrict, char *restrict, int, size_t));
IDENT(snprintf, int (*)(char *restrict, size_t, const char *restrict, ...));
IDENT(sprintf, int (*)(char *restrict, const char *restrict, ...));
IDENT(sscanf, int (*)(const char *restrict, const char *restrict, ...));
IDENT(tempnam, char *(*)(const char *, const char *));
IDENT(tmpfile, FILE *(*)(void));
IDENT(tmpnam, char *(*)(char *));
IDENT(ungetc, int (*)(int, FILE *));
IDENT(vdprintf, int (*)(int, const char *restrict, va_list));
IDENT(vfprintf, int (*)(FILE *restrict, const char *restrict, va_list));
IDENT(vfscanf, int (*)(FILE *restrict, const char *restrict, va_list));
IDENT(vprintf, int (*)(const char *restrict, va_list));
IDENT(vscanf, int (*)(const char *restrict, va_list));
IDENT(vsnprintf,
      int (*)(char *restrict, size_t, const char *restrict, va_list));
IDENT(vsprintf, int (*)(char *restrict, const char *restrict, va_list));
IDENT(vsscanf, int (*)(const char *restrict, const char *restrict, va_list));
