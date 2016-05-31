#include <sys/msg.h>

#include "test_util.h"

TYPE_UINT(msgqnum_t);
TYPE_UINT(msglen_t);

IDENT_INT(MSG_NOERROR);

TYPE(struct msqid_ds);
MEMBER(struct msqid_ds, msg_perm, struct ipc_perm);
MEMBER(struct msqid_ds, msg_qnum, msgqnum_t);
MEMBER(struct msqid_ds, msg_qbytes, msglen_t);
MEMBER(struct msqid_ds, msg_lspid, pid_t);
MEMBER(struct msqid_ds, msg_lrpid, pid_t);
MEMBER(struct msqid_ds, msg_stime, time_t);
MEMBER(struct msqid_ds, msg_rtime, time_t);
MEMBER(struct msqid_ds, msg_ctime, time_t);

TYPE_SINT(pid_t);
TYPE_UINT(size_t);
TYPE_SINT(ssize_t);
TYPE_INT(time_t);

IDENT(msgctl, int (*)(int, int, struct msqid_ds *));
IDENT(msgget, int (*)(key_t, int));
IDENT(msgrcv, ssize_t (*)(int, void *, size_t, long, int));
IDENT(msgsnd, int (*)(int, const void *, size_t, int));

#define TRANSITIVE
#include "test_sys_ipc.c"
