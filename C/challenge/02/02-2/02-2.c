//���α׷� ����ڷκ��� 10���� ���·� ������ �ϳ� �Է� ���� ����,
//�̸� 2������ ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
//10���� ���� �Է� : 12
//1100
#include <stdio.h>

void binomial(int *num)
{
    int temp;
    int i;
    int count = 0;
    int arr[20] = {0};

    temp = *num;

    while (temp != 0)
    {
        if (temp % 2 == 1)
            arr[count] = 1;
        temp /= 2;
        count++;
    }
    for (i = count; i > 0; i--)
        printf("%d", arr[i - 1]);
}

int main(void)
{
    int num;

    printf("10���� ���� �Է� : ");
    scanf("%d", &num);

    binomial(&num);

    return 0;
}