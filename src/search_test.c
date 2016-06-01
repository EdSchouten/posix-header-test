#include <search.h>

#include "util.h"

TYPE(ENTRY);
MEMBER(ENTRY, key, char *);
MEMBER(ENTRY, data, void *);

TYPE(ACTION);
IDENT(FIND, int);
IDENT(ENTER, int);

TYPE(VISIT);
IDENT(preorder, int);
IDENT(postorder, int);
IDENT(endorder, int);
IDENT(leaf, int);

TYPE_UINT(size_t);
IDENT(hcreate, int (*)(size_t));
IDENT(hdestroy, void (*)(void));
IDENT(hsearch, ENTRY *(*)(ENTRY, ACTION));
IDENT(insque, void (*)(void *, void *));
IDENT(lfind, void *(*)(const void *, const void *, size_t *, size_t,
                       int (*)(const void *, const void *)));
IDENT(lsearch, void *(*)(const void *, void *, size_t *, size_t,
                         int (*)(const void *, const void *)));
IDENT(remque, void (*)(void *));
IDENT(tdelete, void *(*)(const void *restrict, void **restrict,
                         int (*)(const void *, const void *)));
IDENT(tfind, void *(*)(const void *, void *const *,
                       int (*)(const void *, const void *)));
IDENT(tsearch,
      void *(*)(const void *, void **, int (*)(const void *, const void *)));
IDENT(twalk, void (*)(const void *, void (*)(const void *, VISIT, int)));
