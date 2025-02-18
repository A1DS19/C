#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void add(int *target, int a, int b) {
  *target = a + b;
  return;
}
void sub(int *target, int a, int b) {
  *target = a - b;
  return;
}
void divi(int *target, int a, int b) {
  *target = a / b;
  return;
}
void mul(int *target, int a, int b) {
  *target = a * b;
  return;
}

int main(int argc, char *argv[])
{
  int x, y, result;
  void (*fp)(int*, int, int);
  int operation;

  printf("1.add\n2.sub\n3.divide\n4.multiply\n");
  scanf("%d", &operation);
  assert(operation < 5 && operation > 0);
  
  printf("value 1:\n");
  scanf("%d", &x);

  printf("value 2:\n");
  scanf("%d", &y);


  switch (operation) {
    case 1:
      fp = add;
      break;
    case 2:
      fp = sub;
      break;
    case 3:
      fp = divi;
      break;
    case 4:
      fp = mul;
      break;
    default:
      break;
}

  (fp)(&result, x, y);
  printf("result: %d\n", result);

  return EXIT_SUCCESS;
}
