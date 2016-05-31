#include <fenv.h>

#include "test_util.h"

TYPE(fenv_t);
TYPE(fexcept_t);

IDENT_INT(FE_DIVBYZERO);
IDENT_INT(FE_INEXACT);
IDENT_INT(FE_INVALID);
IDENT_INT(FE_OVERFLOW);
IDENT_INT(FE_UNDERFLOW);

IDENT_INT(FE_ALL_EXCEPT);

IDENT_INT(FE_DOWNWARD);
IDENT_INT(FE_TONEAREST);
IDENT_INT(FE_TOWARDZERO);
IDENT_INT(FE_UPWARD);

IDENT(FE_DFL_ENV, const fenv_t *);

IDENT(feclearexcept, int (*)(int));
IDENT(fegetenv, int (*)(fenv_t *));
IDENT(fegetexceptflag, int (*)(fexcept_t *, int));
IDENT(fegetround, int (*)(void));
IDENT(feholdexcept, int (*)(fenv_t *));
IDENT(feraiseexcept, int (*)(int));
IDENT(fesetenv, int (*)(const fenv_t *));
IDENT(fesetexceptflag, int (*)(const fexcept_t *, int));
IDENT(fesetround, int (*)(int));
IDENT(fetestexcept, int (*)(int));
IDENT(feupdateenv, int (*)(const fenv_t *));
