/*
중괄호 내에 선언되는 변수는 모두 지역변수임을 보여주는 예제이다.
*/

#include <stdio.h>

int SimpleFuncOne(void)
{
    int num=10;

    num++;
    printf("SimpleFuncOne num : %d\n", num);

    return 0;
}

int SimpleFuncTwo(void)
{
    int num1=20;
    int num2=30;

    num1++, num2--;
    printf("SimpleFuncTwo num1 : %d, num2 : %d\n", num1, num2);

    return 0;
}

int main(void)
{
    int num=17;

    SimpleFuncOne();
    SimpleFuncTwo();

    printf("main num : %d\n", num);

    return 0;
}