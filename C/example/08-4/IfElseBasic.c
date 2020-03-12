/*
if, else 가 만나서 이루는 문장의 수는 하나 임을 보여주는 예제이다. 즉 if~else문이 하나의 문장이라는 것.
*/

#include <stdio.h>

int main(void)
{
    int num;
    
    printf("정수 입력 : ");
    scanf("%d", &num);

    if(num<0)
        printf("입력 값은 0보다 작다.\n");
    else
        printf("입력 값은 0보다 작지 않다.\n");

    return 0;
}