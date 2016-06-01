#include <sys/utsname.h>

#include "util.h"

TYPE(struct utsname);
MEMBER(struct utsname, sysname, char *);
MEMBER(struct utsname, nodename, char *);
MEMBER(struct utsname, release, char *);
MEMBER(struct utsname, version, char *);
MEMBER(struct utsname, machine, char *);

IDENT(uname, int (*)(struct utsname *));
