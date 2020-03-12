//프로그램 사용자로부터 두 개의 실수를 입력 받아서 double형
//변수에 저장하자. 그리고 두 수의 사칙연산 결과를 출력해보자.

#include <stdio.h>

int main(void)
{
    double num1, num2;
    double add, sub, mul, div;

    printf("두 개의 실수를 입력하세요. : ");
    scanf("%lf %lf", &num1, &num2);

    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;

    printf("덧셈 : %f\n", add);
    printf("뺄셈 : %f\n", sub);
    printf("곱셈 : %f\n", mul);
    printf("나눗셈 : %f\n", div);

    return 0;
}