//���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ�
//�������� ����ϵ�, �������� ����ϴ� ���α׷��� �ۼ��غ���.

#include <stdio.h>

int main(void)
{
    int dan, num=9;

    printf("���� �Է��ϼ��� : ");
    scanf("%d", &dan);

    while (num>0)
    {
        printf("%d X %d = %d\n", dan, num, dan*num);
        num--;
    }
    

    return 0;
}