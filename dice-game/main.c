#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define BALANCE 1000

int generate_number(){
    return rand() % 7;
}

int main(int argc, char *argv[]) {
    int balance = BALANCE;
    int break_loop = 1;

    srand(getpid());

    do {
        printf("bet(quit with -1):\n");
        int bet = 0;
        scanf("%d", &bet);

        if (bet == -1) {
            break_loop = -1;
        }

        int guess = 0;
        printf("guess between 0-6\n");
        scanf("%d", &guess);
        sleep(2);
        int result = generate_number();

        if (guess == result){
            printf("you won\n");
            balance *= 3;
        } else {
            printf("you lost: %d", result);
            balance -= bet;
        }

    }while (break_loop == 1);

    return EXIT_SUCCESS;
}
