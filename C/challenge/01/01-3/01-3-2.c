//유클리드 호제법(재귀 함수를 사용한 방법)
#include <stdio.h>

int Euclidean(int big, int small)
{
    int quotient, rest;

    quotient = small;
    rest = big % small;

    if( rest == 0)
        return quotient;
    else
        Euclidean(quotient, rest);
}

int main(void)
{
    int num1, num2;
    int big, small;
    int gcd;

    printf("두 수를 입력하세요. : ");
    scanf("%d %d", &num1, &num2);

    big = num1>num2 ? num1 : num2;
    small = num1>num2 ? num2 : num1;

    gcd=Euclidean(big, small);

    printf("GCD of Euclidean's Algorithm : %d\n", gcd);

    return 0;
}