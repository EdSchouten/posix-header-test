#ifdef __FreeBSD__
#include <time.h>
int clock_nanosleep(clockid_t, int, const struct timespec *, struct timespec *);
struct tm *getdate(const char *);
extern int getdate_err;
extern int daylight;
#define timezone 0L
#endif

#ifndef TRANSITIVE
#include <time.h>
#endif

#include "util.h"

TYPE_ARITH(clock_t);
TYPE_UINT(size_t);
TYPE_INT(time_t);

TYPE(clockid_t);
TYPE(timer_t);

TYPE_SCALAR(locale_t);

TYPE_SINT(pid_t);

TYPE_FORWARD(struct sigevent);

TYPE(struct tm);
MEMBER(struct tm, tm_sec, int);
MEMBER(struct tm, tm_min, int);
MEMBER(struct tm, tm_hour, int);
MEMBER(struct tm, tm_mday, int);
MEMBER(struct tm, tm_mon, int);
MEMBER(struct tm, tm_year, int);
MEMBER(struct tm, tm_wday, int);
MEMBER(struct tm, tm_yday, int);
MEMBER(struct tm, tm_isdst, int);

TYPE(struct timespec);
MEMBER(struct timespec, tv_sec, time_t);
MEMBER(struct timespec, tv_nsec, long);

TYPE(struct itimerspec);
MEMBER(struct itimerspec, it_interval, struct timespec);
MEMBER(struct itimerspec, it_value, struct timespec);

IDENT(CLOCK_MONOTONIC, clockid_t);
IDENT(CLOCK_PROCESS_CPUTIME_ID, clockid_t);
IDENT(CLOCK_REALTIME, clockid_t);
IDENT(CLOCK_THREAD_CPUTIME_ID, clockid_t);

IDENT_INT(TIMER_ABSTIME);

IDENT(getdate_err, int);

IDENT(asctime, char *(*)(const struct tm *));
IDENT(asctime_r, char *(*)(const struct tm *restrict, char *restrict));
IDENT(clock, clock_t (*)(void));
IDENT(clock_getcpuclockid, int (*)(pid_t, clockid_t *));
IDENT(clock_getres, int (*)(clockid_t, struct timespec *));
IDENT(clock_gettime, int (*)(clockid_t, struct timespec *));
IDENT(clock_nanosleep,
      int (*)(clockid_t, int, const struct timespec *, struct timespec *));
IDENT(clock_settime, int (*)(clockid_t, const struct timespec *));
IDENT(ctime, char *(*)(const time_t *));
IDENT(ctime_r, char *(*)(const time_t *, char *));
IDENT(difftime, double (*)(time_t, time_t));
IDENT(getdate, struct tm *(*)(const char *));
IDENT(gmtime, struct tm *(*)(const time_t *));
IDENT(gmtime_r, struct tm *(*)(const time_t *restrict, struct tm *restrict));
IDENT(localtime, struct tm *(*)(const time_t *));
IDENT(localtime_r, struct tm *(*)(const time_t *restrict, struct tm *restrict));
IDENT(mktime, time_t (*)(struct tm *));
IDENT(nanosleep, int (*)(const struct timespec *, struct timespec *));
IDENT(strftime, size_t (*)(char *restrict, size_t, const char *restrict,
                           const struct tm *restrict));
IDENT(strftime_l, size_t (*)(char *restrict, size_t, const char *restrict,
                             const struct tm *restrict, locale_t));
IDENT(strptime, char *(*)(const char *restrict, const char *restrict,
                          struct tm *restrict));
IDENT(time, time_t (*)(time_t *));
IDENT(timer_create,
      int (*)(clockid_t, struct sigevent *restrict, timer_t *restrict));
IDENT(timer_delete, int (*)(timer_t));
IDENT(timer_getoverrun, int (*)(timer_t));
IDENT(timer_gettime, int (*)(timer_t, struct itimerspec *));
IDENT(timer_settime, int (*)(timer_t, int, const struct itimerspec *restrict,
                             struct itimerspec *restrict));
IDENT(tzset, void (*)(void));

IDENT(daylight, int);
IDENT(timezone, long);
IDENT(tzname, char **);
