#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_ARR 5

void run_at_exit()
{
    printf("goodbye");
}

void print_arr(int arr[SIZE_ARR])
{
    for (int i = 0; i < SIZE_ARR; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    void (*run_at_exit_ptr)() = run_at_exit;

    char *string = "100";
    int integer = atoi(string);
    float floating = atof(string);
    // more for long, double...

    char *numbers = "10 100", *end;
    float number_1 = strtof(numbers, &end);
    float number_2 = strtof(end, NULL);
    printf("str to %f | %f", number_1, number_2);

    printf("%d\n", integer);
    printf("%f\n", floating);

    // system, execute commands
    char *command;
    // strcpy(command, "pwd");
    // system(command);

    // memcpy, memmove
    int array[SIZE_ARR] = {1, 2, 3, 4, 5};
    print_arr(array);

    int array_2[SIZE_ARR];

    memcpy(array_2, array, SIZE_ARR * sizeof(int));
    print_arr(array_2);

    int array_3[SIZE_ARR];
    memmove(array_3, array_2, SIZE_ARR * sizeof(int));
    print_arr(array_3);

    atexit(run_at_exit_ptr);
    exit(EXIT_SUCCESS);
}
