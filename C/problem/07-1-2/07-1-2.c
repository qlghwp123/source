//���α׷� ����ڷκ��� ���� ������ �ϳ� �Է�
//���� ����, �� ����ŭ  3�� ����� ����ϴ�
//���α׷��� �ۼ��غ���. ���� �� 5�� �Է� 
//�޾Ҵٸ�, 3 6 9 12 15�� ����ؾ��Ѵ�.

#include <stdio.h>

int main(void)
{
    int times=0, num=1;

    printf("����� �Է��ϼ��� : ");
    scanf("%d", &times);

    while(num<=times)
    {
        printf("%d ", 3*num);
        num++;
    }
    /* num�� 0�� ��� �Ʒ��� �ڵ带 ����ϴ� ���� �� ����.
    while(num++<times)
        printf("%d ", 3*num);
    */
    return 0;
}