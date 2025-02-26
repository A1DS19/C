#include <stdio.h>
#include <stdlib.h>

#define SUM(a, b) (((a) + (b)))
#define PRINT_PARAMS(a, b)                                                     \
  printf("%i\n", a);                                                           \
  printf("%i\n", b);

int main(int argc, char *argv[]) {
  printf("%i\n", SUM(1, 2));
  PRINT_PARAMS(1, 2);

  return EXIT_SUCCESS;
}
