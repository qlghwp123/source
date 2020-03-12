/*
실수의 입력과정에서 e 표기법이 사용가능하다.
또한 float double long double 입력은 각각 %f %lf %Lf
     float double long double 출력은 각각 %f %f %Lf
*/


#include <stdio.h>

int main(void)
{

    float num1;
    double num2;
    long double num3;

    printf("실수 입력1(e 표기법으로) : ");
    scanf("%f", &num1);
    printf("입력된 실수 %f\n", num1);

    printf("실수 입력2(e 표기법으로) : ");
    scanf("%lf", &num2);
    printf("입력된 실수 %f\n", num2);

    printf("실수 입력3(e 표기법으로) : ");
    scanf("%lf", &num3);
    printf("입력된 실수 %lf\n", num3);

    return 0;

}