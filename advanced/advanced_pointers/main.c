#include <stdio.h>
#include <stdlib.h>

// function pointers
int display();
int display() { printf("display"); }

void foo(int **ptr) { **ptr = 10; }

int main(int argc, char *argv[]) {
  /*
  double pointers, usually used when wanting to modify the value of a pointer
  from a function
  */

  int a = 10;

  int *b = &a;

  int **c = &b;

  // printf("address a: %p\n", &a);
  // printf("address b: %p\n", b);
  // printf("address c: %p\n", *c);

  /*
     foo() receives an address of a pointer (int **ptr).
     **ptr = 10; dereferences it twice:
     *ptr gives the pointer (fii in main()).
     **ptr gives the value stored at that pointer (*fii).
     So, **ptr = 10; modifies the integer value where fii points.
  */

  int *fii = (int *)malloc(sizeof(int));
  *fii = 0;
  foo(&fii);

  printf("fii: %d", *fii);
  free(fii);

  // primarly used as callbacks
  int (*display_ptr)();
  display_ptr = display;
  printf("addr display %p\n", display_ptr);
  (*display_ptr)();

  return EXIT_SUCCESS;
}
