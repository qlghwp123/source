//�� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ���
//�����غ���. �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.
#include <stdio.h>

int MostBigNumber(int num1, int num2, int num3)
{
    if(num1>num2)
    {
        if(num1>num3)
            return num1;
        else
            return num3;
        
    }
    else
    {
        if(num2>num3)
            return num2;
        else
            return num3;
    }
    
}

/*
//����, ������ �� �����ϰ� ����.
int MostBigNumber(int n1, int n2, int n3)
{
    if(n1>n2)
        return (n1 > n3) ? n1 : n3;
   else
        return (n2 > n3) ? n2 : n3;
}   
*/

int MostSmallNumber(int num1, int num2, int num3)
{
    if(num1>num2)
    {
        if(num2>num3)
            return num3;
        else
            return num2;
        
    }
    else
    {
        if(num1>num3)
            return num3;
        else
            return num1;
    }
    
}

/*
//����, ������ �� �����ϰ� ����.
int MostSmallNumber(int n1, int n2, int n3)
{
    if(n1>n2)
        return (n2 > n3) ? n3 : n2;
   else
        return (n1 > n3) ? n3 : n1;
}   
*/

int main(void)
{
    int num1, num2, num3;
    int big, small;

    printf("�� ���� ������ �Է��ϼ��� : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    big = MostBigNumber(num1, num2, num3);
    small = MostSmallNumber(num1, num2, num3);

    printf("���� ū ���� %d, ���� ���� ���� %d�̴�.\n", big, small);

    return 0;
}