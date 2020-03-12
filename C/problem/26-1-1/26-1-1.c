//세 개의 정수를 인자로 받아서 이 세 정수의 덧셈결과와 곱셈결과를 반환하는 매크로 함수를 각각 정의해보자.
#include <stdio.h>

#define ADD(A, B, C) ((A) + (B) + (C))
#define MUL(A, B, C) ((A) * (B) * (C))

int main(void)
{
    printf("5+6+7 = %d\n", ADD(5, 6, 7));
    printf("5*6*7 = %d\n", MUL(5, 6, 7));

    return 0;
}