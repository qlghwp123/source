/*
앞선 예제와 마찬가지로 의도와는 다른 잘못된 사용을 보여주고 있다.
*/
#include <stdio.h>

char name[30];

char *ReadUserName(void)
{
    printf("What's your name? ");
    gets(name);

    return name;
}

int main(void)
{
    char *name1;
    char *name2;

    name1 = ReadUserName();
    printf("name1 : %s\n", name1);

    name2 = ReadUserName();
    printf("name2 : %s\n", name2);

    printf("name1: %s\n", name1);
    printf("name2: %s\n", name2);

    return 0;
}