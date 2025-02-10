#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  unsigned data = 0xABCD;
  int a, b;

  printf("from:\n");
  scanf("%d", &a);

  printf("to:\n");
  scanf("%d", &b);

  printf("result %X", data << a);
  return EXIT_SUCCESS;
}
