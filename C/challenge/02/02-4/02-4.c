//ȸ��(Palindrome)�� ������ ������ �ڷ� ������ ���̰� ���� �ܾ���� ���Ѵ�.
//���� �� level, bob�� ���� �ܾ���� ȸ���� ���Ѵ�.
//�̿� �츮�� ���ڷ� ���޵Ǵ� ���ܾ ȸ������ �ƴ����� �Ǵ��ؼ� �� ����� ����ϴ� ����� �Լ��� �����ϰ�
//�̿� ������ main�Լ��� �����غ����� �Ѵ�. �� ������ ���Ǹ� ���ؼ� ��ҹ��ڱ��� ��ġ�ؾ� ȸ������ �����ϱ�� �ϰڴ�.
//(�̴� �������� ������ ���Ǹ� ����� ��������� ���̴�.)
//���ڿ� �Է� : noon
//ȸ�� �Դϴ�.
#include <stdio.h>

void Palindrome(char str[], int len)
{
    int i;
    int count = 0;

    for (i = 0; i < len / 2; i++)
        if (str[i] != str[len - 1 - i])
        {
            printf("ȸ���� �ƴմϴ�.\n");
            return;
        }

    printf("ȸ�� �Դϴ�.\n");
}

int main(void)
{
    char str[30];
    int len = 0;

    printf("���ڿ� �Է� : ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    Palindrome(str, len);

    return 0;
}