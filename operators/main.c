#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  // bitwise operators (& AND, | OR, ^ XOR, ~ COMPLEMENT, << SHIFT LEFT, >> SHIFT RIGHT)
  int a = 12 << 2; // 12 * 2 ** 2(4) = 48
  int b = 12 >> 2; // 12 / 2 ** 2(4) = 3

  printf("%d\n", a);
  printf("%d\n", b);

  printf("sizeof %lu\n", sizeof(int));
  printf("sizeof %lu\n", sizeof(long int));

  return EXIT_SUCCESS;
}
