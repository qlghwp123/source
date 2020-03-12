//길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화한 다음, 이 배열의 첫 번째 요소를
//가리키는 포인터 변수 ptr을 선언한다. 그 다음 포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을
//기반으로 배열요소에 접근하면서 모든 배열요소의 값을 2씩 증가시키고, 정상적으로 증가가 이뤄졌는지 확인하는
//예제를 작성해보자.
#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int i, len;

    len = sizeof(arr) / sizeof(int);

    for (i = 0; i < len; i++)
        *ptr++ += 2;

    for (i = 0; i < len; i++)
        ptr--;

    for (i = 0; i < len; i++)
        printf("%d ", *ptr++);

    return 0;
}