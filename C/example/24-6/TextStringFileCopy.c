/*
���ڿ��� �о ���� ���縦 �ϴ� �����̴�.
*/
#include <stdio.h>

int main(void)
{
    FILE *src = fopen("src.txt", "rt");
    FILE *des = fopen("des.txt", "wt");
    char str[20];

    if (src == NULL || des == NULL)
    {
        puts("���� ���� ����!");
        return -1;
    }

    while (fgets(str, sizeof(str), src) != NULL)
        fputs(str, des);

    if (feof(src) != 0)
        puts("���� ���� �Ϸ�!");
    else
        puts("���� ���� ����!");

    fclose(src);
    fclose(des);

    return 0;
}