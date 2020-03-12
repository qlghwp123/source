//������ �迭�� ���� �̸� ����ϴ� ���α׷��� �ۼ��ϰ��� �Ѵ�.
//���⼭ ���ϴ� ������ �迭�� ������ ����.
//�׸� ����
//�� �׸������� 4 X 4 �� ������ �迭�� 5 X 5�� ������ �迭�� �����ְ� �ִ�.
//�� ������ �����Ͽ� ���α׷� ����ڷκ��� �ϳ��� ���� n�� �Է� �޾Ƽ� n x n ���̿�
//�ش��ϴ� ������ �迭�� ������ִ� ���α׷��� �ۼ��� ����.
#include <stdio.h>

void DoSnail(int (*arr)[100], int len, int input)
{
    int i, j = 0, k = 0;
    int val = 1;

    for (i = 0; i < input / 2; i++)
    {
        j = i;                          //������ ��ġ
        for (k = i; k < input - i; k++) //������
            arr[j][k] = val++;

        k--;

        for (j += 1; j < input - i; j++) //�Ʒ���
            arr[j][k] = val++;

        j--;

        for (k -= 1; k >= i; k--) //����
            arr[j][k] = val++;

        k++;

        for (j -= 1; j > i; j--) //����
            arr[j][k] = val++;

        if (input % 2 == 1) //���� Ȧ�� �ϰ�� �߾ӿ� �׳� �ھƹ�����
            arr[j + 1][k + 1] = val;
    }
}

int main(void)
{
    int input;
    int arr[100][100] = {0};
    int i, j;

    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d", &input);

    DoSnail(arr, 100, input);

    for (i = 0; i < input; i++)
    {
        for (j = 0; j < input; j++)
            if (arr[i][j] != 0)
                printf("%5d", arr[i][j]);
            else
                printf("%5s", " ");
        printf("\n");
    }

    return 0;
}