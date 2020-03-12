//���̰� 6�� int�� �迭 arr�� �����ϰ� �̸� 1, 2, 3, 4, 5, 6 ���� �ʱ�ȭ�� ����, �迭�� �����
//���� ������ 6, 5, 4, 3, 2, 1�� �ǵ��� �����ϴ� ������ �ۼ��غ���. ��, �迭�� �հ� �ڸ� ����Ű��
//������ ���� �� ���� �����ؼ� �̸� Ȱ���Ͽ� ����� ���� ������ �ڹٲ���Ѵ�.
#include <stdio.h>

int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(int);
    int *start = arr;
    int *end = (arr + len - 1);
    int i, temp;

    for (i = 0; i < len / 2; i++)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);

    return 0;
}