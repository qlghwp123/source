/*
키보드로부터 여러 개의 값을 입력 받는다.
스페이스로 구분될까 엔터로 구분될까?
-------------------------------------
엔터와 스페이스 둘다 된다.
*/

#include <stdio.h>

int main(void)
{
    int result;
    int num1, num2, num3;

    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result=num1+num2+num3;

    printf("%d + %d + %d = %d\n", num1, num2, num3, result);

    return 0;

}