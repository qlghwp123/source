/*
static :
프로그램 시작과 동시에 할당 및 초기화가 되어서 프로그램이 종료될 때까지 메모리 공간에 남아있으나
접근 범위를 해당 함수에 제한하기 위해서이다.
*/
#include <stdio.h>

void SimpleFunc(void)
{
    static int num1=0;
    int num2=0;

    num1++, num2++;
    printf("static : %d, local : %d\n", num1, num2);
}

int main(void)
{
    int i;

    for(i=0;i<3;i++)
        SimpleFunc();

    return 0;
}