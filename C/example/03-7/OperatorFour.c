/*
����, ������������ �н��̴�.
*/

#include <stdio.h>

int main(void)
{
    int num1=12;
    int num2=12;

    printf("num1 : %d\n", num1);
    printf("num1++ : %d\n", num1++); //num1 ��� �� �� ���� num1 �� �����ȴ�.
    printf("num1 : %d\n\n", num1);

    printf("num2 : %d\n", num2);
    printf("++num2 : %d\n", ++num2); //num2 +=1 �� ������?
    printf("%d == num += 1\n", num2 += 1); //�������� �׳� ���� ���´�. ������ ��� ����(1/0)�� ������� �ʴ´�.
    printf("num2 : %d\n\n", num2); 

    return 0;
}