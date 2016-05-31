#include <stddef.h>

#include "test_util.h"

IDENT(NULL, void *);
IDENT(offsetof(struct { int foo; }, foo), size_t);

TYPE_SINT(ptrdiff_t);
TYPE_INT(wchar_t);
TYPE_UINT(size_t);
