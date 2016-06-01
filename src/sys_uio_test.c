#include <sys/uio.h>

#include "util.h"

TYPE(struct iovec);
MEMBER(struct iovec, iov_base, void *);
MEMBER(struct iovec, iov_len, size_t);

TYPE_SINT(ssize_t);
TYPE_UINT(size_t);

IDENT(readv, ssize_t (*)(int, const struct iovec *, int));
IDENT(writev, ssize_t (*)(int, const struct iovec *, int));
