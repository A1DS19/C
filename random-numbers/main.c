#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int random_number(int max) {
    int x = rand() % max;
    return x;
}

int main(int argc, char *argv[]) {
    srand(getpid());
    int number = random_number(100);
    printf("%d\n", number);

    return EXIT_SUCCESS;
}
