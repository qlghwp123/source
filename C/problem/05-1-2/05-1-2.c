//���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ� double��
//������ ��������. �׸��� �� ���� ��Ģ���� ����� ����غ���.

#include <stdio.h>

int main(void)
{
    double num1, num2;
    double add, sub, mul, div;

    printf("�� ���� �Ǽ��� �Է��ϼ���. : ");
    scanf("%lf %lf", &num1, &num2);

    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;

    printf("���� : %f\n", add);
    printf("���� : %f\n", sub);
    printf("���� : %f\n", mul);
    printf("������ : %f\n", div);

    return 0;
}