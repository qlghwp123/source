//���α׷� ����ڷκ��� ���� n�� �Է� �޴´�. �׸��� ���� ���� ������ �����ϴ� k�� �ִ��� ����ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
//2^k <= n
//��� n �Է� : 256
//������ �����ϴ� k�� �ִ��� 8
#include <stdio.h>

int main(void)
{
    int num, val, j, count=0;

    printf("��� n �Է� : ");
    scanf("%d", &num);

    for(j=1;j<num;j*=2)
         count++;

    printf("������ �����ϴ� k�� �ִ��� %d\n", count-1);  

    return 0;
}