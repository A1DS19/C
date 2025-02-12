#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void decompose(float number, int *const head, int *const tail){
  *head = (int)number;
  *tail = *head - number;
}

int main(int argc, char *argv[])
{
  float input;
  int head;
  int tail;

  scanf("%f", &input);
  decompose(input, &head, &tail);

  printf("%d | %d", head, tail);

  return EXIT_SUCCESS;
}
