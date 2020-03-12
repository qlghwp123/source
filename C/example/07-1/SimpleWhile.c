/*
while문의 간단한 사용법을 보여주는 예제이다.
*/

#include <stdio.h>

int main(void)
{
    int num=0;
    
    while(num<5)
    {
        printf("Hello World! %d\n", num);
        num++;
    }
    return 0;
}