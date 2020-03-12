/*
쉬프트 연산자 왼쪽 이동했을 때 결과 값을 볼 수 있다.
즉 어떤 해당 값을 2배씩 증가시킨다.
*/

#include <stdio.h>

int main(void)
{
    int num= 15;

    int result1=num<<1;
    int result2=num<<2;
    int result3=num<<3;

    printf("1칸 이동 결과 : %d\n", result1);
    printf("2칸 이동 결과 : %d\n", result2);
    printf("3칸 이동 결과 : %d\n", result3);


    return 0;
}