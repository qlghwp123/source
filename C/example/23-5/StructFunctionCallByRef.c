/*
한 점을 원점을 기준으로 대칭이동을 2번 한다.
구조체 변수를 대상으로 Call-By-Reference를 보여준다.
*/
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void OrgSymTrans(Point *ptr)
{
    ptr->xpos = (ptr->xpos) * -1;
    ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main(void)
{
    Point pos = {7, -5};

    OrgSymTrans(&pos);
    ShowPosition(pos);
    OrgSymTrans(&pos);
    ShowPosition(pos);

    return 0;
}
