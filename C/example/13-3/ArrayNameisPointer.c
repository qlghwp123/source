/*
배열을 가리키는 포인터 변수를 배열의 이름처럼 사용 가능하다.
*/
#include <stdio.h>

int main(void)
{
    int arr[3] = {15, 25, 35};
    int *ptr = &arr[0];

    printf("%d %d\n", ptr[0], arr[0]);
    printf("%d %d\n", ptr[1], arr[1]);
    printf("%d %d\n", ptr[2], arr[2]);

    return 0;
}