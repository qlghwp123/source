/*
typedef 의 여러 가지 사용법을 보여주고 있다.
*/
#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point;

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
} Person;

int main(void)
{
    Point pos = {10, 20};
    Person man = {"이동근", "010-3045-6088", 24};

    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);

    return 0;
}