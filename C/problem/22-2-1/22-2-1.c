//�ռ� ����22-1���� ������ employee ����ü�� ������� ���̰� 3�� �迭�� ��������.
//�׸��� �� ���� ������ ���α׷� ����ڷκ��� �Է� �޾Ƽ� �迭�� ������ ����,
//�迭�� ����� �����͸� ������� ����ϴ� ������ �ۼ��غ���.
#include <stdio.h>

struct employee
{
    char name[20];
    char ID[20];
    int pay;
};

int main(void)
{
    struct employee arr[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("�̸� �Է� : ");
        scanf("%s", arr[i].name);
        printf("��ȣ �Է� : ");
        scanf("%s", arr[i].ID);
        printf("���� �Է� : ");
        scanf("%d", &arr[i].pay);
    }

    for (i = 0; i < 3; i++)
        printf("�̸� : %s ��ȣ : %s ���� : %d\n", arr[i].name, arr[i].ID, arr[i].pay);

    return 0;
}