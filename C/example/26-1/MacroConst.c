/*
��ũ�θ� �����ִ� �����̴�.
�ܼ��� ����Ӹ��� �ƴ� �Լ��� ġȯ�� �� ������ �����ش�.
*/

#include <stdio.h>

#define NAME "�̵���"
#define AGE 24
#define PRINT_ADDR puts("�ּ� : �뱸������ �޼��� ���ﵿ\n");

int main(void)
{
    printf("�̸� : %s\n", NAME);
    printf("���� : %d\n", AGE);
    PRINT_ADDR;

    return 0;
}