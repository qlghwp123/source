/*
C언어에서의 키보드로부터의 데이터 입력이다.
*/
#include <stdio.h>

int main(void)
{
    int result;
    int num1, num2;

    printf("정수 one : ");
    scanf("%d", &num1);
    printf("정수 two : ");
    scanf("%d", &num2);

    result=num1+num2;
    printf("%d + %d = %d\n", num1, num2, result);

    return 0;

}