/*
포인터 값을 서로 바꾸는 잘못된 예제이다.
포인터 변수의 저장된 값을 바꿀려면 변수의 주소값을 넘겨줘야한다.
*/
#include <stdio.h>

void SwapInPtr(int *ptr1, int *ptr2)
{
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main(void)
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;

    ptr1 = &num1, ptr2 = &num2;

    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    SwapInPtr(ptr1, ptr2);
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    return 0;
}