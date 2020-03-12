//������ ���� �� ���� int�� ������ ������ ���̰� 5�� int�� �迭�� �����Ѵ�.
//int *maxPtr;
//int *minPtr;
//int arr[5];
//�׸��� MaxAndMin�̶� �̸��� �Լ��� �����ϰ� �̸� ȣ���ϸ鼭 ���� �迭�� �� ������ ������ ���� ������ ��������.
//��� ������ ��� ���������� �������� ������ ���̴�. �׸��� �Լ� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPtr����
//���� ū ���� ����� �迭����� �ּ� ����, minPtr���� ���� ���� ���� ����� �迭����� �ּ� ���� ����Ǿ�� �Ѵ�.
#include <stdio.h>

void MaxAndMin(int **pMax, int **pMin, int *arr, int len)
{
    int i;
    int *max, *min; //������ ������ �ƴ� �׳� int�� ������ �Ἥ Ʋ�Ⱦ���.

    max = min = &arr[0];

    for (i = 1; i < len; i++)
    {
        if (*max < arr[i])
            max = &arr[i];
        if (*min > arr[i])
            min = &arr[i];
    }

    *pMax = max;
    *pMin = min;
}

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5];
    int len = sizeof(arr) / sizeof(int);
    int i;

    for (i = 0; i < len; i++)
    {
        printf("���� �Է��ϼ��� : ");
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr, len);

    printf("%d %d \n", &arr[0], &arr[4]); //�׽�Ʈ��
    printf("%d %d \n", maxPtr, minPtr);

    return 0;
}