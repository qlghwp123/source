/*
int 형 배열요소 간 주소 값의 차는 4바이트인 것을 보여준다.
즉 배열이 나란히 있다는 것을 입증한다.
또한 배열의 이름은 배열 시작 주소 값을 의미 그 형태는 값의 저장이 불가능한 상수이다.
*/
#include <stdio.h>

int main(void)
{
    int arr[3] = {0, 1, 2};

    printf("배열의 이름 : %p\n", arr);
    printf("첫 번째 요소 : %p\n", &arr[0]);
    printf("두 번째 요소 : %p\n", &arr[1]);
    printf("세 번째 요소 : %p\n", &arr[2]);

    return 0;
}