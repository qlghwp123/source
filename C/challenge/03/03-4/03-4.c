//중략
//두 개의 주사위를 던졌을 때의 결과를 출력하는 프로그램을 작성해보자.
//물론 그 결과는 예측이 불가능해야 한다.
//주사위 1의 결과 : 2
//주사위 2의 결과 : 6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;

    srand(time(NULL));

    for (i = 0; i < 2; i++)
        printf("주사위 %d의 결과 : %d\n", i + 1, rand() % 6 + 1);

    return 0;
}