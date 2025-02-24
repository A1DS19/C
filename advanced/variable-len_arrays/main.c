#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void VLA() {
  size_t size = 0;

  printf("enter amount of elements:\n");
  scanf("%zd", &size);
  int sizes[size];
}

int main(int argc, char *argv[]) {
  size_t len = 0;
  int result = 0;

  printf("amount of elements:\n");
  scanf("%zd", &len);

  for (int i = 0; i < len; i++) {
    int element;
    printf("insert number:\n");
    scanf("%d", &element);
    result += element;
  }

  printf("result: %d", result);
  return EXIT_SUCCESS;
}
