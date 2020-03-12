/*
실제로 배열 이름이 첫 번째 요소의 주소를 나타내는지 알아보는 예제이다.
*/
#include <stdio.h>

int main(void)
{
    int arr1[3] = {1, 2, 3};
    double arr2[3] = {1.1, 2.2, 3.3};

    printf("%d %g\n", *arr1, *arr2);
    *arr1 += 100;
    *arr2 += 120.5;

    printf("%d %g\n", arr1[0], arr2[0]);

    return 0;
}