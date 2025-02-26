#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// Variadic function with two required parameters
void variadic(int required1, double required2, int count, ...) {
  va_list args;
  va_start(args, count);

  printf("Required1: %d\n", required1);
  printf("Required2: %.2f\n", required2);

  for (int i = 0; i < count; i++) {
    int value = va_arg(args, int);
    printf("Optional %d: %d\n", i + 1, value);
  }

  va_end(args);
}

// Recursion
int factorial(int n) {
  int result = 0;

  if (n == 0) {
    return 1;
  } else {
    result = n * factorial(n - 1);
  }

  return result;
}

/*
inline functions

inline suggests that the compiler may (but is not required to) inline the
function, replacing function calls with the function body to optimize
performance.

static restricts the function's visibility to the translation unit
(source file) it is defined in, preventing name conflicts with other foo()
definitions in different files.
*/
inline static void call_me() { printf("hello world"); }

int main(void) {
  // Call with 2 required parameters and 3 optional arguments
  // variadic(10, 20.5, 3, 1, 2, 3);
  // factorial(10);

  return EXIT_SUCCESS;
}
