/*
콤마 연산자 활용법의 짧은 사례 중 하나이다.
*/

#include <stdio.h>

int main(void)
{
    int num1=1, num2=2;

    printf("Hello"), printf("World!\n");
    num1++, num2++;
    printf("%d ", num1), printf("%d", num2), printf("\n");

    return 0;
}