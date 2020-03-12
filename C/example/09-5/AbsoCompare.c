/*
호출된 함수 내에서 또 다른 함수를 호출하는 점을 보여주는 예제이다.
즉 main을 포함한 모든 함수는 조건, 상황 관계없이 다른 함수를 호출 가능하다.
*/


#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
    int num1, num2;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    printf("%d와 %d중 절댓값이 큰 정수 : %d\n", num1, num2, AbsoCompare(num1, num2));

    return 0;
}

int AbsoCompare(int num1, int num2)
{
    if(GetAbsoValue(num1) > GetAbsoValue(num2))
        return num1;
    else
        return num2;
}

int GetAbsoValue(int num)
{
    if(num>0)
        return num;
    else
        return -num;
}