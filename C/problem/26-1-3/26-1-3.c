//두 값의 크기를 비교하여 큰 값을 반환하는 매크로 함수 MAX를 정의해보자. 참고로 이는 조건 연산자를 이용해서 정의하는 것이 바람직하다.
#include <stdio.h>

#define MAX(A, B) ((A) > (B)) ? (A) : (B)

int main(void)
{
    printf("2+5와 8 중 누가 더 큰 수인가? %d\n", MAX(2 + 5, 8));

    return 0;
}