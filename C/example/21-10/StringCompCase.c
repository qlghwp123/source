/*
strcmp, strncmp�� ��� ����� ���δ�.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20];
    char str2[20];

    printf("���ڿ� �Է� : ");
    scanf("%s", str1);
    printf("���ڿ� �Է� : ");
    scanf("%s", str2);

    if (!strcmp(str1, str2))
        puts("�� ���ڿ��� �Ϻ��� �����մϴ�.\n");
    else
    {
        puts("�� ���ڿ��� �������� �ʽ��ϴ�.\n");

        if (!strncmp(str1, str2, 3))
            puts("�׷��� �� �� ���ڴ� �����մϴ�.\n");
    }

    return 0;
}