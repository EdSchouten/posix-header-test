#ifdef __FreeBSD__
#include <signal.h>
#endif

#include <sys/wait.h>

#include "test_util.h"

IDENT_INT(WCONTINUED);
IDENT_INT(WNOHANG);
IDENT_INT(WUNTRACED);

IDENT_INT(WEXITSTATUS(0));
IDENT_INT(WIFCONTINUED(0));
IDENT_INT(WIFEXITED(0));
IDENT_INT(WIFSIGNALED(0));
IDENT_INT(WIFSTOPPED(0));
IDENT_INT(WSTOPSIG(0));
IDENT_INT(WTERMSIG(0));

IDENT_INT(WEXITED);
IDENT_INT(WNOWAIT);
IDENT_INT(WSTOPPED);

TYPE(idtype_t);
IDENT(P_ALL, int);
IDENT(P_PGID, int);
IDENT(P_PID, int);

TYPE_INT(id_t);
TYPE_SINT(pid_t);

TYPE(siginfo_t);

IDENT(wait, pid_t (*)(int *));
IDENT(waitid, int (*)(idtype_t, id_t, siginfo_t *, int));
IDENT(waitpid, pid_t (*)(pid_t, int *, int));
