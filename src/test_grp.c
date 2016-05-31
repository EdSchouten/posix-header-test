#include <grp.h>

#include "test_util.h"

TYPE(struct group);
MEMBER(struct group, gr_name, char *);
MEMBER(struct group, gr_gid, gid_t);
MEMBER(struct group, gr_mem, char **);

TYPE_INT(gid_t);
TYPE_UINT(size_t);

IDENT(endgrent, void (*)(void));
IDENT(getgrent, struct group *(*)(void));
IDENT(getgrgid, struct group *(*)(gid_t));
IDENT(getgrgid_r,
      int (*)(gid_t, struct group *, char *, size_t, struct group **));
IDENT(getgrnam, struct group *(*)(const char *));
IDENT(getgrnam_r,
      int (*)(const char *, struct group *, char *, size_t, struct group **));
IDENT(setgrent, void (*)(void));
