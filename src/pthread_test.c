#include <pthread.h>

#include "util.h"

IDENT_INT(PTHREAD_BARRIER_SERIAL_THREAD);
IDENT_INT(PTHREAD_CANCEL_ASYNCHRONOUS);
IDENT_INT(PTHREAD_CANCEL_ENABLE);
IDENT_INT(PTHREAD_CANCEL_DEFERRED);
IDENT_INT(PTHREAD_CANCEL_DISABLE);
IDENT(PTHREAD_CANCELED, void *);
IDENT_INT(PTHREAD_CREATE_DETACHED);
IDENT_INT(PTHREAD_CREATE_JOINABLE);
IDENT_INT(PTHREAD_EXPLICIT_SCHED);
IDENT_INT(PTHREAD_INHERIT_SCHED);
IDENT_INT(PTHREAD_MUTEX_DEFAULT);
IDENT_INT(PTHREAD_MUTEX_ERRORCHECK);
IDENT_INT(PTHREAD_MUTEX_NORMAL);
IDENT_INT(PTHREAD_MUTEX_RECURSIVE);
IDENT_INT(PTHREAD_MUTEX_ROBUST);
IDENT_INT(PTHREAD_MUTEX_STALLED);
IDENT_INIT(PTHREAD_ONCE_INIT, pthread_once_t);
IDENT_INT(PTHREAD_PRIO_INHERIT);
IDENT_INT(PTHREAD_PRIO_NONE);
IDENT_INT(PTHREAD_PRIO_PROTECT);
IDENT_INT(PTHREAD_PROCESS_SHARED);
IDENT_INT(PTHREAD_PROCESS_PRIVATE);
IDENT_INT(PTHREAD_SCOPE_PROCESS);
IDENT_INT(PTHREAD_SCOPE_SYSTEM);

IDENT_INIT(PTHREAD_COND_INITIALIZER, pthread_cond_t);
IDENT_INIT(PTHREAD_MUTEX_INITIALIZER, pthread_mutex_t);
IDENT_INIT(PTHREAD_RWLOCK_INITIALIZER, pthread_rwlock_t);

TYPE(pthread_attr_t);
TYPE(pthread_barrier_t);
TYPE(pthread_barrierattr_t);
TYPE(pthread_cond_t);
TYPE(pthread_condattr_t);
TYPE(pthread_key_t);
TYPE(pthread_mutex_t);
TYPE(pthread_mutexattr_t);
TYPE(pthread_once_t);
TYPE(pthread_rwlock_t);
TYPE(pthread_rwlockattr_t);
TYPE(pthread_spinlock_t);
TYPE(pthread_t);

IDENT(pthread_atfork, int (*)(void (*)(void), void (*)(void), void (*)(void)));
IDENT(pthread_attr_destroy, int (*)(pthread_attr_t *));
IDENT(pthread_attr_getdetachstate, int (*)(const pthread_attr_t *, int *));
IDENT(pthread_attr_getguardsize,
      int (*)(const pthread_attr_t *restrict, size_t *restrict));
IDENT(pthread_attr_getinheritsched,
      int (*)(const pthread_attr_t *restrict, int *restrict));
IDENT(pthread_attr_getschedparam,
      int (*)(const pthread_attr_t *restrict, struct sched_param *restrict));
IDENT(pthread_attr_getschedpolicy,
      int (*)(const pthread_attr_t *restrict, int *restrict));
IDENT(pthread_attr_getscope,
      int (*)(const pthread_attr_t *restrict, int *restrict));
IDENT(pthread_attr_getstack, int (*)(const pthread_attr_t *restrict,
                                     void **restrict, size_t *restrict));
IDENT(pthread_attr_getstacksize,
      int (*)(const pthread_attr_t *restrict, size_t *restrict));
IDENT(pthread_attr_init, int (*)(pthread_attr_t *));
IDENT(pthread_attr_setdetachstate, int (*)(pthread_attr_t *, int));
IDENT(pthread_attr_setguardsize, int (*)(pthread_attr_t *, size_t));
IDENT(pthread_attr_setinheritsched, int (*)(pthread_attr_t *, int));
IDENT(pthread_attr_setschedparam,
      int (*)(pthread_attr_t *restrict, const struct sched_param *restrict));
IDENT(pthread_attr_setschedpolicy, int (*)(pthread_attr_t *, int));
IDENT(pthread_attr_setscope, int (*)(pthread_attr_t *, int));
IDENT(pthread_attr_setstack, int (*)(pthread_attr_t *, void *, size_t));
IDENT(pthread_attr_setstacksize, int (*)(pthread_attr_t *, size_t));
IDENT(pthread_barrier_destroy, int (*)(pthread_barrier_t *));
IDENT(pthread_barrier_init,
      int (*)(pthread_barrier_t *restrict,
              const pthread_barrierattr_t *restrict, unsigned));
IDENT(pthread_barrier_wait, int (*)(pthread_barrier_t *));
IDENT(pthread_barrierattr_destroy, int (*)(pthread_barrierattr_t *));
IDENT(pthread_barrierattr_getpshared,
      int (*)(const pthread_barrierattr_t *restrict, int *restrict));
IDENT(pthread_barrierattr_init, int (*)(pthread_barrierattr_t *));
IDENT(pthread_barrierattr_setpshared, int (*)(pthread_barrierattr_t *, int));
IDENT(pthread_cancel, int (*)(pthread_t));
static inline void foo(void) {
  pthread_cleanup_push(NULL, NULL);
  pthread_cleanup_pop(0);
}
IDENT(pthread_cond_broadcast, int (*)(pthread_cond_t *));
IDENT(pthread_cond_destroy, int (*)(pthread_cond_t *));
IDENT(pthread_cond_init,
      int (*)(pthread_cond_t *restrict, const pthread_condattr_t *restrict));
IDENT(pthread_cond_signal, int (*)(pthread_cond_t *));
IDENT(pthread_cond_timedwait,
      int (*)(pthread_cond_t *restrict, pthread_mutex_t *restrict,
              const struct timespec *restrict));
IDENT(pthread_cond_wait,
      int (*)(pthread_cond_t *restrict, pthread_mutex_t *restrict));
IDENT(pthread_condattr_destroy, int (*)(pthread_condattr_t *));
IDENT(pthread_condattr_getclock,
      int (*)(const pthread_condattr_t *restrict, clockid_t *restrict));
IDENT(pthread_condattr_getpshared,
      int (*)(const pthread_condattr_t *restrict, int *restrict));
IDENT(pthread_condattr_init, int (*)(pthread_condattr_t *));
IDENT(pthread_condattr_setclock, int (*)(pthread_condattr_t *, clockid_t));
IDENT(pthread_condattr_setpshared, int (*)(pthread_condattr_t *, int));
IDENT(pthread_create,
      int (*)(pthread_t *restrict, const pthread_attr_t *restrict,
              void *(*)(void *), void *restrict));
IDENT(pthread_detach, int (*)(pthread_t));
IDENT(pthread_equal, int (*)(pthread_t, pthread_t));
IDENT(pthread_exit, void (*)(void *));
IDENT(pthread_getconcurrency, int (*)(void));
IDENT(pthread_getcpuclockid, int (*)(pthread_t, clockid_t *));
IDENT(pthread_getschedparam,
      int (*)(pthread_t, int *restrict, struct sched_param *restrict));
IDENT(pthread_getspecific, void *(*)(pthread_key_t));
IDENT(pthread_join, int (*)(pthread_t, void **));
IDENT(pthread_key_create, int (*)(pthread_key_t *, void (*)(void *)));
IDENT(pthread_key_delete, int (*)(pthread_key_t));
IDENT(pthread_mutex_consistent, int (*)(pthread_mutex_t *));
IDENT(pthread_mutex_destroy, int (*)(pthread_mutex_t *));
// TODO(ed): Fix FreeBSD!
// IDENT(pthread_mutex_getprioceiling,
//       int (*)(const pthread_mutex_t *restrict, int *restrict));
IDENT(pthread_mutex_init,
      int (*)(pthread_mutex_t *restrict, const pthread_mutexattr_t *restrict));
IDENT(pthread_mutex_lock, int (*)(pthread_mutex_t *));
IDENT(pthread_mutex_setprioceiling,
      int (*)(pthread_mutex_t *restrict, int, int *restrict));
IDENT(pthread_mutex_timedlock,
      int (*)(pthread_mutex_t *restrict, const struct timespec *restrict));
IDENT(pthread_mutex_trylock, int (*)(pthread_mutex_t *));
IDENT(pthread_mutex_unlock, int (*)(pthread_mutex_t *));
IDENT(pthread_mutexattr_destroy, int (*)(pthread_mutexattr_t *));
// TODO(ed): Fix FreeBSD!
// IDENT(pthread_mutexattr_getprioceiling,
//       int (*)(const pthread_mutexattr_t *restrict, int *restrict));
// IDENT(pthread_mutexattr_getprotocol,
//       int (*)(const pthread_mutexattr_t *restrict, int *restrict));
IDENT(pthread_mutexattr_getpshared,
      int (*)(const pthread_mutexattr_t *restrict, int *restrict));
// TODO(ed): Fix FreeBSD!
// IDENT(pthread_mutexattr_getrobust,
//       int (*)(const pthread_mutexattr_t *restrict, int *restrict));
// IDENT(pthread_mutexattr_gettype,
//       int (*)(const pthread_mutexattr_t *restrict, int *restrict));
IDENT(pthread_mutexattr_init, int (*)(pthread_mutexattr_t *));
IDENT(pthread_mutexattr_setprioceiling, int (*)(pthread_mutexattr_t *, int));
IDENT(pthread_mutexattr_setprotocol, int (*)(pthread_mutexattr_t *, int));
IDENT(pthread_mutexattr_setpshared, int (*)(pthread_mutexattr_t *, int));
// TODO(ed): FreeBSD!
// IDENT(pthread_mutexattr_setrobust, int (*)(pthread_mutexattr_t *, int));
IDENT(pthread_mutexattr_settype, int (*)(pthread_mutexattr_t *, int));
IDENT(pthread_once, int (*)(pthread_once_t *, void (*)(void)));
IDENT(pthread_rwlock_destroy, int (*)(pthread_rwlock_t *));
IDENT(pthread_rwlock_init, int (*)(pthread_rwlock_t *restrict,
                                   const pthread_rwlockattr_t *restrict));
IDENT(pthread_rwlock_rdlock, int (*)(pthread_rwlock_t *));
IDENT(pthread_rwlock_timedrdlock,
      int (*)(pthread_rwlock_t *restrict, const struct timespec *restrict));
IDENT(pthread_rwlock_timedwrlock,
      int (*)(pthread_rwlock_t *restrict, const struct timespec *restrict));
IDENT(pthread_rwlock_tryrdlock, int (*)(pthread_rwlock_t *));
IDENT(pthread_rwlock_trywrlock, int (*)(pthread_rwlock_t *));
IDENT(pthread_rwlock_unlock, int (*)(pthread_rwlock_t *));
IDENT(pthread_rwlock_wrlock, int (*)(pthread_rwlock_t *));
IDENT(pthread_rwlockattr_destroy, int (*)(pthread_rwlockattr_t *));
IDENT(pthread_rwlockattr_getpshared,
      int (*)(const pthread_rwlockattr_t *restrict, int *restrict));
IDENT(pthread_rwlockattr_init, int (*)(pthread_rwlockattr_t *));
IDENT(pthread_rwlockattr_setpshared, int (*)(pthread_rwlockattr_t *, int));
IDENT(pthread_self, pthread_t (*)(void));
IDENT(pthread_setcancelstate, int (*)(int, int *));
IDENT(pthread_setcanceltype, int (*)(int, int *));
IDENT(pthread_setconcurrency, int (*)(int));
IDENT(pthread_setschedparam,
      int (*)(pthread_t, int, const struct sched_param *));
// TODO(ed): FreeBSD!
// IDENT(pthread_setschedprio, int (*)(pthread_t, int));
IDENT(pthread_setspecific, int (*)(pthread_key_t, const void *));
IDENT(pthread_spin_destroy, int (*)(pthread_spinlock_t *));
IDENT(pthread_spin_init, int (*)(pthread_spinlock_t *, int));
IDENT(pthread_spin_lock, int (*)(pthread_spinlock_t *));
IDENT(pthread_spin_trylock, int (*)(pthread_spinlock_t *));
IDENT(pthread_spin_unlock, int (*)(pthread_spinlock_t *));
IDENT(pthread_testcancel, void (*)(void));

#define TRANSITIVE
#include "sched_test.c"
#include "time_test.c"
