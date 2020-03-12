/*
while문으로 무한루프를 돌려서 break문을 쓰는 예제이다.
*/


#include <stdio.h>

int main(void)
{
    int sum=0, num=0;

    while(1)
    {
        sum +=num;

        if(sum>5000)
            break;

        num++;

    }

    printf("sum : %d\n", sum);
    printf("num : %d\n", num);

    return 0;
}