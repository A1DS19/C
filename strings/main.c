#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_substring(char string[], char substring[]) {
    char *psub = strstr(string, substring);

    if (psub) {
        return 1;
    }

    return -1;
}

int main(int argc, char *argv[])
{
    char str[] = "qwe123";
    char str2[] = {'1', '2', '3', '4', '5'};

    printf("%s\n", str);

    char days[][10] = {
        "monday",
        "thuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday",
        "sunday"
    };

    // array full of memory addresses pointing to strings
    char *days_ptrs[] = {
        "monday",
        "thuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday",
        "sunday"
    };

    for (int i = 0; i < 7; i++) {
        printf("%s\n", days_ptrs[i]);
    }

    char str3[] = "I love myself and love programming, I'm the best!";
    char str4[] = "I love myself and love programming, I'm the best!!";

    printf("%lu\n", strlen(str3));
    printf("%d\n", strcmp(str3, str4));

    char str5[] = "I love";
    char str6[] = "love";
    printf("substring: %d\n", find_substring(str5, str6));

    return EXIT_SUCCESS;
}

