#include <mqueue.h>

#include "test_util.h"

TYPE(mqd_t);

TYPE(pthread_attr_t);
TYPE_UINT(size_t);
TYPE_SINT(ssize_t);

TYPE(struct timespec);

TYPE_FORWARD(struct sigevent);

TYPE(struct mq_attr);
MEMBER(struct mq_attr, mq_flags, long);
MEMBER(struct mq_attr, mq_maxmsg, long);
MEMBER(struct mq_attr, mq_msgsize, long);
MEMBER(struct mq_attr, mq_curmsgs, long);

IDENT(mq_close, int (*)(mqd_t));
IDENT(mq_getattr, int (*)(mqd_t, struct mq_attr *));
IDENT(mq_notify, int (*)(mqd_t, const struct sigevent *));
IDENT(mq_open, mqd_t (*)(const char *, int, ...));
IDENT(mq_receive, ssize_t (*)(mqd_t, char *, size_t, unsigned *));
IDENT(mq_send, int (*)(mqd_t, const char *, size_t, unsigned));
IDENT(mq_setattr,
      int (*)(mqd_t, const struct mq_attr *restrict, struct mq_attr *restrict));
IDENT(mq_timedreceive,
      ssize_t (*)(mqd_t, char *restrict, size_t, unsigned *restrict,
                  const struct timespec *restrict));
IDENT(mq_timedsend,
      int (*)(mqd_t, const char *, size_t, unsigned, const struct timespec *));
IDENT(mq_unlink, int (*)(const char *));
