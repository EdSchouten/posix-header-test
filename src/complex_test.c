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

#ifndef TRANSITIVE
#include <complex.h>
#endif

#include "util.h"

IDENT(_Complex_I, float complex);
#if defined(imaginary) || defined(_Imaginary_I)
IDENT(_Imaginary_I, float imaginary);
IDENT(I, float imaginary);
#else
IDENT(I, float complex);
#endif

IDENT(cabs, double (*)(double complex));
IDENT(cabsf, float (*)(float complex));
IDENT(cabsl, long double (*)(long double complex));
IDENT(cacos, double complex (*)(double complex));
IDENT(cacosf, float complex (*)(float complex));
IDENT(cacosh, double complex (*)(double complex));
IDENT(cacoshf, float complex (*)(float complex));
IDENT(cacoshl, long double complex (*)(long double complex));
IDENT(cacosl, long double complex (*)(long double complex));
IDENT(carg, double (*)(double complex));
IDENT(cargf, float (*)(float complex));
IDENT(cargl, long double (*)(long double complex));
IDENT(casin, double complex (*)(double complex));
IDENT(casinf, float complex (*)(float complex));
IDENT(casinh, double complex (*)(double complex));
IDENT(casinhf, float complex (*)(float complex));
IDENT(casinhl, long double complex (*)(long double complex));
IDENT(casinl, long double complex (*)(long double complex));
IDENT(catan, double complex (*)(double complex));
IDENT(catanf, float complex (*)(float complex));
IDENT(catanh, double complex (*)(double complex));
IDENT(catanhf, float complex (*)(float complex));
IDENT(catanhl, long double complex (*)(long double complex));
IDENT(catanl, long double complex (*)(long double complex));
IDENT(ccos, double complex (*)(double complex));
IDENT(ccosf, float complex (*)(float complex));
IDENT(ccosh, double complex (*)(double complex));
IDENT(ccoshf, float complex (*)(float complex));
IDENT(ccoshl, long double complex (*)(long double complex));
IDENT(ccosl, long double complex (*)(long double complex));
IDENT(cexp, double complex (*)(double complex));
IDENT(cexpf, float complex (*)(float complex));
IDENT(cexpl, long double complex (*)(long double complex));
IDENT(cimag, double (*)(double complex));
IDENT(cimagf, float (*)(float complex));
IDENT(cimagl, long double (*)(long double complex));
IDENT(clog, double complex (*)(double complex));
IDENT(clogf, float complex (*)(float complex));
IDENT(clogl, long double complex (*)(long double complex));
IDENT(conj, double complex (*)(double complex));
IDENT(conjf, float complex (*)(float complex));
IDENT(conjl, long double complex (*)(long double complex));
IDENT(cpow, double complex (*)(double complex, double complex));
IDENT(cpowf, float complex (*)(float complex, float complex));
IDENT(cpowl, long double complex (*)(long double complex, long double complex));
IDENT(cproj, double complex (*)(double complex));
IDENT(cprojf, float complex (*)(float complex));
IDENT(cprojl, long double complex (*)(long double complex));
IDENT(creal, double (*)(double complex));
IDENT(crealf, float (*)(float complex));
IDENT(creall, long double (*)(long double complex));
IDENT(csin, double complex (*)(double complex));
IDENT(csinf, float complex (*)(float complex));
IDENT(csinh, double complex (*)(double complex));
IDENT(csinhf, float complex (*)(float complex));
IDENT(csinhl, long double complex (*)(long double complex));
IDENT(csinl, long double complex (*)(long double complex));
IDENT(csqrt, double complex (*)(double complex));
IDENT(csqrtf, float complex (*)(float complex));
IDENT(csqrtl, long double complex (*)(long double complex));
IDENT(ctan, double complex (*)(double complex));
IDENT(ctanf, float complex (*)(float complex));
IDENT(ctanh, double complex (*)(double complex));
IDENT(ctanhf, float complex (*)(float complex));
IDENT(ctanhl, long double complex (*)(long double complex));
IDENT(ctanl, long double complex (*)(long double complex));
