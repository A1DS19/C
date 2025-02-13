#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
  // returns pointer to newly allocated memory, takes in amount of bytes to allocate, validate for null pointer
  char *ptr = malloc(sizeof(char[10]));
  free(ptr);

  // returns pointer to newly allocated memory, initializes memory block to 0, returns pointer to first byte in memory block, validate for null pointer
  char *ptr_ = calloc(1000, sizeof(char));
  free(ptr_);

  // returns pointer to newly allocated memory, resizes memory from other ptr, takes previous allocation, and new size, validate null pointer
  char *ptr__ = malloc(sizeof(char[100]));
  char *ptr___ = realloc(ptr__, sizeof(char[1000]));
  ptr__ = ptr___;
  free(ptr__);
  

  return EXIT_SUCCESS;
}
