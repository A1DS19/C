#include <stdlib.h>
#include <stdio.h>

#define KEY 'X'
#define CLEAR_TEXT 'A'

void print_char(char c, char *text){
  printf("%s = '%c' (0x%x)\n", text, c, c);
}

int main(int argc, char *argv[])
{
  char cleartext, key, cyphertext, newcleartext;
  cleartext = CLEAR_TEXT;
  print_char(cleartext, "clear_text");

  key = KEY;
  print_char(key, "key");

  cyphertext = cleartext ^ key;
  print_char(cyphertext, "cyphertext");

  newcleartext = cyphertext ^ key;
  print_char(newcleartext, "newcleartext");

  return EXIT_SUCCESS;
}
