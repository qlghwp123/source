/*
����ü ������ �ּ� ���� ����ü ������ ù ��° ��� ������ �ּ� ���� �����ϴ�.
*/

#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void)
{
    struct point pos = {10, 20};
    struct person man = {"�̵���", "010-3045-6088", 24};

    printf("%p %p\n", &pos, &man);
    printf("%p %p\n", &pos.xpos, man.name);

    return 0;
}