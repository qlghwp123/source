/*
void 포인터의 사용법을 보여준다.
*/

#include <stdio.h>

void SoSimpleFunc(void)
{
    printf("I'm so simple.");
}

int main(void)
{
    int num = 20;
    void *ptr;

    ptr = &num;
    printf("%p \n", ptr);

    ptr = SoSimpleFunc;
    printf("%p \n", ptr);

    return 0;
}