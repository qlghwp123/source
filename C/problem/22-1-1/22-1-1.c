//���ڿ� ������ '������ �̸�' �� ���ڿ� ������ '�ֹε�Ϲ�ȣ' �׸��� ���� ������ '�޿�����'�� ���� �� �� �ִ� employee
//��� �̸��� ����ü�� �����غ���. �׸��� ���� employee ����ü ������ �ϳ� ������ ����, ���α׷� ����ڰ� �Է��ϴ� ������ �� ������
//ä����. �׸��� ���������� ����ü ������ ä���� �����͸� ����غ���.
#include <stdio.h>

struct employee
{
    char name[20];
    char ID[20];
    int pay;
};

int main(void)
{
    struct employee info;

    printf("�̸� �Է� : ");
    scanf("%s", info.name);
    printf("��ȣ �Է� : ");
    scanf("%s", info.ID);
    printf("�޿� �Է� : ");
    scanf("%d", &(info.pay));

    printf("�̸� : %s\n", info.name);
    printf("��ȣ : %s\n", info.ID);
    printf("�޿� : %d\n", info.pay);

    return 0;
}