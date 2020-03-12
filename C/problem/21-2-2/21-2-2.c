//문제 생략
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20];
    char str2[20];
    char str3[40];

    printf("문자열 입력1 : ");
    fgets(str1, sizeof(str1), stdin);
    printf("문자열 입력2 : ");
    fgets(str2, sizeof(str2), stdin);

    str1[strlen(str1) - 1] = 0;
    str2[strlen(str2) - 1] = 0;

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("결과 : %s\n", str3);

    return 0;
}