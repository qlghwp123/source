/*
2~9단까지 while문 중첩을 사용한 구구단 출력 예제이다.
*/

#include <stdio.h>

int main(void)
{
    int cur=2;
    int is;
    
    while(cur<10)
    {
        is=1;

        while(is<10)
        {
            printf("%d X %d = %d\n", cur, is, cur*is);
            is++;
        }

        printf("\n");
        cur++;
    }
    return 0;
}