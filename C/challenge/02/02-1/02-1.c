//���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޾Ƽ�, Ȧ���� ¦���� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
//�ϴ� Ȧ������ ����ϰ� ���� ¦���� ����ϵ��� ����.
//��, 10���� ������ main �Լ� ������ �Է� �޵��� �ϰ�, �迭 ���� �����ϴ� Ȧ���� ����ϴ� �Լ��� �迭�� �����ϴ� ¦���� ����ϴ� �Լ��� ���� �����ؼ�
//�� �� �Լ��� ȣ���ϴ� ������� ���α׷��� �ϼ�����
//�� 10���� ���� �Է�
//�Է� : 1
//�Է� : 2
//�Է� : 3
//�Է� : 4
//�Է� : 5
//�Է� : 6
//�Է� : 7
//�Է� : 8
//�Է� : 9
//�Է� : 0
//Ȧ�� ��� : 1, 3, 5, 7, 9
//¦�� ��� : 2, 4, 6, 8, 0
#include <stdio.h>

void PrintOdd(int arr[], int len)
{
    int i;

    printf("Ȧ�� ��� : ");

    for (i = 0; i < len; i++)
        if (arr[i] % 2 == 1)
            printf("%d, ", arr[i]);

    printf("\n");
}

void PrintEven(int arr[], int len)
{
    int i;

    printf("¦�� ��� : ");

    for (i = 0; i < len; i++)
        if (arr[i] % 2 == 0)
            printf("%d, ", arr[i]);

    printf("\n");
}

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i, len;

    len = sizeof(arr) / sizeof(int);

    printf("�� 10���� ���� �Է�\n");

    for (i = 0; i < len; i++)
    {
        printf("�Է� : ");
        scanf("%d", &arr[i]);
    }

    PrintOdd(arr, len);
    PrintEven(arr, len);

    return 0;
}