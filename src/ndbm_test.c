#include <ndbm.h>

#include "util.h"

TYPE(datum);
MEMBER(datum, dptr, void *);
MEMBER(datum, dsize, size_t);

TYPE_UINT(size_t);

TYPE(DBM);

IDENT_INT(DBM_INSERT);
IDENT_INT(DBM_REPLACE);

IDENT(dbm_clearerr, int (*)(DBM *));
IDENT(dbm_close, void (*)(DBM *));
IDENT(dbm_delete, int (*)(DBM *, datum));
IDENT(dbm_error, int (*)(DBM *));
IDENT(dbm_fetch, datum (*)(DBM *, datum));
IDENT(dbm_firstkey, datum (*)(DBM *));
IDENT(dbm_nextkey, datum (*)(DBM *));
IDENT(dbm_open, DBM *(*)(const char *, int, mode_t));
IDENT(dbm_store, int (*)(DBM *, datum, datum, int));

TYPE_INT(mode_t);
