/*
문자열의 끝을 알리는 널 문자를 여러 군데 넣어봄으로써 문자열의 특성을 이해하는 예제이다.
*/

#include <stdio.h>

int main(void)
{
    char str[50] = "I like C programming";
    printf("string : %s\n", str);

    str[8] = '\0';
    printf("string : %s\n", str);

    str[6] = '\0';
    printf("string : %s\n", str);

    str[1] = '\0';
    printf("string : %s\n", str);

    return 0;
}