//�� ���� ������ �Է� �޾Ƽ� �ִ� ������� ���ϴ� ���α׷��� �ۼ� �غ���.
//�� ���� ���� �Է�: 6 9
//�� ���� �ִ�����: 3
#include <stdio.h>

// ���� �� ��
int main(void)
{
    int num1, num2;
    int gcd=0, range;
    int i;

    printf("�� ���� ������ �Է��ϼ���. : ");
    scanf("%d %d", &num1, &num2);

    range = num1<num2 ? num1 : num2;

    for(i=1;i<=range;i++)
    {
       if( num1%i == 0 && num2%i == 0 )
            gcd = i;
    }

    printf("gcd is %d\n", gcd);

    return 0;
}