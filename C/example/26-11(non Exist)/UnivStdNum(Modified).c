/*
##연산자를 사용해서 이전의 예제 목적(학번출력)을 달성할 수 있게 되었다.
*/

#include <stdio.h>

//#define STNUM(Y, S, P) YSP
//#define STNUM(Y, S, P) Y S P
//#define STNUM(Y, S, P) ((Y)*100000 + (S)*1000 + (P))
#define STNUM(Y, S, P) Y##S##P

int main(void)
{
    printf("학번 : %d\n", STNUM(10, 65, 175));
    printf("학번 : %d\n", STNUM(10, 65, 075));

    return 0;
}