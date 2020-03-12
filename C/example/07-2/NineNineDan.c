/*
while문을 사용하여 표현한 구구단 예제이다.
*/

#include <stdio.h>

int main(void)
{

    int dan=0, num=1;

    printf("몇 단?");
    scanf("%d", &dan);

    while(num<10)
    {
        printf("%d X %d = %d\n", dan, num, dan*num);
        num++;
    }

    return 0;

}