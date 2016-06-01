#include <semaphore.h>

#include "util.h"

TYPE(sem_t);

IDENT(SEM_FAILED, sem_t *);

IDENT(sem_close, int (*)(sem_t *));
IDENT(sem_destroy, int (*)(sem_t *));
IDENT(sem_getvalue, int (*)(sem_t *restrict, int *restrict));
IDENT(sem_init, int (*)(sem_t *, int, unsigned));
IDENT(sem_open, sem_t *(*)(const char *, int, ...));
IDENT(sem_post, int (*)(sem_t *));
IDENT(sem_timedwait, int (*)(sem_t *restrict, const struct timespec *restrict));
IDENT(sem_trywait, int (*)(sem_t *));
IDENT(sem_unlink, int (*)(const char *));
IDENT(sem_wait, int (*)(sem_t *));
