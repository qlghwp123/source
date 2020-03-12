//원주율 PI를 매크로 상수로 정의하고 이를 이용해서 원의 넓이를 구하는 매크로 함수 AREA를 정의해보자.
#include <stdio.h>

#define PI 3.141592
#define AREA(R) (((R) * (R)) * (PI))

int main(void)
{
    printf("반지름 3의 원의 넓이 : %g\n", AREA(3));

    return 0;
}