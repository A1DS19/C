#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

jmp_buf env;

void error_handler() { longjmp(env, 1); }

int main(int argc, char *argv[]) {
  // goto
  goto exit;

exit:
  printf("goto failure\n");
  // return EXIT_FAILURE;

  // setjmp
  if (setjmp(env) == 0) {
    printf("normal execution\n");
    error_handler();
  } else {
    printf("an error occured");
  }

  return EXIT_SUCCESS;
}
