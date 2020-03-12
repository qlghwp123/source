/*
Array to ... 관련 함수 사용법이다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[20];

    printf("정수 입력 : ");
    scanf("%s", str);
    printf("%d\n", atoi(str));

    printf("실수 입력 : ");
    scanf("%s", str);
    printf("%g\n", atof(str));

    return 0;
}