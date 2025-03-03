#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
Signals

A signal is like a pager alert that tells a process to do something.
Used to handle events like termination (SIGTERM) or interrupts (SIGINT).
Example: Pressing Ctrl+C sends a SIGINT to stop a running program.
*/

void signal_divide_zero_handler(int sigid);

int main(int argc, char *argv[]) {
  void (*sigfpeHandlerReturn)(int);
  sigfpeHandlerReturn = signal(SIGFPE, signal_divide_zero_handler);

  if (sigfpeHandlerReturn == SIG_ERR) {
    printf("signal error\n");
    return EXIT_FAILURE;
  }

  float zero = 0.0;
  float error_operation = 121.0 / zero;
  printf("result: %f\n", error_operation);

  // raise(SIGSTOP);
  // pid_t pid = getpid();
  // printf("life after kill -SIGCONT %d", pid);
  return EXIT_SUCCESS;
}

void signal_divide_zero_handler(int sigid) {
  if (sigid == SIGFPE) {
    printf("division by 0 detected, exiting program");
    exit(EXIT_FAILURE);
  }
}
