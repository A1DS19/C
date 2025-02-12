#include <stdio.h>
#include <stdlib.h>
#define MAX_VALUES 4

int sum_arr(int *const ptr){
  int sum = 0;
  printf("%d", sizeof(ptr) / sizeof(ptr[0]));

  for (int i = 0; i < MAX_VALUES; i++) {
    sum += ptr[i];
  }

  return sum;
}

int main(int argc, char *argv[])
{
  int values[MAX_VALUES];

  for (int i = 0; i < MAX_VALUES; i++) {
    int value;
    printf("insert value:\n");
    scanf("%d", &value);

    if (value == -1){
      break;
    }

    values[i] = value;
  }

  // size of arr in bytes = sizeof(values)
  // size of arr = sizeof(values) / sizeof(values[0])

  for (int i = 0; i < sizeof(values[0]); i++) {
    printf("%d | %d\n", i, values[i]);
  }

  int *element_ptr = &values[0];
  printf("%p\n", element_ptr);

  printf("total sum %d\n", sum_arr(values));

  return EXIT_SUCCESS;
}
