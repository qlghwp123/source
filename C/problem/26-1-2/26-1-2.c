//������ PI�� ��ũ�� ����� �����ϰ� �̸� �̿��ؼ� ���� ���̸� ���ϴ� ��ũ�� �Լ� AREA�� �����غ���.
#include <stdio.h>

#define PI 3.141592
#define AREA(R) (((R) * (R)) * (PI))

int main(void)
{
    printf("������ 3�� ���� ���� : %g\n", AREA(3));

    return 0;
}