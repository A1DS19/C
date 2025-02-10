#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum {
    TEA,
    COFFEE,
    JUICE,
    BEER
} Menu;

int main(int argc, char *argv[]) {
    const uint8_t marica = 10U;
    printf("%12d\n", marica);

    uint8_t max_u = UINT8_MAX;
    printf("%12u\n", max_u);

    int8_t max = INT8_MAX;
    printf("%12d\n", max);

    const double world_population = 7.801E9;
    printf("%12.1f\n", world_population);
    printf("%12.3f\n", world_population);
    printf("%12.3e\n", world_population);

    const double world_plants = 10.923E10;
    printf("%12.3f\n", world_plants);

    char character = 'A';
    printf("Numerical char: %d\n", character);
    printf("char: %c\n", character);
    character = 66;
    printf("char: %c\n", character);

    printf("insert character: ");
    character = getchar();
    printf("char: %c\n", character);

    const bool is_true = true;
    printf("bool: %d\n", is_true);

    const Menu tea = TEA;
    const Menu coffee = COFFEE;
    printf("tea %d\n", tea);

  return EXIT_SUCCESS;

}
