#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int arraySize;
  int array[]; // only can be the last member of a struct, only can have one,
               // cannot be the only thing on the struct, cannot be a member of
               // another struct
               // cannot have fix size
               // has to be dynamically allocated
} Array;

int main(int argc, char *argv[]) {
  int arraySize = 0;
  printf("size of elements:\n");
  scanf("%d", &arraySize);

  Array *ptr = malloc(sizeof(Array) + arraySize * sizeof(int));

  for (int i = 0; i < arraySize; i++) {
    int element;
    printf("element:\n");
    scanf("%d", &element);
    ptr->array[i] = element;
  }

  printf("result:\n");
  for (int i = 0; i < arraySize; i++) {
    printf("%d", ptr->array[i]);
  }

  return EXIT_SUCCESS;
}
