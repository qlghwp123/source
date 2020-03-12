//���� ����ü�� �� ������ ������� ����� ���� ���� �ٲ��ִ� �Լ��� �����ϰ� �̸� ȣ���ϴ� ������ �ۼ��غ���.
//typedef struct point
//{
//  int xpos;
//  int ypos;
//}Point;
//���� �� ������ ���� �� ���� ����ü ������ ����� ���¿���,
//Point pos1={2, 4};
//Point pos2={5, 7};
//�� �� ����ü ������ �������, Ȥ�� �� ����ü ������ �ּ� ���� ������� SwapPoint��� �̸��� �Լ��� ȣ���ϸ�
//pos1�� xpos, ypos���� ���� 5�� 7��, �׸��� pos2�� xpos, ypos���� ���� 2�� 4�� ����Ǿ�� �Ѵ�.
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *pos1, Point *pos2)
{
    Point temp;
    temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

int main(void)
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    printf("[%d, %d], [%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    SwapPoint(&pos1, &pos2);

    printf("[%d, %d], [%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    return 0;
}