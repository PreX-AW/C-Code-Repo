#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() {
    char input;
    while (1==getchar(input)) {
        getchar();
        if (input >= 65 && input  <= 90)
            printf("%c is an alphabet.\n", input);
        else if (input  >= 97 && input  <= 122)
            printf("%c is an alphabet.\n", input);
        else
            printf("%c is not an alphabet.\n", input);

    }


    return 0;
}