/*
삼항 연산자를 사용하여 절댓값을 구하는 예제이다.
*/

#include <stdio.h>

int main(void)
{
    int num, abs;

    printf("정수 입력 : ");
    scanf("%d", &num);

    abs = num>0 ? num : -num;

    printf("절댓값 : %d\n", abs);

    return 0;

}