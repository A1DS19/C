#include <stdio.h>
#include <stdlib.h>
#include <sys/errno.h>
#include <unistd.h>

#define MAX_COUNT 1000

typedef enum process {
  parent = 1,
  child = 2,
} process;

void count(process process_t) {
  for (int i = 0; i < MAX_COUNT; i++) {
    printf("process type %s | %d\n", process_t == parent ? "parent" : "child",
           i);
  }
}

int main(int argc, char *argv[]) {
  pid_t child_pd = fork();
  pid_t parent_pd = getpid();

  if (child_pd == ECHILD) {
    printf("no child process created");
    exit(EXIT_FAILURE);
  }

  if (child_pd == 0) {
    printf("running child process %d\n", child_pd);
    count(child);
  } else {
    printf("running parent process %d\n", parent_pd);
    count(parent);
  }

  return EXIT_SUCCESS;
}
