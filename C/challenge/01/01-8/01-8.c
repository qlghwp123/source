//2�� n���� ���ϴ� �Լ��� ��������� ������ ����. �׸��� �׿� ���� ������ main�Լ��� ������ ����.
//����� ����Լ��� ������ ó������ ����� ���̱� ������ ���⼭�� ���� ������ �����Ͽ���.(������ �Ұ��� �������ٵ� ���� ������.)
//���� �Է� : 8
//2�� 8���� 256
#include <stdio.h>

int involution(int num)
{
    static int result = 1;

    if(num == 0)
        return result;
    else
        return 2*involution(--num);
}

int main(void)
{
    int num, result;

    printf("���� �Է� : ");
    scanf("%d", &num);

    result=involution(num);

    printf("2�� %d���� %d", num, result);

    return 0;
}