#include <stdio.h>
#include <stdlib.h>

void run_at_exit();
void run_at_exit() { printf("goodbye"); }

int main(int argc, char *argv[]) {
  void (*run_at_exit_ptr)() = run_at_exit;

  atexit(run_at_exit_ptr);
  exit(EXIT_SUCCESS);
}
