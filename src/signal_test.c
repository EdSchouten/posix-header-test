#ifdef __FreeBSD__
#include <signal.h>
void psiginfo(const siginfo_t *, const char *);
#endif

#include <signal.h>

#include "util.h"

IDENT(SIG_DFL, void (*)(int));
IDENT(SIG_ERR, void (*)(int));
IDENT(SIG_HOLD, void (*)(int));
IDENT(SIG_IGN, void (*)(int));

TYPE(pthread_t);
TYPE_UINT(size_t);
TYPE_INT(uid_t);

TYPE(struct timespec);

TYPE_INT(sig_atomic_t);
TYPE(sigset_t);
TYPE_SINT(pid_t);

TYPE(pthread_attr_t);

TYPE(struct sigevent);
MEMBER(struct sigevent, sigev_notify, int);
MEMBER(struct sigevent, sigev_signo, int);
MEMBER(struct sigevent, sigev_value, union sigval);
MEMBER(struct sigevent, sigev_notify_function, void (*)(union sigval));
MEMBER(struct sigevent, sigev_notify_attributes, pthread_attr_t *);

IDENT_INT(SIGEV_NONE);
IDENT_INT(SIGEV_SIGNAL);
IDENT_INT(SIGEV_THREAD);

TYPE(union sigval);
MEMBER(union sigval, sival_int, int);
MEMBER(union sigval, sival_ptr, void *);

IDENT(SIGRTMIN, int);
IDENT(SIGRTMAX, int);

IDENT_INT(SIGABRT);
IDENT_INT(SIGALRM);
IDENT_INT(SIGBUS);
IDENT_INT(SIGCHLD);
IDENT_INT(SIGCONT);
IDENT_INT(SIGFPE);
IDENT_INT(SIGHUP);
IDENT_INT(SIGILL);
IDENT_INT(SIGINT);
IDENT_INT(SIGKILL);
IDENT_INT(SIGPIPE);
IDENT_INT(SIGQUIT);
IDENT_INT(SIGSEGV);
IDENT_INT(SIGSTOP);
IDENT_INT(SIGTERM);
IDENT_INT(SIGTSTP);
IDENT_INT(SIGTTIN);
IDENT_INT(SIGTTOU);
IDENT_INT(SIGUSR1);
IDENT_INT(SIGUSR2);
IDENT_INT(SIGTRAP);
IDENT_INT(SIGURG);
IDENT_INT(SIGXCPU);
IDENT_INT(SIGXFSZ);

TYPE(struct sigaction);
MEMBER(struct sigaction, sa_handler, void (*)(int));
MEMBER(struct sigaction, sa_mask, sigset_t);
MEMBER(struct sigaction, sa_flags, int);
MEMBER(struct sigaction, sa_sigaction, void (*)(int, siginfo_t *, void *));

IDENT_INT(SIG_BLOCK);
IDENT_INT(SIG_UNBLOCK);
IDENT_INT(SIG_SETMASK);

IDENT_INT(SA_NOCLDSTOP);
IDENT_INT(SA_ONSTACK);
IDENT_INT(SA_RESETHAND);
IDENT_INT(SA_RESTART);
IDENT_INT(SA_SIGINFO);
IDENT_INT(SA_NOCLDWAIT);
IDENT_INT(SA_NODEFER);
IDENT_INT(SS_ONSTACK);
IDENT_INT(SS_DISABLE);
IDENT_INT(MINSIGSTKSZ);
IDENT_INT(SIGSTKSZ);

TYPE(mcontext_t);

TYPE(ucontext_t);
MEMBER(ucontext_t, uc_link, ucontext_t *);
MEMBER(ucontext_t, uc_sigmask, sigset_t);
MEMBER(ucontext_t, uc_stack, stack_t);
MEMBER(ucontext_t, uc_mcontext, mcontext_t);

TYPE(stack_t);
MEMBER(stack_t, ss_sp, void *);
MEMBER(stack_t, ss_size, size_t);
MEMBER(stack_t, ss_flags, int);

TYPE(siginfo_t);
MEMBER(siginfo_t, si_signo, int);
MEMBER(siginfo_t, si_code, int);
MEMBER(siginfo_t, si_errno, int);
MEMBER(siginfo_t, si_pid, pid_t);
MEMBER(siginfo_t, si_uid, uid_t);
MEMBER(siginfo_t, si_addr, void *);
MEMBER(siginfo_t, si_status, int);
MEMBER(siginfo_t, si_band, long);
MEMBER(siginfo_t, si_value, union sigval);

IDENT_INT(ILL_ILLOPC);
IDENT_INT(ILL_ILLOPN);
IDENT_INT(ILL_ILLADR);
IDENT_INT(ILL_ILLTRP);
IDENT_INT(ILL_PRVOPC);
IDENT_INT(ILL_PRVREG);
IDENT_INT(ILL_COPROC);
IDENT_INT(ILL_BADSTK);
IDENT_INT(FPE_INTDIV);
IDENT_INT(FPE_INTOVF);
IDENT_INT(FPE_FLTDIV);
IDENT_INT(FPE_FLTOVF);
IDENT_INT(FPE_FLTUND);
IDENT_INT(FPE_FLTRES);
IDENT_INT(FPE_FLTINV);
IDENT_INT(FPE_FLTSUB);
IDENT_INT(SEGV_MAPERR);
IDENT_INT(SEGV_ACCERR);
IDENT_INT(BUS_ADRALN);
IDENT_INT(BUS_ADRERR);
IDENT_INT(BUS_OBJERR);
IDENT_INT(TRAP_BRKPT);
IDENT_INT(TRAP_TRACE);
IDENT_INT(CLD_EXITED);
IDENT_INT(CLD_KILLED);
IDENT_INT(CLD_DUMPED);
IDENT_INT(CLD_TRAPPED);
IDENT_INT(CLD_STOPPED);
IDENT_INT(CLD_CONTINUED);
IDENT_INT(POLL_IN);
IDENT_INT(POLL_OUT);
IDENT_INT(POLL_MSG);
IDENT_INT(POLL_ERR);
IDENT_INT(POLL_PRI);
IDENT_INT(POLL_HUP);
IDENT_INT(SI_USER);
IDENT_INT(SI_QUEUE);
IDENT_INT(SI_TIMER);
IDENT_INT(SI_ASYNCIO);
IDENT_INT(SI_MESGQ);

IDENT(kill, int (*)(pid_t, int));
IDENT(killpg, int (*)(pid_t, int));
IDENT(psiginfo, void (*)(const siginfo_t *, const char *));
IDENT(psignal, void (*)(int, const char *));
IDENT(pthread_kill, int (*)(pthread_t, int));
IDENT(pthread_sigmask,
      int (*)(int, const sigset_t *restrict, sigset_t *restrict));
IDENT(raise, int (*)(int));
IDENT(sigaction, int (*)(int, const struct sigaction *restrict,
                         struct sigaction *restrict));
IDENT(sigaddset, int (*)(sigset_t *, int));
IDENT(sigaltstack, int (*)(const stack_t *restrict, stack_t *restrict));
IDENT(sigdelset, int (*)(sigset_t *, int));
IDENT(sigemptyset, int (*)(sigset_t *));
IDENT(sigfillset, int (*)(sigset_t *));
IDENT(sighold, int (*)(int));
IDENT(sigignore, int (*)(int));
IDENT(siginterrupt, int (*)(int, int));
IDENT(sigismember, int (*)(const sigset_t *, int));
IDENT(signal, void (*(*)(int, void (*)(int)))(int));
IDENT(sigpause, int (*)(int));
IDENT(sigpending, int (*)(sigset_t *));
IDENT(sigprocmask, int (*)(int, const sigset_t *restrict, sigset_t *restrict));
IDENT(sigqueue, int (*)(pid_t, int, const union sigval));
IDENT(sigrelse, int (*)(int));
IDENT(sigset, void (*(*)(int, void (*)(int)))(int));
IDENT(sigsuspend, int (*)(const sigset_t *));
IDENT(sigtimedwait, int (*)(const sigset_t *restrict, siginfo_t *restrict,
                            const struct timespec *restrict));
IDENT(sigwait, int (*)(const sigset_t *restrict, int *restrict));
IDENT(sigwaitinfo, int (*)(const sigset_t *restrict, siginfo_t *restrict));
