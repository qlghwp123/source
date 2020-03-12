/*
여기서 만약 arr[5]에 접근한다면, 컴파일러는 이를 에러라고 판단하지 않는다.
그 이유는 컴파일러는 배열 접근에 대해서 유효성 검사를 하지 않기 때문이다.
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int sum = 0, i;

    arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

    for (i = 0; i < 5; i++)
        sum += arr[i];

    printf("배열요소에 저장된 값의 합 : %d\n", sum);

    return 0;
}