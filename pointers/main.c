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

  // address is inmutable
  char *const letter_mem_const = &letter_b;
  // value pointed to can not be changed by pointer
  const char *letter_val_const = &letter_b;
  // value and address are inmutable
  const char *const letter_mem_val_const = &letter_b;

  return EXIT_SUCCESS;
}
