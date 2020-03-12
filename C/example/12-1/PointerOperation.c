/*
포인터 연산자들의 간단한 사용법을 배우는 예제이다.
*/
#include <stdio.h>

int main(void)
{
    int num1 = 100, num2 = 100;
    int *pnum;

    pnum = &num1;
    (*pnum) += 30;

    pnum = &num2;
    (*pnum) -= 30;

    printf("num1 : %d, num2 : %d\n", num1, num2);

    return 0;
}