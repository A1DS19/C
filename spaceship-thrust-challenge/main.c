#include <stdio.h>
#include <stdlib.h>

typedef enum {
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20
} ThrustLevels;

int main(int argc, char *argv[])
{
 printf("NONE %d\n", NONE);
 printf("LOW %d\n", LOW);
 printf("MEDIUM %d\n", MEDIUM);
 printf("HIGH %d\n", HIGH);
 printf("MAXIMUM %d\n", MAXIMUM);

  return EXIT_SUCCESS;
}
