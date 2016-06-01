#include <sys/un.h>

#include "util.h"

TYPE(struct sockaddr_un);
MEMBER(struct sockaddr_un, sun_family, sa_family_t);
MEMBER(struct sockaddr_un, sun_path, char *);

TYPE_UINT(sa_family_t);
