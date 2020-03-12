/*
공용체는 구조체와는 달리 가장 큰 멤버 변수만 메모리에 할당되어서 이를 공유한다.
그렇기에 사이즈도 가장 큰 변수의 사이즈만 출력되고
한 메모리를 공유하기에 멤버들의 시작 주소도 모두 동일하다.
*/
#include <stdio.h>

typedef struct sbox
{
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef union ubox {
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(void)
{
    SBox sbx;
    UBox ubx;

    printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
    printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);

    printf("%d %d\n", sizeof(SBox), sizeof(UBox));

    return 0;
}