/*
컴파일 시 에러를 낸다.
이처럼 매크로를 잘못 정의할 경우, 에러 메시지는 선행처리 이전의 소스파일을 기준이 아닌, 선행처리 이후의 소스파일을 기준으로 출력이 된다. 그래서 이해하기가 힘들다는 단점이 있다.
*/
#include <stdio.h>

#define DIFF_ABS(X, Y) ((x) > (y) ? (x) - (y) : (y) - (x))

int main(void)
{
    printf("두 값의 차 : %d\n", DIFF_ABS(5, 7));
    printf("두 값의 차 : %g\n", DIFF_ABS(1.8, -1.4));

    return 0;
}