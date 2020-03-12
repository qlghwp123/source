//������ ���α׷� ����ڰ� �Է��ϴ� ���� �����Ͽ� �� �հ踦 ����ϴ� �����̴�
/*
#include <stdio.h>

int total=0;

int AddToTotal(int num)
{
    total += num;
    return total;
}

int main(void)
{
    int num, i;

    for(i=0;i<3;i++)
    {
        printf("�Է� : %d", i+1);
        scanf("%d", &num);
        printf("���� : %d\n", AddToTotal(num));
    }

    return 0;
}
*/
//���� ���������� �Լ�AddToTotal ������ ����� �������� �������� total�� �����Ͽ��µ�, �̸� static ������ ��ü�غ���. ��,
//static �������� ��ü�������� main �Լ��� ������ ����� �ϸ� �������� �����ؾ� �Ѵ�.
#include <stdio.h>

int AddToTotal(int num)
{
    static int total;

    total += num;
    return total;
}

int main(void)
{
    int num, i;

    for(i=0;i<3;i++)
    {
        printf("�Է� : %d", i+1);
        scanf("%d", &num);
        printf("���� : %d\n", AddToTotal(num));
    }

    return 0;
}