/*
���� �����ڸ� ����Ͽ� ������ ���ϴ� �����̴�.
*/

#include <stdio.h>

int main(void)
{
    int num, abs;

    printf("���� �Է� : ");
    scanf("%d", &num);

    abs = num>0 ? num : -num;

    printf("���� : %d\n", abs);

    return 0;

}