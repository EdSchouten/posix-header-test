#include <setjmp.h>

#include "test_util.h"

TYPE(jmp_buf);
TYPE(sigjmp_buf);

IDENT(_longjmp, void (*)(jmp_buf, int));
IDENT(longjmp, void (*)(jmp_buf, int));
IDENT(siglongjmp, void (*)(sigjmp_buf, int));
IDENT(_setjmp, int (*)(jmp_buf));
IDENT(setjmp, int (*)(jmp_buf));
IDENT(sigsetjmp, int (*)(sigjmp_buf, int));
