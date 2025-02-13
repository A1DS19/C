#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#define MAX_DIMENSIONS 3
#define MAX_ARR_LEN 3 

typedef struct Person{
  char *name;
  bool active;
  int dimensions;
  double pos[MAX_DIMENSIONS];
} Person;

typedef struct Sample {
  double temperature;
  time_t timestamp;
} Sample;

int main(int argc, char *argv[])
{
  Person elon = {
    .name = "elon",
    true,
    3,
    {1,2,3}
  };

  Person bill = {
    .name = "bill",
    .active = true,
    .dimensions = 3,
    .pos = {1,2,3},
  };

  Person *people[MAX_ARR_LEN] = {
    &elon,
    &bill,
    &elon
  };

  for (int i = 0; i < MAX_ARR_LEN; i++) {
    printf("%d | %s \n", i, people[i]->name);
  }

  Sample samples[MAX_ARR_LEN];

  for (int i = 0; i < MAX_ARR_LEN; i++) {
    samples[i].temperature = 10;
    samples[i].timestamp = time(NULL);
    sleep(1);
  }

  for (int i = 0; i < MAX_ARR_LEN; i++) {
    printf("%lf\n", samples[i].temperature);
  }

  return EXIT_SUCCESS;
}
