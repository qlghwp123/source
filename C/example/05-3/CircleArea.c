/*
�Ǽ� �ڷ��� ���ÿ� �־� ���� �߿��� ��Ҵ� ���е��̴�.
double�� 15�ڸ� ���ϱ����� ������ ������ �����ش�.
double�� ������ ��¿��� %f�� ���� �Է� ���� %lf�� ����.
*/
#include <stdio.h>

int main(void)
{
    double rad;
    double area;

    printf("���� ������ �Է� : ");
    scanf("%lf", &rad);

    area = rad*rad*3.14;

    printf("���� ���� : %f\n", area);

    return 0;

}