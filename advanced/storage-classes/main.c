#include <stdio.h>
#include <stdlib.h>

// globally declared variables or functions(not necessarlly need a .h fle)
extern char *external;
extern void hello_extern(void);

void hello_register(void) {
  register int count = 10;
  printf("register %d\n", count);
}

// static functions can only be called from the file they are declared
static void hello_static(void) {
  // preserves the count across the duration of the program, notice initial
  // value
  static int count = 0;
  int count_local = 0;

  printf("static %d | local %d \n", count, count_local);

  count++;
  count_local++;
}

void hello_auto(void) {
  // auto for local variables that are destroyed after the function scope leaves
  auto int age = 10;
  printf("%d\n", age);

  {
    auto int age_inside = 20;
    printf("%d | %d \n", age, age_inside);
  }
}

int main(int argc, char *argv[]) {
  hello_auto();
  hello_extern();

  for (int i = 0; i < 10; i++) {
    hello_static();
  }

  hello_register();

  return EXIT_SUCCESS;
}
