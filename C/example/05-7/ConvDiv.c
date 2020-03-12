/*
명시적 형 변환을 알게되는 예제이다.
*/

#include <stdio.h>

int main(void)
{
    int num1=3, num2= 4;
    double divResult;

    //divResult = (double) num1/num2;
    divResult = num1/num2;

    printf("나눗셈 결과 : %f\n", divResult);

    return 0;
}