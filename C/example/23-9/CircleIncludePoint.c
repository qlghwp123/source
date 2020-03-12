/*
구조체 내 구조체가 있으면 main 함수 내 초기화하는 것처럼 중괄호로 구분지을 수 있다.
*/
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct circle
{
    Point cen;
    double rad;
} Circle;

void ShowCircleInfo(Circle *cptr)
{
    printf("[%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
    printf("radius %g\n\n", cptr->rad);
}

int main(void)
{
    Circle c1 = {{1, 2}, 3.5};
    Circle c2 = {2, 4, 3.9};

    ShowCircleInfo(&c1);
    ShowCircleInfo(&c2);

    return 0;
}