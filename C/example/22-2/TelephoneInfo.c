/*
구조체 멤버로 배열이 있을 때, 배열의 접근방식을 그대로 사용함을 보여준다.
*/
#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void)
{
    struct person man1, man2;
    strcpy(man1.name, "이동근");
    strcpy(man1.phoneNum, "010-3045-6088");
    man1.age = 24;

    printf("이름 입력 : ");
    scanf("%s", man2.name);
    printf("번호 입력 : ");
    scanf("%s", man2.phoneNum);
    printf("나이 입력 : ");
    scanf("%d", &(man2.age));

    printf("이름 : %s\n", man1.name);
    printf("번호 : %s\n", man1.phoneNum);
    printf("나이 : %d\n", man1.age);

    printf("이름 : %s\n", man2.name);
    printf("번호 : %s\n", man2.phoneNum);
    printf("나이 : %d\n", man2.age);

    return 0;
}
