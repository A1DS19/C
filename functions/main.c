#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int number) {
    if (number % 2 == 0) {
        return false;
    }

    return true;
}

int main(int argc, char *argv[]) {
    const int MAX = 1000;
    int upper_limit = 0;
    int lower_limit = 0;

    printf("lower limit:\n");
    scanf("%d", &lower_limit);

    printf("upper limit:\n");
    scanf("%d", &upper_limit);

    for (int i = 0; i <= upper_limit; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }

    for (int i = lower_limit; i <= MAX; i++) {
        if (is_prime(i)){
            printf("%d\n", i);
            break;
        }
    }

    return EXIT_SUCCESS;
}
