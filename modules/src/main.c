#include <stdlib.h>
#include "../include/mod2.h"
#include "../include/mod1.h"
#include "../include/led.h"

int main(int argc, char *argv[])
{
  print_mod2();
  print_mod1();
  print_led_status(1);
  return EXIT_SUCCESS;
}
