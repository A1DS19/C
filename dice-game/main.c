#include <stdio.h>
#include <stdlib.h>

int *marica(){
    int *mariquita = malloc(sizeof(int));
    *mariquita = 20;
    return mariquita;
}

int main(int argc, char *argv[]) {
    int *mariquin_numero = marica();
    printf("%d\n", *mariquin_numero);
    free(mariquin_numero);

    return EXIT_SUCCESS;
}
