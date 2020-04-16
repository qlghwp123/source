#include <stdio.h>

/*
���������� ù ��° if���� �������� �ʴ´ٸ�
���� else if���� �Ȱ��� �Ǵ��� �ϱ� ������ ȿ�������� �ʴٰ� �Ѵ�.
ex)
    b >= a >= c, c >= a >= b  �� �ƴ� ����̴�.
    �ٵ�
    3 2 1
    �� ���� �� ��° else if ������ �����Ѵ�.
    �Ƹ��� 
    3 2 2
    ���� �� ������ �׷��� ���ѵ�
    3 2 1 ���� ù ��° if���� �������� �ʴ´ٸ� ~ �̷� ������ �߸��ȵ��ϴ�.
    �ؼ��� �ۼ��� ����� �ǵ��� �����̿�����?
    ��Ȯ�� �ǹ̸� �� �𸣰ڴ�. 
*/
int med3(int a, int b, int c)
{
    if( (b >= a && c <= a) || (b <= a && c >= a) )
        return a;
    else if( (a>b && c<b) || (a<b && c>b) )
        return b;
    return c;
}

int main(void)
{
    printf("med3(%d, %d, %d) = %d\n", 5, 2, 3, med3(5, 2, 3));
    printf("med3(%d, %d, %d) = %d\n", 5, 5, 3, med3(5, 5, 3));
    printf("med3(%d, %d, %d) = %d\n", 5, 2, 2, med3(5, 2, 2));
    printf("med3(%d, %d, %d) = %d\n", 2, 2, 3, med3(2, 2, 3));
    printf("med3(%d, %d, %d) = %d\n", 1, 2, 2, med3(1, 2, 2));
    printf("med3(%d, %d, %d) = %d\n", 1, 1, 1, med3(1, 1, 1));

    return 0;
}