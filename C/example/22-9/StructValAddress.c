/*
구조체 변수의 주소 값은 구조체 변수의 첫 번째 멤버 변수의 주소 값과 동일하다.
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
    struct person man = {"이동근", "010-3045-6088", 24};

    printf("%p %p\n", &pos, &man);
    printf("%p %p\n", &pos.xpos, man.name);

    return 0;
}