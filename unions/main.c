#include <stdio.h>
#include <stdlib.h>

// creates one memory position, is not shared, it is overwritten, meaning only on value can live there at a time
union RegisterA{
  int a;
  int b;
};

int main(int argc, char *argv[])
{
  union RegisterA register;

  return EXIT_SUCCESS;
}
