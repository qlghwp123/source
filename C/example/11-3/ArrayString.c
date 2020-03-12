/*
문자열 입문에 관련한 예제이다.
널 문자의 값 출력에 관하여 다루고 있다.
*/

#include <stdio.h>

int main(void)
{
    char str[] = "Good Morning!";

    printf("배열 str의 크기 : %d\n", sizeof(str));
    printf("널 문자 문자형 출력 : %c\n", str[13]);
    printf("널 문자 정수형 출력 : %d\n", str[13]);

    str[12] = '?';

    printf("문자열 출력 : %s\n", str);

    return 0;
}