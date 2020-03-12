//���� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ���� �� ��
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

    printf("�̸��� ���� �Է� : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;

    printf("�̸��� ���� �Է� : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    count = ExtractName(str1, name1);
    ExtractAge(str1, &age1, count + 1);

    count = ExtractName(str2, name2);
    ExtractAge(str2, &age2, count + 1);

    if (!strcmp(name1, name2))
        printf("�̸��� ���� �����ϴ�.\n");
    else
        printf("�̸��� ���� �ٸ��ϴ�.\n");

    if (age1 == age2)
        printf("���̰� ���� �����ϴ�.\n");
    else
        printf("���̰� ���� �ٸ��ϴ�.\n");

    return 0;
}
*/
//����
int GetSpaceIdx(char str[]) //�ٽ��� �Ǵ� �κ�
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
    int idx1 = GetSpaceIdx(str1); //strncmp�� �ϱ����ؼ� ��������� ����Ʈ�� ���Ѵ�.
    int idx2 = GetSpaceIdx(str2);

    if (idx1 != idx2)
        return 0;
    else
        return !strncmp(str1, str2, idx1); //�̺κ��� �����.
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

    printf("ù ��° ��� ���� �Է� : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;

    printf("�� ��° ��� ���� �Է� : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    if (CompName(str1, str2))
        puts("�̸��� �����մϴ�!");
    else
        puts("�̸��� �������� �ʽ��ϴ�!");

    if (CompAge(str1, str2))
        puts("���̰� �����ϴ�.");
    else
        puts("���̰� ���� �ʽ��ϴ�.");

    return 0;
}