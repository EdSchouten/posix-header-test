#include <ftw.h>

#include "util.h"

TYPE(struct FTW);
MEMBER(struct FTW, base, int);
MEMBER(struct FTW, level, int);

IDENT_INT(FTW_F);
IDENT_INT(FTW_D);
IDENT_INT(FTW_DNR);
IDENT_INT(FTW_DP);
IDENT_INT(FTW_NS);
IDENT_INT(FTW_SL);
IDENT_INT(FTW_SLN);

IDENT_INT(FTW_PHYS);
IDENT_INT(FTW_MOUNT);
IDENT_INT(FTW_DEPTH);
IDENT_INT(FTW_CHDIR);

IDENT(ftw, int (*)(const char *,
                   int (*)(const char *, const struct stat *, int), int));
IDENT(nftw, int (*)(const char *, int (*)(const char *, const struct stat *,
                                          int, struct FTW *),
                    int, int));
