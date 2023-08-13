#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print alphabet in lowercase then Upper using putchar
* Return:0
*/
int main() {
    char letter = 'a';

    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}
