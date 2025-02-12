#include <stdio.h>
#include <stdlib.h>

void swap(int *const val1, int *const val2) {
  int val1_tmp = *val1;
  *val1 = *val2;
  *val2 = val1_tmp;
}

int main(int argc, char *argv[])
{
  int val1 = 100;
  int val2 = 0;

  swap(&val1, &val2);

  printf("val1 %d | val2 %d", val1, val2); 

  return EXIT_SUCCESS;
}
