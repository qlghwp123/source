/*
구조체 변수 멤버에 포인터가 있을 경우의 사용법이다.
*/
#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct circle
{
    double radius;
    struct point *center;
};

int main(void)
{
    struct point cen = {2, 7};
    double rad = 5.5;

    struct circle ring = {rad, &cen};
    printf("원의 반지름 : %g\n", ring.radius);
    printf("원의 중심 : [%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos); //소괄호 생략 가능

    return 0;
}