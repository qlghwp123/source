//���α׷� ����ڷκ��� ���ܾ �Է� �޾Ƽ� char�� �迭�� �����Ѵ�. �� ���� �迭�� ����� ���ܾ �������� �����´�.
//���� �� ���� �� ������ ��ġ�� �����ؼ��� �� �ȴ�. ������ ������ ����� ������������ Ȯ���ϱ� ���ؼ� ����غ���.
#include <stdio.h>

int main(void)
{
    char str[100];
    char temp;
    int i, len = 0, idx = 0;

    printf("���ܾ �Է��ϼ��� : ");
    scanf("%s", str);

    while (str[idx] != '\0')
        len++, idx++;

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("�������� ������ ���ܾ� : %s\n", str);

    return 0;
}