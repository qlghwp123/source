//�׸� 08-10�� if...else if...else�� ���� n�� ����� ���� ������ ����ϵ��� �����Ǿ� �ִ�.
//���ڴ� �̰��� ���� �ؼ� switch���� ��� if...else if...else�� ����ϱ⿡�� ������ ������ �����Ͽ�����,
//�׸� 08-10�� if...else if...else�� �ణ�� ����(?)�� ���ؼ� switch������ ������ �����ϴ�.
//���� �̸� switch������ �����ؼ� �����غ��� �ٶ���.

//������ �����ȴ�...
#include <stdio.h>

int main(void)
{
    int num;

    printf("0 �Ǵ� ���� ������ �Է��ϼ��� : ");
    scanf("%d", &num);

    switch (num/10)
    {
        case 0:
            printf("0�̻� 10�̸�\n");
            break;
        case 1:
            printf("10�̻� 20�̸�\n");
            break;
        case 2:
            printf("20�̻� 30�̸�\n");
            break;
        default:
            printf("30�̻�\n");
            break;
    }
    return 0;
}