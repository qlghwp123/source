//�Է� ���� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��غ���
//���� �� 7�� 2�� �Է� �Ǹ� ������ 3, �������� 1�� ��µǾ�� �Ѵ�.
#include <stdio.h>

int main(void)
{
    int num1, num2;
    int quota, rest;

    printf("�� ������ �Է��ϼ���. : ");
    scanf("%d %d", &num1, &num2);

    quota=num1/num2;
    rest=num1%num2;

    printf("�� : %d ������ : %d\n", quota, rest);

    return 0;
}