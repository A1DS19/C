#include <stdio.h>
#include <stdlib.h>

// gcc -Wall -Werror -Og -o main main.c
// ldd ./exe

#define DEBUG_PRINT(fmt, ...) fprintf(stderr, fmt, __VA_ARGS__)
// #define DEBUG
/*
adding -D DEBUG is the same as defining the macro
gcc -D DEBUG -0g -o main main.c
use gperftools for profiling
use codesonar for static analysis
*/

int process(int a, int b, int c) { return a + b + c; }

int main(int argc, char *argv[]) {
  int a, b, c, nread;
  nread = scanf("%d, %d, %d", &a, &b, &c);

#ifdef DEBUG
  DEBUG_PRINT("data:\n%d | %d | %d", a, b, c);
#endif

  int result = process(a, b, c);

#ifdef DEBUG
  DEBUG_PRINT("result: %d", result);
#endif

  return EXIT_SUCCESS;
}
