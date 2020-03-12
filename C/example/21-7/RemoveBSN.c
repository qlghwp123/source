/*
문자열의 길이를 반환하는 함수인 strlen을 소개하는 예제이다.
여기서는 fgets로 입력 받은 문자열 중 개행을 지우려고 한다.
*/

#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
    int len = strlen(str);
    str[len - 1] = 0;
}

int main(void)
{
    char str[100];

    printf("문자열 입력 : ");
    fgets(str, sizeof(str), stdin);

    printf("길이 : %d, 내용 : %s\n", strlen(str), str);

    RemoveBSN(str);

    printf("길이 : %d, 내용 : %s\n", strlen(str), str);

    return 0;
}