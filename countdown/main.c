#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int number = 5;
    while (1) {
        printf("%d\n", number);
        sleep(1);
        number -= 1;
        if (number < 0){
            break;
        }
    }

    return EXIT_SUCCESS;
}
