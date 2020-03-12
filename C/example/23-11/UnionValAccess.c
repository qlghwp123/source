/*
공용체는 가장 큰 크기를 가지는 멤버의 메모리를 공유한다는 것을 보여주는 예제이다.
*/
#include <stdio.h>

typedef union ubox {
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(void)
{
    UBox ubx;

    ubx.mem1 = 20; //상위 4바이트의 메모리 공간에 저장.
    printf("%d\n", ubx.mem2);

    ubx.mem3 = 7.15; //위 16행 값을 덮어써버리게 됨.

    printf("%d\n", ubx.mem1); //실수를 저장했기에
    printf("%d\n", ubx.mem2); //알 수 없는 값이 나옴.
    printf("%g\n", ubx.mem3);

    return 0;
}