#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
  const uint16_t moonlanding = 1968;
  printf("%10d\n", moonlanding);
  printf("%010d\n", moonlanding);

  const double speed_of_light = 299792458;
  printf("%.0f\n", speed_of_light);
  printf("%.0E\n", speed_of_light);

  const float pi = 3.142;
  printf("%.2f\n", pi);
  printf("%+.1E\n", pi);

  const unsigned hexaDead = 0XDEAD;
  printf("0x%X\n", hexaDead);
  printf("%6d\n", hexaDead);

  const unsigned hexaSecret = 51966;
  printf("%X", hexaSecret);

  return EXIT_SUCCESS;
}
