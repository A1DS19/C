#include <stdio.h>
#include <stdlib.h>

void accumulate(int *const accumulator) {
  *accumulator += 1;
}

int main(int argc, char *argv[])
{
  int accumulator = 0;

  for (int i = 0; i < 100; i++) {
    accumulate(&accumulator);
  }

  printf("%d\n", accumulator);

  return EXIT_SUCCESS;
}
