#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("===^^===\n");

    printf("Enter a number: \n");
    int number;
    scanf("%d", &number);

    printf("Decimal: %5d\n", number);
    printf("Hexadecimal: %5X\n", number);

    printf("===^^===");

    return EXIT_SUCCESS;
}
