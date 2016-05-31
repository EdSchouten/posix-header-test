#include <poll.h>

#include "test_util.h"

TYPE(struct pollfd);
MEMBER(struct pollfd, fd, int);
MEMBER(struct pollfd, events, short);
MEMBER(struct pollfd, revents, short);

TYPE_INT(nfds_t);

IDENT_INT(POLLIN);
IDENT_INT(POLLRDNORM);
IDENT_INT(POLLRDBAND);
IDENT_INT(POLLPRI);
IDENT_INT(POLLOUT);
IDENT_INT(POLLWRNORM);
IDENT_INT(POLLWRBAND);
IDENT_INT(POLLERR);
IDENT_INT(POLLHUP);
IDENT_INT(POLLNVAL);

IDENT(poll, int (*)(struct pollfd[], nfds_t, int));
