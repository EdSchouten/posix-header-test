#include <iso646.h>

// clang-format off
static inline int foo(void) {
  int x = 0 and 0;
  x and_eq 0;
  x = 0 bitand 0;
  x = 0 bitor 0;
  x = compl 0;
  x = not 0;
  x = 0 not_eq 0;
  x = 0 or 0;
  x or_eq 0;
  x = 0 xor 0;
  x xor_eq 0;
  return x;
}
