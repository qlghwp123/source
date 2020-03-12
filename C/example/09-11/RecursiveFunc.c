/*
재귀함수의 기초적인 예제이다. 또한 탈출 조건이 중요함을 보여준다.
*/

#include <stdio.h>

void Recursive(int num)
{
    if(num<=0)      //재귀의 탈출조건
        return;
    
    printf("Recursive call : %d\n", num);
    Recursive(num-1);
}

int main(void)
{
    Recursive(3);

    return 0;
}