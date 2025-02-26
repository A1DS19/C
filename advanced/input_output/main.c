#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_funcs() {
  char *buffer = NULL;
  size_t buffer_size = 32;
  size_t characters;

  buffer = (char *)malloc(buffer_size * sizeof(char));

  if (buffer == NULL) {
    printf("null ptr\n");
    exit(EXIT_FAILURE);
  }

  printf("write characters:\n");
  characters = getline(&buffer, &buffer_size, stdin);
  printf("characters read %zu\n", characters);
  printf("typed %s", buffer);

  char string[10] = "adsadsada";
  strcpy(string, "hello?"); // replaces content and copies new data
  // puts(string);
  printf("%s\n", string);
}

void string_formatting() {}

int main(int argc, char *argv[]) {
  string_funcs();
  exit(EXIT_SUCCESS);

  char ch = '\0';
  printf("insert character\n");

  ch = getc(stdin);
  printf("character: %c\n", ch);

  FILE *fptr = NULL;
  char c = '\0';

  fptr = fopen("test.txt", "r");

  if (fptr == NULL) {
    printf("could not read file\n");
    return EXIT_FAILURE;
  }

  printf("reading file\n");
  while (1) {
    c = fgetc(fptr);

    if (c == EOF) {
      break;
      goto eof;
    }

    printf("%c", c);
  }

eof:
  printf("\n");
  printf("end of file, bye");
  fclose(fptr);
  return EXIT_SUCCESS;

  return EXIT_SUCCESS;
}
