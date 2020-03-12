/*
do~while의 사용법을 보여주는 간단한 예제이다.
0을 입력하기 전까지의 모든 입력의 합을 구하는 예제.
*/

#include <stdio.h>

int main(void)
{
    int total=0, num=0;

    do
    {
        printf("정수 입력(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    } while (num != 0 );

    printf("합계 : %d\n", total);
    
    return 0;
}