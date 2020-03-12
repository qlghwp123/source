/*
쉬프트 연산자 오른쪽 이동에 관하여 연습하는 코드이다.
오른쪽으로 한 칸씩 갈 때마다 좌항의 피연산자는 2씩 나누어진다.
*/

#include <stdio.h>

int main(void)
{
    int num=-16;

    printf("2칸 오른쪽 이동의 결과 : %d\n", num>>2);
    printf("3칸 오른쪽 이동의 결과 : %d\n", num>>3);

    return 0;
}