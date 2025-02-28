#include <stdio.h>
#include <stdlib.h>

void run_at_exit() { printf("goodbye"); }

int main(int argc, char *argv[]) {
  void (*run_at_exit_ptr)() = run_at_exit;

  char *string = "100";
  int integer = atoi(string);
  float floating = atof(string);
  // more for long, double...

  char *numbers = "10 100", *end;
  float number_1 = strtof(numbers, &end);
  float number_2 = strtof(end, NULL);
  printf("str to %f | %f", number_1, number_2);

  printf("%d\n", integer);
  printf("%f\n", floating);

  atexit(run_at_exit_ptr);
  exit(EXIT_SUCCESS);
}
