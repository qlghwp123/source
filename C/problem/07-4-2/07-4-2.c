//���� ������ ���(factorial)�� ����ϴ� ���α׷��� �ۼ��غ���.
//n!= 1*2*3*4*5 * ... * n
//���α׷� ����ڷκ��� n�� �ش��ϴ� ������ �Է� �޴´�. �׷��� n�� ���
//n!�� ����ؼ� ����� �̷����� �Ѵ�.

#include <stdio.h>

int main(void)
{
    int total=1, num, i;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
        total *=i;

    printf("���� %d�� n! : %d\n", num, total);

    return 0;
}