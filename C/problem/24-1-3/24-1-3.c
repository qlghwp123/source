//���� 1�� 2���� ������ ���Ͽ� ����� ���� ��ü�� ����ϴ� ���α׷��� �ۼ�����.
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("mystroy.txt", "rt");
    char str[50];

    while (fgets(str, sizeof(str), fp) != NULL)
        printf("%s", str);

    return 0;
}