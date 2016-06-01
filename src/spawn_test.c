#include <spawn.h>

#include "util.h"

TYPE(posix_spawnattr_t);
TYPE(posix_spawn_file_actions_t);

TYPE_INT(mode_t);
TYPE_SINT(pid_t);

TYPE(sigset_t);

TYPE_FORWARD(struct sched_param);

IDENT_INT(POSIX_SPAWN_RESETIDS);
IDENT_INT(POSIX_SPAWN_SETPGROUP);
IDENT_INT(POSIX_SPAWN_SETSCHEDPARAM);
IDENT_INT(POSIX_SPAWN_SETSCHEDULER);
IDENT_INT(POSIX_SPAWN_SETSIGDEF);
IDENT_INT(POSIX_SPAWN_SETSIGMASK);

IDENT(posix_spawn, int (*)(pid_t *restrict, const char *restrict,
                           const posix_spawn_file_actions_t *,
                           const posix_spawnattr_t *restrict,
                           char *const[restrict], char *const[restrict]));
IDENT(posix_spawn_file_actions_addclose,
      int (*)(posix_spawn_file_actions_t *, int));
IDENT(posix_spawn_file_actions_adddup2,
      int (*)(posix_spawn_file_actions_t *, int, int));
IDENT(posix_spawn_file_actions_addopen,
      int (*)(posix_spawn_file_actions_t *restrict, int, const char *restrict,
              int, mode_t));
IDENT(posix_spawn_file_actions_destroy, int (*)(posix_spawn_file_actions_t *));
IDENT(posix_spawn_file_actions_init, int (*)(posix_spawn_file_actions_t *));
IDENT(posix_spawnattr_destroy, int (*)(posix_spawnattr_t *));
IDENT(posix_spawnattr_getflags,
      int (*)(const posix_spawnattr_t *restrict, short *restrict));
IDENT(posix_spawnattr_getpgroup,
      int (*)(const posix_spawnattr_t *restrict, pid_t *restrict));
IDENT(posix_spawnattr_getschedparam,
      int (*)(const posix_spawnattr_t *restrict, struct sched_param *restrict));
IDENT(posix_spawnattr_getschedpolicy,
      int (*)(const posix_spawnattr_t *restrict, int *restrict));
IDENT(posix_spawnattr_getsigdefault,
      int (*)(const posix_spawnattr_t *restrict, sigset_t *restrict));
IDENT(posix_spawnattr_getsigmask,
      int (*)(const posix_spawnattr_t *restrict, sigset_t *restrict));
IDENT(posix_spawnattr_init, int (*)(posix_spawnattr_t *));
IDENT(posix_spawnattr_setflags, int (*)(posix_spawnattr_t *, short));
IDENT(posix_spawnattr_setpgroup, int (*)(posix_spawnattr_t *, pid_t));
IDENT(posix_spawnattr_setschedparam,
      int (*)(posix_spawnattr_t *restrict, const struct sched_param *restrict));
IDENT(posix_spawnattr_setschedpolicy, int (*)(posix_spawnattr_t *, int));
IDENT(posix_spawnattr_setsigdefault,
      int (*)(posix_spawnattr_t *restrict, const sigset_t *restrict));
IDENT(posix_spawnattr_setsigmask,
      int (*)(posix_spawnattr_t *restrict, const sigset_t *restrict));
IDENT(posix_spawnp, int (*)(pid_t *restrict, const char *restrict,
                            const posix_spawn_file_actions_t *,
                            const posix_spawnattr_t *restrict,
                            char *const[restrict], char *const[restrict]));
