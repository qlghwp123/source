//���� ����2�� if~else���� �̿��ؼ� �ذ��Ͽ��°�? ��� ���·� �ذ��ߴ� ���� ���� �����ڸ� �̿��ϴ� ���·� ���α׷��� ������ ����.

#include <stdio.h>

int main(void)
{
    int small, big;
    int result;

    printf("�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &small, &big);

    //���� �� ���
    small > big ? printf("%d\n", small - big) : printf("%d\n", big-small);

    //����
    result = small>big ? small-big : big-small;
    printf("%d\n", result);
}