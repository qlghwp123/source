//���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� �޾Ƽ� �Է� ���� ���ܾ��� ���̸� ����Ͽ� ����ϴ� ���α׷���
//�ۼ��غ���. ���� �� "Arrayy" ��� �ܾ �ԷµǸ� 5�� ��µǾ�� �Ѵ�.
#include <stdio.h>

int main(void)
{
    char input[100];
    int idx = 0, count = 0;

    printf("���ܾ �Է��ϼ��� : ");
    scanf("%s", input);

    while (input[idx] != '\0')
        count++, idx++;

    printf("���ܾ� ���̴� %d�Դϴ�.\n", count);

    return 0;
}