//�Է� ���� ���� ���� ��ȣ�� �ٲ㼭 ����ϴ� ���α׷��� �ۼ��غ���.
//���� �� -3�� �ԷµǸ� 3�� ��µǾ�� �ϰ�, 5�� �ԷµǸ� -5�� ��µǾ���Ѵ�. ��!
//�ݵ�� �̹� Chapter���� �Ұ��� ��Ʈ �����ڸ� �̿��ؼ� �����ؾ� �Ѵ�.
#include <stdio.h>

int main(void)
{
    int num;
    int reverse;

    printf("�Է��ϼ���. : ");
    scanf("%d", &num);

    reverse=~num+1;

    printf("�Էµ� ������ 2�� ���� : %d\n", reverse);

    return 0;
}