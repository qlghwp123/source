/*
�ڷ����� ���� �����ν� ANsI�� �ڷ��� ������ ���ϰ� �س��⿡
�����Ϸ����� �ణ�� �ڷ����� sizeof ���� �ٸ���.
�׸��� sizeof�� �����ڴ�.
*/

#include <stdio.h>

int main(void)
{
    char ch = 9;
    int inum=1024;
    double dnum=3.141592;

    printf("���� ch�� ũ�� : %d\n", sizeof(ch));
    printf("���� inum�� ũ�� : %d\n", sizeof(inum));
    printf("���� dnum�� ũ�� : %d\n\n", sizeof(dnum));

    printf("char�� ũ�� : %d\n", sizeof(char));
    printf("short�� ũ�� : %d\n", sizeof(short));
    printf("long�� ũ�� : %d\n", sizeof(long));
    printf("int�� ũ�� : %d\n", sizeof(int));
    printf("long long�� ũ�� : %d\n", sizeof(long long));
    printf("float�� ũ�� : %d\n", sizeof(float));
    printf("double�� ũ�� : %d\n", sizeof(double));

    return 0;
}