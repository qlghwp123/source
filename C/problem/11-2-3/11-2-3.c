//���α׷� ����ڷκ��� ���ܾ �Է� �޴´�. �׸��� ���� �Է� ���� ���ܾ �����ϴ� ���� �߿��� �ƽ�Ű �ڵ��� ����
//���� ū ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� �Էµ� ���ܾ "LOVE"��� �� �߿��� �ƽ�Ű �ڵ� ���� ���� ū ���ڴ�
//V�̹Ƿ� V�� ��µǾ�� �Ѵ�.
#include <stdio.h>

int main(void)
{
    char input[50];
    int idx = 0, count = 0;
    int i;
    char max;

    printf("���ܾ �Է��ϼ��� : ");
    scanf("%s", input);

    while (input[idx] != '\0')
        idx++, count++;

    max = input[0];
    for (i = 0; i < count; i++)
        if (max < input[i])
            max = input[i];

    printf("�Էµ� ���ڿ� �� �ƽ�Ű �ڵ� ���� ���� ū ���ڴ� %c�Դϴ�. \n", max);

    return 0;
}