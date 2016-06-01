#include <sys/shm.h>

#include "util.h"

IDENT_INT(SHM_RDONLY);
IDENT_INT(SHM_RND);
IDENT_INT(SHMLBA);

TYPE_UINT(shmatt_t);

TYPE(struct shmid_ds);
MEMBER(struct shmid_ds, shm_perm, struct ipc_perm);
MEMBER(struct shmid_ds, shm_segsz, size_t);
MEMBER(struct shmid_ds, shm_lpid, pid_t);
MEMBER(struct shmid_ds, shm_cpid, pid_t);
MEMBER(struct shmid_ds, shm_nattch, shmatt_t);
MEMBER(struct shmid_ds, shm_atime, time_t);
MEMBER(struct shmid_ds, shm_dtime, time_t);
MEMBER(struct shmid_ds, shm_ctime, time_t);

TYPE_SINT(pid_t);
TYPE_UINT(size_t);
TYPE_INT(time_t);

IDENT(shmat, void *(*)(int, const void *, int));
IDENT(shmctl, int (*)(int, int, struct shmid_ds *));
IDENT(shmdt, int (*)(const void *));
IDENT(shmget, int (*)(key_t, size_t, int));

#define TRANSITIVE
#include "sys_ipc_test.c"
