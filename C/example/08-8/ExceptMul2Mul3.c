/*
continue 문은 가장 가까이에 있는 반복문의 조건 검사 부분으로 이동한다.
*/

#include <stdio.h>

int main(void)
{
    int num;
    
    printf("start!\n");

    for(num=1;num<20;num++)
    {
        if(num%2 == 0 || num%3 ==0)
            continue;
        
        printf("%d\n", num);
    }
    printf("end!\n");
    return 0;
}