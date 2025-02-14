#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 100 // define
// #undef ARR_LEN 500 redifine
#define CALC_ARR_LEN(x) (sizeof((x)) / sizeof((x[0]))) // function macro
#define SUM(a, b) ((a) + (b))

int main(int argc, char *argv[])
{
  #ifdef ARR_LEN 
   printf("macro exists\n");
  #elif undef SFDSFDSF
   printf("fdsfdsfds")
  #endif

  #ifndef SDFDSFS  
   printf("sdfdfsf");
  #endif 

  char array[ARR_LEN];

  printf("%lu\n", CALC_ARR_LEN(array));
  printf("%d\n", SUM(1, 2));

  return EXIT_SUCCESS;
}
