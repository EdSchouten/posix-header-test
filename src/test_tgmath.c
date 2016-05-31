#ifdef __FreeBSD__
_Complex long double cacoshl(_Complex long double);
_Complex long double cacosl(_Complex long double);
_Complex long double casinhl(_Complex long double);
_Complex long double casinl(_Complex long double);
_Complex long double catanhl(_Complex long double);
_Complex long double catanl(_Complex long double);
_Complex long double ccoshl(_Complex long double);
_Complex long double ccosl(_Complex long double);
_Complex long double cexpl(_Complex long double);
_Complex double clog(_Complex double);
_Complex float clogf(_Complex float);
_Complex long double clogl(_Complex long double);
_Complex double cpow(_Complex double, _Complex double);
_Complex float cpowf(_Complex float, _Complex float);
_Complex long double cpowl(_Complex long double, _Complex long double);
_Complex long double csinhl(_Complex long double);
_Complex long double csinl(_Complex long double);
_Complex long double ctanhl(_Complex long double);
_Complex long double ctanl(_Complex long double);
#endif

#include <tgmath.h>

#include "test_util.h"

// Function always returns a real floating point type.
#define REAL_1(f, ...)                                                         \
  IDENT(f(1.0f, ##__VA_ARGS__), float);                                        \
  IDENT(f(1.0, ##__VA_ARGS__), double);                                        \
  IDENT(f(1.0l, ##__VA_ARGS__), long double);                                  \
  IDENT(f(CMPLXF(1.0f, 1.0f), ##__VA_ARGS__), float);                          \
  IDENT(f(CMPLX(1.0, 1.0), ##__VA_ARGS__), double);                            \
  IDENT(f(CMPLXL(1.0l, 1.0l), ##__VA_ARGS__), long double)

#define REAL_2(f, ...)                                                         \
  IDENT(f(1.0f, 1.0f, ##__VA_ARGS__), float);                                  \
  IDENT(f(1.0, 1.0f, ##__VA_ARGS__), double);                                  \
  IDENT(f(1.0f, 1, ##__VA_ARGS__), double);                                    \
  IDENT(f(1.0f, 1.0l, ##__VA_ARGS__), long double);                            \
  IDENT(f(CMPLXF(1.0f, 1.0f), 1.0f, ##__VA_ARGS__), float);                    \
  IDENT(f(CMPLX(1.0, 1.0), 1, ##__VA_ARGS__), double);                         \
  IDENT(f(CMPLXL(1.0l, 1.0l), 1, ##__VA_ARGS__), long double)

#define REAL_3(f)                                                              \
  IDENT(f(1.0f, 1.0f, 1.0f), float);                                           \
  IDENT(f(1.0f, 1.0f, 1.0), double);                                           \
  IDENT(f(1, 1.0f, 1.0f), double);                                             \
  IDENT(f(1.0, 1.0l, 1.0f), long double);                                      \
  IDENT(f(CMPLXF(1.0f, 1.0f), 1.0f, 1.0f), float);                             \
  IDENT(f(1.0f, CMPLX(1.0, 1.0), 1.0f), double);                               \
  IDENT(f(1.0, 1, CMPLXL(1.0l, 1.0l)), long double)

// Function always returns a complex floating point type.
#define COMPLEX_1(f)                                                           \
  IDENT(f(1.0f), float complex);                                               \
  IDENT(f(1.0), double complex);                                               \
  IDENT(f(1), double complex);                                                 \
  IDENT(f(1.0l), long double complex);                                         \
  IDENT(f(CMPLXF(1.0f, 1.0f)), float complex);                                 \
  IDENT(f(CMPLX(1.0, 1.0)), double complex);                                   \
  IDENT(f(CMPLXL(1.0l, 1.0l)), long double complex)

// Function returns a real or complex floating point type.
#define REAL_COMPLEX_1(f)                                                      \
  IDENT(f(1.0f), float);                                                       \
  IDENT(f(1.0), double);                                                       \
  IDENT(f(1), double);                                                         \
  IDENT(f(1.0l), long double);                                                 \
  IDENT(f(CMPLXF(1.0f, 1.0f)), float complex);                                 \
  IDENT(f(CMPLX(1.0, 1.0)), double complex);                                   \
  IDENT(f(CMPLXL(1.0l, 1.0l)), long double complex)

#define REAL_COMPLEX_2(f)                                                      \
  IDENT(f(1.0f, 1.0f), float);                                                 \
  IDENT(f(1.0, 1.0f), double);                                                 \
  IDENT(f(1.0f, 1), double);                                                   \
  IDENT(f(1.0l, 1.0), long double);                                            \
  IDENT(f(1.0f, CMPLXF(1.0f, 1.0f)), float complex);                           \
  IDENT(f(1, CMPLX(1.0f, 1.0f)), double complex);                              \
  IDENT(f(CMPLXL(1.0l, 1.0l), 1.0), long double complex)

REAL_COMPLEX_1(acos);
REAL_COMPLEX_1(asin);
REAL_COMPLEX_1(atan);
REAL_COMPLEX_1(acosh);
REAL_COMPLEX_1(asinh);
REAL_COMPLEX_1(atanh);
REAL_COMPLEX_1(cos);
REAL_COMPLEX_1(sin);
REAL_COMPLEX_1(tan);
REAL_COMPLEX_1(cosh);
REAL_COMPLEX_1(sinh);
REAL_COMPLEX_1(tanh);
REAL_COMPLEX_1(exp);
REAL_COMPLEX_1(log);
REAL_COMPLEX_2(pow);
REAL_COMPLEX_1(sqrt);
REAL_1(fabs);

REAL_2(atan2);
REAL_1(cbrt);
REAL_1(ceil);
REAL_2(copysign);
REAL_1(erf);
REAL_1(erfc);
REAL_1(exp2);
REAL_1(expm1);
REAL_2(fdim);
REAL_1(floor);
REAL_3(fma);
REAL_2(fmax);
REAL_2(fmin);
REAL_2(fmod);
REAL_1(frexp, (int *)0);
REAL_2(hypot);
REAL_1(ldexp, 0);
REAL_1(lgamma);
REAL_1(log10);
REAL_1(log1p);
REAL_1(log2);
REAL_1(logb);
REAL_1(nearbyint);
REAL_2(nextafter);
REAL_1(nexttoward, 1.0L);
REAL_2(remainder);
REAL_2(remquo, (int *)0);
REAL_1(rint);
REAL_1(round);
REAL_1(scalbn, 0);
REAL_1(scalbln, 0);
REAL_1(tgamma);
REAL_1(trunc);

REAL_1(carg);
REAL_1(cimag);
COMPLEX_1(conj);
COMPLEX_1(cproj);
REAL_1(creal);
