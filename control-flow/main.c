#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    bool result = 1 > 0 ? true : false;
    printf("%b\n", result);

    switch (result) {
        case true:
            printf("true\n");
            break;
        case false:
            printf("false\n");
            break;
        default:
            printf("default\n");
            break;
    }

    int counter = 0;
    while (counter < 100) {
        printf("running\n");
        counter++;
    }

    if (1 < 2) {
        // only use to break out of nested loops
        // error handling and cleanup
        goto final;
    }

    final:
        printf("final");

    return EXIT_SUCCESS;
}
