#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  float radius;
  double pi = 3.14159265358979323846;

  printf("Radius: ");
  scanf("%f", &radius);

  float area = 4 * pi * powf(radius, 2.);
  printf("area %f\n", area);

  float volume = (4. / 3.) * pi * powf(radius, 3.);
  printf("volume %f\n", volume);

  return EXIT_SUCCESS;
}
