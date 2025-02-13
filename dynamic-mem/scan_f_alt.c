#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_INPUT_LEN 256

void get_line(char *buffer) {
  printf("enter line:\n");
  ssize_t bytes_read = read(STDIN_FILENO, buffer, MAX_INPUT_LEN - 1);

  if (bytes_read > 0) {
    buffer[bytes_read] = '\0';
  }
}

int main(int argc, char *argv[])
{
  char buffer[MAX_INPUT_LEN];
  get_line(buffer);

  printf("%s\n", buffer);
  
  return EXIT_SUCCESS;
}
