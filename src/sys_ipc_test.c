#ifndef TRANSITIVE
#include <sys/ipc.h>
#endif

#include "util.h"

TYPE(struct ipc_perm);
MEMBER(struct ipc_perm, uid, uid_t);
MEMBER(struct ipc_perm, gid, gid_t);
MEMBER(struct ipc_perm, cuid, uid_t);
MEMBER(struct ipc_perm, cgid, gid_t);
MEMBER(struct ipc_perm, mode, mode_t);

TYPE_INT(uid_t);
TYPE_INT(gid_t);
TYPE_INT(mode_t);
TYPE_INT(key_t);

IDENT_INT(IPC_CREAT);
IDENT_INT(IPC_EXCL);
IDENT_INT(IPC_NOWAIT);

IDENT_INT(IPC_PRIVATE);

IDENT_INT(IPC_RMID);
IDENT_INT(IPC_SET);
IDENT_INT(IPC_STAT);

IDENT(ftok, key_t (*)(const char *, int));
