//���α׷� ����ڷκ��� ���� ������ �ϳ� �Է�
//�޾Ƽ�, �� ����ŭ "Hello World"�� ����ϴ�
//���α׷��� �ۼ��غ���.

#include <stdio.h>

int main(void)
{
    int input, num=0;

    printf("����� �Է��ϼ���: ");
    scanf("%d", &input);

    while(num<input)
    {
        printf("Hello World! %d\n", num);
        num++;
    }

    return 0;

}