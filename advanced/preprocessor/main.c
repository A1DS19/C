#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
#ifdef PRINT_ME
  printf("hello defined\n");
#endif

#undef PRINT_ME

#if defined(PRINT_ME)
  printf("print me\n");
#else
  printf("do not print me\n");
#endif

  return EXIT_SUCCESS;
}
