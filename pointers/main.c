#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *ptr = NULL;
  printf("%p\n", ptr);

  if (ptr != NULL) {
    printf("%d\n", *ptr);
  }

  int data_1 = 123;
  ptr = &data_1;
  printf("%d\n", *ptr);

  char character = 'A';
  printf("%c\n", character);

  char letter_b = 'B';
  char *letter_ptr = &letter_b;
  printf("%p\n", letter_ptr);
  printf("%c\n", *letter_ptr);

  return EXIT_SUCCESS;
}
