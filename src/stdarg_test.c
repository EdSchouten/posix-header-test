#include <stdarg.h>

#include "util.h"

TYPE(va_list);

static inline void foo(const char *format, ...) {
  va_list ap1;
  va_start(ap1, format);
  va_list ap2;
  va_copy(ap1, ap2);
  va_arg(ap1, int);
  va_end(ap1);
}
