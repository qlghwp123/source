/*
�迭 ���� �ּҸ� ����Ű�� �����͸� ����ؼ� �迭�� �����ϴ� �����̴�.
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