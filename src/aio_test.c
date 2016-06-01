#include <aio.h>

#include "util.h"

TYPE(struct aiocb);
MEMBER(struct aiocb, aio_fildes, int);
MEMBER(struct aiocb, aio_offset, off_t);
MEMBER(struct aiocb, aio_buf, volatile void *);
MEMBER(struct aiocb, aio_nbytes, size_t);
MEMBER(struct aiocb, aio_reqprio, int);
MEMBER(struct aiocb, aio_sigevent, struct sigevent);
MEMBER(struct aiocb, aio_lio_opcode, int);

TYPE_SINT(off_t);
TYPE(pthread_attr_t);
TYPE_UINT(size_t);
TYPE_SINT(ssize_t);

TYPE(struct timespec);

TYPE_FORWARD(struct sigevent);

IDENT_INT(AIO_ALLDONE);
IDENT_INT(AIO_CANCELED);
IDENT_INT(AIO_NOTCANCELED);
IDENT_INT(LIO_NOP);
IDENT_INT(LIO_NOWAIT);
IDENT_INT(LIO_READ);
IDENT_INT(LIO_WAIT);
IDENT_INT(LIO_WRITE);

IDENT(aio_cancel, int (*)(int, struct aiocb *));
IDENT(aio_error, int (*)(const struct aiocb *));
IDENT(aio_fsync, int (*)(int, struct aiocb *));
IDENT(aio_read, int (*)(struct aiocb *));
IDENT(aio_return, ssize_t (*)(struct aiocb *));
IDENT(aio_suspend,
      int (*)(const struct aiocb *const[], int, const struct timespec *));
IDENT(aio_write, int (*)(struct aiocb *));
IDENT(lio_listio, int (*)(int, struct aiocb *restrict const[restrict], int,
                          struct sigevent *restrict));
