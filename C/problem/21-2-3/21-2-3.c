//문제 생략
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 내가 한 것
int ExtractName(char str[], char name[])
{
    int count = 0;
    while (str[count] != ' ')
        name[count++] = str[count];

    name[count] = 0;

    return count;
}

void ExtractAge(char str[], int *age, int count)
{
    char temp[100];
    int i = 0;

    while (str[count] != 0)
        temp[i++] = str[count++];

    temp[i] = 0;
    *age = atoi(temp);
}

int main(void)
{
    char str1[100];
    char str2[100];
    char name1[100];
    char name2[100];
    int age1;
    int age2;
    int count;

    printf("이름과 나이 입력 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;

    printf("이름과 나이 입력 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    count = ExtractName(str1, name1);
    ExtractAge(str1, &age1, count + 1);

    count = ExtractName(str2, name2);
    ExtractAge(str2, &age2, count + 1);

    if (!strcmp(name1, name2))
        printf("이름이 서로 같습니다.\n");
    else
        printf("이름이 서로 다릅니다.\n");

    if (age1 == age2)
        printf("나이가 서로 같습니다.\n");
    else
        printf("나이가 서로 다릅니다.\n");

    return 0;
}
*/
//답지
int GetSpaceIdx(char str[]) //핵심이 되는 부분
{
    int len, i;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            return i;
    }
    return -1;
}

int CompName(char str1[], char str2[])
{
    int idx1 = GetSpaceIdx(str1); //strncmp를 하기위해서 공백까지의 바이트를 구한다.
    int idx2 = GetSpaceIdx(str2);

    if (idx1 != idx2)
        return 0;
    else
        return !strncmp(str1, str2, idx1); //이부분이 놀랐다.
}

int CompAge(char str1[], char str2[])
{
    int idx1 = GetSpaceIdx(str1);
    int idx2 = GetSpaceIdx(str2);
    int ag1, ag2;

    ag1 = atoi(&str1[idx1 + 1]);
    ag2 = atoi(&str2[idx2 + 1]);

    if (ag1 == ag2)
        return 1;
    else
        return 0;
}

int main(void)
{
    char str1[20];
    char str2[20];

    printf("첫 번째 사람 정보 입력 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;

    printf("두 번째 사람 정보 입력 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    if (CompName(str1, str2))
        puts("이름이 동일합니다!");
    else
        puts("이름이 동일하지 않습니다!");

    if (CompAge(str1, str2))
        puts("나이가 같습니다.");
    else
        puts("나이가 같지 않습니다.");

    return 0;
}