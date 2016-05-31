#include <pwd.h>

#include "test_util.h"

TYPE(struct passwd);
MEMBER(struct passwd, pw_name, char *);
MEMBER(struct passwd, pw_uid, uid_t);
MEMBER(struct passwd, pw_gid, gid_t);
MEMBER(struct passwd, pw_dir, char *);
MEMBER(struct passwd, pw_shell, char *);

TYPE_INT(gid_t);
TYPE_INT(uid_t);
TYPE_UINT(size_t);

IDENT(endpwent, void (*)(void));
IDENT(getpwent, struct passwd *(*)(void));
IDENT(getpwnam, struct passwd *(*)(const char *));
IDENT(getpwnam_r,
      int (*)(const char *, struct passwd *, char *, size_t, struct passwd **));
IDENT(getpwuid, struct passwd *(*)(uid_t));
IDENT(getpwuid_r,
      int (*)(uid_t, struct passwd *, char *, size_t, struct passwd **));
IDENT(setpwent, void (*)(void));
