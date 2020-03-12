/*
이전 예제에서 Swap 을 올바르게 쓴 경우이다.
*/
#include <stdio.h>

void Swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    printf("num1 num2 : %d %d\n", num1, num2);
    Swap(&num1, &num2);
    printf("num1 num2 : %d %d\n", num1, num2);

    return 0;
}