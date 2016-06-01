#include <utmpx.h>

#include "util.h"

TYPE(struct utmpx);
MEMBER(struct utmpx, ut_user, char *);
MEMBER(struct utmpx, ut_id, char *);
MEMBER(struct utmpx, ut_line, char *);
MEMBER(struct utmpx, ut_pid, pid_t);
MEMBER(struct utmpx, ut_type, short);
MEMBER(struct utmpx, ut_tv, struct timeval);

TYPE_SINT(pid_t);

TYPE(struct timeval);

IDENT_INT(EMPTY);
IDENT_INT(BOOT_TIME);
IDENT_INT(OLD_TIME);
IDENT_INT(NEW_TIME);
IDENT_INT(USER_PROCESS);
IDENT_INT(INIT_PROCESS);
IDENT_INT(LOGIN_PROCESS);
IDENT_INT(DEAD_PROCESS);

IDENT(endutxent, void (*)(void));
IDENT(getutxent, struct utmpx *(*)(void));
IDENT(getutxid, struct utmpx *(*)(const struct utmpx *));
IDENT(getutxline, struct utmpx *(*)(const struct utmpx *));
IDENT(pututxline, struct utmpx *(*)(const struct utmpx *));
IDENT(setutxent, void (*)(void));
