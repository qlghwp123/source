/*
EOF를 알아보는 예제이다. CTRL + Z 아니면 반복문이 끝나지 않는다.
*/

#include <stdio.h>

int main(void)
{
    int ch;

    while (1)
    {
        ch = getchar();
        if (ch == EOF)
            break;
        putchar(ch);
    }

    return 0;
}