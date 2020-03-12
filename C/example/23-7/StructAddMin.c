/*
구조체 변수 멤버 간 덧셈과 뺄셈을 정의하였다.
일반적으로 이런 덧셈 뺄셈과 같은 연산을 정형화하기는 어렵기 때문에
프로그래머가 함수로 정의해줘야한다.
*/
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2)
{
    Point pos = {pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos};
    return pos;
}

Point MinPoint(Point pos1, Point pos2)
{
    Point pos = {pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos};
    return pos;
}

int main(void)
{
    Point pos1 = {5, 6};
    Point pos2 = {2, 9};
    Point result;

    result = AddPoint(pos1, pos2);
    printf("[%d, %d]\n", result.xpos, result.ypos);
    result = MinPoint(pos1, pos2);
    printf("[%d, %d]\n", result.xpos, result.ypos);

    return 0;
}