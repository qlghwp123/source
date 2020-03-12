/*
포인터 변수의 주소값을 넘겨주기 위하여 매개변수를 더블 포인터로 선언하였다.
*/

#include <stdio.h>

void SwapInPtr(int **ptr1, int **ptr2)
{
    int *temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void)
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;

    ptr1 = &num1, ptr2 = &num2;

    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    SwapInPtr(&ptr1, &ptr2);

    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    return 0;
}