/*
��ȯ��, �Ű����� ������ ���� 4������ ��쿡 �ش��ϴ� �Լ����� �ۼ��ؼ� �����ִ� �����̴�.
*/

#include <stdio.h>

int Add(int num1, int num2) //��ȯ�� O, �Ű����� O
{
    return num1 + num2;
}

void ShowAddResult(int num) //��ȯ�� X, �Ű����� O
{
    printf("������� ��� : %d\n", num);
}

int ReadNum(void)           //��ȯ�� O, �Ű����� X
{
    int num;

    scanf("%d", &num);

    return num;
}

void HowToUseThisProg(void) //��ȯ�� X, �Ű����� X
{
    printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
    printf("��! �׷� �� ���� ������ �Է��ϼ���.\n");
}

int main(void)
{
    int result, num1, num2;

    HowToUseThisProg();
    num1 = ReadNum();
    num2 = ReadNum();
    result = Add(num1, num2);
    ShowAddResult(result);

    return 0;
}