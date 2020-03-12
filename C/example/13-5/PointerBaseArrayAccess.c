/*
배열 시작 주소를 가리키는 포인터를 사용해서 배열에 접근하는 예제이다.
arr[i] == *(arr+i)
*/

#include <stdio.h>

int main(void)
{
    int arr[3] = {11, 22, 33};
    int *ptr = arr;

    printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr--;
    printf("%d\n", *ptr);
    ptr--;
    printf("%d\n", *ptr);

    return 0;
}