//���α׷� ����ڷκ��� ������ �Է¹޴´�. -1�� �Էµ� ������ ����ؼ� �Է� �޾Ƽ�, ���α׷� ���� ������ �Է¹��� ���� ���θ� ������� ����ϴ� ���α׷��� �ۼ��غ���.
//�׷��� �� ������ �ٽ��� ���α׷� ����ڰ� �� ���� ������ �Է����� �𸥴ٴµ� �ִ�. �׷��� �� ������ �ذ��� ���ؼ� �� ������ ����ϱ�� �ϰڴ�.
//�ϴ��� ���̰� 5�� int�� �迭�� ���� �Ҵ�����. �׸��� �迭�� �� �� ������ ���̸� 3�� �ø���� ����. �� �� �ռ� �Ұ��� realloc �Լ��� �̿��ϸ� ��������� ���� �迭�� ���̸� �ø� �� �ִ�.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    int count = 0;
    int size = 5;
    int *arr = (int *)calloc(sizeof(int), size);
    int i;

    do
    {
        if (count == size)
        {
            arr = (int *)realloc(arr, sizeof(int) * (size + 3));
            size += 3;
        }

        printf("������ �Է��ϼ��� : ");
        scanf("%d", &arr[count]);

    } while (arr[count++] != -1);

    for (i = 0; i < count; i++)
        printf("%d\n", arr[i]);

    free(arr);

    return 0;
}