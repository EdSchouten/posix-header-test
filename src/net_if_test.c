#include <net/if.h>

#include "util.h"

TYPE(struct if_nameindex);
MEMBER(struct if_nameindex, if_index, unsigned);
MEMBER(struct if_nameindex, if_name, char *);

IDENT_INT(IF_NAMESIZE);

IDENT(if_freenameindex, void (*)(struct if_nameindex *));
IDENT(if_indextoname, char *(*)(unsigned, char *));
IDENT(if_nameindex, struct if_nameindex *(*)(void));
IDENT(if_nametoindex, unsigned (*)(const char *));
