/*
부동소수점 오차를 설명하기 위한 소스코드이다.
*/

#include <stdio.h>

int main(void)
{
    int i;
    float num=0.0;

    for(i=0;i<100;i++)
        num+=0.1;
    
    printf("0.1을 100번 더한 결과 : %f\n", num);

    return 0;

}