//�� ���� ������ ���ڷ� �޾Ƽ� �� �� ������ ��������� ��������� ��ȯ�ϴ� ��ũ�� �Լ��� ���� �����غ���.
#include <stdio.h>

#define ADD(A, B, C) ((A) + (B) + (C))
#define MUL(A, B, C) ((A) * (B) * (C))

int main(void)
{
    printf("5+6+7 = %d\n", ADD(5, 6, 7));
    printf("5*6*7 = %d\n", MUL(5, 6, 7));

    return 0;
}