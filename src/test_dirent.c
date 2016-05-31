#include <dirent.h>

#include "test_util.h"

TYPE_FORWARD(DIR);

TYPE(struct dirent);
MEMBER(struct dirent, d_ino, ino_t);
MEMBER(struct dirent, d_name, char *);

TYPE_UINT(ino_t);

IDENT(alphasort, int (*)(const struct dirent **, const struct dirent **));
IDENT(closedir, int (*)(DIR *));
IDENT(dirfd, int (*)(DIR *));
IDENT(fdopendir, DIR *(*)(int));
IDENT(opendir, DIR *(*)(const char *));
IDENT(readdir, struct dirent *(*)(DIR *));
IDENT(readdir_r, int (*)(DIR *restrict, struct dirent *restrict,
                         struct dirent **restrict));
IDENT(rewinddir, void (*)(DIR *));
IDENT(scandir,
      int (*)(const char *, struct dirent ***, int (*)(const struct dirent *),
              int (*)(const struct dirent **, const struct dirent **)));
IDENT(seekdir, void (*)(DIR *, long));
IDENT(telldir, long (*)(DIR *));
