/*
배열 이름을 대상으로 증가 및 감소 연산을 할 경우,
결과는 각 행의 첫 번째 요소의 주소 값이 된다.
때문에 2차원 배열을 이루는 요소의 자료형이 같더라도 배열의 가로길이가 다르면
포인터 연산의 결과는 달라진다.
*/
#include <stdio.h>

int main(void)
{
    int arr1[3][2];
    int arr2[2][3];

    printf("arr1 : %p \n", arr1);
    printf("arr1+1 : %p \n", arr1 + 1);
    printf("arr1+2 : %p \n", arr1 + 2);

    printf("arr2 : %p \n", arr2);
    printf("arr2+1 : %p \n", arr2 + 1);

    return 0;
}