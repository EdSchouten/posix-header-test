#include <fmtmsg.h>

#include "util.h"

IDENT_INT(MM_HARD);
IDENT_INT(MM_SOFT);
IDENT_INT(MM_FIRM);
IDENT_INT(MM_APPL);
IDENT_INT(MM_UTIL);
IDENT_INT(MM_OPSYS);
IDENT_INT(MM_RECOVER);
IDENT_INT(MM_NRECOV);
IDENT_INT(MM_HALT);
IDENT_INT(MM_ERROR);
IDENT_INT(MM_WARNING);
IDENT_INT(MM_INFO);
IDENT_INT(MM_NOSEV);
IDENT_INT(MM_PRINT);
IDENT_INT(MM_CONSOLE);

IDENT(MM_NULLLBL, char *);
IDENT(MM_NULLSEV, int);
IDENT(MM_NULLMC, long);
IDENT(MM_NULLTXT, char *);
IDENT(MM_NULLACT, char *);
IDENT(MM_NULLTAG, char *);

IDENT_INT(MM_OK);
IDENT_INT(MM_NOTOK);
IDENT_INT(MM_NOMSG);
IDENT_INT(MM_NOCON);

IDENT(fmtmsg, int (*)(long, const char *, int, const char *, const char *,
                      const char *));