/*
구조체 변수의 초기화는 배열의 초기화와 거의 유사하다.
그런데 문자열 저장을 위해 strcpy 함수를 호출하지 않아도 된다.
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

    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);

    return 0;
}
