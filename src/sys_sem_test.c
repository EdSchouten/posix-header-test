#include <sys/sem.h>

#include "util.h"

IDENT_INT(SEM_UNDO);

IDENT_INT(GETNCNT);
IDENT_INT(GETPID);
IDENT_INT(GETVAL);
IDENT_INT(GETALL);
IDENT_INT(GETZCNT);
IDENT_INT(SETVAL);
IDENT_INT(SETALL);

TYPE(struct semid_ds);
MEMBER(struct semid_ds, sem_perm, struct ipc_perm);
MEMBER(struct semid_ds, sem_nsems, unsigned short);
MEMBER(struct semid_ds, sem_otime, time_t);
MEMBER(struct semid_ds, sem_ctime, time_t);

TYPE_SINT(pid_t);
TYPE_UINT(size_t);
TYPE_INT(time_t);

TYPE(struct sembuf);
MEMBER(struct sembuf, sem_num, unsigned short);
MEMBER(struct sembuf, sem_op, short);
MEMBER(struct sembuf, sem_flg, short);

IDENT(semctl, int (*)(int, int, int, ...));
IDENT(semget, int (*)(key_t, int, int));
IDENT(semop, int (*)(int, struct sembuf *, size_t));

#define TRANSITIVE
#include "sys_ipc_test.c"
