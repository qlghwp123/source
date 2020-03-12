/*
putchar, getchar, fputc, fgetc 를 다루고 있다.
*/

#include <stdio.h>

int main(void)
{
    int ch1, ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin);

    putchar(ch1);
    fputc(ch2, stdout);

    return 0;
}