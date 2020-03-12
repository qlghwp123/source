/*
2차원 배열 각 요소들의 주소를 보는 예제이다.
*/
#include <stdio.h>

int main(void)
{
    int arr[3][2];
    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            printf("%p\n", &arr[i][j]);

    return 0;
}