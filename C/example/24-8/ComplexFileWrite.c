/*
fprint사용법을 보인다.
19행은 scanf함수는 엔터 키의 입력을 읽어 들이지 않고 입력버퍼에 남겨둔다. 따라서 입력 버퍼에 남아있는 엔터키의 소멸을 위해서 호출.
*/
#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE *fp = fopen("friend.txt", "wt");
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("이름 성별 나이 순 입력 : ");
        scanf("%s %c %d", name, &sex, &age);
        getchar();
        fprintf(fp, "%s %c %d", name, sex, age);
    }

    fclose(fp);

    return 0;
}