#include <dlfcn.h>

#include "test_util.h"

IDENT_INT(RTLD_LAZY);
IDENT_INT(RTLD_NOW);
IDENT_INT(RTLD_GLOBAL);
IDENT_INT(RTLD_LOCAL);

IDENT(dlclose, int (*)(void *));
IDENT(dlerror, char *(*)(void));
IDENT(dlopen, void *(*)(const char *, int));
IDENT(dlsym, void *(*)(void *restrict, const char *restrict));
