//�Է� ���� �� ���� ���� num1, num2, num3�� ������� 
//���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���
//(num1-num2)*(num2+num3)*(num3%num1)
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int subtraction, addtion, rest;
    int result;

    printf("�� ���� ������ �Է��ϼ���. : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    subtraction=num1-num2;
    addtion=num2+num3;
    rest=num3%num1;
    
    result=subtraction*addtion*rest;
    //(num1-num2)*(num2+num3)*(num3%num1) ����
    //                             ���� �κ� ������ �������� �ȵȴ� ��������
    //printf("(num1-num2)*(num2+num3)*(num3%num1)=%d\n", result); �� �ȵ�.
    printf("������ :  %d\n", result);

    return 0;
}