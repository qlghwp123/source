/*
포인터를 대상으로 n 크기만큼 값 증가/감소 시 n * sizeof( TYPE ) 크기만큼 주소 값이 증가/감소 한다.
*/
#include <stdio.h>

int main(void)
{
    int *ptr1 = 0x0010;
    double *ptr2 = 0x0010;

    printf("%p %p\n", ptr1 + 1, ptr1 + 2);
    printf("%p %p\n", ptr2 + 1, ptr2 + 2);

    printf("%p %p\n", ptr1, ptr2);
    ptr1++;
    ptr2++;

    printf("%p %p\n", ptr1, ptr2);

    return 0;
}